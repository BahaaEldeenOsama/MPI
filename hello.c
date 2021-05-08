#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <assert.h>
#include <mpi.h>

main(int argc, char **argv) 
{
      int ierr;
      ierr = MPI_Init(&argc, &argv);
      printf("Hello world\n"); 
      ierr = MPI_Finalize();

  
   return 0;    

}
