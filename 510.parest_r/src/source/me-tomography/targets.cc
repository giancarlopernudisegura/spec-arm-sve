/* $Id: targets.cc 3619 2008-06-10 20:14:39Z bangerth $ */


#include <me-tomography/targets.h>
#include <base/point.h>
#include<iostream>

namespace METomography
{
  namespace Targets
  {
    template <int dim>
    TargetBase<dim>::~TargetBase ()
    {}

    
				     /**
				      * A wrapper for descriptor classes that
				      * wrap it into something that the
				      * TargetBase class expects.
				      */
    template <int dim, template <int> class Descriptor>
    class TargetWrapper : public TargetBase<dim>
    {
      public:
	TargetWrapper ()
	  {}
	
	
	virtual
	const Function<dim> &
	get_q () const
	  {
	    static const typename Descriptor<dim>::q q;
	    return q;
	  }
    };
    
        
    template <int dim>
    struct NonzeroBackgroundNoTarget
    {
	class q : public Function<dim>
	{
	  public:
	    q () {};

	    virtual double value (const Point<dim> &,
				  const unsigned int) const 
	      {
		const double target_value = 0.05;
		return target_value;
	      }
	};
    };


/**
 * Set of functions for a single target
 */
    template <int dim>
    struct SingleTarget
    {
	class q : public Function<dim>
	{
	  public:
	    q () {};

	    virtual double value (const Point<dim> &p,
				  const unsigned int) const 
	      {
		const double background_value = 0.0;
		const double target_value     = 2.5;
		
		const Point<dim> center = (dim==2 ?
					   Point<dim>(4.,4.) :
					   Point<dim>(4., 4., 6.));
		
		return (center.distance(p)<.5 ? target_value : background_value);
	      }
	};
    };


/**
 * Set of functions for two targets
 */
    template <int dim>
    struct TwoTargets
    {
	class q : public Function<dim>
	{
	  public:
	    q () {};

	    virtual double value (const Point<dim> &p,
				  const unsigned int) const 
	      {
		const double background_value = 0.005;
		const double target_value     = 0.15;

		const Point<dim> center1 = (dim==2 ?
					    Point<dim>(.5,.3) :
					    Point<dim>(.5,.3,.3));
		const Point<dim> center2 = (dim==2 ?
					    Point<dim>(.5,.7) :
					    Point<dim>(.5,.7,.3));
		const double radius = 0.2;
		return ((center1.distance(p)<radius) ||
			(center2.distance(p)<radius)
			? target_value : background_value);
	      }
	};
    };

/**
 * Set of functions for three targets
 */
    template <int dim>
    struct ThreeTargets
    {
	class q : public Function<dim>
	{
	  public:
	    q () {};

	    virtual double value (const Point<dim> &p,
				  const unsigned int) const 
	      {
		const double background_value = 0.0;
		const double target_value     = 0.598;

		const Point<dim> center1 = (dim==2 ?
					    Point<dim>(.5,.3) :
					    Point<dim>(4.92,4.32,6.36));
		
		const Point<dim> center2 = (dim==2 ?
					    Point<dim>(.5,.7) :
					    Point<dim>(3.67,4.08,6.40));
		
		const Point<dim> center3 = (dim==2 ?
					    Point<dim>(.5,.7) :
					    Point<dim>(2.10,3.29,6.38));
	
		const double radius = 0.5;
		
		return (((center1.distance(p)<radius) ||
			(center2.distance(p)<radius) ||
			(center3.distance(p)<radius))
			? target_value : background_value);
	      }
	};
    };



/**
 * Set of functions for vessel like cylinderical targets
 */
 
    template <int dim>
    struct Vessel
    {
	class q : public Function<dim>
	{
	  public:
	    q () {};

	    virtual double value (const Point<dim> &p,
				  const unsigned int) const 
	      {
		const double background_value = 0.0;
		const double target_value     = 0.598;

		                                       /* we will simulate a vessel for now
						          by drawing a thin cylinder between
							  two prespecified points
							  */
		const Point<dim> end1 = (dim==2 ?
					    Point<dim>(.5,.3) :
					    Point<dim>(.5,.5,6.875));
		const Point<dim> end2 = (dim==2 ?
					    Point<dim>(.5,.7) :
					    Point<dim>(7.,7.,6.875)); 
                                                      /* Now find the point on the line joining
						         end1 and end2 which is closest to p
							 */
		double temp =  ((p(0)-end1(0))*(end2(0)-end1(0))
		              + (p(1)-end1(1))*(end2(1)-end1(1))			    	
			      + (p(2)-end1(2))*(end2(2)-end1(2)))
			      / ((end1.distance(end2))*(end1.distance(end2)));
		Point<3> intPt = end1+temp*(end2-end1);
		
		
	        const double radius = 0.125;
		 return ( intPt.distance(p) < radius ? target_value : background_value);
		
	      }
	};
    };

    namespace BreastPhantomGeometry
    {
/**
 * Set of functions for a single target
 */
      template <int dim>
      struct SingleTarget
      {
	  class q : public Function<dim>
	  {
	    public:
	      q () {};

	      virtual double value (const Point<dim> &p,
				    const unsigned int) const 
		{
		  const double background_value = 0.005;
		  const double target_value     = 0.15;

						   
						   
						   
						   
						   
		  const Point<dim> center = (dim==2 ?
					     throw 1 :
					     Point<dim>(0.866,0,0.5))
					    * 3.5;
                  
						   
		  const double radius = .5;
		  
		  return (center.distance(p)<radius ? target_value : background_value);
		}
	  };
      };
    }

    
    
    template <int dim>
    std::string target_names ()
    {
      return "nonzero background no target|single target|two targets|three targets|vessel|phantom: single target";
    }


    
    template <int dim>
    std::string default_target_name ()
    {
      return "single target";
    }


    template <int dim>
    const TargetBase<dim> &
    target_descriptor (const std::string &name)
    {
      if (name == "nonzero background no target")
	{
	  static const TargetWrapper<dim,NonzeroBackgroundNoTarget> target;
	  return target;
	}
      if (name == "single target")
	{
	  static const TargetWrapper<dim,SingleTarget> target;
	  return target;
	}
      else if (name == "two targets")
	{
	  static const TargetWrapper<dim,TwoTargets> target;
	  return target;
	}
     else if (name == "three targets")
	{
	  static const TargetWrapper<dim,ThreeTargets> target;
	  return target;
	}
     else if (name == "vessel")
	{
	  static const TargetWrapper<dim,Vessel> target;
	  return target;
	}
      else if (name == "phantom: single target")
	{
	  static const TargetWrapper<dim,BreastPhantomGeometry::SingleTarget>
	    target;
	  return target;
	}

      AssertThrow (false, ExcNotImplemented());
      static const TargetWrapper<dim,SingleTarget>
	dummy;
      return dummy;
    }
  }
}


namespace METomography
{
  namespace Targets
  {
    template class TargetBase<deal_II_dimension>;
    
    template std::string target_names<deal_II_dimension> ();
    template std::string default_target_name<deal_II_dimension> ();

    template const TargetBase<deal_II_dimension> &
    target_descriptor (const std::string &);
  }
}
