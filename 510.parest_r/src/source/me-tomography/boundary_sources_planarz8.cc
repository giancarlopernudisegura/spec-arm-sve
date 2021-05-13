#include <me-tomography/boundary_sources.h>

#include <base/function.h>
#include <base/point.h>
#include <base/utilities.h>
#include <lac/vector.h>

#include <fstream>



namespace 
{
  double sqr (const double s)
  {
    return s*s;
  }
}


namespace METomography
{
  namespace BoundarySources
  {
    namespace PlanarZ8
    {
				       /**
					* Base class for experimental data on
					* the cube phantom. Reads data on a
					* 129x129 grid in from files for real
					* and imaginary data and interpolates
					* between those data points.
					*/
      template <int dim>
      class ExperimentalDataBase
      {
	public:
					   /**
					    * Constructor. Reads the data from
					    * the given file name with
					    * "re" and "im" appended.
					    */
	  ExperimentalDataBase (const std::string  &file_base_name,
				const unsigned int  experiment_no,
				const unsigned int  n_experiments)
			  :
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {	
	      std::ifstream infileRe((file_base_name+".re").c_str());
	      AssertThrow (infileRe, ExcIO());
	
	      std::ifstream infileIm((file_base_name+".im").c_str());
	      AssertThrow (infileIm, ExcIO());
	
	      for(unsigned int i=0;i<n_points_per_direction;i++)
		for(unsigned int j=0;j<n_points_per_direction;j++)
		  {
		    infileRe >> source_re[i][j]; 
		    infileIm >> source_im[i][j]; 
		  }
	
	      Assert (experiment_no == 0, ExcNotImplemented());
	    }

					   /**
					    * Return either the real
					    * (component==0) or imaginary
					    * (component==1) component of the data
					    * read in from file.
					    */
	  double value (const Point<dim> &p,
			const unsigned int component) const
	    {
	      Assert (component < 2, ExcInternalError());

	      if (p(2) < 8)
		return 0;
	   
	   
	      const double xmin=0.,ymin=0.;   
	      const double xinterval=0.0625,yinterval=0.0625;   
					       
	      const unsigned int col=int((p(0)-xmin)/xinterval);
	      const unsigned int row=int((p(1)-ymin)/yinterval);

	      Assert (row < n_points_per_direction,
		      ExcIndexRange (row, 0, n_points_per_direction));
	      Assert (col < n_points_per_direction,
		      ExcIndexRange (col, 0, n_points_per_direction));

	      const double (*data_set)[n_points_per_direction][n_points_per_direction]
		= (component == 0 ?
		   &source_re :
		   &source_im);
	      
					       
					       
	      const double
		val1 = ((*data_set)[row][col]*
			(xinterval-(p(0)-xmin-col*xinterval))/xinterval
			+
			(*data_set)[row][col+1]*
			((p(0)-xmin-col*xinterval))/xinterval);
	  
	      const double
		val2 = ((*data_set)[row+1][col]*
			(xinterval-(p(0)-xmin-col*xinterval))/xinterval
			+
			(*data_set)[row+1][col+1]*
			((p(0)-xmin-col*xinterval))/xinterval);
	      
					       
					       
	      const double
		value = (val1*(yinterval-(p(1)-ymin-row*yinterval))/yinterval
			 + val2*((p(1)-ymin-row*yinterval))/yinterval);

	      return value;
	    }

	private:
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

					   /**
					    * Number of data points per space
					    * direction.
					    */
	  static const unsigned int n_points_per_direction = 129;
	  
