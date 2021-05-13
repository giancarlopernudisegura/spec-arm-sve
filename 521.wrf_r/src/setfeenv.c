#ifndef SPEC_DEFAULT_NAMES
# ifdef SPEC_NOUNDERSCORE
#      define SETFEENV setfeenv
# else
#   ifdef SPEC_F2CSTYLE
#      define SETFEENV setfeenv__
#   else
#      define SETFEENV setfeenv_
#   endif
# endif
#endif

#include <fenv.h>
#include <stdio.h>

void SETFEENV()
{
  fenv_t envp;
  int stat;
#if (defined(_OPENMP) || defined(SPEC_OPENMP)) && !defined(SPEC_SUPPRESS_OPENMP) && !defined(SPEC_AUTO_SUPPRESS_OPENMP)

  stat = fegetenv(&envp);
/*
  if (fesetenv(&envp) != 0) {
     perror("Error getting fp env");
  }
*/

#pragma omp parallel shared(envp)
{
  stat = fesetenv(&envp);
/*
  if (fesetenv(&envp) != 0) {
     perror("Error setting fp env");
  }
*/
}
#endif
}
