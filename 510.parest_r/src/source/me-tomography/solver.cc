#include <me-tomography/solver.h>

#include <lac/sparse_matrix.h>
#include <lac/vector.h>
#include <lac/solver_bicgstab.h>
#include <lac/solver_gmres.h>
#include <lac/precondition.h>
#include <lac/vector_memory.h>




namespace METomography
{
  namespace BlockSolver
  {

    typedef SolverGMRES<> Solver;
    const double tolerance = 1e-8;

    
    template <typename Matrix>
    class TransposeMatrix
    {
      public:
        TransposeMatrix (const Matrix &m);

        template <typename U, typename V>
        void vmult (U &u, V &v) const;
        
        template <typename U, typename V>
        void Tvmult (U &u, V &v) const;
        
      private:
        const Matrix &matrix;
    };


    template <typename Matrix>
    TransposeMatrix<Matrix>::TransposeMatrix (const Matrix &m)
                    :
                    matrix (m)
    {}

    
    template <typename Matrix>
    template <typename U, typename V>
    void
    TransposeMatrix<Matrix>::vmult (U &u, V &v) const
    {
      matrix.Tvmult (u,v);
    }
    


    template <typename Matrix>
    template <typename U, typename V>
    void
    TransposeMatrix<Matrix>::Tvmult (U &u, V &v) const
    {
      matrix.vmult (u,v);
    }
    


    
    void solve (const SparseMatrix<double> &A,
                Vector<double>             &solution,
                const Vector<double>       &rhs)
    {
      // set the tolerance to zero and the number of iterations to 50
      // to provide predictable run times -- we will always execute
      // exactly 50 iterations here, regardless of round-off
      SolverControl        solver_control (50, 0);
      PrimitiveVectorMemory<> vector_memory;
      Solver                  solver (solver_control, vector_memory);

      PreconditionSSOR<SparseMatrix<double> > preconditioner;
      preconditioner.initialize (A, 1.);

      try
        {
          solver.solve (A, solution, rhs, preconditioner);
        }
      catch (SolverControl::NoConvergence &)
        {
	  // simply ignore solver failures because of not reaching the
	  // tolerance of zero (which is unattainable in any case)
        }
    }



    void solve_transpose (const SparseMatrix<double> &A,
                          Vector<double>             &solution,
                          const Vector<double>       &rhs)
    {
      // set the tolerance to zero and the number of iterations to 50
      // to provide predictable run times -- we will always execute
      // exactly 50 iterations here, regardless of round-off
      SolverControl        solver_control (50, 0);
      PrimitiveVectorMemory<> vector_memory;
      Solver                  solver (solver_control, vector_memory);

                                       
                                       
      PreconditionSSOR<SparseMatrix<double> > preconditioner;
      preconditioner.initialize (A, 1.);

      try
        {
          solver.solve (TransposeMatrix<SparseMatrix<double> >(A), solution, rhs,
                        preconditioner);
        }
      catch (SolverControl::NoConvergence &)
        {
	  // simply ignore solver failures because of not reaching the
	  // tolerance of zero (which is unattainable in any case)
        }
    }
    
  }
}
