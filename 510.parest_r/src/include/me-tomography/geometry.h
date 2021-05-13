//----------------------------   geometry.h     ---------------------------
//    $Id: geometry.h 3738 2008-12-14 22:49:40Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2005, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   geometry.h     ---------------------------
#ifndef __parameter_estimation__geometry_h
#define __parameter_estimation__geometry_h
//----------------------------   geometry.h     ---------------------------

#include <base/point.h>
#include <grid/tria.h>
#include <libparest/grid_transfer.h>

#include <string>
#include <set>

#include "config.h"



namespace METomography
{  
  namespace Geometry
  {
    namespace BreastPhantom
    {
      extern const unsigned int n_sources;
      extern const Point<3> source_points[];

      extern const unsigned int n_detectors;
      extern const Point<3> detector_points[];

      namespace Fibers
      {
	double source_intensity (const Point<3>    &p,
				 const unsigned int fiber_number);

	double measurement_value (const Point<3>    &p,
				  const unsigned int fiber_number,
				  const double       measured_value);

	double measurement_modulation_depth (const Point<3>    &p,
					     const unsigned int fiber_number,
					     const double       modulation_depth);    }
    }

    template <int dim>
    std::string default_geometry_name ();
    
    template <int dim>
    void make_coarse_grid (const std::string  &name,
                           Triangulation<dim> &coarse_grid);

    template <int dim>
    void refine_measurement_cells (const unsigned int  n_times,
                                   Triangulation<dim> &coarse_grid);
  }


  namespace GridTransfer
  {

    template <int dim>
    class InitialMeshRefinement : public libparest::GridTransfer::Base<dim>
    {
      public:
	InitialMeshRefinement (const unsigned int n_global_refinements,
			       const std::string &measurement_refinements);
      
	virtual void
	refine_grid (Triangulation<dim> &triangulation) const;
      
      private:
	const unsigned int n_global_refinements;

	const std::string measurement_refinements;
    };
    
  }
  

  


  namespace BoundaryDescription
  {
    enum ValidBoundaryIndicators
    {
	  boundary_dirichlet              = 0x10,
	  boundary_neumann                = 0x20,
	  boundary_robin                  = 0x30,
	  boundary_robin_1                = 0x31,
	  boundary_robin_2                = 0x32,
	  boundary_robin_with_measurement = 0x40,
	  invalid_boundary             /* = last value + 1 */
    };
      
    bool
    is_dirichlet_boundary (const unsigned int boundary_id);
    
    bool
    is_neumann_boundary (const unsigned int boundary_id);
    
    bool
    is_robin_boundary (const unsigned int boundary_id);

    bool
    is_robin_boundary_with_measurement (const unsigned int boundary_id);
      
    const std::set<unsigned char> &
    get_dirichlet_boundary_indicators ();
      
    const std::set<unsigned char> &
    get_robin_boundary_indicators ();

    const std::set<unsigned char> &
    get_boundary_with_measurement_indicators ();
    


// -------------------------- inline functions --------------------  

    inline
    bool
    is_dirichlet_boundary (const unsigned int boundary_id)
    {
      Assert (boundary_id < invalid_boundary, ExcInternalError());
      return (boundary_id == boundary_dirichlet);
    }
  


    inline
    bool
    is_neumann_boundary (const unsigned int boundary_id)
    {
      Assert (boundary_id < invalid_boundary, ExcInternalError());
      return (boundary_id == boundary_neumann);
    }



  
    inline
    bool
    is_robin_boundary (const unsigned int boundary_id)
    {
      Assert (boundary_id < invalid_boundary, ExcInternalError());
      return ((boundary_id == boundary_robin) ||
	      (boundary_id == boundary_robin_1) ||
	      (boundary_id == boundary_robin_2) ||
	      (boundary_id == boundary_robin_with_measurement));
    }
  
  

    inline
    bool
    is_robin_boundary_with_measurement (const unsigned int boundary_id)
    {
      Assert (boundary_id < invalid_boundary, ExcInternalError());
      return (boundary_id == boundary_robin_with_measurement);
    }
  
  

    inline
    const std::set<unsigned char> &
    get_dirichlet_boundary_indicators ()
    {
      static const unsigned int ids_1[1]
	= { boundary_dirichlet };
      static const std::set<unsigned char> ids(&ids_1[0],
                                               &ids_1[sizeof(ids_1)/
                                                      sizeof(ids_1[0])]);

      return ids;
    }
  
  
    inline
    const std::set<unsigned char> &
    get_robin_boundary_indicators ()
    {
      static const unsigned int ids_1[3]
	= { boundary_robin, boundary_robin_1, boundary_robin_2 };
      static const std::set<unsigned char> ids(&ids_1[0],
                                               &ids_1[sizeof(ids_1)/
                                                      sizeof(ids_1[0])]);

      return ids;
    }  
  

    inline
    const std::set<unsigned char> &
    get_boundary_with_measurement_indicators ()
    {
      static const unsigned int ids_1[1]
	= { boundary_robin_with_measurement };
      static const std::set<unsigned char> ids(&ids_1[0],
                                               &ids_1[sizeof(ids_1)/
                                                      sizeof(ids_1[0])]);

      return ids;
    }
  }
}


// declaration of specializations
namespace METomography
{
  namespace Geometry
  {
    template <>
    std::string default_geometry_name<2> ();

    template <>
    void make_coarse_grid (const std::string &name,
                           Triangulation<2>  &coarse_grid);

    template <>
    std::string default_geometry_name<3> ();

    template <>
    void make_coarse_grid (const std::string &name,
                           Triangulation<3>  &coarse_grid);
  }
}




//----------------------------   geometry.h     ---------------------------
// end of #ifndef __parameter_estimation__geometry_h
#endif
//----------------------------   geometry.h     ---------------------------
