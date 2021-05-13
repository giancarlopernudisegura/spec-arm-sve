/* $Id: grid_refinement.cc 2660 2006-03-20 21:53:13Z amit $ */

#include <libparest/slave/stationary/grid_refinement.h>
#include <base/quadrature_lib.h>
#include <lac/block_vector.h>
#include <fe/fe.h>
#include <fe/fe_values.h>
#include <numerics/derivative_approximation.h>

#include <grid/tria_iterator.h>
#include <dofs/dof_accessor.h>

namespace libparest
{
  namespace Slave
  {
    namespace Stationary
    {
      namespace GridRefinement
      {



	template <int dim>
	Base<dim>::
	Base (const ProblemDescription &problem_description)
			:
			problem_description (&problem_description)
	{}



    
/* --------------------- GridRefinement::Lambda ---------------- */


	template <int dim>
	Lambda<dim>::Lambda (const ProblemDescription &problem_description)
			:
			GridRefinement::Base<dim> (problem_description)
	{}
    
    

	template <int dim>
	double
	Lambda<dim>::
	compute_indicators (const DoFHandler<dim>     &dof_handler,
			    const BlockVector<double> &present_iterate,
			    Vector<float>             &indicators,
			    Vector<float>             &/*parameter_errors*/) const
	{
	  const unsigned int
	    dofs_per_cell = dof_handler.get_fe().dofs_per_cell;
  
	  Vector<double> local_solution (dofs_per_cell);
  
	  Vector<float>::iterator cell_indicator = indicators.begin();
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = dof_handler.begin_active(),
	    endc = dof_handler.end();
  
	  for (; cell != endc; ++cell, ++cell_indicator)
	    {
	      cell->get_dof_values (present_iterate, local_solution);
	      *cell_indicator = 0;
	      for (unsigned int i=0; i<dofs_per_cell; ++i)
		{
		  const unsigned int component
		    = dof_handler.get_fe().system_to_component_index(i).first;
	      
						   
		  if (this->problem_description->is_dual_variable(component))
		    *cell_indicator += local_solution(i) * local_solution(i);
		};
	  
					       
					       
					       
					       
					       
					       
					       
					       
	      *cell_indicator = std::sqrt(*cell_indicator * cell->measure() /
					  cell->diameter());
	    };

  
					   
	  return 0;
	}
  


/* --------------------- GridRefinement::U ---------------- */


	template <int dim>
	U<dim>::U (const ProblemDescription &problem_description)
			:
			GridRefinement::Base<dim> (problem_description)
	{}
    
    

	template <int dim>
	double
	U<dim>::
	compute_indicators (const DoFHandler<dim>     &dof_handler,
			    const BlockVector<double> &present_iterate,
			    Vector<float>             &indicators,
			    Vector<float>             &/*parameter_errors*/) const
	{
	  const unsigned int
	    dofs_per_cell = dof_handler.get_fe().dofs_per_cell;
  
	  Vector<double> local_solution (dofs_per_cell);
  
	  Vector<float>::iterator cell_indicator = indicators.begin();
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = dof_handler.begin_active(),
	    endc = dof_handler.end();
  
	  for (; cell != endc; ++cell, ++cell_indicator)
	    {
	      cell->get_dof_values (present_iterate, local_solution);
	      *cell_indicator = 0;
	      for (unsigned int i=0; i<dofs_per_cell; ++i)
		{
		  const unsigned int component
		    = dof_handler.get_fe().system_to_component_index(i).first;
	      
						   
		  if (this->problem_description->is_primal_variable(component))
		    *cell_indicator += local_solution(i) * local_solution(i);
		};
	  
					       
					       
					       
					       
					       
					       
					       
					       
	      *cell_indicator = std::sqrt(*cell_indicator * cell->measure() /
					  cell->diameter()) ;
	    };

  
					   
	  return 0;
	}
  


/* --------------------- GridRefinement::GradLambda ---------------- */


	template <int dim>
	GradLambda<dim>::GradLambda (const ProblemDescription &problem_description)
			:
			GridRefinement::Base<dim> (problem_description)
	{}
    
    

