md=triangle(model(),'Square.exp',80000.);
md=setmask(md,'all','');
md=parameterize(md,'SquareShelf.par');
md=extrude(md,10,3);
%Set flow equation
md=setflowequation(md,'HO','Contour.exp','fill','SSA','coupling','tiling');
%Solve
md=solve(md,'Stressbalance');
