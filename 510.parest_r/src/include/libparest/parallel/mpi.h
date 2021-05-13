//----------------------------   parallel_tools.h     ---------------------------
//    $Id: tools.h 3039 2006-10-23 18:53:54Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2004, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   mpi.h     ---------------------------
#ifndef __libparest__mpi_h
#define __libparest__mpi_h
//----------------------------   mpi.h     ---------------------------


// a header that universally includes whatever is the relevant C++ MPI
// header file. the actual name of that file is pretty hotly debated
// among different MPI distributions so it pays off to have a single
// place of inclusion.

#if DEAL_II_USE_MPI == 1


#ifdef HAVE_MPI___H
#  include <mpi++.h>
#else
                         // include mpi.h so that we can test again preprocessor
                         // symbols that MPI distributions should define in that
                         // file...
#  include <mpi.h>
#  ifdef OPEN_MPI
#    include <openmpi/ompi/mpi/cxx/mpicxx.h>
#  else
#    include <mpi2c++/mpi++.h>
#  endif
#endif


#endif  // DEAL_II_USE_MPI == 1

#endif  //  __libparest__mpi_h
