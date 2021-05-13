//----------------------------   step_length_control.h     ---------------------------
//    $Id: step_length_control.h 2649 2006-03-15 15:26:05Z wolf $
//    Version: $Name$
//
//    Copyright (C) 1999, 2000, 2001, 2002, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   step_length_control.h     ---------------------------
#ifndef __libparest__step_length_control_h
#define __libparest__step_length_control_h
//----------------------------   step_length_control.h     ---------------------------


#include <utility>
#include <vector>


namespace libparest
{
  namespace Master
  {
    
    namespace StepLengthControl
    {

      class ResidualComputationBase 
      {
	public:
	  virtual ~ResidualComputationBase ();
	  
	  virtual
	  void compute_trial_residual (const std::vector<double>  alpha,
				       std::vector<double>       &residual) const = 0;

	  double
	  compute_trial_residual (const double alpha) const;
      };
  

      class LineSearch 
      {
	public:
	  LineSearch (const ResidualComputationBase &residual_computation);

	  std::pair<double,double> compute_step_length ();
      
	private:
	  static const std::pair<double,double> invalid_minimum;

	  const ResidualComputationBase &residual_computation;

	  std::vector<std::pair<double,double> > res_of_alpha;

	  double initial_residual;
      
	  void compute_initial_residuals ();

	  void sort_results ();

	  double nearest_residual (const double alpha) const;

	  double min_computed_residual () const;
      

	  std::pair<double,double>
	  compute_minimum_residual () const;

	  double rightmost_alpha () const;

	  double leftmost_alpha () const;

	  double distance (const double alpha) const;

	  bool accept_minimum (const std::pair<double,double> &proposed_minimum) const;

	  void compute_new_trial_residual ();

	  double next_trial_step_length () const;

	  std::pair<double,double>
	  fixup_minimum (const std::pair<double,double> &in) const;
      };
    } 
  }
}


//----------------------------   step_length_control.h     ---------------------------
// end of #ifndef __libparest__step_length_control_h
#endif
//----------------------------   step_length_control.h     ---------------------------
