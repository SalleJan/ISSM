clear all;
steps=[1];

%Location of SeaRISE dataset
ncdata='../Data/Greenland_5km_dev1.2.nc';

if any(steps==1) 
	disp('   Step 1: Mesh creation');

	%Generate initial uniform mesh (resolution = 20000 m)
	md=triangle(model,'DomainOutline.exp',20000);

	% Get velocities (Note: You can use ncdisp('file') to see an ncdump)
	x1   = ncread(ncdata,'x1');
	y1   = ncread(ncdata,'y1');
	velx = ncread(ncdata,'surfvelx');
	vely = ncread(ncdata,'surfvely');
	vx   = InterpFromGridToMesh(x1,y1,velx',md.mesh.x,md.mesh.y,0);
	vy   = InterpFromGridToMesh(x1,y1,vely',md.mesh.x,md.mesh.y,0);
	vel  = sqrt(vx.^2+vy.^2);

    h = NaN * ones(md.mesh.numberofvertices, 1);
    in = ContourToNodes(md.mesh.x, md.mesh.y, ['PG.exp'], 1) | ...
         ContourToNodes(md.mesh.x, md.mesh.y, ['RG.exp'], 1) | ...
         ContourToNodes(md.mesh.x, md.mesh.y, ['79N.exp'], 1) | ...
         ContourToNodes(md.mesh.x, md.mesh.y, ['ZI.exp'], 1) | ...
         ContourToNodes(md.mesh.x, md.mesh.y, ['DJ.exp'], 1) ;
    h(find(in)) = 100;
    %plotmodel(md, 'data', in)

	%Mesh Greenland
	md=bamg(md,'hmax',20000,'hmin',1000,'gradation',1.4,'field',vel,'err',3,'hVertices',h,'maxnbv',10^7);
    vx   = InterpFromGridToMesh(x1,y1,velx',md.mesh.x,md.mesh.y,0);
	vy   = InterpFromGridToMesh(x1,y1,vely',md.mesh.x,md.mesh.y,0);
	vel  = sqrt(vx.^2+vy.^2);

	%convert x,y coordinates (Polar stereo) to lat/lon
	[md.mesh.lat,md.mesh.long]=xy2ll(md.mesh.x,md.mesh.y,+1,45,70);
    md.mesh.epsg=3413;

	save ./Models/Greenland.Mesh_generation.ROIS_BM_box md;

	plotmodel (md,'data','mesh');
    %plotmodel (md,'data',vel);

end 

if any(steps==2) 
	disp('   Step 2: Parameterization');
	md = loadmodel('./Models/Greenland.Mesh_generation.ROIS_BM_box');

	md = setmask(md,'','');
	md = parameterize(md,'./Greenland.par');
	md = setflowequation(md,'SSA', 'all');

	save ./Models/Greenland.Parameterization_BM_box md;
end 

if any(steps==3) 
	disp('   Step 3: Control method friction');
	md = loadmodel('./Models/Greenland.Parameterization_BM_box');

	%Control general
	md.inversion.iscontrol=1;
	md.inversion.nsteps=30;
	md.inversion.step_threshold=0.99*ones(md.inversion.nsteps,1);
	md.inversion.maxiter_per_step=5*ones(md.inversion.nsteps,1);

	%Cost functions
	md.inversion.cost_functions=[101 103 501];
	md.inversion.cost_functions_coefficients=ones(md.mesh.numberofvertices,3);
	md.inversion.cost_functions_coefficients(:,1)=350;
	md.inversion.cost_functions_coefficients(:,2)=0.2;
	md.inversion.cost_functions_coefficients(:,3)=2e-6;

	%Controls
	md.inversion.control_parameters={'FrictionCoefficient'};
	md.inversion.gradient_scaling(1:md.inversion.nsteps)=50;
	md.inversion.min_parameters=1*ones(md.mesh.numberofvertices,1);
	md.inversion.max_parameters=200*ones(md.mesh.numberofvertices,1);

	%Additional parameters
	md.stressbalance.restol=0.01; md.stressbalance.reltol=0.1;
	md.stressbalance.abstol=NaN;

	%Go solve
	md.cluster=generic('name',oshostname,'np',1);
	md.toolkits=toolkits;
	md.verbose=verbose('solution',true,'control',true);
	md=solve(md,'Stressbalance');

	%Update model friction fields accordingly
	md.friction.coefficient=md.results.StressbalanceSolution.FrictionCoefficient;

	save ./Models/Greenland.Control_drag_BM_box md;
end 

if any(steps==4) 
	disp('   Step 4: Transient run');
	md = loadmodel('./Models/Greenland.Control_drag_BM_box');

	%Set surface mass balance
	x1  = ncread(ncdata,'x1');
	y1  = ncread(ncdata,'y1');
	smb = ncread(ncdata,'smb');
	smb = InterpFromGridToMesh(x1,y1,smb',md.mesh.x,md.mesh.y,0);
	smb = smb*md.materials.rho_freshwater/md.materials.rho_ice;
	smb = [smb smb];
	md.smb.mass_balance = [smb;1 20];
    %calving = [10000*ones(md.mesh.numberofvertices,1), zeros(md.mesh.numberofvertices,1)];
    %md.calving.calvingrate = [calving;1 20];
    md.timestepping.interp_forcing = 1; % 0 means there is no interpolation in the smb mass balance, so it becomes a step-function, 1 is interpolation
    md.levelset.kill_icebergs=1;

	%Set transient options, run for 20 years, saving every other timestep
    md.timestepping = timesteppingadaptive();
    md.timestepping.start_time = 0;
    md.timestepping.final_time = 20;
    md.timestepping.time_step_min = 0.05;           
    md.timestepping.time_step_max = 2; 
	%md.timestepping.time_step=0.2;
	%md.timestepping.final_time=20;
	md.settings.output_frequency=4;

	%Additional options
	md.inversion.iscontrol=0;
	md.transient.requested_outputs={'IceVolume','TotalSmb','SmbMassBalance'};
	md.verbose=verbose('solution',true,'module',true,'convergence',true);

	%Go solve
	md.cluster=generic('name',oshostname,'np',1);
	md=solve(md,'Transient');

	save ./Models/Greenland.Transient_BM_box md;
end 

if any(steps==5) 
	disp('   Step 5: Plotting');
	md = loadmodel('./Models/Greenland.Transient_BM_box');

	%Planview plots
	plotmodel(md,'data',md.results.TransientSolution(end).Vel,'log#1', 10, ...
		'caxis#1', [1e-1 1e4], ...
		'title#1', 'Velocity (m/y)',...
		'data',md.results.TransientSolution(1).SmbMassBalance,...
		'title#2', 'Surface Mass Balance (m/y)',...
		'data',md.results.TransientSolution(end).Thickness,...
		'title', 'Thickness (m)',...
		'data',md.results.TransientSolution(end).Surface,...
		'title', 'Surface (m)');

	%Line Plots
	figure

	%Plot surface mass balance
	surfmb=[]; for i=1:100; surfmb=[surfmb ...
		md.results.TransientSolution(i).SmbMassBalance]; end
	subplot(3,1,1); plot([0.2:0.2:20],mean(surfmb)); title('Mean Surface mass balance');

	%Plot velocity
	vel=[]; for i=1:100; vel=[vel md.results.TransientSolution(i).Vel]; end
	subplot(3,1,2); plot([0.2:0.2:20],mean(vel)); title('Mean Velocity');

	%Plot Volume
	volume=[]; for i=1:100; volume=[volume md.results.TransientSolution(i).IceVolume]; end
	subplot(3,1,3); plot([0.2:0.2:20],volume); title('Ice Volume');
	xlabel('years')

    %plotmodel(md, 'data', md.results.TransientSolution(end).MaskOceanLevelset)
    %plotmodel(md, 'data', md.results.TransientSolution(end).MaskIceLevelset, 'contourlevels', {0})
end 

if any(steps==6) 
	disp('   Step 6: Extract Box SMB');
	md = loadmodel('./Models/Greenland.Transient_BM');

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
end 

if any(steps==7) 
	disp('   Step 7: Historical Relaxation run');
	md = loadmodel('./Models/Greenland.Control_drag_BM');

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
	md.timestepping.time_step=0.1;
	md.timestepping.final_time=20;
	md.settings.output_frequency=2;

	%Additional options
	md.inversion.iscontrol=0;
	md.transient.requested_outputs={'IceVolume','TotalSmb','SmbMassBalance'};
	md.verbose=verbose('solution',true,'module',true);

	%Go solve
	md.cluster=generic('name',oshostname,'np',1);
	md=solve(md,'Transient');

	save -v7.3 ./Models/Greenland.HistoricTransient_BM md;
end % step 7 end

if any(steps==8) 
	disp('   Step 8: Plotting exercise');

	%Load historic transient model
    md = loadmodel('./Models/Greenland.HistoricTransient_BM')

	%Create Line Plots of relaxation run. Create a figure.
    figure

	%Save surface mass balance, by looping through 200 years (1000 steps)
	%Note, the first output will always contain output from time step 1
    %Plot surface mass balance time series in first subplot
	%Title this plot Mean surface mass balance
    surfmb=[]; for i=2:100; surfmb = [surfmb, md.results.TransientSolution(i).SmbMassBalance]; end
	subplot(3,1,1); plot([0.4:0.2:20],mean(surfmb)); title('Mean Surface mass balance');

	%Save velocity by looping through 200 years
    %Plot velocity time series in second subplot
	%Title this plot Mean Velocity
    vel=[]; for i=2:100; vel = [vel, md.results.TransientSolution(i).Vel]; end
	subplot(3,1,2); plot([0.4:0.2:20],mean(vel)); title('Mean Velocity');

	%Save Ice Volume by looping through 200 years
    %Plot volume time series in third subplot
	%Title this plot Mean Velocity and add an x label of years
    IceVol=[]; for i=2:100; IceVol = [IceVol, md.results.TransientSolution(i).IceVolume]; end
	subplot(3,1,3); plot([0.4:0.2:20],IceVol); title('Ice volume');

end % step 8 end

if any(steps==9) 
	disp('   Step 9: Box Transient run');
	md = loadmodel('./Models/Greenland.HistoricTransient_BM');

	%load past transient results
	md.geometry.base=md.results.TransientSolution(end).Base;
	md.geometry.thickness=md.results.TransientSolution(end).Thickness;
	md.geometry.surface=md.geometry.base+md.geometry.thickness;
	md.initialization.vx=(md.results.TransientSolution(end).Vx);
	md.initialization.vy=(md.results.TransientSolution(end).Vy);
	md.results=[];

	%convert mesh x,y into the Box projection
	[md.mesh.lat,md.mesh.long]  = xy2ll(md.mesh.x,md.mesh.y,+1,39,71);
	[xi,yi]= ll2xy(md.mesh.lat,md.mesh.long,+1,45,70);

	%Set surface mass balance
	load smbbox
	index = BamgTriangulate(x1(:),y1(:));

	%Set years to run
	years_of_simulation = 2003:2012;

	%initialize surface mass balance matrix
	smb = nan*ones(md.mesh.numberofvertices,length(years_of_simulation)*12);

	%Interpolate and set surface mass balance
	for year=years_of_simulation
		for month=1:12
			smb_mo = griddata(double(x1),double(y1),...
				double(squeeze(smbbox(:,:,month,year-1839))),xi,yi,'nearest');
			smb(:,(year-years_of_simulation(1))*12+month) = smb_mo;
		end
	end
	md.smb.mass_balance = ...
		[smb*12/1000*md.materials.rho_freshwater/md.materials.rho_ice; ...
		[1/24:1/12:length(years_of_simulation)]];

	%Set transient options, monthly timestep, saving every month
	md.timestepping.time_step=1/12;
	md.timestepping.final_time=length(years_of_simulation);
	md.settings.output_frequency=1;

	%Additional options
	md.inversion.iscontrol=0;
	md.transient.requested_outputs={'IceVolume','TotalSmb','SmbMassBalance'};
	md.verbose=verbose('solution',true,'module',true);

	%Go solve
	md.cluster=generic('name',oshostname,'np',1);
	md=solve(md,'Transient');

	save ./Models/Greenland.BoxTransient_BM md;
end 

if any(steps==10) 
	disp('   Step 10: Plot Box Transient');
	md = loadmodel('./Models/Greenland.BoxTransient_BM');

	%Set years run
	years_of_simulation = 2003:2012;
	t = [years_of_simulation(1):1/12:years_of_simulation(end)+11/12];

	%Line Plots
	figure

	%Plot surface mass balance
	surfmb=[]; for i=1:length(t); surfmb=[surfmb ...
		md.results.TransientSolution(i).TotalSmb]; end
	subplot(3,1,1); plot(t,surfmb); title('Total Surface mass balance');

	%Plot velocity
	vel=[]; for i=1:length(t); vel=[vel md.results.TransientSolution(i).Vel]; end
	subplot(3,1,2); plot(t,max(vel)); title('Max Velocity');

	%Plot Volume
	volume=[]; for i=1:length(t); volume=[volume md.results.TransientSolution(i).IceVolume]; end
	subplot(3,1,3); plot(t,volume); title('Ice Volume');
	xlabel('years')
end 

if any(steps==11)
    disp('Making some figures')
    md = loadmodel('./Models/Greenland.BoxTransient_BM');
    plotmodel(md, 'data', md.results.TransientSolution(1).Thickness - md.results.TransientSolution(end).Thickness, 'title', 'Thickness change', ...
              'data', md.results.TransientSolution(end).Vel, 'title', 'Velocity', 'log#2', 10, ...
              'data', md.results.TransientSolution(end).SmbMassBalance, 'title', 'SMB')
end