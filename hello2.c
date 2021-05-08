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
      int num_process;
      int My_ID;
      ierr = MPI_Init(&argc, &argv);
      ///Find out my process ID, and how many processes were started.
      ierr = MPI_Comm_rank(MPI_COMM_WORLD,&My_ID);
      ierr = MPI_Comm_size(MPI_COMM_WORLD,&num_process);
      printf("Hello world! I'm process %i out of %i processes\n", My_ID,num_process); 

      ierr = MPI_Finalize();
  
   return 0;    

}
