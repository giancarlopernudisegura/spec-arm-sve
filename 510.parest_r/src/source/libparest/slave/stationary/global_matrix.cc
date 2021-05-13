/* $Id: global_matrix.cc 3442 2007-07-12 04:20:39Z bangerth $ */

#include <libparest/slave/stationary/global_matrix.h>
#include <libparest/utilities.h>

#include <base/multithread_info.h>
#include <dofs/dof_constraints.h>

namespace libparest
{
  namespace Slave
  {
    namespace Stationary
    {
      namespace GlobalMatrix
      {
        namespace C_and_CT
        {
          
/* -------------- Matrix_*::... -------- */  

	  template <typename MatrixClass>
          Base<MatrixClass>::
          Base (const MatrixClass          &C,
		const SparseMatrix<double> &transfer_matrix,
		Vector                     &tmp,
		Threads::ThreadMutex       &mutex)
                          :
                          C (&C),
                          transfer_matrix (&transfer_matrix),
                          tmp (tmp),
                          mutex (mutex)
          {}



  
	  template <typename MatrixClass>
          C<MatrixClass>::
          C (const MatrixClass          &C,
	     const SparseMatrix<double> &transfer_matrix,
	     Vector                     &tmp,
	     Threads::ThreadMutex       &mutex)
                          :
                          Base<MatrixClass> (C, transfer_matrix,
                                             tmp, mutex)
          {}
  

  
	  template <typename MatrixClass>
	  unsigned int
	  C<MatrixClass>::m () const
	  {
	    return this->Base<MatrixClass>::C->m();
	  }


	  
	  template <typename MatrixClass>
	  unsigned int
	  C<MatrixClass>::n () const
	  {
	    return this->transfer_matrix->n();
	  }


	  
	  template <typename MatrixClass>
          CT<MatrixClass>::
          CT (const MatrixClass          &C,
	      const SparseMatrix<double> &transfer_matrix,
	      Vector                     &tmp,
	      Threads::ThreadMutex       &mutex)
                          :
                          Base<MatrixClass> (C, transfer_matrix,
                                             tmp, mutex)
          {}
	}


        template <typename number>
        Matrix_A_Inverse<number>::
        ~Matrix_A_Inverse () 
        {}
        


        template <>
	SparseSym_A_Inverse<double>::
	SparseSym_A_Inverse (const SparseMatrix<double> &m)
	{
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   



	  
	  inverse_state_equation_matrix.get_synchronisation_lock().acquire ();
	  inverse_state_equation_matrix.initialize (m.get_sparsity_pattern());
	  inverse_state_equation_matrix.factorize (m);
	  inverse_state_equation_matrix.get_synchronisation_lock().release ();
	}



        template <>
	SparseSym_A_Inverse<float>::
	SparseSym_A_Inverse (const SparseMatrix<float> &)
	{
	  Assert (false, ExcMessage("Sparse decomposition does presently not accept "
                                    "float matrices, only double matrices"));
	}        


        template <typename number>
	void
	SparseSym_A_Inverse<number>::
	vmult (Vector<double> &v) const
	{
	  inverse_state_equation_matrix.get_synchronisation_lock().acquire ();
	  inverse_state_equation_matrix.solve (v);
	  inverse_state_equation_matrix.get_synchronisation_lock().release ();
	}



        template <typename number>
	void
	SparseSym_A_Inverse<number>::
	vmult (Vector<float> &v) const
	{
	  inverse_state_equation_matrix.get_synchronisation_lock().acquire ();
	  inverse_state_equation_matrix.solve (v);
	  inverse_state_equation_matrix.get_synchronisation_lock().release ();
	}
        


        template <typename number>
	void
	SparseSym_A_Inverse<number>::
	Tvmult (Vector<double> &v) const
	{
	  SparseSym_A_Inverse::vmult (v);
	}


        
        template <typename number>
	void
	SparseSym_A_Inverse<number>::
	Tvmult (Vector<float> &v) const
	{
	  SparseSym_A_Inverse::vmult (v);
	}        
	


/* -------------- Matrix ------------ */  