					   /**
					    * Fields to hold the data read from
					    * the intput files.
					    */
	  double source_re[n_points_per_direction][n_points_per_direction]; 
	  double source_im[n_points_per_direction][n_points_per_direction];    
      };


      
				       /**
					* A single point on the surface, with
					* a radially linear decay from the
					* center.
					*/
      template <int dim>
      class PointOnSurface : public Function<dim>
      {
	public:
					   /**
					    * Set up a function that
					    * oscillates at one part of
					    * the boundary, where the
					    * boundary is subdivided into
					    * n_modes**(dim-1) parts.
					    */
	  PointOnSurface (const unsigned int  experiment_no,
			  const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {
	      Assert (experiment_no == 0, ExcNotImplemented());
	    }
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
	      if (component >= 2)
		return 0;
  
					       
					       
					       
	      if (p(0) < 4)
		return 0;

	      const Point<dim-1> in_plane
		= (dim == 2 ? Point<dim-1>(p(1)) : Point<dim-1>(p(1),p(2)));

	      const Point<dim-1> center
		= (dim == 2 ? Point<dim-1>(.5) : Point<dim-1>(.5, .5));
          
	      const double r = .2;
	      return (center.distance(in_plane) < r
		      ?
		      1.-center.distance(in_plane)/r
		      :
		      0.);
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = PointOnSurface<dim>::value(p,component);
	    }

	private:
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



				       /**
					* Planar vertical illumination with a
					* constant intensity everywhere.
					*/
      template <int dim>
      class VerticalAreaIllumination : public Function<dim>
      {
	public:
					   /**
					    * Set up a function that
					    * oscillates at one part of
					    * the boundary, where the
					    * boundary is subdivided into
					    * n_modes**(dim-1) parts.
					    */
	  VerticalAreaIllumination (const unsigned int  experiment_no,
				    const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {
	      Assert (experiment_no == 0,
		      ExcMessage ("This source pattern does not make sense "
				  "in the ME case."));
	    }
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
					       
					       
	      if (component >= 1)
		return 0;
  
	      if (p(2) < 8)
		return 0;
	
	      return 1.;	
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = VerticalAreaIllumination<dim>::value(p,component);
	    }

	private:
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


      
				       /**
					* Nonvertical illumination of constant
					* amplitude, but consequently
					* non-constant phase.
					*/
      template <int dim>
      class NonVerticalAreaIllumination : public Function<dim>
      {
	public:
					   /**
					    * Set up a function that
					    * oscillates at one part of
					    * the boundary, where the
					    * boundary is subdivided into
					    * n_modes**(dim-1) parts.
					    */
	  NonVerticalAreaIllumination (const unsigned int  experiment_no,
				       const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {}
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
	      if (component >= 2)
		return 0;
  
					       
					       
					       
	      if (p(2) < 8)
		return 0;

	      const Tensor<1,dim> k
		= (dim==2 ?
		   Point<dim> (1,-1) :
		   Point<dim> (1.,.5,-1.)) * 2*deal_II_numbers::PI;

					       
					       
					       
					       
					       
					       
	      const double phi
		= (1.*experiment_no/n_experiments) * deal_II_numbers::PI;
            
	      if (component == 0)
		return std::sin(p*k - phi);
	      else
		return std::cos(p*k - phi);
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = NonVerticalAreaIllumination<dim>::value(p,component);
	    }

	private:
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



