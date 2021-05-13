//----------------------------   forward_solver_parameters.h     ---------------------------
//    $Id: forward_solver_parameters.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2005, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   forward_solver_parameters.h     ---------------------------
#ifndef __parameter_estimation__forward_solver_parameters_h
#define __parameter_estimation__forward_solver_parameters_h
//----------------------------   forward_solver_parameters.h     ---------------------------


#include <base/parameter_handler.h>

#include "config.h"
#include "experiment_description.h"


namespace METomography
{
  namespace ForwardSolver
  {
    template <int dim>
    class Parameters : public ExperimentDescription<dim>::Parameters
    {
      public:
        std::string  output_directory;

        std::string  output_format;

        std::string evaluators;
        
        unsigned int n_experiments;

        unsigned int experiment_no;

        std::string  target;

        std::string  coarse_mesh;

        unsigned int n_measurement_refinements;
        
        unsigned int initial_refinement;

        std::string  refinement_criterion;

        unsigned int n_steps;
        
        static void declare_parameters (ParameterHandler &prm);

        void parse_parameters (ParameterHandler &prm);

        void delete_parameters ();        
    };
  }
}



//----------------------------   forward_solver_parameters.h     ---------------------------
// end of #ifndef __parameter_estimation__forward_solver_parameters_h
#endif
//----------------------------   forward_solver_parameters.h     ---------------------------
