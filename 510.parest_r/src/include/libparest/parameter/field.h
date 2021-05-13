//----------------------------   parameter_field.h     ---------------------------
//    $Id: field.h 3435 2007-07-11 22:49:27Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2006, 2007, 2009 by Wolfgang Bangerth
//
//----------------------------   parameter_field.h     ---------------------------
#ifndef __libparest__parameter_field_h
#define __libparest__parameter_field_h
//----------------------------   parameter_field.h     ---------------------------


#include <base/thread_management.h>
#include <lac/sparsity_pattern.h>
#include <lac/sparse_matrix.h>
#include <grid/intergrid_map.h>

#include <libparest/parameter/base.h>
#include <libparest/global_parameters.h>
#include <libparest/statistics.h>
#include <libparest/parameter/field_discretization.h>
#include <libparest/parameter/regularization_base.h>

#include <string>

namespace dealii
{
  class ParameterHandler;
  template <int dim> class Function;
}

namespace libparest
{
  using namespace dealii;


  namespace Parameter
  {
    namespace Field
    {
      namespace Bounds
      {
        template <int dim> class Base;
      }
    }
  }
}


namespace libparest
{
  namespace Parameter
  {
    namespace Field
    {
  
      template <int dim>
      class Base : public libparest::Parameter::Base,
		   public DiscretizedField<dim>
      {
	public:
	  enum ParameterAssociation {
		master, slave
	  };
    
	  typedef Field::Triangulations<dim> Triangulations;
	  typedef Field::DoFHandlers<dim>    DoFHandlers;
	  typedef Field::FiniteElements<dim> FiniteElements;

      
	  struct Parameters : public virtual Subscriptor
	  {
	      
	      struct RegularizationParameterStrategy
	      {
		  enum Strategy {
			fixed, reduce_with_misfit
		  };

		  Strategy strategy;

		  double minimal_misfit_ratio;

		  RegularizationParameterStrategy ();
	      };
	      
		    
	      Parameters ();
	  
	      double                           initial_regularization_parameter;
	      Regularization::RegularizationFunctional regularization_functional;

	      bool use_information_for_regularization;
	      
	      RegularizationParameterStrategy regularization_parameter_strategy;
	      
	      unsigned int initial_refinement;

	      std::pair<double,double> refinement_fraction;

	      unsigned int             max_n_cells;

	      bool write_refinement_indicators;

	      bool output_grids;

	      typename FiniteElements::Parameters finite_element;

	      static void declare_parameters (ParameterHandler &prm);
	  
	      void parse_parameters (ParameterHandler &prm);

	      void delete_parameters ();
	  };


	  class MatrixRepresentation : public libparest::Parameter::Base::MatrixRepresentation
	  {
	    public:
	      MatrixRepresentation (const SparseMatrix<double> &M);

	      virtual ~MatrixRepresentation ();
	
	      virtual
              void
              vmult (Vector<double>       &out,
                     const Vector<double> &in) const;

	      virtual
              void
              multiple_vmult (std::vector<Vector<double> >       &out,
                              const std::vector<Vector<double> > &in) const;
              
	      virtual void solve (Vector<double>          &x,
				  const Vector<double>    &b,
				  const std::vector<bool> &inactive_parameters) const;

	    private:
	      const SmartPointer<const SparseMatrix<double> > M;
	  };


	  class PerStepStatistics : public libparest::PerStepStatistics
	  {
	    public:
	      PerStepStatistics (const unsigned int n_regularization_parameters);
	  
	      virtual
	      std::list<std::string>
	      declare_entries () const;

	      virtual
	      std::list<double>
	      get_values () const;

	      unsigned int n_dofs;

	      std::vector<double> regularization_parameters;
	  };

	  Base (const Parameters               &parameters,
		const GlobalParameters<dim>    &global_parameters,
		const ParameterAssociation parameter_association,
		Triangulations                 *triangulation,
		FiniteElements                 *finite_elements,
		const Bounds::Base<dim>        &parameter_bounds,
		const Function<dim>            &exact_coefficient);

	  virtual ~Base ();

	  virtual void end_gauss_newton_step ();
      
	  virtual unsigned int n_dofs () const;

	  virtual void finalize ();
      
	  virtual void preset_initial_values (Vector<double> &initial_iterate) const;
    
	  virtual void set_back_to_bounds (Vector<double> &parameters) const;
      
	  virtual bool satisfies_bounds (const Vector<double> &parameters) const;
      
	  virtual void at_lower_bounds (const Vector<double> &parameters,
					std::vector<bool>    &flags) const;
      
	  virtual void at_upper_bounds (const Vector<double> &parameters,
					std::vector<bool>    &flags) const;

	  virtual void satisfy_constraints (const Vector<double> &present_iterate,
					    Vector<double>       &update) const;
      
	  virtual void build_matrices (const Vector<double> &linearization_point);

	  void build_rhs (const Vector<double> &linearization_point,
			  Vector<double>       &output_vector) const;

	  virtual double compute_inverse_mass_norm_square (const Vector<double> &v) const;

	  virtual const MatrixRepresentation & get_regularization_matrix () const;

	  virtual const MatrixRepresentation & get_mass_matrix () const;

	  virtual
	  void
	  scale_information_content_to_density (const Vector<float> &content,
						Vector<float>       &density) const;
	  
	  virtual void refine_parameterization (const Vector<float>  &parameter_error,
						const unsigned int    pe_type,
						const Vector<double> &old_parameter_values,
						Vector<double>       &new_parameter_values,
						std::vector<bool>    &refinement_indicators,
						std::vector<bool>    &coarsening_indicators);

	  virtual void write_solution (const Vector<double> &present_iterate) const;
      
	  void
	  beta_r_prime (const DoFHandler<dim>        &dof_handler,
			const unsigned int            component,
			const Vector<double>         &present_iterate,
			const Vector<double>         &weights,
			Vector<float>                &output_vector) const;

	  virtual double compute_model_misfit (const Vector<double> &iterate) const;

	  virtual void consider_misfits (const double data_misfit,
					 const double model_misfit);

	  virtual double compute_model_error (const Vector<double> &iterate) const;

	protected:
	  const SmartPointer<const GlobalParameters<dim> > global_parameters;

	  const SmartPointer<const Parameters> parameters;
	  
	  SparsityPattern      parameter_sparsity;

	  SparseMatrix<double> R;
      
	  MatrixRepresentation R_reference;
      
	  SparseMatrix<double> M;
      
	  MatrixRepresentation M_reference;

	  SmartPointer<PerStepStatistics> present_statistics;

	  SmartPointer<const Regularization::Base<dim> > regularization_functional;

	  const SmartPointer<const Function<dim> > exact_coefficient;

	  const ParameterAssociation parameter_association;

	  virtual void build_M ();

	  virtual
	  void get_refinement_criteria (const Vector<float>  &parameter_error,
					const unsigned int    pe_type,
					const Vector<double> &old_parameter_values,
					Vector<float>        &refinement_criteria) = 0;

	  double
	  get_present_regularization_parameter () const;
	  
	private:

	  double present_regularization_parameter;

	  void build_M_1 (const unsigned int    begin,
			  const unsigned int    end,
			  Threads::ThreadMutex &mutex);

	  void build_R (const Vector<double> &linearization_point);

	  double compute_model_error_1 (const Vector<double> &present_iterate,
					const unsigned int    begin,
					const unsigned int    end) const;

      };


  

