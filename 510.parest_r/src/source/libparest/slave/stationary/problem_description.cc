/* $Id: problem_description.cc 1673 2003-09-03 16:37:50Z wolf $ */

#include <libparest/slave/stationary/problem_description.h>

namespace libparest
{
  namespace Slave
  {
    namespace Stationary 
    {
      ProblemDescription::
      ProblemDescription (const unsigned int n_primal_variables,
			  const unsigned int n_dual_variables,
			  const unsigned int n_parameter_variables)
		      :
		      n_primal_variables (n_primal_variables),
		      n_dual_variables (n_dual_variables),
		      n_parameter_variables (n_parameter_variables),
		      n_variables (n_primal_variables +
				   n_dual_variables +
				   n_parameter_variables)
      {}


  
      std::vector<bool>
      ProblemDescription::get_primal_variables () const 
      {
	std::vector<bool> retval (n_variables, false);
	for (unsigned int i=0; i<n_variables; ++i)
	  retval[i] = (is_primal_variable(i) == true);
	return retval;
      }
  

      std::vector<bool>
      ProblemDescription::get_dual_variables () const 
      {
	std::vector<bool> retval (n_variables, false);
	for (unsigned int i=0; i<n_variables; ++i)
	  retval[i] = (is_dual_variable(i) == true);
	return retval;
      }
  


      std::vector<bool>
      ProblemDescription::get_parameter_variables () const 
      {
	std::vector<bool> retval (n_variables, false);
	for (unsigned int i=0; i<n_variables; ++i)
	  retval[i] = (is_parameter_variable(i) == true);
	return retval;
      }
  
    }
  }
}
