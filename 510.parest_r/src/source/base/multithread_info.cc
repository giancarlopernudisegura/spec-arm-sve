//---------------------------------------------------------------------------
//    $Id: multithread_info.cc 15487 2007-11-12 15:58:32Z heltai $
//    Version: $Name$
//
//    Copyright (C) 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2009 by the deal.II authors
//
//    This file is subject to QPL and may not be  distributed
//    without copyright and license information. Please refer
//    to the file deal.II/doc/license.html for the  text  and
//    further information on this license.
//
//---------------------------------------------------------------------------


#include <base/multithread_info.h>
#include <base/utilities.h>
#include <cstdlib>


DEAL_II_NAMESPACE_OPEN


#if DEAL_II_USE_MT == 1

// in MT mode, get number of threads through the environment (or set
// to 1 if nothing can be found there)
unsigned int MultithreadInfo::get_n_cpus()
{
  const char *p = std::getenv ("OMP_NUM_THREADS");

  const unsigned int n_cpus = ((p == 0) ?
			       1:
			       Utilities::string_to_int (p));
  return n_cpus;
}


#else				 // not in MT mode

unsigned int MultithreadInfo::get_n_cpus()
{
  return 1;
}

#endif


MultithreadInfo::MultithreadInfo ()
                :
                n_cpus (get_n_cpus()),
                n_default_threads (n_cpus)
{}



unsigned int
MultithreadInfo::memory_consumption ()
{
				   // only simple data elements, so
				   // use sizeof operator
  return sizeof (MultithreadInfo);
}



// definition of the variable which is declared `extern' in the .h file
MultithreadInfo multithread_info;

DEAL_II_NAMESPACE_CLOSE
