md = bamg(model, 'domain', 'Square.exp', 'hmax', .005);
vel = shock(md.mesh.x, md.mesh.y);

md = bamg(md, 'field', vel, 'err', 0.005, 'hmin', 0.005, 'hmax', 0.3, 'gradation', 1.3);
vel = shock(md.mesh.x, md.mesh.y);
plotmodel(md, 'data', vel, 'edgecolor', 'w');
%exptool('refinement_outside.exp')

h = NaN * ones(md.mesh.numberofvertices, 1);
in = ContourToNodes(md.mesh.x, md.mesh.y, 'refinement_outside.exp', 1);
h(find(in)) = 0.02;
plotmodel(md, 'data', in, 'edgecolor', 'w');

md = bamg(md, 'field', vel, 'err', 0.03, 'hmin', 0.005, 'hmax', 0.3, 'hVertices', h);
vel = shock(md.mesh.x, md.mesh.y);
plotmodel(md, 'data', vel, 'edgecolor', 'w');


