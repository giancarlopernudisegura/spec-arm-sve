//----------------------------   parameter_regularization.h     ---------------------------
//    $Id: regularization.h 3734 2008-12-14 20:05:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2006, 2007, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   parameter_regularization.h     ---------------------------
#ifndef __parameter_estimation__parameter_regularization_h
#define __parameter_estimation__parameter_regularization_h
//----------------------------   parameter_regularization.h     ---------------------------


#include <fe/fe_values.h>
#include <libparest/parameter/regularization_base.h>


namespace libparest
{
  using namespace dealii;


  namespace Parameter
  {
    namespace Field
    {
      namespace Regularization
      {


	template <int dim>
	class L2 : public libparest::Parameter::Field::Regularization::Base<dim>
	{
	  public:
	    L2 (const bool use_information_for_regularization);
	    
	    virtual void build_R (const DoFHandlers<dim> &dof_handlers,
				  const Vector<double>   &linearization_point,
				  const double            beta,
				  const Vector<float>    &information_content,
				  SparseMatrix<double>   &R) const;

		  
	    virtual void build_rhs (const DoFHandlers<dim> &dof_handlers,
				    const Vector<double>   &linearization_point,
				    const double            beta,
				    const Vector<float>    &information_content,
				    Vector<double>         &rhs) const;
	  
	    virtual double model_misfit (const DoFHandlers<dim> &dof_handlers,
					 const Vector<double>   &linearization_point,
					 const double            beta,
					 const Vector<float>    &information_content) const;
	  
	    virtual void
	    beta_r_prime (const DoFHandler<dim>  &dof_handler,
			  const unsigned int      component,
			  const Vector<double>   &present_iterate,
			  const Vector<double>   &weights,
			  const double           &beta,
			  const Vector<float>    &information_content,
			  Vector<float>          &output_vector) const;

	    virtual
	    void
	    beta_r_prime_on_subcells (const DoFHandlers<dim> &dof_handlers,
				      const Vector<double>   &present_iterate,
				      const double           &beta,
				      const Vector<float>    &information_content,
				      Vector<double>         &output_vector) const;

	    virtual
	    void
	    make_sparsity_pattern (const DoFHandlers<dim> &dof_handlers,
				   SparsityPattern        &sparsity_pattern) const;
	  private:
	    void build_R_1 (const DoFHandlers<dim> &dof_handlers,
			    const Vector<double>   &linearization_point,
			    const double            beta,
			    const Vector<float>    &information_content,
			    SparseMatrix<double>   &R,
			    const std::pair<unsigned int, unsigned int> &cell_range,
			    Threads::ThreadMutex   &mutex) const;

	    void build_rhs_1 (const DoFHandlers<dim> &dof_handlers,
			      const Vector<double>   &linearization_point,
			      const double            beta,
			      const Vector<float>    &information_content,
			      Vector<double>         &rhs,
			      const std::pair<unsigned int, unsigned int> &cell_range,
			      Threads::ThreadMutex   &mutex) const;
	  
	    void model_misfit_1 (const DoFHandlers<dim> &dof_handlers,
				 const Vector<double>   &linearization_point,
				 const double            beta,
				 const Vector<float>    &information_content,
				 const std::pair<unsigned int, unsigned int> &cell_range,
				 double                 &contribution) const;

	    void
	    beta_r_prime_1 (const DoFHandler<dim>        &dof_handler,
			    const unsigned int            component,
			    const Vector<double>         &present_iterate,
			    const Vector<double>         &weights,
			    Vector<float>                &output_vector,
			    const double                 &beta,
			    const Vector<float>    &information_content,
			    const std::pair<unsigned int, unsigned int> range) const;
	  
	    void
	    beta_r_prime_on_subcells_1 (const DoFHandlers<dim>        &dof_handlers,
					const Vector<double>          &present_iterate,
					const double                  &beta,
					const Vector<float>    &information_content,
					Vector<double>                &output_vector,
					const std::pair<unsigned int, unsigned int> range) const;
	};



	template <int dim>
	class H1 : public libparest::Parameter::Field::Regularization::Base<dim>
	{
	  public:
	    H1 (const bool use_information_for_regularization);

	    virtual void build_R (const DoFHandlers<dim> &dof_handlers,
				  const Vector<double>   &linearization_point,
				  const double            beta,
				  const Vector<float>    &information_content,
				  SparseMatrix<double>   &R) const;

		  
	    virtual void build_rhs (const DoFHandlers<dim> &dof_handlers,
				    const Vector<double>   &linearization_point,
				    const double            beta,
				    const Vector<float>    &information_content,
				    Vector<double>         &rhs) const;
	  
	    virtual double model_misfit (const DoFHandlers<dim> &dof_handlers,
					 const Vector<double>   &linearization_point,
					 const double            beta,
					 const Vector<float>    &information_content) const;
	  
	    virtual void
	    beta_r_prime (const DoFHandler<dim>        &dof_handler,
			  const unsigned int            component,
			  const Vector<double>         &present_iterate,
			  const Vector<double>         &weights,
			  const double                 &beta,
			  const Vector<float>    &information_content,
			  Vector<float>                &output_vector) const;

	    virtual
	    void
	    beta_r_prime_on_subcells (const DoFHandlers<dim> &dof_handlers,
				      const Vector<double>   &present_iterate,
				      const double           &beta,
				      const Vector<float>    &information_content,
				      Vector<double>         &output_vector) const;

	    virtual
	    void
	    make_sparsity_pattern (const DoFHandlers<dim> &dof_handlers,
				   SparsityPattern        &sparsity_pattern) const;
	  private:
	    typedef typename DoFHandler<dim>::active_cell_iterator active_cell_iterator;
	  
