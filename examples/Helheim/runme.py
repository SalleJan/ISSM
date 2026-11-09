import os
import numpy as np
from socket import gethostname

from netCDF4 import Dataset

from triangle import triangle
from bamg import bamg
from xy2ll import xy2ll
from model import *
from setmask import setmask
from setflowequation import setflowequation
from generic import generic
from solve import solve
from verbose import verbose
from m1qn3inversion import m1qn3inversion
from InterpFromGridToMesh import InterpFromGridToMesh
from cuffey import cuffey


def find_existing_file(paths):
	for path in paths:
		if os.path.exists(path):
			return path
	return None


def wrapper_array(values):
	"""Return a contiguous float64 array accepted by ISSM's Python wrapper."""
	if np.ma.isMaskedArray(values):
		values = values.filled(np.nan)
	return np.ascontiguousarray(np.asarray(values, dtype=np.float64).squeeze())


def interp_grid(x1, y1, data, x, y):
	x1 = wrapper_array(x1)
	y1 = wrapper_array(y1)
	data = wrapper_array(data)
	if x1.size > 1 and x1[0] > x1[-1]:
		x1 = x1[::-1]
		data = np.flip(data, axis=-1)
	if y1.size > 1 and y1[0] > y1[-1]:
		y1 = y1[::-1]
		data = np.flip(data, axis=-2)
	return np.asarray(
		InterpFromGridToMesh(
			x1,
			y1,
			data,
			wrapper_array(x),
			wrapper_array(y),
			0.0,
		),
		dtype=np.float64,
	)


def interp_bedmachine_greenland(x, y, varname='bed', method='cubic'):
	candidates = [
		os.path.join(os.environ.get('ISSM_DIR', ''), 'Data', 'BedMachineGreenland_v6.6.nc'),
		os.path.join(os.environ.get('ISSM_DIR', ''), 'Data', 'BedMachineGreenland_2022-07-28.nc'),
		'/home/ModelData/Greenland/BedMachine/BedMachineGreenland-v6.6.nc',
		'/home/ModelData/Greenland/BedMachine/BedMachineGreenland-v6.nc',
		'/totten_1/ModelData/Greenland/BedMachine/BedMachineGreenland-v6.6.nc',
		'/Users/7092946/Desktop/ISSM_stuff/Beds/IDBMG4_6-20260914_131310/BedMachineGreenland-v6.nc',
	]
	ncfile = find_existing_file(candidates)
	if ncfile is None:
		raise FileNotFoundError('Could not find BedMachine Greenland NetCDF data')
	with Dataset(ncfile, 'r') as ds:
		x1 = ds.variables['x'][:]
		y1 = ds.variables['y'][:]
		data = ds.variables[varname][:]
	return interp_grid(x1, y1, data, x, y)


def interp_joughin_greenland(x, y, ncfile=None):
	if ncfile is None:
		repo_root = os.environ.get(
			'ISSM_DIR', os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
		)
		ncfile = find_existing_file([
			os.path.join(repo_root, 'examples', 'Data', 'Greenland_5km_dev1.2.nc'),
			os.path.join(repo_root, 'Data', 'Greenland_5km_dev1.2.nc'),
			'/Users/7092946/Desktop/GitHub/ISSM/examples/Data/Greenland_5km_dev1.2.nc',
			'/home/ModelData/SeaRISE/Greenland_5km_dev1.2.nc',
			'/totten_1/ModelData/SeaRISE/Greenland_5km_dev1.2.nc',
		])
	if ncfile is None:
		raise FileNotFoundError('Could not find Greenland velocity data')
	with Dataset(ncfile, 'r') as ds:
		x1 = ds.variables['x1'][:]
		y1 = ds.variables['y1'][:]
		velx = ds.variables['surfvelx'][:]
		vely = ds.variables['surfvely'][:]
	return interp_grid(x1, y1, velx, x, y), interp_grid(x1, y1, vely, x, y)


