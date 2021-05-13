//----------------------------   parameter_bounds.h     ---------------------------
//    $Id: bounds.h 3805 2009-05-13 12:25:21Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2004, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   parameter_bounds.h     ---------------------------
#ifndef __libparest__parameter_bounds_h
#define __libparest__parameter_bounds_h
//----------------------------   parameter_bounds.h     ---------------------------


#include <base/subscriptor.h>
#include <base/smartpointer.h>
#include <base/function.h>
#include <base/function_parser.h>
#include <dofs/dof_handler.h>
#include <vector>

namespace libparest
{
  using namespace dealii;


  namespace Parameter
  {
    
    namespace Field
    {
      namespace Bounds 
      {

        template <int dim>
        class Base : public Subscriptor
        {
          public:
            virtual ~Base ();
    
            virtual void get_bounds (const DoFHandler<dim> &dof_handler,
                                     std::vector<double>   &lower_bounds,
                                     std::vector<double>   &upper_bounds) const = 0;

            virtual double minimal_value (const DoFHandler<dim> &dof_handler) const;
            

            virtual double maximal_value (const DoFHandler<dim> &dof_handler) const;
        };



        template <int dim>
        class SimpleScalarBounds : public Base<dim>
        {
          public:
            SimpleScalarBounds (const double lower_bound,
                                const double upper_bound);

            virtual void get_bounds (const DoFHandler<dim> &dof_handler,
                                     std::vector<double>   &lower_bounds,
                                     std::vector<double>   &upper_bounds) const;
          private:
            const double lower_bound, upper_bound;
        };



        template <int dim>
        class VariableScalarBounds : public Base<dim>
        {
          public:
            VariableScalarBounds (const Function<dim> &lower_bound,
				  const Function<dim> &upper_bound);
	    
            virtual void get_bounds (const DoFHandler<dim> &dof_handler,
                                     std::vector<double>   &lower_bounds,
                                     std::vector<double>   &upper_bounds) const;

	  protected:
            VariableScalarBounds ();

	    
            SmartPointer<const Function<dim> > lower_bound;
	    SmartPointer<const Function<dim> > upper_bound;
        };



	template <int dim>
        class ParsedFunctionScalarBounds : public VariableScalarBounds<dim>
        {
          public:
            ParsedFunctionScalarBounds (const std::string &lower_bound,
					const std::string &upper_bound);
          private:
	    FunctionParser<dim> upper_bound_function;
	    FunctionParser<dim> lower_bound_function;
        };
	
      }
    
    }

  }
  
}



//----------------------------   parameter_bounds.h     ---------------------------
// end of #ifndef __libparest__parameter_bounds_h
#endif
//----------------------------   parameter_bounds.h     ---------------------------
