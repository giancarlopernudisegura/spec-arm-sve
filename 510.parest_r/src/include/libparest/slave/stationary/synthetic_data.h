//----------------------------   stationary_synthetic_data.h     ---------------------------
//    $Id: synthetic_data.h 3734 2008-12-14 20:05:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2004, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   stationary_synthetic_data.h     ---------------------------
#ifndef __parameter_estimation__stationary_synthetic_data_h
#define __parameter_estimation__stationary_synthetic_data_h
//----------------------------   stationary_synthetic_data.h     ---------------------------


#include <base/exceptions.h>
#include <base/smartpointer.h>
#include <lac/vector.h>
#include <lac/full_matrix.h>
#include <dofs/dof_handler.h>
#include <fe/fe.h>
#include <libparest/slave/stationary/problem_description.h>

#include <string>

namespace dealii
{
  class ParameterHandler;
  template <int dim> class Quadrature;
  template <typename number> class Vector;
  template <typename number> class SparseMatrix;
  class ConstraintMatrix;
}

namespace libparest
{
  using namespace dealii;


  namespace Slave
  {
    namespace Stationary
    {

      template <int dim>
      class SyntheticDataBase : public Subscriptor
      {
	public:
	  struct Parameters : public virtual Subscriptor
	  {	
	      Parameters ();
	  
	      std::string fe_name;
	  
	      double noise_level;

	      enum NoiseType
	      {
		    additive,
		    multiplicative
	      };

	      NoiseType noise_type;

	      bool output_projection;
	  
	      static void declare_parameters (ParameterHandler &prm);
	  
	      void parse_parameters (ParameterHandler &prm);
	  
	      void delete_parameters ();
	  };


	
	  SyntheticDataBase (const Parameters         &parameters,
			     const std::string        &fe_state,
			     const unsigned int        experiment_no,
			     const ProblemDescription &problem_description);
      
	  virtual ~SyntheticDataBase ();

          virtual void initialize_gauss_newton_step (const unsigned int step_no);

	  virtual void end_gauss_newton_step ();
          
	  virtual void reinitialize (const Triangulation<dim> &new_triangulation);

          virtual void write_solution () const;
          
	  const DoFHandler<dim> &
	  get_dof_handler () const;
    
	  const FiniteElement<dim> &
	  get_fe () const;
    
	  const Vector<double> &
	  get_measurement () const;

	  const FullMatrix<double> &
	  get_measurement_to_state_matrix () const;

      
	protected:
	  unsigned int iteration_no;

	  const SmartPointer<const Parameters>          parameters;

	  SmartPointer<DoFHandler<dim> >                dof_handler;

	  Vector<double>                                measurement;

	  const SmartPointer<const FiniteElement<dim> > fe;
	  const SmartPointer<const Quadrature<dim> >    quadrature;
	  const SmartPointer<const Quadrature<dim-1> >  face_quadrature;
    
	  const unsigned int  experiment_no;
      
	  FullMatrix<double>  measurement_to_state;


	  virtual void setup_and_solve_system (const ConstraintMatrix &constraints);
	  
	  virtual void build_matrix_and_rhs (SparseMatrix<double> &matrix,
					     Vector<double>       &rhs_vector);

	  virtual void solve (const SparseMatrix<double> &matrix,
			      const Vector<double>       &rhs_vector);

	  virtual void renumber_dofs ();
      };
    } 
  }
}


//----------------------------   stationary_synthetic_data.h     ---------------------------
// end of #ifndef __parameter_estimation__stationary_synthetic_data_h
#endif
//----------------------------   stationary_synthetic_data.h     ---------------------------
