//----------------------------   stationary_boundary_values.h     ---------------------------
//    $Id: boundary_values.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2003, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   stationary_boundary_values.h     ---------------------------
#ifndef __parameter_estimation__stationary_boundary_values_h
#define __parameter_estimation__stationary_boundary_values_h
//----------------------------   stationary_boundary_values.h     ---------------------------


#include <base/function.h>
#include <base/smartpointer.h>
#include <libparest/slave/stationary/problem_description.h>

namespace libparest
{
  using namespace dealii;


  namespace Slave
  {
    namespace Stationary
    {

      template <int dim>
      class BoundaryValues : public Function<dim> 
      {
	public:
	  BoundaryValues (const Function<dim>      &u,
			  const ProblemDescription &problem_description);

	  virtual
	  void
	  vector_value (const Point<dim> &point,
			Vector<double>   &values) const;

	  virtual
	  void
	  vector_value_list (const std::vector<Point<dim> > &p_list,
			     std::vector<Vector<double> >   &value_list) const;

	private:
	  const SmartPointer<const Function<dim> > u;

	  const ProblemDescription problem_description;
      };



    }  
  }
}


//----------------------------   stationary_boundary_values.h     ---------------------------
// end of #ifndef __parameter_estimation__stationary_boundary_values_h
#endif
//----------------------------   stationary_boundary_values.h     ---------------------------
