//----------------------------   measurement_weights.h     ---------------------------
//    $Id: measurement_weights.h 2899 2006-08-02 00:23:10Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2005, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   measurement_weights.h     ---------------------------
#ifndef __parameter_estimation__measurement_weights_h
#define __parameter_estimation__measurement_weights_h
//----------------------------   measurement_weights.h     ---------------------------

#include <string>


namespace METomography
{
  namespace Measurements
  {
    namespace WeightFunctions
    {
      template <int dim>
      const Function<dim> *
      parse_weight_function (const std::string &name,
			     const unsigned int experiment_no,
			     const unsigned int n_experiments);


      template <int dim>
      std::string
      default_weight_function ();
    }
  }
}



//----------------------------   measurement_weights.h     ---------------------------
// end of #ifndef __parameter_estimation__measurement_weights_h
#endif
//----------------------------   measurement_weights.h     ---------------------------
