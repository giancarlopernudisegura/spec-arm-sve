//----------------------------   stationary_grid_refinement.h     ---------------------------
//    $Id: grid_refinement.h 3734 2008-12-14 20:05:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   stationary_grid_refinement.h     ---------------------------
#ifndef __parameter_estimation__stationary_grid_refinement_h
#define __parameter_estimation__stationary_grid_refinement_h
//----------------------------   stationary_grid_refinement.h     ---------------------------


#include <libparest/slave/stationary/problem_description.h>
#include <base/smartpointer.h>
#include <dofs/dof_handler.h>

namespace dealii
{
  template <typename> class Vector;
  template <typename> class BlockVector;
}


namespace libparest
{
  using namespace dealii;


  namespace Slave
  {
    namespace Stationary
    {
      namespace GridRefinement
      {

	template <int dim>
	class Base : public Subscriptor
	{
	  public:
	    Base (const ProblemDescription &problem_description);
      
	    virtual ~Base () {};
    
	    virtual
	    double
	    compute_indicators (const DoFHandler<dim>     &dof_handler,
				const BlockVector<double> &present_iterate,
				Vector<float>             &indicators,
				Vector<float>             &parameter_error) const = 0;

	  protected:
	    const SmartPointer<const ProblemDescription> problem_description;
	};

  
	template <int dim>
	class Lambda : public Base<dim>
	{
	  public:
	    Lambda (const ProblemDescription &problem_description);

	    virtual
	    double
	    compute_indicators (const DoFHandler<dim>     &dof_handler,
				const BlockVector<double> &present_iterate,
				Vector<float>             &indicators,
				Vector<float>             &parameter_error) const;
	};


	template <int dim>
	class U : public Base<dim>
	{
	  public:
	    U (const ProblemDescription &problem_description);
	
	    virtual
	    double
	    compute_indicators (const DoFHandler<dim>     &dof_handler,
				const BlockVector<double> &present_iterate,
				Vector<float>             &indicators,
				Vector<float>             &parameter_error) const;
	};


	template <int dim>
	class GradLambda : public Base<dim>
	{
	  public:
	    GradLambda (const ProblemDescription &problem_description);
	
	    virtual
	    double
	    compute_indicators (const DoFHandler<dim>     &dof_handler,
				const BlockVector<double> &present_iterate,
				Vector<float>             &indicators,
				Vector<float>             &parameter_error) const;
	};


	template <int dim>
	class GradU : public Base<dim>
	{
	  public:
	    GradU (const ProblemDescription &problem_description);
	
	    virtual
	    double
	    compute_indicators (const DoFHandler<dim>     &dof_handler,
				const BlockVector<double> &present_iterate,
				Vector<float>             &indicators,
				Vector<float>             &parameter_error) const;
	};


	template <int dim>
	class GradGradLambda : public Base<dim>
	{
	  public:
	    GradGradLambda (const ProblemDescription &problem_description);
	
	    virtual
	    double
	    compute_indicators (const DoFHandler<dim>     &dof_handler,
				const BlockVector<double> &present_iterate,
				Vector<float>             &indicators,
				Vector<float>             &parameter_error) const;
	};


	template <int dim>
	class GradGradU : public Base<dim>
	{
	  public:
	    GradGradU (const ProblemDescription &problem_description);
	
	    virtual
	    double
	    compute_indicators (const DoFHandler<dim>     &dof_handler,
				const BlockVector<double> &present_iterate,
				Vector<float>             &indicators,
				Vector<float>             &parameter_error) const;
	};


	template <int dim>
	class WeightedGradGrad : public Base<dim>
	{
	  public:
	    WeightedGradGrad (const ProblemDescription &problem_description);
	
	    virtual
	    double
	    compute_indicators (const DoFHandler<dim>     &dof_handler,
				const BlockVector<double> &present_iterate,
				Vector<float>             &indicators,
				Vector<float>             &parameter_error) const;
	};

      }
    }
 
  }
}



//----------------------------   stationary_grid_refinement.h     ---------------------------
// end of #ifndef __parameter_estimation__stationary_grid_refinement_h
#endif
//----------------------------   stationary_grid_refinement.h     ---------------------------
