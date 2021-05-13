#include <me-tomography/geometry.h>
#include <me-tomography/boundary_sources.h>
#include <base/function.h>
#include <base/utilities.h>
#include <lac/vector.h>

#include <fstream>
#include <vector>
#include <complex>
#include <algorithm>


namespace METomography
{
  namespace BoundarySources
  {
    namespace BreastPhantomGeometry
    {	
      
				       /**
					* Experimental data on the
					* breast phantom
					* geometry. Despite being in
					* the BoundarySources
					* namespace, this class is
					* really used to represent
					* measurements, i.e. sources
					* for the adjoint variable.
					*
					* Reads one data
					* point per fiber at the
					* beginning and then uses them
					* to generate a source. If we
					* have only a single
					* experiment, then use all
					* sources at the same time;
					* otherwise, use the fiber
					* corresponding to the number
					* of the experiment as only
					* active fiber.
					*
					* Note that filenames are 1-based,
					* whereas we count experiment
					* numbers 0-based...
					*/
      template <int dim>
      class Experimental : public Function<dim>
      {
	public:
					   /**
					    * Constructor. Reads the data from
					    * the given set of files.
					    */
	  Experimental (const std::string  &file_base_name,
			const SourceComponents source_components,
			const double        scaling_factor,
			const unsigned int  experiment_no,
			const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  source_components (source_components),
			  scaling_factor (scaling_factor),
			  detector_values (METomography::Geometry::BreastPhantom::n_detectors,
					   std::complex<double> (0,0))
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
		      double r, i, modulation_depth;
		      in >> r
			 >> i
			 >> modulation_depth;
		      detector_values[d] = std::complex<double> (r,i);
		    }

		  AssertThrow (in, ExcIO());
		}
	      else
						 
		for (unsigned int s=0; s<METomography::Geometry::BreastPhantom::n_sources; ++s)
		  {
		    std::ifstream in((file_base_name+"."+
				      Utilities::int_to_string(s+1)).c_str());
		    AssertThrow (in, ExcIO());
		    
		    for (unsigned int d=0;
			 d<METomography::Geometry::BreastPhantom::n_detectors; ++d)
		      {
			double r, i, modulation_depth;
			in >> r
			   >> i
			   >> modulation_depth;
			detector_values[d] += std::complex<double> (r,i);
		      }

		    AssertThrow (in, ExcIO());
		  }
	    }

					   /**
					    * Return either the real
					    * (component==0) or imaginary
					    * (component==1) component of the data
					    * read in from file.
					    */
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());