				       /**
					* In the single experiment case, a
					* single Gaussian profile at the
					* center of the domain. In the
					* multiple experiment case one of a
					* number of dot scattered across the
					* surface.
					*/
      template <int dim>
      class Gaussian : public Function<dim>
      {
	public:
	  Gaussian (const unsigned int  experiment_no,
		    const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {}
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
					       
					       
	      if (component >= 1)
		return 0;
  
					       
					       
					       
	      if ((p[2] < 6) || (p[0] >= 8) || (p[0] <= 0) || (p[1] >= 8) || (p[1] <= 0))
		return 0;

					       
					       
					       
					       
	      Point<dim> shift;
	      const double width = 2.;
	      if (n_experiments != 1)
		{
		  const double width_me=0.5; 

		  static const double
		    lx[]={2.5,2.5,2.5,2.5,3.5,3.5,3.5,3.5,4.5,4.5,4.5,4.5,5.5,5.5,5.5,5.5};
		  static const double
		    ly[]={2.5,3.5,4.5,5.5,2.5,3.5,4.5,5.5,2.5,3.5,4.5,5.5,2.5,3.5,4.5,5.5};

		  Assert (experiment_no < sizeof(lx)/sizeof(lx[0]),
			  ExcIndexRange (experiment_no, 0, sizeof(lx)/sizeof(lx[0])));
		  
		  const Point<2> centers(lx[experiment_no],ly[experiment_no]);
		  const Point<2> p_2d(p[0], p[1]);
		  
                  const Point<2> distance = centers-p_2d;
                  
                  return  std::exp(-(distance*distance) / (width_me*width_me));

		}
	      else
                {
                  const Point<2> distance = Point<2>(4,4)-Point<2>(p[0],p[1]);
                  return std::exp(-(distance*distance) / (width*width));
                }						 
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = Gaussian<dim>::value(p,component);
	    }

	private:
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
  


				       /**
					* A number of equally spaced lines on
					* the top surface of the domain, with
					* a constant intensity within the
					* lines.
					*/
      template <int dim>
      class Lines : public Function<dim>
      {
	public:
	  Lines (const unsigned int  experiment_no,
		 const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {
	    }
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
					       
					       
	      if (component >= 1)
		return 0;
  
					       
					       
					       
	      if ((p[2] < 6) || (p[0] >= 8) || (p[0] <= 0) ||
		  (p[1] >= 8) || (p[1] <= 0))
		return 0;
	 
	  
					       
					       
					       
					       
					       
					       
	      const double min_y = 1;
	      const double max_y = 7;
	      const double half_width = (max_y-min_y) / (n_experiments-1.) / 2;
	      const double line_y = min_y+experiment_no/(n_experiments-1.) * (max_y-min_y);
	      return ((std::abs(p(1)-line_y) <= half_width) &&
		      (p(0)<=max_y && p(0)>=min_y) ? 1:0); 
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = Lines<dim>::value(p,component);
	    }

	private:
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
 


				       /**
					* A number of equally spaced lines on
					* the top surface of the domain, with
					* a Gaussian profile in
					* cross-direction.
					*/
      template <int dim>
      class Glines : public Function<dim>
      {
	public:
	  Glines (const unsigned int  experiment_no,
		  const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {
	    }
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
					       
					       
	      if (component >= 1)
		return 0;
  
					       
					       
					       
	      if ((p[2] < 6) || (p[0] >= 8) || (p[0] <= 0) || (p[1] >= 8) || (p[1] <= 0))
		return 0;
	 
	      if ((p(0)>=6.5) || (p(0)<=1.5))
		return 0;
					       
	      const double width=0.0625;
	      const double l1=4.+1./std::sqrt(3.);
	      const double l2=4.-1./std::sqrt(3.);
	      const double l3=4.+3.5/std::sqrt(3.);
	      const double l4=4.-3.5/std::sqrt(3.);

	      if (n_experiments>1)
		{
		  switch (experiment_no)
		    {
		      case 0:
			    return  std::exp(-sqr(p(1)-l1) / sqr(width));
		      case 1:
			    return  std::exp(-sqr(p(1)-l2) / sqr(width));
		      case 2:
			    return  std::exp(-sqr(p(1)-l3) / sqr(width));
		      case 3:
			    return  std::exp(-sqr(p(1)-l4) / sqr(width));
		      default:
			    Assert (false, ExcNotImplemented());	
		    }
		}
	      else
		return  (std::exp(-sqr(p(1)-l1) / sqr(width))
			 + std::exp(-sqr(p(1)-l2) / sqr(width))
			 + std::exp(-sqr(p(1)-l3) / sqr(width))
			 + std::exp(-sqr(p(1)-l4) / sqr(width)));

	      return -1e8;
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = Glines<dim>::value(p,component);
	    }

