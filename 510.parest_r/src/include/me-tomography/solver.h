//----------------------------   solver.h     ---------------------------
//    $Id: solver.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   solver.h     ---------------------------
#ifndef __parameter_estimation__solver_h
#define __parameter_estimation__solver_h
//----------------------------   solver.h     ---------------------------


#include "config.h"


namespace dealii
{
  template <typename> class SparseMatrix;
  template <typename> class Vector;
}


namespace METomography
{
  namespace BlockSolver
  {
    void solve (const SparseMatrix<double> &A,
                Vector<double>             &solution,
                const Vector<double>       &rhs);

    void solve_transpose (const SparseMatrix<double> &A,
                          Vector<double>             &solution,
                          const Vector<double>       &rhs);
  }
}


//----------------------------   solver.h     ---------------------------
// end of #ifndef __parameter_estimation__solver_h
#endif
//----------------------------   solver.h     ---------------------------