	      switch (source_components)
		{
		  case fluorescence_components:
		  {
		    if (component < 2)
		      return 0;
		    
		    double value = 0;
		  
		    for (unsigned int d=0;
			 d<METomography::Geometry::BreastPhantom::n_detectors; ++d)
		      value +=
			METomography::Geometry::BreastPhantom::Fibers::
			measurement_value (p, d, (component == 2 ?
						  detector_values[d].real() :
						  detector_values[d].imag()));
		    
		    return scaling_factor * value;
		  }

		  default:
			Assert (false, ExcNotImplemented());
			return 0;
		}
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = Experimental<dim>::value(p,component);
	    }
	  
	private:
					   /**
					    * Determine whether this
					    * class will be used as a
					    * source for the forward
					    * problem (components 0
					    * and 1 will be used,
					    * i.e. excitation
					    * fluences) or as a source
					    * for the dual problem
					    * (i.e. measurements;
					    * components 2 and 3 will
					    * be used, i.e. emission
					    * fluence).
					    */
	  const SourceComponents source_components;
	  
					   /**
					    * A scaling factor that shall be
					    * applied to experimental data (needed
					    * because we usually don't know the
					    * exact amplitude.
					    */
	  const double scaling_factor;

					   /**
					    * Field to hold the data read from
					    * the intput files.
					    */
	  std::vector<std::complex<double> > detector_values;
      };



				       /**
					* An illumination pattern for the upper
					* half sphere from a plane source at a
					* constant angle, i.e. vertical only at
					* one point of the half sphere. The
					* illumination intensity consequently
					* varies with the angle between
					* incidence and the normal at a given
					* point of the surface.
					*/
      template <int dim>
      class NonVerticalAreaIllumination : public Function<dim>
      {
	public:
	  NonVerticalAreaIllumination ()
			  :
			  Function<dim> (4)
	    {}
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
	      if (component >= 2)
		return 0;
  
					       
					       
					       
	      if (p(dim-1) <= 0)
		return 0;

					       
					       
					       
					       
	      const Point<dim> n = p/std::sqrt(p.square());

					       
					       
					       
					       
	      static const Point<dim> center = (dim==2 ?
						throw 1 :
						Point<dim>(0.866,0,0.5))
					       * 3.5;
	      const Point<dim> tau = center/std::sqrt(center.square());

					       
					       
					       
					       
					       
					       
					       
					       
					       
					       
	      if (component == 0)
		return std::max(0., n*tau);
	      else
		return 0;
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component)
		  = NonVerticalAreaIllumination<dim>::value(p,component);
	    }
      };



				       /**
					* Use the point sources defined by the
					* location of illumination fivers. If
					* the number of experiments is greater
					* than one, then use one source fiber
					* for each experiment, otherwise use all
					* sources on at the same time.
					*
					* The source intensity is constant
					* within a small disk centered around
					* each source fiber.
					*/
      template <int dim>
      class PointSources : public Function<dim>
      {
	public:
	  PointSources (const std::vector<int> &sources,
			const unsigned int  experiment_no,
			const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  sources (sources),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {
	      AssertThrow (sources.size() > 0,
			   ExcMessage("You have to specify at least one source number"));
            
	      for (unsigned int i=0; i<sources.size(); ++i)
		{
		  AssertThrow (sources[i] >= 0,
			       ExcMessage ("Source numbers have to be positive"));
		  AssertThrow (sources[i] < static_cast<int>(METomography::Geometry::BreastPhantom::n_sources),
			       ExcMessage("Source number too large!"));
		}

	      if (n_experiments > 1)
		AssertThrow (n_experiments == sources.size(),
			     ExcMessage ("Number of experiments must be either 1 (all sources on), "
					 "or equal to the number of specified sources (one source "
					 "on for each experiment"));
	    }
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
					       
					       
	      if (component >= 1)
		return 0;

					       
					       
					       
					       
					       
					       
					       
	      if (n_experiments != 1)
		{
		  return
		    METomography::Geometry::BreastPhantom::Fibers::
		    source_intensity (p, sources[experiment_no]);
		}
	      else
		{
		  double value = 0;
		  for (unsigned int s=0; s<sources.size(); ++s)
		    value += METomography::Geometry::BreastPhantom::Fibers::
			     source_intensity (p, sources[s]);
		  return value;
		}
	    }
	

	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component)
		  = PointSources<dim>::value(p,component);
	    }

	private:
					   /**
					    * Numbers of those sources that
					    * should be assumed switched on for
					    * this computation.
					    */
	  const std::vector<int> sources;

					   /**
					    * Store the number of the experiment
					    * this source is used for for
					    * multiple-experiment settings. For
					    * the single-experiment case, this is
					    * always zero.
					    */
	  const unsigned int experiment_no;

					   /**
					    * Also store the number of experiments
					    * there are in total. This may be used
					    * to compute the spacing of source
					    * locations, etc.
					    */
	  const unsigned int n_experiments;
      };



      template <int dim>
      const Function<dim> *
      create_experimental_function (const std::string     &file_base_name,
				    const SourceComponents source_components,
				    const double           scaling_factor,
				    const unsigned int     experiment_no,
				    const unsigned int     n_experiments)
      {
	return new Experimental<dim> (file_base_name,
				      source_components,
				      scaling_factor,
				      experiment_no,
				      n_experiments);
      }
      


      template <int dim>
      const Function<dim> *
      parse_forcing_function (const std::string &name,
			      const unsigned int experiment_no,
			      const unsigned int n_experiments)
      {
	if (name == "phantom: nonvertical area illumination")
	  {
	    Assert (experiment_no == 0, ExcNotImplemented());
	    return new NonVerticalAreaIllumination<dim>();
	  }
	else if (name.find ("phantom: point sources") == 0)
					   
					   
					   
	  {
					     
	    const std::string
	      number_list (name,
			   std::string ("phantom: point sources").size(),
			   std::string::npos);
        
	    return
	      new PointSources<dim>
	      (Utilities::string_to_int(Utilities::split_string_list (number_list)),
	       experiment_no,
	       n_experiments);
	  }

					 
					 
					 
					 
	return 0;
      }




      template
      const Function<deal_II_dimension> *
      create_experimental_function<deal_II_dimension> (const std::string     &file_base_name,
						       const SourceComponents source_components,
						       const double           scaling_factor,
						       const unsigned int     experiment_no,
						       const unsigned int     n_experiments);
      template
      const Function<deal_II_dimension> *
      parse_forcing_function<deal_II_dimension> (const std::string &name,
						 const unsigned int experiment_no,
						 const unsigned int n_experiments);
    
    }
  
  }
  
}