	private:
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



				       /**
					* A single cross across the top
					* surface.
					*/
      template <int dim>
      class Cross : public Function<dim>
      {
	public:
	  Cross (const unsigned int  experiment_no,
		 const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {
	      Assert (experiment_no == 0, ExcNotImplemented());
	    }
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
					       
					       
	      if (component >= 1)
		return 0;
  
					       
					       
					       
	      if ((p[2] < 6) || (p[0] >= 8) || (p[0] <= 0) || (p[1] >= 8) || (p[1] <= 0))
		return 0;
	 
	  
					       
	      const double l1=4.;
	  
	      return ((std::abs(p(0)-l1) <= 0.125)
		      ||
		      (std::abs(p(1)-l1) <= 0.125)) ? 1:0;
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = Cross<dim>::value(p,component);
	    }

	private:
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

  

				       /**
					* A set of concentric circles on the
					* top surface.
					*/
      template <int dim>
      class Circles : public Function<dim>
      {
	public:
					   /**
					    * Set up a function that
					    * oscillates at one part of
					    * the boundary, where the
					    * boundary is subdivided into
					    * n_modes**(dim-1) parts.
					    */
	  Circles (const unsigned int  experiment_no,
		   const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {
	      Assert (experiment_no == 0, ExcNotImplemented());
	    }
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
					       
					       
	      if (component >= 1)
		return 0;
  
					       
					       
					       
	      if ((p[2] < 6) || (p[0] >= 8) || (p[0] <= 0) || (p[1] >= 8) || (p[1] <= 0))
		return 0;
	 
	  
	      const Point<2> center(4., 4);
	      const Point<2> p_2d (p[0], p[1]);
	  
	      return ((center.distance(p_2d) <= 0.625
		       &&
		       center.distance(p_2d) >= 0.375) 
		      ||
		      (center.distance(p_2d) <= (1.5+0.125)
		       &&
		       center.distance(p_2d) >= (1.5-0.125))
		      ||
		      (center.distance(p_2d) <= (2.5+0.125)
		       &&
		       center.distance(p_2d) >= (2.5-0.125)) ? 1 : 0);
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = Circles<dim>::value(p,component);
	    }

	private:
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


				       /**
					* The full set of diffractive patterns.
					*/
      template <int dim>
      class Mixed : public Function<dim>
      {
	public:
	  Mixed (const unsigned int  experiment_no,
		 const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {
	    }
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
					       
					       
	      if (component >= 1)
		return 0;
  
					       
					       
					       
	      if ((p[2] < 6) || (p[0] >= 8) || (p[0] <= 0) || (p[1] >= 8) || (p[1] <= 0))
		return 0;
	 
         
	      switch (experiment_no)
		{
		  case 0:            
		  {
		    const Point<2> center(4., 4);
		    const Point<2> p_2d (p[0], p[1]);
	  
		    return ((center.distance(p_2d) <= 0.625
			     &&
			     center.distance(p_2d) >= 0.375) 
			    ||
			    (center.distance(p_2d) <= (1.5+0.125)
			     &&
			     center.distance(p_2d) >= (1.5-0.125))
			    ||
			    (center.distance(p_2d) <= (2.5+0.125)
			     &&
			     center.distance(p_2d) >= (2.5-0.125)) ? 1 : 0);
		  }
		  
		  case 1:           
		  {                
		    const double l1=4.;
		    
		    return ((std::abs(p(0)-l1) <= 0.125)
			    ||
			    (std::abs(p(1)-l1) <= 0.125)) ? 1:0;
		  }
		  
		  case 2:            
		  {
		    const double l1=4.+1./std::sqrt(3.);
		    const double l2=4.-1./std::sqrt(3.);
		    const double l3=4.+3.5/std::sqrt(3.);
		    const double l4=4.-3.5/std::sqrt(3.);
		    return (((std::abs(p(1)-l1) <= 0.125)
			     ||(std::abs(p(1)-l2) <= 0.125)  
			     ||(std::abs(p(1)-l3) <= 0.125)  
			     ||(std::abs(p(1)-l4) <= 0.125)) && 
			    (p(0)<=5.5 && p(0)>=2.5)) ? 1:0;
		  }

		  case 3:
		  {const double l1=4.+1./std::sqrt(3.);
		   const double l2=4.-1./std::sqrt(3.);
		   const double l3=4.+3.5/std::sqrt(3.);
		   const double l4=4.-3.5/std::sqrt(3.);
		   return (((std::abs(p(0)-l1) <= 0.125)
			    ||(std::abs(p(0)-l2) <= 0.125)  
			    ||(std::abs(p(0)-l3) <= 0.125)  
			    ||(std::abs(p(0)-l4) <= 0.125)) && 
			   (p(1)<=5.5 && p(1)>=2.5)) ? 1:0;
		  }
		  default:
			Assert (false, ExcNotImplemented());	
		}
	      
	      return 0.;
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = Mixed<dim>::value(p,component);
	    }

