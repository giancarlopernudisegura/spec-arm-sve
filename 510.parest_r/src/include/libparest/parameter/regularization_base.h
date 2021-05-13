//----------------------------   parameter_regularization_base.h     ---------------------------
//    $Id: regularization_base.h 3734 2008-12-14 20:05:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2006, 2007, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   parameter_regularization_base.h     ---------------------------
#ifndef __parameter_estimation__parameter_regularization_base_h
#define __parameter_estimation__parameter_regularization_base_h
//----------------------------   parameter_regularization_base.h     ---------------------------


#include <dofs/dof_handler.h>

namespace dealii
{
  template <typename number> class Vector;
  template <typename number> class SparseMatrix;
}

namespace libparest
{
  using namespace dealii;



  namespace Parameter
  {
    namespace Field
    {
				       // forward declaration
      template <int dim> class DoFHandlers;
    
      namespace Regularization
      {
					 // forward declaration
	template <int dim> class Base;
      
	enum RegularizationFunctional
	{
	      L2_norm,
	      H1_seminorm,
	      BV_seminorm
	};

	std::string
	get_regularization_functional_names ();

	RegularizationFunctional
	parse_regularization_functional_name (const std::string &name);



	template <int dim>
	Base<dim> *
	create_regularization_functional (const RegularizationFunctional name,
					  const bool use_information_for_regularization);

	template <int dim>
	class Base : public Subscriptor
	{
	  public:
	    Base (const bool use_information_for_regularization);
	    
	    virtual ~Base ();
	  
	    virtual void build_R (const DoFHandlers<dim> &dof_handlers,
				  const Vector<double>   &linearization_point,
				  const double            beta,
				  const Vector<float>    &information_content,
				  SparseMatrix<double>   &R) const = 0;
	  
	    virtual void build_rhs (const DoFHandlers<dim> &dof_handlers,
				    const Vector<double>   &linearization_point,
				    const double            beta,
				    const Vector<float>    &information_content,
				    Vector<double>         &rhs) const = 0;

	    virtual double model_misfit (const DoFHandlers<dim> &dof_handlers,
					 const Vector<double>   &linearization_point,
					 const double            beta,
					 const Vector<float>    &information_content) const = 0;
	  
	    virtual
	    void
	    beta_r_prime (const DoFHandler<dim>  &dof_handler,
			  const unsigned int      component,
			  const Vector<double>   &present_iterate,
			  const Vector<double>   &weights,
			  const double           &beta,
			  const Vector<float>    &information_content,
			  Vector<float>          &output_vector) const = 0;

	    virtual
	    void
	    beta_r_prime_on_subcells (const DoFHandlers<dim> &dof_handlers,
				      const Vector<double>   &present_iterate,
				      const double           &beta,
				      const Vector<float>    &information_content,
				      Vector<double>         &output_vector) const = 0;

	    virtual
	    void
	    make_sparsity_pattern (const DoFHandlers<dim> &dof_handlers,
				   SparsityPattern        &sparsity_pattern) const = 0;

	  protected:
	    const bool use_information_for_regularization;

	    double adjusted_beta (const double beta,
				  const double information_density) const;
	};
      

	template <int dim>
	inline
	double
	Base<dim>::adjusted_beta (const double beta,
				  const double information_density) const
	{
	  if (use_information_for_regularization == false)
	    return beta;
	  else
	    {
	      Assert (false, ExcNotImplemented());
	      return 0;
	    }
	}
	
	
					 // defer implementation of
					 // concrete classes to another
					 // file

      } // namespace Regularization
    } // namespace Field
  } // namespace Parameter
 
}


//----------------------------   parameter_regularization_base.h     ---------------------------
// end of #ifndef __parameter_estimation__parameter_regularization_base_h
#endif
//----------------------------   parameter_regularization_base.h     ---------------------------
