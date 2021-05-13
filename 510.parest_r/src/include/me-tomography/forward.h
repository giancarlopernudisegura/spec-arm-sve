//----------------------------   forward.h     ---------------------------
//    $Id: forward.h 3738 2008-12-14 22:49:40Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2005, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   forward.h     ---------------------------
#ifndef __parameter_estimation__forward_h
#define __parameter_estimation__forward_h
//----------------------------   forward.h     ---------------------------

#include <base/thread_management.h>
#include <dofs/dof_handler.h>

#include <complex>

#include "config.h"

namespace dealii
{
  class ConstraintMatrix;
  template <int> class Quadrature;
  template <int> class Function;
  template <typename> class Vector;
}


namespace METomography
{
  namespace ForwardSolver
  {
    template <int dim>
    void
    solve_forward_problem (const DoFHandler<dim>      &dof_handler,
                           const ConstraintMatrix     &constraints,
                           const Quadrature<dim>      &quadrature,
                           const Quadrature<dim-1>    &face_quadrature,
                           const std::complex<double> &unknown_source_factor,
                           const Function<dim>        &rhs_function,
                           const Function<dim>        &state_boundary_values,
                           const Function<dim>        &coefficient,
                           Vector<double>             &solution);
  }
}




//----------------------------   forward.h     ---------------------------
// end of #ifndef __parameter_estimation__forward_h
#endif
//----------------------------   forward.h     ---------------------------
