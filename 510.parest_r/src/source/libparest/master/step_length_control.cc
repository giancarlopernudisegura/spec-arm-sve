#include <libparest/master/step_length_control.h>
#include <base/tensor.h>
#include <base/thread_management.h>
#include <cmath>
#include <algorithm>
#include <iostream>

#define DEBUG_STEP_LENGTH_CONTROL false

namespace libparest
{
  using namespace dealii;


  namespace Master
  {    
    namespace StepLengthControl 
    {

      ResidualComputationBase::~ResidualComputationBase ()
      {}
      
      
      double
      ResidualComputationBase::compute_trial_residual (const double alpha) const
      {
	std::vector<double> a(1, alpha);
	std::vector<double> r(1, -1.);
	compute_trial_residual (a,r);
	return r[0];
      }



      const std::pair<double,double> LineSearch::invalid_minimum = std::make_pair (-1., -1.);


      struct LessThanByFirstNumber 
      {
	  template <typename T1, typename T2>
	  bool operator () (const std::pair<T1,T2> &t1,
			    const std::pair<T1,T2> &t2) 
	    {
	      return (t1.first < t2.first);
	    }
      };
  


      LineSearch::LineSearch (const ResidualComputationBase &residual_computation)
		      :
		      residual_computation (residual_computation)
      {}



      void
      LineSearch::sort_results () 
      {
	std::sort (res_of_alpha.begin(), res_of_alpha.end(),
		   LessThanByFirstNumber());
      }
  


      void
      LineSearch::compute_initial_residuals ()
      {
					 
					 
					 
					 
					 
					 
					 
					 
	const double trial_alphas1[] = { 0.0, 0.7, 0.9, 1.05 };
        const unsigned int n_trial_alphas = sizeof(trial_alphas1) /
                                            sizeof(trial_alphas1[0]);
	const std::vector<double> trial_alphas (&trial_alphas1[0],
						&trial_alphas1[n_trial_alphas]);
	std::vector<double> residuals(n_trial_alphas);
	residual_computation.compute_trial_residual (trial_alphas,
						     residuals);
	
					 
					 
					 
	initial_residual = residuals[0];
	for (unsigned int i=1; i<n_trial_alphas; ++i)
	  {
	    Assert (residuals[i] >= 0, ExcInternalError());
	    res_of_alpha.push_back (std::make_pair(trial_alphas[i],
						   residuals[i]));
	  };

	sort_results ();
      }



      double
      LineSearch::nearest_residual (const double alpha) const
      {
	double dist = +1e6;
	double res  = +1e6;
    
	for (unsigned int i=0; i<res_of_alpha.size(); ++i)
	  if (std::fabs(res_of_alpha[i].first - alpha) < dist)
	    {
	      dist = std::fabs(res_of_alpha[i].first - alpha);
	      res = res_of_alpha[i].second;
	    };
    
	return res;
      }


  
      std::pair<double,double>
      LineSearch::compute_minimum_residual () const
      {
					 
					 
					 
					 
					 
	Tensor<2,3> coefficient_matrix;
	Tensor<1,3> rhs;
	for (unsigned int n=0; n<res_of_alpha.size(); ++n)
	  {
	    const double x = res_of_alpha[n].first;
	    const double y = res_of_alpha[n].second;
        
	    coefficient_matrix[0][0] += x*x*x*x;
	    coefficient_matrix[1][0] += x*x*x;
	    coefficient_matrix[0][1] += x*x*x;
	    coefficient_matrix[2][0] += x*x;
	    coefficient_matrix[1][1] += x*x;
	    coefficient_matrix[0][2] += x*x;
	    coefficient_matrix[2][1] += x;
	    coefficient_matrix[1][2] += x;
	    coefficient_matrix[2][2] += 1;

	    rhs[0] += y*x*x;
	    rhs[1] += y*x;
	    rhs[2] += y;
	  };
	Tensor<1,3> solution;
	contract (solution, invert(coefficient_matrix), rhs);

	const double a=solution[0], b=solution[1], c=solution[2];

					 
					 
	const double extremum = -b/2/a;
	const double extremal_value = a*extremum*extremum + b*extremum + c;

	if (DEBUG_STEP_LENGTH_CONTROL == true)
	  {
	    std::cout << "************** STEP LENGTH CONTROL " << std::endl
		      << "Existing residuals:" << std::endl;
	    for (unsigned int i=0; i<res_of_alpha.size(); ++i)
	      std::cout << "  " << res_of_alpha[i].first << ' ' << res_of_alpha[i].second
			<< std::endl;
	    std::cout << "Computed parabola: " << a << "*x*x + " << b << "*x + " << c
		      << std::endl;
	    std::cout << "Extremum = " << extremum << ' ' << extremal_value << std::endl;
	    std::cout << "Initial residual = " << initial_residual << std::endl;
	    std::cout << "Minimal residual = " << min_computed_residual() << std::endl;
	  }
    
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
	if ((a<=0)
	    ||
	    (extremal_value > initial_residual)
	    ||
	    (extremal_value > 1.2 * min_computed_residual()))
	  return invalid_minimum;

					 
    
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 

	const double expected_residual
	  = (extremal_value > 0 ? extremal_value : nearest_residual(extremum)/5);
    
	return std::make_pair (extremum, expected_residual);
      }
  

				       
				       
