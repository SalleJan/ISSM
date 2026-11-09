% 1. Read the shapefile
S = shaperead('/Users/7092946/Desktop/ISSM_stuff/Beds/doi_10_7280_D1WT11__v20190329/Greenland_Basins_PS_v1.4.2.shp');

% 2. Extract the specific basin index (adjust the condition to match your target basin)
% For this example, let's assume we are pulling the first entry in the shapefile
basin_idx = 200; 

x = S(basin_idx).X;
y = S(basin_idx).Y;

% Remove NaN padding that MATLAB appends to shapefile coordinates
valid_idx = ~isnan(x) & ~isnan(y);
x = x(valid_idx);
y = y(valid_idx);
num_points = length(x);

% 3. Write out the Argus .exp file
fid = fopen('Basin_Boundary_2.exp', 'w');
fprintf(fid, '## Name:Basin_Boundary\n');
fprintf(fid, '## Icon:0\n');
fprintf(fid, '# Points Count Value\n');
fprintf(fid, '%d 1.000000\n', num_points);
fprintf(fid, '# X pos Y pos\n');

for i = 1:num_points
    fprintf(fid, '%f %f\n', x(i), y(i));
end
fclose(fid);
