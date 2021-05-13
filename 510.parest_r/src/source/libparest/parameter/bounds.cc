/* $Id: bounds.cc 3805 2009-05-13 12:25:21Z bangerth $ */

#include <libparest/parameter/bounds.h>
#include <lac/vector.h>
#include <dofs/dof_handler.h>
#include <fe/fe.h>
#include <numerics/vectors.h>


namespace libparest
{
  namespace Parameter
  {
    namespace Field 
    {
      namespace Bounds
      {
        
        template <int dim>
        Base<dim>::~Base ()
        {}



        template <int dim>
        double
        Base<dim>::minimal_value (const DoFHandler<dim> &dof_handler) const
        {
          std::vector<double>
            lower_bound (dof_handler.n_dofs()),
            upper_bound (dof_handler.n_dofs());
          get_bounds (dof_handler, lower_bound, upper_bound);

          return *std::min_element (lower_bound.begin(), lower_bound.end());
        }
        


        template <int dim>
        double
        Base<dim>::maximal_value (const DoFHandler<dim> &dof_handler) const
        {
          std::vector<double>
            lower_bound (dof_handler.n_dofs()),
            upper_bound (dof_handler.n_dofs());
          get_bounds (dof_handler, lower_bound, upper_bound);

          return *std::max_element (upper_bound.begin(), upper_bound.end());
        }
        



        template <int dim>
        SimpleScalarBounds<dim>::SimpleScalarBounds (const double lower_bound,
                                                     const double upper_bound)
                        :
                        lower_bound (lower_bound),
                        upper_bound (upper_bound)
        {
          Assert (lower_bound <= upper_bound, ExcInternalError());
        }


  
        template <int dim>
        void
        SimpleScalarBounds<dim>::get_bounds  (const DoFHandler<dim> &dof_handler,
                                              std::vector<double>   &lower_bounds,
                                              std::vector<double>   &upper_bounds) const
        {
          Assert (dof_handler.get_fe().n_components() == 1, ExcInternalError());
          Assert (dof_handler.n_dofs() == lower_bounds.size(), ExcInternalError());
          Assert (dof_handler.n_dofs() == upper_bounds.size(), ExcInternalError());
    
          std::fill (lower_bounds.begin(), lower_bounds.end(), lower_bound);
          std::fill (upper_bounds.begin(), upper_bounds.end(), upper_bound);
        }



        template <int dim>
        VariableScalarBounds<dim>::
	VariableScalarBounds (const Function<dim> &lower_bound,
			      const Function<dim> &upper_bound)
                        :
                        lower_bound (&lower_bound),
                        upper_bound (&upper_bound)
        {}


	
        template <int dim>
        VariableScalarBounds<dim>::
	VariableScalarBounds ()
        {}
	

  
        template <int dim>
        void
        VariableScalarBounds<dim>::get_bounds  (const DoFHandler<dim> &dof_handler,
						std::vector<double>   &lower_bounds,
						std::vector<double>   &upper_bounds) const
        {
          Assert (dof_handler.get_fe().n_components() == 1, ExcInternalError());
          Assert (dof_handler.n_dofs() == lower_bounds.size(), ExcInternalError());
          Assert (dof_handler.n_dofs() == upper_bounds.size(), ExcInternalError());

	  Vector<double> tmp (dof_handler.n_dofs());
	  VectorTools::interpolate (dof_handler, *lower_bound, tmp);
	  std::copy (tmp.begin(), tmp.end(), lower_bounds.begin());

	  VectorTools::interpolate (dof_handler, *upper_bound, tmp);
	  std::copy (tmp.begin(), tmp.end(), upper_bounds.begin());
        }


        template <int dim>
        ParsedFunctionScalarBounds<dim>::
	ParsedFunctionScalarBounds (const std::string &lower_bound,
				    const std::string &upper_bound)
        {
	  lower_bound_function.initialize ((dim == 2 ?
					    "x,y" :
					    "x,y,z"),
					   lower_bound,
					   typename FunctionParser<dim>::ConstMap());
	  upper_bound_function.initialize ((dim == 2 ?
					    "x,y" :
					    "x,y,z"),
					   upper_bound,
					   typename FunctionParser<dim>::ConstMap());
	  
					   
					   
					   
					   
					   
	  this->lower_bound = &lower_bound_function;
	  this->upper_bound = &upper_bound_function;
	}

      }
    }
  }
  



  namespace Parameter
  {
    namespace Field
    {
      namespace Bounds 
      {
        template class Base<deal_II_dimension>;
        template class SimpleScalarBounds<deal_II_dimension>;
        template class VariableScalarBounds<deal_II_dimension>;
	template class ParsedFunctionScalarBounds<deal_II_dimension>;
      }
    }
  }
}
