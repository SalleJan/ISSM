% runme script to perform a stress balance inversion for basal friction
% on Helheim Glacier (SE Greenland)

% Step 1: Set up model domain outline and mesh
% Step 2: Set parameters
% Step 3: Inversion for basal friction

% Note that Steps 1 and 2 require previously downloading data for velocities,
% surface elevation and bed elevation. 

steps = [1]; % Choose which steps to run here

cluster=generic('name',oshostname(),'np',1);

org=organizer('repository',['./Models'],'prefix',['Model_79N_'],'steps',steps); clear steps;

%md = loadmodel(org, 'SMB_run')

%plotmodel(md, 'data', md.results.TransientSolution(1).Thickness, 'title', 'Surface Velocity (m/yr)', ...
%'data', md.results.TransientSolution(end).Thickness, 'title', 'Friction Coefficient')

if perform(org,'Mesh'),% {{{

    % Initialize uniform mesh
	md=triangle(model,['79N.exp'],500);

	[velx vely]=interpJoughinCompositeGreenland(md.mesh.x,md.mesh.y);
	vel  = sqrt(velx.^2+vely.^2);
	vel(isnan(vel)) = 0;

	% Refine mesh based on surface velocities
	md=bamg(md,'hmin',100,'hmax',1500,'field',vel,'err',0.5);
	[md.mesh.lat,md.mesh.long]  = xy2ll(md.mesh.x,md.mesh.y,+1,45,70);
	md.mesh.epsg=3413;

    [velx vely]=interpJoughinCompositeGreenland(md.mesh.x,md.mesh.y);
	vel  = sqrt(velx.^2+vely.^2);
	vel(isnan(vel)) = 0;

    plotmodel(md, 'data', vel)

	savemodel(org,md);
end %}}}
if perform(org,'Param'),% {{{

	md=loadmodel(org,'Mesh');
	md=setflowequation(md,'SSA','all'); % Set flow law to SSA
	
	md=setmask(md,'','');
	md=parameterize(md,'Greenland_Example.par');
	md.miscellaneous.name = 'PG';

	savemodel(org,md);
end%}}}
if perform(org,'Inversion_drag'),% {{{

	md=loadmodel(org,'Param');
	
	%Control general
	md.inversion=m1qn3inversion(md.inversion);
	md.inversion.iscontrol=1;
	md.verbose=verbose('solution',false,'control',true);
	md.transient.amr_frequency = 0;
	
	%Cost functions
	md.inversion.cost_functions=[101 103 501];
	md.inversion.cost_functions_coefficients=zeros(md.mesh.numberofvertices,numel(md.inversion.cost_functions));
	md.inversion.cost_functions_coefficients(:,1)=5000;
	md.inversion.cost_functions_coefficients(:,2)=10;
	md.inversion.cost_functions_coefficients(:,3)=2*50^-3;
	pos=find(md.mask.ice_levelset>0);
	md.inversion.cost_functions_coefficients(pos,1:2)=0;

	%Controls
	md.inversion.control_parameters={'FrictionCoefficient'};
	md.inversion.maxsteps=100;
	md.inversion.maxiter =100;
	md.inversion.min_parameters=0.05*ones(md.mesh.numberofvertices,1);
	md.inversion.max_parameters=4000*ones(md.mesh.numberofvertices,1);
	md.inversion.control_scaling_factors=1;

	%Additional parameters
	md.stressbalance.restol=0.01;
	md.stressbalance.reltol=0.1;
	md.stressbalance.abstol=NaN;

	%Go solve
	md.cluster=cluster;

	md=solve(md,'sb');

	%Put results back into the model
	md.friction.coefficient=md.results.StressbalanceSolution.FrictionCoefficient;
	md.initialization.vx=md.results.StressbalanceSolution.Vx;
	md.initialization.vy=md.results.StressbalanceSolution.Vy;

	savemodel(org,md);
end%}}}

if perform(org, 'SMB') %{{{
	disp('   Step 4: Extract Box SMB');
	md = loadmodel(org,'Inversion_drag');

	ncbox='../Data/Box_Greenland_SMB_monthly_1840-2012_5km_cal_ver20141007.nc';

	%Set surface mass balance
	lat  = ncread(ncbox,'lat');
	lon  = ncread(ncbox,'lon');
	smbbox = ncread(ncbox,'MassFlux');
	[x1 y1]=ll2xy(lat,lon,+1,45,70);

	years_of_simulation = 1840:2012;
	t = [years_of_simulation(1):1/12:years_of_simulation(end)+11/12];

	%Area of grid for 5km box
	area_of_grid=5000*5000;
	totalsmb=reshape(sum(sum(smbbox/1000,1),2),length(t),1)*area_of_grid;

	%save surface mass balance mat dataset
	smbmean = mean(mean(smbbox,3),4);
	save -v7.3 smbbox smbmean totalsmb smbbox x1 y1 t;

	%plot a time series of total SMB
	figure; plot(t,totalsmb/1e9); title('Total Surface mass balance, Gt'); xlabel('year'); ylabel('Gt/yr');

	clear smbbox
end % }}}

if perform(org,'SMB_run') % {{{
	disp('   Step 5: Historical Relaxation run');
	md = loadmodel(org,'Inversion_drag');

	load smbbox

	%convert mesh x,y into the Box projection
	[md.mesh.lat,md.mesh.long]  = xy2ll(md.mesh.x,md.mesh.y,+1,39,71);
	[xi,yi]= ll2xy(md.mesh.lat,md.mesh.long,+1,45,70);

	%Interpolate and set surface mass balance
	index = BamgTriangulate(x1(:),y1(:));
	smb_mo = InterpFromMeshToMesh2d(index,x1(:),y1(:),smbmean(:),xi,yi);
	smb = smb_mo*12/1000*md.materials.rho_freshwater/md.materials.rho_ice;
	md.smb.mass_balance = [smb;1 ];

	%Set transient options, run for 20 years, saving every timestep
	md.timestepping.time_step=0.2;
	md.timestepping.final_time=20;
	md.settings.output_frequency=1;

	%Additional options
	md.inversion.iscontrol=0;
	md.transient.requested_outputs={'IceVolume','TotalSmb','SmbMassBalance'};
	md.verbose=verbose('solution',true,'module',true);

	%Go solve
	md.cluster=generic('name',oshostname,'np',1);
	md=solve(md,'Transient');

	savemodel(org,md);
end % }}}

