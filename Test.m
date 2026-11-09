[status, output] = system('which mpiexec && mpiexec -np 2 hostname');
disp(output)