def interp_searise_greenland(x, y, varname, ncfile=None):
	if ncfile is None:
		ncfile = find_existing_file([
			os.path.join(os.environ.get('ISSM_DIR', ''), 'Data', 'Greenland_5km_dev1.2.nc'),
			'/home/ModelData/SeaRISE/Greenland_5km_dev1.2.nc',
			'/totten_1/ModelData/SeaRISE/Greenland_5km_dev1.2.nc',
		])
	if ncfile is None:
		raise FileNotFoundError('Could not find SeaRISE Greenland NetCDF file')
	with Dataset(ncfile, 'r') as ds:
		x1 = ds.variables['x1'][:]
		y1 = ds.variables['y1'][:]
		data = ds.variables[varname][:]
	return interp_grid(x1, y1, data, x, y)


steps = [1, 2, 3]
cluster = generic('name', gethostname(), 'np', 8)

if 1 in steps:
	print('Step 1: mesh generation')
	md = triangle(model(), 'Helheim_tut.exp', 500)

	velx, vely = interp_joughin_greenland(md.mesh.x, md.mesh.y)
	vel = np.nan_to_num(np.sqrt(velx**2 + vely**2), nan=0.0)
	md = bamg(md, 'hmin', 100, 'hmax', 1500, 'field', wrapper_array(vel), 'err', 5)
	md.mesh.lat, md.mesh.long = xy2ll(md.mesh.x, md.mesh.y, +1, 45, 70)
	md.mesh.epsg = 3413

if 2 in steps:
	print('Step 2: parameterization')
	md = setmask(md, '', '')
	md.miscellaneous.name = 'Helheim'

	mask = np.nan_to_num(wrapper_array(interp_bedmachine_greenland(md.mesh.x, md.mesh.y, 'mask')), nan=0.0)
	md.mask.ice_levelset = -np.ones(md.mesh.numberofvertices, dtype=np.float64)
	md.mask.ice_levelset[np.where(mask < 1)] = 1

	md.geometry.bed = wrapper_array(interp_bedmachine_greenland(md.mesh.x, md.mesh.y, 'bed'))
	md.geometry.bed = np.nan_to_num(md.geometry.bed, nan=0.0, posinf=0.0, neginf=0.0)
	md.geometry.base = md.geometry.bed
	md.geometry.surface = wrapper_array(interp_bedmachine_greenland(md.mesh.x, md.mesh.y, 'surface'))
	md.geometry.surface = np.nan_to_num(
		md.geometry.surface,
		nan=0.0,
		posinf=0.0,
		neginf=0.0,
	)
	md.geometry.surface = np.maximum(md.geometry.surface, md.geometry.base)
	pos = np.where(md.mask.ice_levelset > 0)[0]
	md.geometry.surface[pos] = np.maximum(md.geometry.surface[pos], md.geometry.base[pos] + 10.0)
	md.geometry.thickness = md.geometry.surface - md.geometry.bed
	pos = np.where((md.geometry.thickness <= 10.0) & (md.mask.ice_levelset > 0))[0]
	md.geometry.surface[pos] = md.geometry.base[pos] + 10.0
	md.geometry.thickness = md.geometry.surface - md.geometry.bed
	md.masstransport.min_thickness = 10.0

	md.inversion.vx_obs, md.inversion.vy_obs = interp_joughin_greenland(md.mesh.x, md.mesh.y)
	pos = np.where(np.isnan(md.inversion.vx_obs) | np.isnan(md.inversion.vy_obs))[0]
	md.inversion.vx_obs[pos] = 0.0
	md.inversion.vy_obs[pos] = 0.0
	md.inversion.vel_obs = np.sqrt(md.inversion.vx_obs**2 + md.inversion.vy_obs**2)
	md.initialization.vx = md.inversion.vx_obs
	md.initialization.vy = md.inversion.vy_obs
	md.initialization.vz = np.zeros(md.mesh.numberofvertices, dtype=np.float64)
	md.initialization.vel = md.inversion.vel_obs

	md.friction.coefficient = 20.0 * np.ones(md.mesh.numberofvertices, dtype=np.float64)
	md.friction.p = np.ones(md.mesh.numberofelements, dtype=np.float64)
	md.friction.q = np.ones(md.mesh.numberofelements, dtype=np.float64)
	pos_e = np.where(np.min(md.mask.ice_levelset[md.mesh.elements], axis=1) < 0)[0]
	flags = np.ones(md.mesh.numberofvertices, dtype=np.float64)
	flags[md.mesh.elements[pos_e].ravel()] = 0
	md.friction.coefficient[np.where(flags > 0)] = 0

	md.materials.rheology_n = 3.0 * np.ones(md.mesh.numberofelements, dtype=np.float64)
	md.materials.rheology_B = cuffey(273.15 - 10) * np.ones(md.mesh.numberofvertices, dtype=np.float64)
	md.basalforcings.groundedice_melting_rate = np.zeros(md.mesh.numberofvertices, dtype=np.float64)
	md.basalforcings.floatingice_melting_rate = np.zeros(md.mesh.numberofvertices, dtype=np.float64)
	md.basalforcings.geothermalflux = interp_searise_greenland(md.mesh.x, md.mesh.y, 'bheatflx')
	md.initialization.temperature = np.minimum(0.0, interp_searise_greenland(md.mesh.x, md.mesh.y, 'surftemp')) + 273.15
	md.initialization.waterfraction = np.zeros(md.mesh.numberofvertices, dtype=np.float64)
	md.initialization.watercolumn = np.zeros(md.mesh.numberofvertices, dtype=np.float64)
	md.thermal.spctemperature = md.initialization.temperature
	md.thermal.isenthalpy = 1
	md.thermal.isdynamicbasalspc = 1

	md.stressbalance.spcvx = np.full(md.mesh.numberofvertices, np.nan, dtype=np.float64)
	md.stressbalance.spcvy = np.full(md.mesh.numberofvertices, np.nan, dtype=np.float64)
	md.stressbalance.spcvz = np.full(md.mesh.numberofvertices, np.nan, dtype=np.float64)
	md.stressbalance.referential = np.full((md.mesh.numberofvertices, 6), np.nan, dtype=np.float64)
	md.stressbalance.loadingforce = np.zeros((md.mesh.numberofvertices, 3), dtype=np.float64)
	pos = np.where((md.mask.ice_levelset < 0) * md.mesh.vertexonboundary)[0]
	md.stressbalance.spcvx[pos] = md.initialization.vx[pos]
	md.stressbalance.spcvy[pos] = md.initialization.vy[pos]
	md.stressbalance.spcvz[pos] = 0.0
	md = setflowequation(md, 'SSA', 'all')