	template <int dim>
	double
	GradLambda<dim>::
	compute_indicators (const DoFHandler<dim>     &dof_handler,
			    const BlockVector<double> &present_iterate,
			    Vector<float>             &indicators,
			    Vector<float>             &/*parameter_errors*/) const
	{
	  QMidpoint<dim> quadrature;
	  FEValues<dim> fe_values (dof_handler.get_fe(),
				   quadrature, update_gradients);
	  const unsigned int n_variables = this->problem_description->n_variables;
	  std::vector<std::vector<Tensor<1,dim> > >
	    iterate_gradients (1, std::vector<Tensor<1,dim> >(n_variables));
  
	  Vector<float>::iterator cell_indicator = indicators.begin();
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = dof_handler.begin_active(),
	    endc = dof_handler.end();
  
	  for (; cell != endc; ++cell, ++cell_indicator)
	    {
	      fe_values.reinit (cell);
	      fe_values.get_function_grads  (present_iterate,
					     iterate_gradients);
					       
					       
					       
					       
					       
	      double grad_lambda = 0;
	      for (unsigned int i=0; i<n_variables; ++i)
		if (this->problem_description->is_dual_variable(i))
		  grad_lambda += Point<dim>(iterate_gradients[0][i]).square();
	  
	      *cell_indicator = std::sqrt(cell->diameter() *
					  cell->measure() *
					  grad_lambda);
	    };
  
					   
	  return 0;
	}




/* --------------------- GridRefinement::GradU ---------------- */


	template <int dim>
	GradU<dim>::GradU (const ProblemDescription &problem_description)
			:
			GridRefinement::Base<dim> (problem_description)
	{}
    
    

	template <int dim>
	double
	GradU<dim>::
	compute_indicators (const DoFHandler<dim>     &dof_handler,
			    const BlockVector<double> &present_iterate,
			    Vector<float>             &indicators,
			    Vector<float>             &/*parameter_errors*/) const
	{
	  QMidpoint<dim> quadrature;
	  FEValues<dim> fe_values (dof_handler.get_fe(),
				   quadrature, update_gradients);

	  const unsigned int n_variables = this->problem_description->n_variables;
	  std::vector<std::vector<Tensor<1,dim> > >
	    iterate_gradients (1, std::vector<Tensor<1,dim> >(n_variables));
  
	  Vector<float>::iterator cell_indicator = indicators.begin();
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = dof_handler.begin_active(),
	    endc = dof_handler.end();
  
	  for (; cell != endc; ++cell, ++cell_indicator)
	    {
	      fe_values.reinit (cell);
	      fe_values.get_function_grads  (present_iterate,
					     iterate_gradients);
					       
					       
					       
					       
					       
	      double grad_u = 0;
	      for (unsigned int i=0; i<n_variables; ++i)
		if (this->problem_description->is_primal_variable(i))
		  grad_u += Point<dim>(iterate_gradients[0][i]).square();
	  
	      *cell_indicator = std::sqrt(cell->diameter() *
					  cell->measure() *
					  grad_u);
	    };
  
					   
	  return 0;
	}



/* --------------------- GridRefinement::GradGradLambda ---------------- */


	template <int dim>
	GradGradLambda<dim>::GradGradLambda (const ProblemDescription &problem_description)
			:
			GridRefinement::Base<dim> (problem_description)
	{}
    
    

	template <int dim>
	double
	GradGradLambda<dim>::
	compute_indicators (const DoFHandler<dim>     &dof_handler,
			    const BlockVector<double> &present_iterate,
			    Vector<float>             &indicators,
			    Vector<float>             &/*parameter_errors*/) const
	{
					   
					   
					   
	  Vector<double> tmp (present_iterate.begin(), present_iterate.end());

					   
					   
	  if (this->problem_description->n_dual_variables == 1)
	    {
	      for (unsigned int component=0;
		   component<this->problem_description->n_variables; ++component)
		if (this->problem_description->is_dual_variable(component))
		  {
		    DerivativeApproximation::
		      approximate_second_derivative (dof_handler, tmp,
						     indicators, component);
						     
						     
						     
		    break;
		  };
	    }
	  else
					     
					     
	    {
	      Vector<float> x(indicators.size());
	      for (unsigned int component=0;
		   component<this->problem_description->n_variables; ++component)
		if (this->problem_description->is_dual_variable(component))
		  {
		    x = 0;
		    DerivativeApproximation::
		      approximate_second_derivative (dof_handler, tmp,
						     x, component);
		    indicators += x;
		  };
	    };
      

					   
					   
	  Vector<float>::iterator cell_indicator = indicators.begin();
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = dof_handler.begin_active(),
	    endc = dof_handler.end();  
	  for (; cell != endc; ++cell, ++cell_indicator)
	    *cell_indicator *= std::sqrt(cell->diameter() *
					 cell->measure()) *
			       cell->diameter();
    
					   
	  return 0;
	}



/* --------------------- GridRefinement::GradGradU ---------------- */


