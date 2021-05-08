# MPI
## /* path of director *
## 1) l
## 2) cd Desktop
## 3) l
## 4) cd mpi_hello_workd

/*compile MPi file "Main.c" */

5)mpicc filename.c -o executlable filename
  mpicc main.c -o main.out

/* run mpi file number of process = 4 or 5 or ... */

6)mpiexec  -np 4 ./a.out   or main.out  any exucutable file name 

7)mpd &


Compilation:
 mpicc filename.c -o filename

Running:
mpirun -np 1 ./filename