	    void build_R_1 (const DoFHandlers<dim> &dof_handlers,
			    const Vector<double>   &linearization_point,
			    const double            beta,
			    const Vector<float>    &information_content,
			    SparseMatrix<double>   &R,
			    const std::pair<unsigned int, unsigned int> &cell_range,
			    Threads::ThreadMutex   &mutex) const;

	    void build_rhs_1 (const DoFHandlers<dim> &dof_handlers,
			      const Vector<double>   &linearization_point,
			      const double            beta,
			      const Vector<float>    &information_content,
			      Vector<double>         &rhs,
			      const std::pair<unsigned int, unsigned int> &cell_range,
			      Threads::ThreadMutex   &mutex) const;
	  
	    void model_misfit_1 (const DoFHandlers<dim> &dof_handlers,
				 const Vector<double>   &linearization_point,
				 const std::pair<unsigned int, unsigned int> &cell_range,
				 double                 &contribution) const;

	    void
	    beta_r_prime_1 (const DoFHandler<dim>        &dof_handler,
			    const unsigned int            component,
			    const Vector<double>         &present_iterate,
			    const Vector<double>         &weights,
			    Vector<float>                &output_vector,
			    const double                 &beta,
			    const Vector<float>    &information_content,
			    const std::pair<unsigned int, unsigned int> range) const;
	  
	    void
	    beta_r_prime_on_subcells_1 (const DoFHandlers<dim>        &dof_handlers,
					const Vector<double>          &present_iterate,
					const double                  &beta,
					const Vector<float>    &information_content,
					Vector<double>                &output_vector,
					const std::pair<unsigned int, unsigned int> range) const;

	    static
	    void
	    get_active_neighbors (const active_cell_iterator        &cell,
				  std::vector<active_cell_iterator> &neighbors);

	    static
	    void
	    get_cell_data (const active_cell_iterator &cell,
			   FEValues<dim>              &fe_midpoint_values,
			   const Vector<double>       &present_iterate,
			   std::vector<double>        &iterate_values,
			   double                     &midpoint_value,
			   Point<dim>                 &center);
	};
      


	template <int dim>
	class BV : public libparest::Parameter::Field::Regularization::Base<dim>
	{
	  public:	    
	    BV (const Triangulation<dim> &tria,
		const bool use_information_for_regularization);
	  
	    virtual void build_R (const DoFHandlers<dim> &dof_handlers,
				  const Vector<double>   &linearization_point,
				  const double            beta,
				  const Vector<float>    &information_content,
				  SparseMatrix<double>   &R) const;

		  
	    virtual void build_rhs (const DoFHandlers<dim> &dof_handlers,
				    const Vector<double>   &linearization_point,
				    const double            beta,
				    const Vector<float>    &information_content,
				    Vector<double>         &rhs) const;
	  
	    virtual double model_misfit (const DoFHandlers<dim> &dof_handlers,
					 const Vector<double>   &linearization_point,
					 const double            beta,
					 const Vector<float>    &information_content) const;
	  
	    virtual void
	    beta_r_prime (const DoFHandler<dim>        &dof_handler,
			  const unsigned int            component,
			  const Vector<double>         &present_iterate,
			  const Vector<double>         &weights,
			  const double                 &beta,
			  const Vector<float>    &information_content,
			  Vector<float>                &output_vector) const;

	    virtual
	    void
	    beta_r_prime_on_subcells (const DoFHandlers<dim> &dof_handlers,
				      const Vector<double>   &present_iterate,
				      const double           &beta,
				      const Vector<float>    &information_content,
				      Vector<double>         &output_vector) const;

	    virtual
	    void
	    make_sparsity_pattern (const DoFHandlers<dim> &dof_handlers,
				   SparsityPattern        &sparsity_pattern) const;
	  private:
	    const double diameter_of_domain;
	  
	    void build_R_1 (const DoFHandlers<dim> &dof_handlers,
			    const Vector<double>   &linearization_point,
			    const double            beta,
			    const Vector<float>    &information_content,
			    SparseMatrix<double>   &R,
			    const std::pair<unsigned int, unsigned int> &cell_range,
			    Threads::ThreadMutex   &mutex) const;

	    void build_rhs_1 (const DoFHandlers<dim> &dof_handlers,
			      const Vector<double>   &linearization_point,
			      const double            beta,
			      const Vector<float>    &information_content,
			      Vector<double>         &rhs,
			      const std::pair<unsigned int, unsigned int> &cell_range,
			      Threads::ThreadMutex   &mutex) const;
	  
	    void model_misfit_1 (const DoFHandlers<dim> &dof_handlers,
				 const Vector<double>   &linearization_point,
				 const double            beta,
				 const Vector<float>    &information_content,
				 const std::pair<unsigned int, unsigned int> &cell_range,
				 double                 &contribution) const;

	    void
	    beta_r_prime_1 (const DoFHandler<dim>        &dof_handler,
			    const unsigned int            component,
			    const Vector<double>         &present_iterate,
			    const Vector<double>         &weights,
			    Vector<float>                &output_vector,
			    const double                 &beta,
			    const Vector<float>    &information_content,
			    const std::pair<unsigned int, unsigned int> range) const;
	  
	    void
	    beta_r_prime_on_subcells_1 (const DoFHandlers<dim>       &dof_handlers,
					const Vector<double>         &present_iterate,
					const double                 &beta,
					const Vector<float>    &information_content,
					Vector<double>               &output_vector,
					const std::pair<unsigned int, unsigned int> range) const;
	};
      
      }
    }
  }
 
}


//----------------------------   parameter_regularization.h     ---------------------------
// end of #ifndef __parameter_estimation__parameter_regularization_h
#endif
//----------------------------   parameter_regularization.h     ---------------------------