	private:
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

      

				       /**
					* Six gaussian point point sources.
					*/
      template <int dim>
      class Dots : public Function<dim>
      {
	public:
	  Dots (const unsigned int  experiment_no,
		const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {
	      Assert (experiment_no == 0, ExcNotImplemented());
	    }
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
					       
					       
	      if (component >= 1)
		return 0;
  
					       
					       
					       
	      if ((p[2] < 6) || (p[0] >= 8) || (p[0] <= 0) || (p[1] >= 8) || (p[1] <= 0))
		return 0;
	 
	      const Point<2> centers[9]
		= { Point<2>(2.,2.),
		    Point<2>(2.,4.),
		    Point<2>(2.,6.),
		    Point<2>(4.,2.),
		    Point<2>(4.,4.),
		    Point<2>(4.,6.),
		    Point<2>(6.,2.),
		    Point<2>(6.,4.),
		    Point<2>(6.,6.) };
          
	      const double width = 0.25;
	 
	      double contribution=0.;
	 
	      for (unsigned int i=0;i<9;++i)
		contribution
		  += std::exp(-sqr(centers[i].distance(Point<2>(p[0],p[1]))) / sqr(width));
	 
	      return contribution;
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = Dots<dim>::value(p,component);
	    }

	private:
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



				       /**
					* A regular NxN grid, where exactly
					* one of the squares is illuminated
					*/
      template <int dim>
      class RegularGrid : public Function<dim>
      {
	public:
	  RegularGrid (const unsigned int  n_subdivisions,
		       const unsigned int  pattern_number,
		       const unsigned int  experiment_no,
		       const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  n_subdivisions (n_subdivisions),
			  pattern_number (pattern_number),
			  experiment_no (experiment_no),
			  n_experiments (n_experiments)
	    {
					       
					       
	      Assert (experiment_no == 0, ExcNotImplemented());
	    }
    
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
          
					       
					       
					       
					       
					       
	      if (component >= 1)
		return 0;
  
					       
					       
					       
	      if ((p[2] < 6) || (p[0] >= 8) || (p[0] <= 0) || (p[1] >= 8) || (p[1] <= 0))
		return 0;

	      const double delta = 8./n_subdivisions;
	      const unsigned int i = pattern_number / n_subdivisions;
	      const unsigned int j = pattern_number % n_subdivisions;
          
	      if ((static_cast<unsigned int>(p(0)/delta) == i)
		  &&
		  (static_cast<unsigned int>(p(1)/delta) == j))
		return 1;

	      return 0;
	    }


	  virtual void vector_value (const Point<dim> &p,
				     Vector<double>   &result) const
	    {
	      for (unsigned int component=0; component<result.size(); ++component)
		result(component) = RegularGrid<dim>::value(p,component);
	    }

