//----------------------------   targets.h     ---------------------------
//    $Id: targets.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2005, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   targets.h     ---------------------------
#ifndef __parameter_estimation__targets_h
#define __parameter_estimation__targets_h
//----------------------------   targets.h     ---------------------------

#include <base/function.h>
#include <string>

#include "config.h"


namespace METomography
{
  namespace Targets
  {
    template <int dim>
    class TargetBase
    {
      public:
	virtual ~TargetBase ();
	
        virtual
        const Function<dim> &
        get_q () const = 0;
    };

    template <int dim>
    std::string target_names ();

    template <int dim>
    std::string default_target_name ();

    template <int dim>
    const TargetBase<dim> &
    target_descriptor (const std::string &name);
  }
}


//----------------------------   targets.h     ---------------------------
// end of #ifndef __parameter_estimation__targets_h
#endif
//----------------------------   targets.h     ---------------------------