if 3 in steps:
	print('Step 3: inversion for basal friction')
	md.inversion = m1qn3inversion()
	md.inversion.iscontrol = 1
	md.verbose = verbose('solution', False, 'control', True)
	md.transient.amr_frequency = 0
	md.inversion.cost_functions = [101, 103, 501]
	md.inversion.cost_functions_coefficients = np.zeros((md.mesh.numberofvertices, 3), dtype=np.float64)
	md.inversion.cost_functions_coefficients[:, 0] = 5000
	md.inversion.cost_functions_coefficients[:, 1] = 10
	md.inversion.cost_functions_coefficients[:, 2] = 2 * 50**-3
	pos = np.where(md.mask.ice_levelset > 0)[0]
	md.inversion.cost_functions_coefficients[pos, 0:2] = 0
	md.inversion.control_parameters = ['FrictionCoefficient']
	md.inversion.maxsteps = 100
	md.inversion.maxiter = 100
	md.inversion.min_parameters = 0.05 * np.ones((md.mesh.numberofvertices, 1), dtype=np.float64)
	md.inversion.max_parameters = 4000 * np.ones((md.mesh.numberofvertices, 1), dtype=np.float64)
	md.inversion.control_scaling_factors = 1
	md.stressbalance.restol = 0.01
	md.stressbalance.reltol = 0.1
	md.stressbalance.abstol = np.nan
	md.cluster = cluster
	md = solve(md, 'sb')
	md.friction.coefficient = md.results.StressbalanceSolution.FrictionCoefficient
	md.initialization.vx = md.results.StressbalanceSolution.Vx
	md.initialization.vy = md.results.StressbalanceSolution.Vy