      template <int dim>
      class ScalarField : public libparest::Parameter::Field::Base<dim>
      {
	public:
	  typedef
	  typename libparest::Parameter::Field::Base<dim>::ParameterAssociation
	  ParameterAssociation;
      
	  typedef
	  typename libparest::Parameter::Field::Base<dim>::Parameters
	  Parameters;

	  enum PassedRefinementIndicatorTypes
	  {
		none,
		dwr,
		gamma
	  };
      
	  ScalarField (const Parameters                      &parameters,
		       const GlobalParameters<dim>           &global_parameters,
		       const ParameterAssociation             parameter_association,
		       const Triangulation<dim>              &coarse_grid,
		       const Bounds::Base<dim>               &parameter_bounds,
		       const Function<dim>                   &exact_coefficient);
      
	  ScalarField (const Parameters               &parameters,
		       const GlobalParameters<dim>    &global_parameters,
		       const ParameterAssociation      parameter_association,
		       const Triangulation<dim>       &coarse_grid,
		       const GridTransfer::Base<dim>  &mesh_refinement,
		       const Bounds::Base<dim>        &parameter_bounds,
		       const Function<dim>            &exact_coefficient);

	  virtual void end_gauss_newton_step ();

	  virtual libparest::PerStepStatistics *
	  create_and_set_statistics_object ();

	protected:
	  virtual
	  void get_refinement_criteria (const Vector<float>  &parameter_error,
					const unsigned int    pe_type,
					const Vector<double> &old_parameter_values,
					Vector<float>        &refinement_criteria);
      
	private:
	  void
	  compute_gamma_indicators (const Vector<double> &present_iterate,
				    const Vector<float>  &gamma_in,
				    Vector<float>        &indicators) const;

	  void
	  compute_derivative_indicators (const Vector<double> &present_iterate,
					 Vector<float>        &indicators) const;
      };
  


      template <int dim>
      class VectorField : public libparest::Parameter::Field::Base<dim>
      {
	  typedef
	  typename libparest::Parameter::Field::Base<dim>::ParameterAssociation
	  ParameterAssociation;

	public:

	  typedef typename libparest::Parameter::Field::Base<dim>::Parameters  Parameters;
      
	  enum PassedRefinementIndicatorTypes
	  {
		none,
		dwr,
		gamma
	  };
      
	  VectorField (const Parameters                      &parameters,
		       const GlobalParameters<dim>           &global_parameters,
		       const ParameterAssociation             parameter_association,
		       const Triangulation<dim>              &coarse_grid,
		       const Bounds::Base<dim>               &parameter_bounds,
		       const Function<dim>                   &exact_coefficient);

	  VectorField (const Parameters               &parameters,
		       const GlobalParameters<dim>    &global_parameters,
		       const ParameterAssociation      parameter_association,
		       const Triangulation<dim>       &coarse_grid,
		       const GridTransfer::Base<dim>  &mesh_refinement,
		       const Bounds::Base<dim>        &parameter_bounds,
		       const Function<dim>            &exact_coefficient);
	  
	  virtual void end_gauss_newton_step ();

	  virtual libparest::PerStepStatistics *
	  create_and_set_statistics_object ();

	protected:
	  virtual
	  void get_refinement_criteria (const Vector<float>  &parameter_error,
					const unsigned int    pe_type,
					const Vector<double> &old_parameter_values,
					Vector<float>        &refinement_criteria);
	private:
      
	  void
	  compute_derivative_indicators (const Vector<double> &present_iterate,
					 Vector<float>        &indicators) const;
      };
  
    }
 
  }
  
}


#endif
