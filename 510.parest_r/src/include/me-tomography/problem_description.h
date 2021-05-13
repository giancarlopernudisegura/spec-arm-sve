//----------------------------   problem_description.h     ---------------------------
//    $Id: problem_description.h 1763 2004-03-02 03:03:04Z wolf $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2004, 2009 by Wolfgang Bangerth
//
//----------------------------   problem_description.h     ---------------------------
#ifndef __me_elliptic__problem_description_h
#define __me_elliptic__problem_description_h
//----------------------------   problem_description.h     ---------------------------


#include <libparest/slave/stationary/problem_description.h>

namespace METomography
{
  class ProblemDescription : public libparest::Slave::Stationary::ProblemDescription
  {
    public:
      ProblemDescription ();
  };
}



//----------------------------   problem_description.h     ---------------------------
// end of #ifndef __me_elliptic__problem_description_h
#endif
//----------------------------   problem_description.h     ---------------------------
