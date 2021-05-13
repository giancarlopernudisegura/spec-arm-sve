//----------------------------   forward_solver_evaluators.h     ---------------------------
//    $Id: forward_solver_evaluators.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2005, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   forward_solver_evaluators.h     ---------------------------
#ifndef __parameter_estimation__forward_solver_evaluators_h
#define __parameter_estimation__forward_solver_evaluators_h
//----------------------------   forward_solver_evaluators.h     ---------------------------

#include "config.h"
#include "forward_solver_parameters.h"

#include <lac/vector.h>
#include <dofs/dof_handler.h>

#include <list>

namespace METomography
{
  namespace ForwardSolver
  {
    namespace Evaluation
    {
      template <int dim>
      class EvaluationBase 
      {
        public:
          virtual ~EvaluationBase ();

          virtual void evaluate (const DoFHandler<dim> &dof_handler,
                                 const Vector<double>  &solution,
                                 const unsigned int     experiment_no,
                                 const unsigned int     n_experiments,
                                 const unsigned int     refinement_cycle) const = 0;
      };

      template <int dim>
      struct EvaluatorList
      {
          typedef
          std::list<boost::shared_ptr<Evaluation::EvaluationBase<dim> > >
          type;
      };

      template <int dim>
      typename EvaluatorList<dim>::type
      get_evaluator_list (const Parameters<dim> &parameters);

      
      namespace BreastPhantomGeometry
      {
        extern const Point<3> detector_positions[];
        extern const unsigned int n_detectors;
      }
    }
  }
}



//----------------------------   forward_solver_evaluators.h     ---------------------------
// end of #ifndef __parameter_estimation__forward_solver_evaluators_h
#endif
//----------------------------   forward_solver_evaluators.h     ---------------------------
