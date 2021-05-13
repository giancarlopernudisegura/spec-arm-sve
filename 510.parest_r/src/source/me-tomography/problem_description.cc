/* $Id: problem_description.cc 1676 2003-09-03 19:39:51Z wolf $ */

#include <me-tomography/problem_description.h>

namespace METomography
{

  ProblemDescription::ProblemDescription ()
		  :
		  libparest::Slave::Stationary::ProblemDescription (4,4,1)
  {}
}

