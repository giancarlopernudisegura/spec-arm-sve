//----------------------------   global_matrix.h     ---------------------------
//    $Id: global_matrix.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2003, 2004, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   global_matrix.h     ---------------------------
#ifndef __parameter_estimation__global_matrix_h
#define __parameter_estimation__global_matrix_h
//----------------------------   global_matrix.h     ---------------------------


#include <lac/block_sparse_matrix.h>
#include <lac/sparse_direct.h>
#include <lac/block_vector.h>


namespace dealii
{
  class ConstraintMatrix;
}



namespace libparest
{
  using namespace dealii;


  namespace Slave
  {
    namespace Stationary
    {
      namespace GlobalMatrix
      {
	namespace C_and_CT
	{

	  template <class MatrixClass>
	  struct VectorType;

	  template <typename Number>
	  struct VectorType<SparseMatrix<Number> >
	  {
	      typedef Vector<Number> type;
	  };

	  template <typename Number>
	  struct VectorType<BlockSparseMatrix<Number> >
	  {
	      typedef BlockVector<Number> type;
	  };
	  
	  template <class MatrixClass>
          class Base : public Subscriptor
          {
	      typedef typename VectorType<MatrixClass>::type Vector;
            protected:
              Base (const MatrixClass          &C,
		    const SparseMatrix<double> &transfer_matrix,
		    Vector                     &tmp,
		    Threads::ThreadMutex       &mutex);	    

              const SmartPointer<const MatrixClass> C;

              const SmartPointer<const SparseMatrix<double> > transfer_matrix;

              Vector               &tmp;
              Threads::ThreadMutex &mutex;
          };
	
	    
	  template <class MatrixClass>
          class C : public Base<MatrixClass>
          {
            public:
	      typedef typename VectorType<MatrixClass>::type Vector;
	      
              C (const MatrixClass          &C,
		 const SparseMatrix<double> &transfer_matrix,
		 Vector                     &tmp,
		 Threads::ThreadMutex       &mutex);	    

              template <typename InVector, typename OutVector>
              void vmult (OutVector      &dst,
                          const InVector &src) const;

	      unsigned int m () const;
	      unsigned int n () const;	      
          };  

	  template <class MatrixClass>
          class CT : public Base<MatrixClass>
          {
            public:
	      typedef typename VectorType<MatrixClass>::type Vector;
	      
              CT (const MatrixClass          &C,
		  const SparseMatrix<double> &transfer_matrix,
		  Vector                     &tmp,
		  Threads::ThreadMutex       &mutex);	    
	    
              template <typename InVector, typename OutVector>
              void vmult (OutVector      &dst,
                          const InVector &src) const;
          };	  
	}

        template <typename number>
        class Matrix_A_Inverse : public Subscriptor
        {
          public:
            virtual ~Matrix_A_Inverse ();
            
            virtual void vmult (Vector<double> &v) const = 0;
            virtual void vmult (Vector<float> &v) const = 0;

            virtual void Tvmult (Vector<double> &v) const = 0;
            virtual void Tvmult (Vector<float> &v) const = 0;
        };
        

        template <typename number>
	class SparseSym_A_Inverse : public Matrix_A_Inverse<number>
	{
	  public:
	    SparseSym_A_Inverse (const SparseMatrix<number> &m);

	    virtual void vmult (Vector<double> &v) const;
            virtual void vmult (Vector<float> &v) const;

            virtual void Tvmult (Vector<double> &v) const;
            virtual void Tvmult (Vector<float> &v) const;

	  private:
	    SparseDirectMA27 inverse_state_equation_matrix;
	};
          

        template <typename number>
	class Matrix
	{
	  public:
	    typedef
	    libparest::Slave::Stationary::GlobalMatrix::C_and_CT::C<SparseMatrix<number> >
	    Matrix_C;

	    typedef
	    libparest::Slave::Stationary::GlobalMatrix::C_and_CT::CT<SparseMatrix<number> >
	    Matrix_CT;

	    typedef
	    libparest::Slave::Stationary::GlobalMatrix::Matrix_A_Inverse<number>
	    Matrix_A_Inverse;
              
	    virtual ~Matrix ();
    
	    SmartPointer<SparseMatrix<number> > A;
	    SmartPointer<SparseMatrix<number> > M;
	    SmartPointer<Matrix_C> C;
	    SmartPointer<Matrix_CT> C_T;

	    BlockSparseMatrix<number> global_matrix;

	    SmartPointer<Matrix_A_Inverse> A_inverse;
      
	    virtual
	    void
	    build_matrix (const BlockVector<double> &linearization_point) = 0;
      
	    void clear ();

//TODO: make this a 'number' matrix as well            
	    void
	    set_submatrices (const SparseMatrix<double> &transfer_matrix);
              
	    virtual void invert_state_matrix ();

	    void
	    restore_symmetry_of_A (const std::vector<bool> &is_dirichlet_boundary_dof,
				   const ConstraintMatrix  &constraints,
				   BlockVector<double>     &right_hand_side);
          
	  protected:
	    Vector<number>       sibling_tmp_vector;
	    Threads::ThreadMutex sibling_mutex;      
	};

        
// --------------- inline and template functions

        namespace C_and_CT
        {
          template <typename MatrixClass>
          template <typename InVector, typename OutVector>
          void
          C<MatrixClass>::
          vmult (OutVector      &dst,
                 const InVector &src) const
          {
            Base<MatrixClass>::mutex.acquire ();
            this->transfer_matrix->vmult (this->tmp, src);
            this->Base<MatrixClass>::C
              ->template vmult<OutVector> (dst, this->tmp);
            Base<MatrixClass>::mutex.release ();
          }


	  template <typename MatrixClass>
          template <typename InVector, typename OutVector>
          inline
          void
          CT<MatrixClass>::
          vmult (OutVector      &dst,
                 const InVector &src) const
          {
            Base<MatrixClass>::mutex.acquire ();
            this->C->template Tvmult<Vector> (this->tmp, src);
            this->transfer_matrix->Tvmult (dst, this->tmp);
            Base<MatrixClass>::mutex.release ();
          }
        }
      }
    }
  }
}


//----------------------------   global_matrix.h     ---------------------------
// end of #ifndef __parameter_estimation__global_matrix_h
#endif
//----------------------------   global_matrix.h     ---------------------------
