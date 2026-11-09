md=model;
md=triangle(md,'DomainOutline.exp',10000);
md=setmask(md,'~Grounded.exp','');
md=parameterize(md,'Square.par');
md=setflowequation(md,'SSA','all');
md.cluster=generic('name',oshostname,'np',1);
md=solve(md,'Stressbalance');

%%
%Set transient options
md.timestepping.time_step=1;
md.timestepping.final_time=10;
md.settings.output_frequency=1;

%Set stuff for ismovingfront
md.levelset.spclevelset = NaN*zeros(md.mesh.numberofvertices,1);
%md.calving.calvingrate = 10000*ones(md.mesh.numberofvertices,1);
md.levelset.reinit_frequency = 10;
md.levelset.stabilization = 2;

md.smb.mass_balance = 1*ones(md.mesh.numberofvertices,1);

md.mask.ice_levelset = reinitializelevelset(md,md.mask.ice_levelset);

%md.calving=calvingvonmises();
%md.calving.stress_threshold_groundedice = 1e6; %1MPa taken from Choi et al (2018)
%md.calving.stress_threshold_floatingice = 50e3;

md.calving=calvingminthickness();
md.calving.min_thickness = 700;

md.frontalforcings.meltingrate = zeros(md.mesh.numberofvertices,1);
md.transient.requested_outputs = [md.transient.requested_outputs, 'MaskIceLevelset', 'MaskOceanLevelset'];

md = solve(md, 'Transient');

save(['SquareModel.mat'],'md','-v7.3');

%plotmodel(md, 'data', md.results.TransientSolution(5).MaskIceLevelset, 'contourlevels', {0}, 'edgecolor', 'w')

%for i=1:length(md.results.TransientSolution)
%    plotmodel(md, 'data',md.results.TransientSolution(i).MaskIceLevelset, 'contourlevels', {0}, 'edgecolor', 'w');
%    ax = gca;
%    exportgraphics(gca,'LowFreqReinitLevelset.gif','Append',true);
%end