      double
      LineSearch::rightmost_alpha () const
      {
	return res_of_alpha.back().first;
      }



      double
      LineSearch::leftmost_alpha () const
      {
	return res_of_alpha.front().first;
      }


      double
      LineSearch::min_computed_residual () const
      {
	double s = res_of_alpha.front().second;
	for (unsigned int i=0; i<res_of_alpha.size(); ++i)
	  if (res_of_alpha[i].second < s)
	    s = res_of_alpha[i].second;
    
	return s;
      }



				       
				       
				       
      double
      LineSearch::distance (const double alpha) const
      {
	double a = 1e6;
	for (unsigned int i=0; i<res_of_alpha.size(); ++i)
	  if (std::fabs(res_of_alpha[i].first - alpha) < a)
	    a = std::fabs(res_of_alpha[i].first - alpha);
	return a;
      }
  


      bool
      LineSearch::accept_minimum (const std::pair<double,double> &proposed_minimum) const
      {
					 
					 
					 
					 
					 
					 
					 
					 
					 
	if (proposed_minimum.first < 0.05)
	  return true;
    
					 
					 
					 
					 
					 
					 
	if ((proposed_minimum == invalid_minimum)
	    ||
	    ((proposed_minimum.first < 0.2) &&
	     (leftmost_alpha() > 0.4)))
	  return false;

	const bool interior_minimum = ((proposed_minimum.first < rightmost_alpha())
				       &&
				       (proposed_minimum.first > leftmost_alpha()));
	const double nearest_distance = distance (proposed_minimum.first);
    
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
	const double accuracy = 0.1;
	if ((interior_minimum && (nearest_distance <= accuracy))
	    ||
	    (nearest_distance <= 0.5*accuracy))
	  return true;
	else
	  return false;
      }


  
      std::pair<double,double>
      LineSearch::compute_step_length ()
      {
					 
					 
	compute_initial_residuals ();
    
					 
					 
					 
					 
					 
	do 
	  {
	    const std::pair<double,double>
	      minimum = compute_minimum_residual ();        

	    if (accept_minimum (minimum))
	      return fixup_minimum(minimum);

	    compute_new_trial_residual ();
	  }
	while (true);
      }


      std::pair<double,double>
      LineSearch::fixup_minimum (const std::pair<double,double> &in) const
      {
	if ((in == invalid_minimum) ||
	    (in.first < 0.02))
	  return std::make_pair (0., initial_residual);
	else
	  return in;
      }


      void
      LineSearch::compute_new_trial_residual ()
      {
	const double a = next_trial_step_length();
	const double r = residual_computation.compute_trial_residual(a);
	Assert (r >= 0, ExcInternalError());
	res_of_alpha.push_back (std::make_pair(a,r));
	sort_results ();
      }


  
      double
      LineSearch::next_trial_step_length () const
      {
	const std::pair<double,double>
	  minimum_residual = compute_minimum_residual();
	const double minimum = minimum_residual.first;
	const bool extremum_is_minimum
	  = (minimum_residual != invalid_minimum);

					 
					 
					 
					 
	if ((minimum <= 0.) || (!extremum_is_minimum))
	  return 0.5 * leftmost_alpha();

					 
					 
					 
	if (minimum < leftmost_alpha()*0.5)
	  return leftmost_alpha()*0.5;

	if (minimum > rightmost_alpha()*2)
	  return rightmost_alpha()*2;
    
					 
					 
					 
	return minimum;
      }

    }
 
  }

}
