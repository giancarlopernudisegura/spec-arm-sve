//----------------------------   boundary_sources.h     ---------------------------
//    $Id: boundary_sources.h 2886 2006-08-01 21:25:01Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   boundary_sources.h     ---------------------------
#ifndef __parameter_estimation__boundary_sources_h
#define __parameter_estimation__boundary_sources_h
//----------------------------   boundary_sources.h     ---------------------------

#include <base/config.h>
#include <string>

#include "config.h"


namespace dealii
{
  template <int> class Function;
  template <int> class Point;
}


namespace METomography
{
  namespace BoundarySources
  {
    enum SourceComponents
    {
	  excitation_components,
	  fluorescence_components
    };
      
    namespace PlanarZ8
    {
      template <int dim>
      const Function<dim> *
      create_experimental_function (const std::string     &file_base_name,
				    const SourceComponents source_components,
				    const double           scaling_factor,
				    const unsigned int     experiment_no,
				    const unsigned int     n_experiments);
      

      template <int dim>
      const Function<dim> *
      parse_forcing_function (const std::string &name,
			      const unsigned int experiment_no,
			      const unsigned int n_experiments);
    }
    
    namespace BreastPhantomGeometry
    {
      template <int dim>
      const Function<dim> *
      create_experimental_function (const std::string     &file_base_name,
				    const SourceComponents source_components,
				    const double           scaling_factor,
				    const unsigned int     experiment_no,
				    const unsigned int     n_experiments);

      template <int dim>
      const Function<dim> *
      parse_forcing_function (const std::string &name,
			      const unsigned int experiment_no,
			      const unsigned int n_experiments);
    }
  }
}

    


//----------------------------   boundary_sources.h     ---------------------------
// end of #ifndef __parameter_estimation__boundary_sources_h
#endif
//----------------------------   boundary_sources.h     ---------------------------


