//-----------------   stationary_problem_description.h     -----------------
//    $Id: problem_description.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2004, 2006, 2009 by Wolfgang Bangerth
//
//-----------------   stationary_problem_description.h     -----------------
#ifndef __parameter_estimation__stationary_problem_description_h
#define __parameter_estimation__stationary_problem_description_h



#include <base/exceptions.h>
#include <base/subscriptor.h>
#include <vector>

namespace libparest
{
  using namespace dealii;


  namespace Slave
  {
    namespace Stationary 
    {

      class ProblemDescription : public Subscriptor
      {
	public:
	  const unsigned int n_primal_variables;

	  const unsigned int n_dual_variables;

	  const unsigned int n_parameter_variables;

	  const unsigned int n_variables;

	  ProblemDescription (const unsigned int n_primal_variables,
			      const unsigned int n_dual_variables,
			      const unsigned int n_parameter_variables);
    
	  bool is_primal_variable (const unsigned int n) const;

	  bool is_dual_variable (const unsigned int n) const;

	  bool is_parameter_variable (const unsigned int n) const;

	  std::vector<bool> get_primal_variables () const;

	  std::vector<bool> get_dual_variables () const;

	  std::vector<bool> get_parameter_variables () const;

          unsigned int
          get_primal_variable_index (const unsigned int i) const;

          unsigned int
          get_dual_variable_index (const unsigned int i) const;

          unsigned int
          get_parameter_variable_index (const unsigned int i) const;
          
	  DeclException2 (ExcInvalidComponent,
			  int, int,
			  << "The component's index " << arg1
			  << " must be smaller than the total number of components "
			  << arg2);
      };


/* ------------------------ inline and template functions ----------------- */
  
      inline
      bool
      ProblemDescription::
      is_primal_variable (const unsigned int n) const 
      {
	Assert (n < n_variables, ExcInvalidComponent(n,n_variables));
	return (n<n_primal_variables);
      }



      inline
      bool
      ProblemDescription::
      is_dual_variable (const unsigned int n) const 
      {
	Assert (n < n_variables, ExcInvalidComponent(n,n_variables));
	return ((n>=n_primal_variables) &&
		(n<n_primal_variables+n_dual_variables));
      }



      inline
      bool
      ProblemDescription::
      is_parameter_variable (const unsigned int n) const 
      {
	Assert (n < n_variables, ExcInvalidComponent(n,n_variables));
	return (n>=n_primal_variables+n_dual_variables);
      }



      inline
      unsigned int
      ProblemDescription::
      get_primal_variable_index (const unsigned int n) const 
      {
	Assert (n < n_variables, ExcInvalidComponent(n,n_variables));
        Assert (is_primal_variable(n), ExcInternalError());
	return n;
      }
      


      inline
      unsigned int
      ProblemDescription::
      get_dual_variable_index (const unsigned int n) const 
      {
	Assert (n < n_variables, ExcInvalidComponent(n,n_variables));
        Assert (is_dual_variable(n), ExcInternalError());
	return n-n_primal_variables;
      }
      


      inline
      unsigned int
      ProblemDescription::
      get_parameter_variable_index (const unsigned int n) const 
      {
	Assert (n < n_variables, ExcInvalidComponent(n,n_variables));
        Assert (is_parameter_variable(n), ExcInternalError());
	return n-n_primal_variables-n_dual_variables;
      }
      
    }
 
  }
  
}

//----------------------------   stationary_problem_description.h     ---------------------------
// end of #ifndef __parameter_estimation__stationary_problem_description_h
#endif
//----------------------------   stationary_problem_description.h     ---------------------------
