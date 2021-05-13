/* $Id: measurements.cc 2891 2006-08-01 23:03:39Z bangerth $ */

#include <base/function.h>
#include <base/utilities.h>

#include <me-tomography/geometry.h>

#include <fstream>


namespace METomography
{
  namespace Measurements
  {
    namespace WeightFunctions
    {
				       /**
					* Weight functions for the cubic/brick
					* geometries where the measurement
					* surface is at z=8.
					*/
      namespace PlanarZ8
      {
	template <int dim>
	class Circle3_5cm : public Function<dim> 
	{
	  public:
	    virtual double value (const Point<dim> &p,
				  const unsigned int component) const
	      {
		Assert (component == 0, ExcIndexRange (0, 1, component));

		if ((dim==3) && (p[2] <=6))
		  return 0;

		const double R = 3.5;
		return (Point<2>(p[0], p[1]).distance (Point<2>(4,4)) < R
			?
			1
			:
			0);
	      }
	};
      }
      
				       /**
					* Weight functions for the breast
					* phantom geometry.
					*/
      namespace BreastPhantomGeometry
      {
					 /**
					  * A weight function that assumes a
					  * fixed modulation depth of 1 for
					  * all fibers equally, where the
					  * weight is nonzero in the vicinity
					  * of all detector fibers.
					  */
	template <int dim>
	class FixedModulationDepth : public Function<dim> 
	{
	  public:
	    virtual double value (const Point<dim> &p,
				  const unsigned int component) const
	      {
		Assert (component == 0, ExcIndexRange (0, 1, component));
		
		double value = 0;
		for(unsigned int i=0;
		    i<METomography::Geometry::BreastPhantom::n_detectors;
		    ++i)
		  value += METomography::Geometry::BreastPhantom::Fibers::
			   measurement_modulation_depth (p, i, 1.);
		return value;
	      }
	};


					 /**
					  * A class that reads the modulation
					  * depth values for a given
					  * experiment from an input file and
					  * assigns each detector fiber an
					  * individual weight based on the
					  * modulation depth.
					  *
					  * If only a single experiment is
					  * running, then we add up all the
					  * modulation depths of all
					  * experiment files. Otherwise, each
					  * experiment will use different
					  * modulation depths.
					  *
					  * Note that filenames are 1-based,
					  * whereas we count experiment
					  * numbers 0-based...
					  */
	template <int dim>
	class Experimental : public Function<dim>
	{
	  public:
	    Experimental (const std::string  &file_base_name,
			  const unsigned int  experiment_no,
			  const unsigned int  n_experiments)
			    :
			    modulation_depths (METomography::Geometry::BreastPhantom::n_detectors,
					       0.)
	      {
		if (n_experiments > 1)
		  {
		    AssertThrow (n_experiments == METomography::Geometry::BreastPhantom::n_sources,
				 ExcMessage ("Number of experiments must be either 1 (all sources on), "
					     "or equal to the number of specified sources (one source "
					     "on for each experiment"));
		    
						     
						     
						     
						     
		    std::ifstream in((file_base_name+"."+
				      Utilities::int_to_string(experiment_no+1)).c_str());
		    AssertThrow (in, ExcIO());

						     
						     
						     
						     
						     
		    for (unsigned int d=0;
			 d<METomography::Geometry::BreastPhantom::n_detectors; ++d)
		      {
			double real, imag;
			in >> real
			   >> imag
			   >> modulation_depths[d];
		      }

		    AssertThrow (in, ExcIO());
		  }
		else
						   
						   
						   
						   
		  for (unsigned int s=0;
		       s<METomography::Geometry::BreastPhantom::n_sources; ++s)
		    {
		      std::ifstream in((file_base_name+"."+
					Utilities::int_to_string(s+1)).c_str());
		      AssertThrow (in, ExcIO());
		      
		      for (unsigned int d=0;
			   d<METomography::Geometry::BreastPhantom::n_detectors; ++d)
			{
			  double real, imag, mod_depth;
			  in >> real
			     >> imag
			     >> mod_depth;
			  modulation_depths[d] += mod_depth;
			}
		      
		      AssertThrow (in, ExcIO());
		    }
	      }
	    
	    
	    virtual double value (const Point<dim> &p,
				  const unsigned int component) const
	      {
		Assert (component == 0, ExcIndexRange (0, 1, component));
		
		double value = 0;
		for(unsigned int i=0;
		    i<METomography::Geometry::BreastPhantom::n_detectors;
		    ++i)
		  value += METomography::Geometry::BreastPhantom::Fibers::
			   measurement_modulation_depth (p, i,
							 modulation_depths[i]);
		return value;
	      }

	  private:
					     /**
					      * Vector of modulation depths
					      * for each detector location.
					      */
	    std::vector<double> modulation_depths;
	};
	    
      }



      template <int dim>
      const Function<dim> *
      parse_weight_function (const std::string &name,
			     const unsigned int experiment_no,
			     const unsigned int n_experiments)
      {
	if (name == "constant")
	  return new ConstantFunction<dim> (1.0);
	else if (name == "3.5cm circle")
	  return new PlanarZ8::Circle3_5cm<dim> ();
	else if (name == "phantom: fixed modulation depth")
	  return new BreastPhantomGeometry::FixedModulationDepth<dim>();
	else if (name.find ("phantom: experimental") == 0)
	  {
					     
	    std::string file_base_name (name,
					std::string ("phantom: experimental").size(),
					std::string::npos);
	    while ((file_base_name.size() > 0)
		   &&
		   (file_base_name[0] == ' '))
	      file_base_name.erase (0,1);

	    return new BreastPhantomGeometry::Experimental<dim>(file_base_name,
								experiment_no,
								n_experiments);
	  }
	
	AssertThrow (false,
		     ExcMessage ((std::string ("Unknown measurement weight <")
				  +
				  name
				  + "> function").c_str()));
	return 0;
      }



      template <int dim>
      std::string
      default_weight_function ()
      {
	return "3.5cm circle";
      }
      
    }
  }



  namespace Measurements
  {
    namespace WeightFunctions
    {
      template
      const Function<deal_II_dimension> *
      parse_weight_function (const std::string &name,
			     const unsigned int experiment_no,
			     const unsigned int n_experiments);

      template
      std::string
      default_weight_function<deal_II_dimension> ();
    }
  }
}