        template <typename number>
	Matrix<number>::~Matrix ()
	{
	  clear ();
	}



        template <typename number>
	void
	Matrix<number>::
	set_submatrices (const SparseMatrix<double> &transfer_matrix)
	{
	  A = &global_matrix.block(0,1);
	  M = &global_matrix.block(0,0);

	  C = new Matrix_C (global_matrix.block(1,2),
                            transfer_matrix,
                            sibling_tmp_vector,
                            sibling_mutex);

	  C_T = new Matrix_CT (global_matrix.block(1,2),
                               transfer_matrix,
                               sibling_tmp_vector,
                               sibling_mutex);
        
					   
					   
	  delete_ptr (this->A_inverse);
	}
          

  
        template <typename number>
	void
	Matrix<number>::invert_state_matrix () 
	{
					   
					   
					   
					   
	  global_matrix.block(1,0).clear ();
  

	  delete_ptr (A_inverse);
	  A_inverse = new SparseSym_A_Inverse<number> (global_matrix.block(0,1));

					   
					   
	  global_matrix.block(0,1).clear ();
	}


  
        template <typename number>
	void
	Matrix<number>::clear ()
	{
					   
					   
	  delete_ptr (A_inverse);

					   
					   
	  A = M = 0;
	  delete_ptr (C);
	  delete_ptr (C_T);

					   
					   
	  global_matrix.clear ();
  
	  sibling_mutex.acquire ();
	  sibling_tmp_vector.reinit (0);
	  sibling_mutex.release ();
	}



        template <typename number>
	void
	Matrix<number>::
	restore_symmetry_of_A (const std::vector<bool> &is_dirichlet_boundary_dof,
			       const ConstraintMatrix  &constraints,
			       BlockVector<double>     &right_hand_side)
	{
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
					   
	  const unsigned int n_primal_dofs = global_matrix.block(0,0).n();
        
	  for (unsigned int i=0; i<n_primal_dofs; ++i)
	    if ((is_dirichlet_boundary_dof[i] == true) ||
		constraints.is_constrained(i))
	      {
		Assert (global_matrix.block(0,1).diag_element(i) == 0,
			ExcInternalError());

		const double scaling_factor
		  = (global_matrix.block(0,0).diag_element(i) /
		     global_matrix.block(1,1).diag_element(i));

		global_matrix.block(1,1).diag_element(i) *= scaling_factor;
		right_hand_side.block(1)(i) *= scaling_factor;

		std::swap (global_matrix.block(0,0).diag_element(i),
			   global_matrix.block(1,0).diag_element(i));
		std::swap (global_matrix.block(0,1).diag_element(i),
			   global_matrix.block(1,1).diag_element(i));
		std::swap (right_hand_side.block(0)(i),
			   right_hand_side.block(1)(i));
	      };
	}      
      }
    }
  }
}



namespace libparest
{
  namespace Slave
  {
    namespace Stationary
    {
      namespace GlobalMatrix
      {
        namespace C_and_CT
        {
	  template class Base<SparseMatrix<double> >;
          template class Base<SparseMatrix<float> >;

          template class C<SparseMatrix<double> >;
	  template class C<SparseMatrix<float> >;

          template class CT<SparseMatrix<double> >;
	  template class CT<SparseMatrix<float> >;

	  template class Base<BlockSparseMatrix<double> >;
          template class Base<BlockSparseMatrix<float> >;

          template class C<BlockSparseMatrix<double> >;
	  template class C<BlockSparseMatrix<float> >;

          template class CT<BlockSparseMatrix<double> >;
	  template class CT<BlockSparseMatrix<float> >;
	}

	template class Matrix<double>;
	template class Matrix<float>;

	template class Matrix_A_Inverse<double>;
	template class Matrix_A_Inverse<float>;

	template class SparseSym_A_Inverse<double>;
	template class SparseSym_A_Inverse<float>;
      }
    }
  }
}