	template <int dim>
	GradGradU<dim>::GradGradU (const ProblemDescription &problem_description)
			:
			GridRefinement::Base<dim> (problem_description)
	{}
    
    

	template <int dim>
	double
	GradGradU<dim>::
	compute_indicators (const DoFHandler<dim>     &dof_handler,
			    const BlockVector<double> &present_iterate,
			    Vector<float>             &indicators,
			    Vector<float>             &/*parameter_errors*/) const
	{
					   
					   
					   
	  Vector<double> tmp (present_iterate.begin(), present_iterate.end());

					   
					   
	  if (this->problem_description->n_dual_variables == 1)
	    {
	      for (unsigned int component=0;
		   component<this->problem_description->n_variables; ++component)
		if (this->problem_description->is_primal_variable(component))
		  {
		    DerivativeApproximation::
		      approximate_second_derivative (dof_handler, tmp,
						     indicators, component);
						     
						     
						     
		    break;
		  };
	    }
	  else
					     
					     
	    {
	      Vector<float> x(indicators.size());
	      for (unsigned int component=0;
		   component<this->problem_description->n_variables; ++component)
		if (this->problem_description->is_primal_variable(component))
		  {
		    x = 0;
		    DerivativeApproximation::
		      approximate_second_derivative (dof_handler, tmp,
						     x, component);
		    indicators += x;
		  };
	    };
    
					   
					   
	  Vector<float>::iterator cell_indicator = indicators.begin();
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = dof_handler.begin_active(),
	    endc = dof_handler.end();  
	  for (; cell != endc; ++cell, ++cell_indicator)
        *cell_indicator *= std::sqrt(cell->diameter() * cell->measure()) * cell->diameter();

					   
	  return 0;
	}

    

/* --------------------- GridRefinement::WeightedGradGrad ---------------- */


	template <int dim>
	WeightedGradGrad<dim>::WeightedGradGrad (const ProblemDescription &problem_description)
			:
			GridRefinement::Base<dim> (problem_description)
	{}
    
    

	template <int dim>
	double
	WeightedGradGrad<dim>::
	compute_indicators (const DoFHandler<dim>     &dof_handler,
			    const BlockVector<double> &present_iterate,
			    Vector<float>             &indicators,
			    Vector<float>             &/*parameter_errors*/) const
	{
					   
					   
					   
	  Vector<double> tmp (present_iterate.begin(), present_iterate.end());

					   
					   
	  if (this->problem_description->n_dual_variables == 1)
	    {
	      Assert (false, ExcNotImplemented());
	    }
	  else
					     
					     
	    {
	      Vector<float> x(indicators.size());
	      for (unsigned int component=0;
		   component<this->problem_description->n_variables; ++component)
		if (this->problem_description->is_primal_variable(component)
		    ||
		    this->problem_description->is_dual_variable(component))
		  {
		    x = 0;
		    DerivativeApproximation::
		      approximate_second_derivative (dof_handler, tmp,
						     x, component);
		    
		    if (x.l1_norm() != 0)
		      x /= x.l1_norm();
		    indicators += x;
		  };
	    };
    
					   
					   
	  Vector<float>::iterator cell_indicator = indicators.begin();
	  typename DoFHandler<dim>::active_cell_iterator
	    cell = dof_handler.begin_active(),
	    endc = dof_handler.end();  
	  for (; cell != endc; ++cell, ++cell_indicator)
        *cell_indicator *= std::sqrt(cell->diameter() * cell->measure()) * cell->diameter();

					   
	  return 0;
	}

    
      }

  


      namespace GridRefinement
      {
	template class Base<deal_II_dimension>;
	template class Lambda<deal_II_dimension>;
	template class U<deal_II_dimension>;
	template class GradLambda<deal_II_dimension>;
	template class GradU<deal_II_dimension>;
	template class GradGradLambda<deal_II_dimension>;
	template class GradGradU<deal_II_dimension>;
	template class WeightedGradGrad<deal_II_dimension>;
      }
    }
  }
}