	private:
					   /**
					    * Number of subdivisions in
					    * each direction.
					    */
	  const unsigned int n_subdivisions;
      
					   /**
					    * Number of the square that is
					    * illuminated.
					    */
	  const unsigned int pattern_number;
      
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



				       /**
					* Implementation of an experimental
					* source for the 8x8x8 cube based on
					* what the base class provides. A
					* scaling parameter can be given in
					* order to scale the (relative) data
					* in the input file with a parameter
					* given in the prm file.
					*
					* This function is not only used to
					* represent boundary sources at the
					* excitation wavelength (the input of
					* the inverse problem), but also
					* measurement data for fluorescent
					* wavelength (the output), for which
					* we need the scaling parameter.
					*/
      template <int dim>
      class Experimental : public Function<dim>,
			   private ExperimentalDataBase<dim>
      {
	public:
	  Experimental (const std::string  &file_base_name,
			const SourceComponents source_components,
			const double        scaling_factor,
			const unsigned int  experiment_no,
			const unsigned int  n_experiments)
			  :
			  Function<dim> (4),
			  ExperimentalDataBase<dim> (file_base_name,
						     experiment_no,
						     n_experiments),
			  source_components (source_components),
			  scaling_factor (scaling_factor)
	    {}
      
	  virtual double value (const Point<dim> &p,
				const unsigned int component) const
	    {
	      Assert (component < 4, ExcInternalError());
	      
	      switch (source_components)
		{
		  case excitation_components:
			if (component >= 2)
			  return 0;
			else
			  return (BoundarySources::PlanarZ8::ExperimentalDataBase<dim>
				  ::value (p, component) *
				  scaling_factor);
			
		  case fluorescence_components:
			if (component < 2)
			  return 0;
			else
			  return (BoundarySources::PlanarZ8::ExperimentalDataBase<dim>
				  ::value (p, component-2) *
				  scaling_factor);

		  default:
			Assert (false, ExcNotImplemented());
		}
	      return -1e8;
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
	if (name == "point on surface")
	  return new PointOnSurface<dim>(experiment_no,
					 n_experiments);
	else if (name == "vertical area illumination")
	  return new VerticalAreaIllumination<dim>(experiment_no,
						   n_experiments);
	else if (name == "nonvertical area illumination")
	  return new NonVerticalAreaIllumination<dim>(experiment_no,
						      n_experiments);
	else if (name == "gaussian")
	  return new Gaussian<dim>(experiment_no,
				   n_experiments);
	else if (name == "lines")
	  return new Lines<dim>(experiment_no,
				n_experiments);
	else if (name == "glines")
	  return new Glines<dim>(experiment_no,
				 n_experiments);
	else if (name == "cross")
	  return new Cross<dim>(experiment_no,
				n_experiments);
	else if (name == "circles")
	  return new Circles<dim>(experiment_no,
				  n_experiments);
	else if (name == "mixed")
	  return new Mixed<dim>(experiment_no,
				n_experiments);
	else if (name == "dots")
	  return new Dots<dim>(experiment_no,
			       n_experiments);
	else if (name.find ("grid") == 0)
	  {
	    const std::string
	      grid_size (name, std::string ("grid ").size(),
			 name.find(","));

	    const std::string
	      pattern_number (name,
			      name.find ("pattern") +
			      std::string ("pattern").size(),
			      std::string::npos);
        
	    return new RegularGrid<dim> (Utilities::string_to_int (grid_size),
					 Utilities::string_to_int (pattern_number),
					 experiment_no,
					 n_experiments);
	  }
	else if (name.find ("experimental") == 0)
	  {
					     
	    std::string file_base_name (name,
					std::string ("experimental").size(),
					std::string::npos);
	    while ((file_base_name.size() > 0)
		   &&
		   (file_base_name[0] == ' '))
	      file_base_name.erase (0,1);

	    return create_experimental_function<dim>(file_base_name,
						     excitation_components,
						     1.,
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
