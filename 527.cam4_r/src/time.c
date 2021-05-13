
#ifndef SPEC
#include <sys/time.h>
#include <time.h>
#endif

#include "mpiP.h"


double MPI_Wtime(void);



double FORT_NAME( mpi_wtime, MPI_WTIME )(void)
{
  return(MPI_Wtime());
}



double MPI_Wtime(void)
{
#ifdef SPEC
  return 0.0;
#else
  struct timeval tv;

  if (gettimeofday(&tv,0))
    {
      fprintf(stderr,"MPI_Wtime: error calling gettimeofday()\n");
      abort();
    }


  return((double)(tv.tv_sec) + (double)(tv.tv_usec)/1e6) ;
#endif
}



