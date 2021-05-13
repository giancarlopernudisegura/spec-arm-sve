/* $Id: boundary_values.cc 1677 2003-09-03 20:10:05Z wolf $ */


#include <libparest/slave/stationary/boundary_values.h>
#include <base/point.h>
#include <lac/vector.h>


namespace libparest
{
  namespace Slave
  {
    namespace Stationary
    {
      template <int dim>
      BoundaryValues<dim>::
      BoundaryValues (const Function<dim> &u,
		      const ProblemDescription &problem_description)
		      :
		      Function<dim>(problem_description.n_variables),
		      u(&u),
		      problem_description (problem_description)
      {
	Assert (u.n_components == problem_description.n_primal_variables,
		ExcInternalError());
      }

      
      
      template <int dim>
      void
      BoundaryValues<dim>::
      vector_value (const Point<dim> &point,
		    Vector<double>   &values) const 
      {
	Assert (values.size()==this->n_components, ExcInternalError());

					 
	for (unsigned int i=0; i<problem_description.n_primal_variables; ++i)
	  values(i) = u->value(point, i);

					 
					 
					 
					 
					 
					 
					 
	for (unsigned int i=problem_description.n_primal_variables;
	     i<problem_description.n_variables; ++i)
	  values(i) = 0;
      }


      
      template <int dim>
      void
      BoundaryValues<dim>::
      vector_value_list (const std::vector<Point<dim> > &p_list,
			 std::vector<Vector<double> >   &value_list) const 
      {
	for (unsigned int i=0; i<p_list.size(); ++i)
	  BoundaryValues::vector_value (p_list[i], value_list[i]);
      }




      template class BoundaryValues<deal_II_dimension>;
    }
  }
}
