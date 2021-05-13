/* $Id: geometry.cc 3646 2008-08-04 20:49:13Z bangerth $ */


#include <grid/tria_boundary_lib.h>
#include <grid/grid_generator.h>
#include <grid/grid_reordering.h>
#include <grid/tria.h>
#include <grid/tria_accessor.h>
#include <grid/tria_iterator.h>
#include <me-tomography/geometry.h>
#include <me-tomography/material_properties.h>

#include <fstream>
#include <numeric>


namespace METomography
{
  namespace GridTransfer
  {
/* -------------------- GridTransfer::Global ----------------------- */

    template <int dim>
    InitialMeshRefinement<dim>::
    InitialMeshRefinement (const unsigned int n_global_refinements,
			   const std::string &measurement_refinements)
		    :
		    n_global_refinements (n_global_refinements),
		    measurement_refinements (measurement_refinements)
    {}



    template <int dim>
    void
    InitialMeshRefinement<dim>::refine_grid (Triangulation<dim> &triangulation) const
    {
      triangulation.refine_global (n_global_refinements);

      for (unsigned int i=0; i<measurement_refinements.size(); ++i)
	if (measurement_refinements[i] == 'g')
	  triangulation.refine_global (1);
	else if (measurement_refinements[i] == 'm')
	  Geometry::refine_measurement_cells (1, triangulation);
	else
	  AssertThrow (false, ExcMessage ((std::string("Character <")
					   +
					   measurement_refinements[i]
					   +
					   "> is not recognized").c_str()));
    }
  }


  
  namespace Geometry
  {
#if deal_II_dimension == 2
    template <>
    std::string default_geometry_name<2> ()
    {
      return "square";
    }
    


    template <>
    void make_coarse_grid (const std::string &name,
                           Triangulation<2>  &coarse_grid)
    {
      const unsigned int dim=2;
                                       
                                       
                                       
                                       
                                       
      if (name == "square")
	GridGenerator::hyper_cube (coarse_grid, 0, 1);
      else if (name == "hypercube_8")
	GridGenerator::hyper_cube (coarse_grid, 0, 8);
	  
      for (unsigned int f=0; f<GeometryInfo<dim>::faces_per_cell; ++f)
	if (coarse_grid.begin_active()->face(f)->center()[0] == 0)
	  coarse_grid.begin_active()->face(f)
	    ->set_boundary_indicator (BoundaryDescription::
				      boundary_robin_with_measurement);
	else
	  coarse_grid.begin_active()->face(f)
	    ->set_boundary_indicator (BoundaryDescription::
				      boundary_robin);
      else
        Assert (false, ExcInternalError());
    }    
      
#endif 


#if deal_II_dimension == 3
    namespace BreastPhantom
    {
      const Point<3> source_points[]
      = { Point<3>(-4.914700, 0.484100, 0.782200),
	  Point<3>(-3.132900, 3.817500, 0.782200),
	  Point<3>(0.484100, 4.914700, 0.782200),
	  Point<3>(3.817500, 3.132900, 0.782200),
	  Point<3>(4.914700, -0.484100, 0.782200),
	  Point<3>(3.132900, -3.817500, 0.782200),
	  Point<3>(-0.484100, -4.914700, 0.782200),
	  Point<3>(-3.817500, -3.132900, 0.782200),
	  Point<3>(-3.443800, 2.826200, 2.270000),
	  Point<3>(-0.436700, 4.433600, 2.270000),
	  Point<3>(2.826200, 3.443800, 2.270000),
	  Point<3>(4.433600, 0.436700, 2.270000),
	  Point<3>(3.443800, -2.826200, 2.270000),
	  Point<3>(0.436700, -4.433600, 2.270000),
	  Point<3>(-2.826200, -3.443800, 2.270000),
	  Point<3>(-4.433600, -0.436700, 2.270000),
	  Point<3>(-3.518500, 0.346500, 3.535500),
	  Point<3>(0.346500, 3.518500, 3.535500),
	  Point<3>(3.518500, -0.346500, 3.535500),
	  Point<3>(-0.346500, -3.518500, 3.535500),
	  Point<3>(-1.440000, 1.754700, 4.455000),
	  Point<3>(1.754700, 1.440000, 4.455000),
	  Point<3>(1.440000, -1.754700, 4.455000),
	  Point<3>(-1.754700, -1.440000, 4.455000),
	  Point<3>(0.000000, 0.000000, 5.000000), 
	  Point<3>(-0.78,-0.08,4.94)};

      const unsigned int n_sources = 26;


      const Point<3> detector_points[]
      = 	  {Point<3>( -5.0000, -0.0000,  0.0000),
		   Point<3>( -4.9039, -0.9755,  0.0000),
		   Point<3>( -4.6194, -1.9134,  0.0000),
		   Point<3>( -4.1573, -2.7779,  0.0000),
		   Point<3>( -3.5355, -3.5355,  0.0000),
		   Point<3>( -2.7779, -4.1573,  0.0000),
		   Point<3>( -1.9134, -4.6194,  0.0000),
		   Point<3>( -0.9755, -4.9039,  0.0000),
		   Point<3>(  0.0000, -5.0000,  0.0000),
		   Point<3>(  0.9755, -4.9039,  0.0000),
		   Point<3>(  1.9134, -4.6194,  0.0000),
		   Point<3>(  2.7779, -4.1573,  0.0000),
		   Point<3>(  3.5355, -3.5355,  0.0000),
		   Point<3>(  4.1573, -2.7779,  0.0000),
		   Point<3>(  4.6194, -1.9134,  0.0000),
		   Point<3>(  4.9039, -0.9755,  0.0000),
		   Point<3>(  5.0000, -0.0000,  0.0000),
		   Point<3>(  4.9039,  0.9755,  0.0000),
		   Point<3>(  4.6194,  1.9134,  0.0000),
		   Point<3>(  4.1573,  2.7779,  0.0000),
		   Point<3>(  3.5355,  3.5355,  0.0000),
		   Point<3>(  2.7779,  4.1573,  0.0000),
		   Point<3>(  1.9134,  4.6194,  0.0000),
		   Point<3>(  0.9755,  4.9039,  0.0000),
		   Point<3>(  0.0000,  5.0000,  0.0000),
		   Point<3>( -0.9755,  4.9039,  0.0000),
		   Point<3>( -1.9134,  4.6194,  0.0000),
		   Point<3>( -2.7779,  4.1573,  0.0000),
		   Point<3>( -3.5355,  3.5355,  0.0000),
		   Point<3>( -4.1573,  2.7779,  0.0000),
		   Point<3>( -4.6194,  1.9134,  0.0000),
		   Point<3>( -4.9039,  0.9755,  0.0000),
		   Point<3>( -4.7553, -0.0000,  1.5451),
		   Point<3>( -4.6639, -0.9277,  1.5451),
		   Point<3>( -4.3933, -1.8198,  1.5451),
		   Point<3>( -3.9539, -2.6419,  1.5451),
		   Point<3>( -3.3625, -3.3625,  1.5451),
		   Point<3>( -2.6419, -3.9539,  1.5451),
		   Point<3>( -1.8198, -4.3933,  1.5451),
		   Point<3>( -0.9277, -4.6639,  1.5451),
		   Point<3>(  0.0000, -4.7553,  1.5451),
		   Point<3>(  0.9277, -4.6639,  1.5451),
		   Point<3>(  1.8198, -4.3933,  1.5451),
		   Point<3>(  2.6419, -3.9539,  1.5451),
		   Point<3>(  3.3625, -3.3625,  1.5451),
		   Point<3>(  3.9539, -2.6419,  1.5451),
		   Point<3>(  4.3933, -1.8198,  1.5451),
		   Point<3>(  4.6639, -0.9277,  1.5451),
		   Point<3>(  4.7553, -0.0000,  1.5451),
		   Point<3>(  4.6639,  0.9277,  1.5451),
		   Point<3>(  4.3933,  1.8198,  1.5451),
		   Point<3>(  3.9539,  2.6419,  1.5451),
		   Point<3>(  3.3625,  3.3625,  1.5451),
		   Point<3>(  2.6419,  3.9539,  1.5451),
		   Point<3>(  1.8198,  4.3933,  1.5451),
		   Point<3>(  0.9277,  4.6639,  1.5451),
		   Point<3>(  0.0000,  4.7553,  1.5451),
		   Point<3>( -0.9277,  4.6639,  1.5451),
		   Point<3>( -1.8198,  4.3933,  1.5451),
		   Point<3>( -2.6419,  3.9539,  1.5451),
		   Point<3>( -3.3625,  3.3625,  1.5451),
		   Point<3>( -3.9539,  2.6419,  1.5451),
		   Point<3>( -4.3933,  1.8198,  1.5451),
		   Point<3>( -4.6639,  0.9277,  1.5451),
		   Point<3>( -4.0451, -0.0000,  2.9389),
		   Point<3>( -3.9674, -0.7892,  2.9389),
		   Point<3>( -3.7372, -1.5480,  2.9389),
		   Point<3>( -3.3634, -2.2473,  2.9389),
		   Point<3>( -2.8603, -2.8603,  2.9389),
		   Point<3>( -2.2473, -3.3634,  2.9389),
		   Point<3>( -1.5480, -3.7372,  2.9389),
		   Point<3>( -0.7892, -3.9674,  2.9389),
		   Point<3>(  0.0000, -4.0451,  2.9389),
		   Point<3>(  0.7892, -3.9674,  2.9389),
		   Point<3>(  1.5480, -3.7372,  2.9389),
		   Point<3>(  2.2473, -3.3634,  2.9389),
		   Point<3>(  2.8603, -2.8603,  2.9389),
		   Point<3>(  3.3634, -2.2473,  2.9389),
		   Point<3>(  3.7372, -1.5480,  2.9389),
		   Point<3>(  3.9674, -0.7892,  2.9389),
		   Point<3>(  4.0451, -0.0000,  2.9389),
		   Point<3>(  3.9674,  0.7892,  2.9389),
		   Point<3>(  3.7372,  1.5480,  2.9389),
		   Point<3>(  3.3634,  2.2473,  2.9389),
		   Point<3>(  2.8603,  2.8603,  2.9389),
		   Point<3>(  2.2473,  3.3634,  2.9389),
		   Point<3>(  1.5480,  3.7372,  2.9389),
		   Point<3>(  0.7892,  3.9674,  2.9389),
		   Point<3>(  0.0000,  4.0451,  2.9389),
		   Point<3>( -0.7892,  3.9674,  2.9389),
		   Point<3>( -1.5480,  3.7372,  2.9389),
		   Point<3>( -2.2473,  3.3634,  2.9389),
		   Point<3>( -2.8603,  2.8603,  2.9389),
		   Point<3>( -3.3634,  2.2473,  2.9389),
		   Point<3>( -3.7372,  1.5480,  2.9389),
		   Point<3>( -3.9674,  0.7892,  2.9389),
		   Point<3>( -2.9389, -0.0000,  4.0451),
		   Point<3>( -2.7152, -1.1247,  4.0451),
		   Point<3>( -2.0781, -2.0781,  4.0451),
		   Point<3>( -1.1247, -2.7152,  4.0451),
		   Point<3>(  0.0000, -2.9389,  4.0451),
		   Point<3>(  1.1247, -2.7152,  4.0451),
		   Point<3>(  2.0781, -2.0781,  4.0451),
		   Point<3>(  2.7152, -1.1247,  4.0451),
		   Point<3>(  2.9389, -0.0000,  4.0451),
		   Point<3>(  2.7152,  1.1247,  4.0451),
		   Point<3>(  2.0781,  2.0781,  4.0451),
		   Point<3>(  1.1247,  2.7152,  4.0451),
		   Point<3>(  0.0000,  2.9389,  4.0451),
		   Point<3>( -1.1247,  2.7152,  4.0451),
		   Point<3>( -2.0781,  2.0781,  4.0451),
		   Point<3>( -2.7152,  1.1247,  4.0451),
		   Point<3>( -1.5451, -0.0000,  4.7553),
		   Point<3>( -1.4275, -0.5913,  4.7553),
		   Point<3>( -1.0925, -1.0925,  4.7553),
		   Point<3>( -0.5913, -1.4275,  4.7553),
		   Point<3>(  0.0000, -1.5451,  4.7553),
		   Point<3>(  0.5913, -1.4275,  4.7553),
		   Point<3>(  1.0925, -1.0925,  4.7553),
		   Point<3>(  1.4275, -0.5913,  4.7553),
		   Point<3>(  1.5451, -0.0000,  4.7553),
		   Point<3>(  1.4275,  0.5913,  4.7553),
		   Point<3>(  1.0925,  1.0925,  4.7553),
		   Point<3>(  0.5913,  1.4275,  4.7553),
		   Point<3>(  0.0000,  1.5451,  4.7553),
		   Point<3>( -0.5913,  1.4275,  4.7553),
		   Point<3>( -1.0925,  1.0925,  4.7553),
		   Point<3>( -1.4275,  0.5913,  4.7553)};

      const unsigned int n_detectors = 128;


      namespace Fibers
      {
	double source_intensity (const Point<3>    &p,
				 const unsigned int fiber_number)
	{
	  Assert (fiber_number < n_sources,
		  ExcIndexRange (fiber_number, 0, n_sources));

					   
					   
					   
					   
					   
					   
					   
					   
	  static const double
	    disk_radius      = 0.5,
	    source_intensity = 1./(deal_II_numbers::PI*disk_radius*disk_radius);

	  if (p.distance (source_points[fiber_number]) <= disk_radius)
	    return source_intensity;
	  else
	    return 0;
	}



	double measurement_value (const Point<3>    &p,
				  const unsigned int fiber_number,
				  const double       measured_value)
	{
	  Assert (fiber_number < n_detectors,
		  ExcIndexRange (fiber_number, 0, n_detectors));

					   
					   
					   
					   
					   
					   
					   
	  static const double
	    disk_radius      = 0.5;

	  if (p.distance (detector_points[fiber_number]) <= disk_radius)
	    return measured_value;
	  else
	    return 0;
	}



	double measurement_modulation_depth (const Point<3>    &p,
					     const unsigned int fiber_number,
					     const double       modulation_depth)
	{
	  Assert (fiber_number < n_detectors,
		  ExcIndexRange (fiber_number, 0, n_detectors));

	  static const double
	    disk_radius      = 0.5;

					   
					   
					   
					   
					   
					   
	  if (p.distance (detector_points[fiber_number]) <= disk_radius)
	    return modulation_depth;
	  else
	    return 0;
	}
      }
  
  

                                       
                                       
      static const double hemisphere_radius = 5;

                                       
      static const double bottom_disk_radius = 10;

                                       
                                       
      const double bottom_disk_floor = -3;
                                       
                                       
      const double bottom_disk_ceil = -.5;

                                       
                                       
      const double interior_hemisphere_radius
      = hemisphere_radius/(1.+std::sqrt(2.0));
      
      template <int dim>
      class SphereBoundary : public HyperBallBoundary<dim> 
      {
        public:
          SphereBoundary () 
                          :
                          HyperBallBoundary<dim> (Point<dim>(), hemisphere_radius) 
            {}
      };
  
  
      template <int dim>
      class CylinderBoundary : public StraightBoundary<dim>
      {
        public:
          typedef
          typename Triangulation<dim>::line_iterator
          line_iterator;
      
          typedef
          typename Triangulation<dim>::quad_iterator
          quad_iterator;
      
          typedef
          typename Triangulation<dim>::face_iterator
          face_iterator;

                                           /**
                                            * Constructor.
                                            */
          CylinderBoundary (const double radius)
                          :
                          radius (radius)
            {}
          
          
          virtual Point<dim>
          get_new_point_on_line (const line_iterator &line) const;

          virtual Point<dim>
          get_new_point_on_quad (const quad_iterator &quad) const;

          virtual void
          get_intermediate_points_on_line (const line_iterator &line,
                                           std::vector<Point<dim> > &points) const;

          virtual void
          get_intermediate_points_on_quad (const quad_iterator &quad,
                                           std::vector<Point<dim> > &points) const;

          virtual void
          get_normals_at_vertices (const face_iterator &face,
                                   typename Boundary<dim>::FaceVertexNormals &face_vertex_normals) const;

        private:
          const double radius;
          
          void
          get_intermediate_points_between_points (const Point<dim> &p0, const Point<dim> &p1,
                                                  std::vector<Point<dim> > &points) const;    
      };

  
      template <>
      Point<3>
      CylinderBoundary<3>::
      get_new_point_on_line (const line_iterator &line) const
      {
        const Point<3> middle = StraightBoundary<3,3>::get_new_point_on_line (line);
                                         
        Point<3> p(middle[0], middle[1], 0);
        p *= radius/std::sqrt(p.square());

        return Point<3> (p[0], p[1], middle[2]);
      }


      template<>
      Point<3>
      CylinderBoundary<3>::
      get_new_point_on_quad (const quad_iterator &quad) const
      {
        Point<3> middle = StraightBoundary<3,3>::get_new_point_on_quad (quad);
  
                                         
        Point<3> p(middle[0], middle[1], 0);
        p *= radius/std::sqrt(p.square());

        return Point<3> (p[0], p[1], middle[2]);
      }


      template <int dim>
      void
      CylinderBoundary<dim>::
      get_intermediate_points_on_line (const line_iterator &line,
                                       std::vector<Point<dim> > &points) const
      {
        if (points.size()==1)
          points[0] = get_new_point_on_line(line);
        else
          get_intermediate_points_between_points(line->vertex(0), line->vertex(1), points);
      }

  
      template <int dim>
      void
      CylinderBoundary<dim>::
      get_intermediate_points_between_points (const Point<dim> &,
                                              const Point<dim> &,
                                              std::vector<Point<dim> > &) const
      {
        Assert (false, ExcNotImplemented());
      }


      template <>
      void
      CylinderBoundary<3>::
      get_intermediate_points_on_quad (const Triangulation<3>::quad_iterator &,
                                       std::vector<Point<3> > &) const
      {
        Assert (false, ExcNotImplemented());
      }


      template <int dim>
      void
      CylinderBoundary<dim>::
      get_normals_at_vertices (const typename Triangulation<dim>::face_iterator &,
                               typename Boundary<dim>::FaceVertexNormals &) const
      {
        Assert (false, ExcNotImplemented());
      }


      void
      create_coarse_grid (Triangulation<3> &coarse_grid)
      {
        const unsigned int dim = 3;
  
        std::vector<Point<dim> >    vertices;
        std::vector<CellData<dim> > cells;
        SubCellData                 sub_cell_data;

        const unsigned char
          bottom_cylinder_boundary_id  = BoundaryDescription::boundary_robin_1,
          middle_cylinder_boundary_id  = BoundaryDescription::boundary_robin_2,
          spherical_boundary_id = BoundaryDescription::boundary_robin_with_measurement,
          all_other_boundary_id = BoundaryDescription::boundary_robin;
        
        
                                         
                                         
        {
                                           
                                           
                                           
                                           
                                           
                                           
                                           
                                           
          const Point<3> ring_points[8] = { Point<3>(-1,0,0),
                                            Point<3>(-1,-1,0) / std::sqrt(2.),
                                            Point<3>(0,-1,0),
                                            Point<3>(+1,-1,0) / std::sqrt(2.),
                                            Point<3>(+1,0,0),
                                            Point<3>(+1,+1,0) / std::sqrt(2.),
                                            Point<3>(0,+1,0),
                                            Point<3>(-1,+1,0) / std::sqrt(2.) };

                                           
                                           
                                           
          vertices.push_back (Point<3>(0,0,bottom_disk_ceil));
          for (unsigned int ring=0; ring<3; ++ring)
            for (unsigned int i=0; i<8; ++i)
              vertices.push_back (ring_points[i] * (ring == 0 ?
                                                    interior_hemisphere_radius :
                                                    (ring == 1 ? hemisphere_radius :
                                                     bottom_disk_radius))
                                  +
                                  Point<3>(0,0,bottom_disk_ceil));

                                           
          vertices.push_back (Point<3>(0,0,bottom_disk_floor));
          for (unsigned int ring=0; ring<3; ++ring)
            for (unsigned int i=0; i<8; ++i)
              vertices.push_back (ring_points[i] * (ring == 0 ?
                                                    interior_hemisphere_radius :
                                                    (ring == 1 ?
                                                     hemisphere_radius :
                                                     bottom_disk_radius))
                                  +
                                  Point<3>(0,0,bottom_disk_floor));

          const unsigned int n_vertices_per_surface = 25;
          Assert (vertices.size() == n_vertices_per_surface*2,
                  ExcInternalError());
    
                                           
                                           
                                           
                                           
                                           
          {
            const unsigned int connectivity[20][4]
              = { { 1, 2, 3, 0 },  
                  { 3, 4, 5, 0 },
                  { 0, 5, 6, 7 },
                  { 1, 0, 7, 8 },            
          
                  { 9, 10, 2, 1 },  
                  { 10, 11, 3, 2 },
                  { 11, 12, 4, 3 },
                  { 4, 12, 13, 5 },
                  { 5, 13, 14, 6 },
                  { 6, 14, 15, 7 },
                  { 8, 7, 15, 16 },
                  { 9, 1, 8, 16 },

                  { 17, 18, 10, 9 },  
                  { 18, 19, 11, 10 },
                  { 19, 20, 12, 11 },
                  { 12, 20, 21, 13 },
                  { 13, 21, 22, 14 },
                  { 14, 22, 23, 15 },
                  { 16, 15, 23, 24 },
                  { 17, 9, 16, 24 }   };

                                             
            for (unsigned int i=0; i<20; ++i)
              {
                CellData<3> cell;
                for (unsigned int j=0; j<4; ++j)
                  {
                    cell.vertices[j]   = connectivity[i][j];
                    cell.vertices[j+4] = connectivity[i][j]+n_vertices_per_surface;
                  }
                cell.material_id = 0;
                cells.push_back (cell);
              }
          }
    
                                           
                                           
                                           
                                           
                                           
                                           
                                           
                                           
                                           
                                           
          {
            const unsigned int connectivity[8][2]
              = { { 17,18 }, { 18, 19 }, { 19, 20 }, { 20, 21 },
                  { 21,22 }, { 22, 23 }, { 23, 24 }, { 24, 17 }};

            for (unsigned int i=0; i<8; ++i)
              {
                const CellData<2> face = 
                  { { connectivity[i][0]+n_vertices_per_surface,
                      connectivity[i][1]+n_vertices_per_surface,
                      connectivity[i][1],
                      connectivity[i][0] },
                    bottom_cylinder_boundary_id };
                sub_cell_data.boundary_quads.push_back (face);

                const CellData<1> edges[4] = 
                  { { { connectivity[i][0],    connectivity[i][1]    },
                      bottom_cylinder_boundary_id },
                    { { connectivity[i][0]+n_vertices_per_surface,
                        connectivity[i][1]+n_vertices_per_surface },
                      bottom_cylinder_boundary_id },
                    { { connectivity[i][0]+n_vertices_per_surface,
                        connectivity[i][0]    },
                      bottom_cylinder_boundary_id },
                    { { connectivity[i][1]+n_vertices_per_surface,
                        connectivity[i][1]    },
                      bottom_cylinder_boundary_id } };
                for (unsigned int i=0; i<4; ++i)
                  sub_cell_data.boundary_lines.push_back (edges[i]);
              }
          }
        }

                                         
                                         
                                         
        {
          const unsigned int first_upper_vertex = vertices.size();
          
          for (unsigned int i=0; i<17; ++i)
            vertices.push_back (Point<3>(vertices[i][0], vertices[i][1], 0));

                                           
                                           
                                           
                                           
                                           
          const unsigned int connectivity[12][4]
            = { { 1, 2, 3, 0 },  
                { 3, 4, 5, 0 },
                { 0, 5, 6, 7 },
                { 1, 0, 7, 8 },            
          
                { 9, 10, 2, 1 },  
                { 10, 11, 3, 2 },
                { 11, 12, 4, 3 },
                { 4, 12, 13, 5 },
                { 5, 13, 14, 6 },
                { 6, 14, 15, 7 },
                { 8, 7, 15, 16 },
                { 9, 1, 8, 16 }};
                                           
          for (unsigned int i=0; i<12; ++i)
            {
              CellData<3> cell;
              for (unsigned int j=0; j<4; ++j)
                {
                  cell.vertices[j]   = connectivity[i][j]+first_upper_vertex;
                  cell.vertices[j+4] = connectivity[i][j];
                }
              cell.material_id = 0;
              cells.push_back (cell);
            }

                                           
                                           
          for (unsigned int i=0; i<8; ++i)
            {
              const CellData<1> edge = { { 9, 9+first_upper_vertex },
                                         middle_cylinder_boundary_id };
              sub_cell_data.boundary_lines.push_back (edge);
            }
                                           
                                           
                                           
                                           
                                           
                                           
          for (unsigned int i=0; i<8; ++i)
            {
              const CellData<1> edge = { { 9+i, 9+(i+1)%8},
                                         middle_cylinder_boundary_id };
              sub_cell_data.boundary_lines.push_back (edge);
            }

                                           
          for (unsigned int i=0; i<8; ++i)
            {
              const CellData<2> face = { { 9+i,
                                           9+(i+1)%8,
                                           9+(i+1)%8+first_upper_vertex,
                                           9+i+first_upper_vertex},
                                         middle_cylinder_boundary_id };
              sub_cell_data.boundary_quads.push_back (face);
            }
        }
        
                                         
                                         
        {
                                           
                                           
                                           
          {
                                             
                                             
                                             
                                             
            const double rx = hemisphere_radius / (1+std::sqrt(3.0));
            for (unsigned int i=0; i<9; ++i)
              {
                const Point<3> p (vertices[i][0],
                                  vertices[i][1],
                                  i == 0 ?
                                  1
                                  :
                                  std::max(std::fabs(vertices[i][0]),
                                           std::fabs(vertices[i][1])));
                vertices.push_back (p / std::sqrt(p.square()) * rx);
              }
            Assert (vertices.size() == 76, ExcInternalError());

                                             
                                             
                                             
            for (unsigned int i=9; i<17; ++i)
              {
                Point<3> p (vertices[i][0],
                            vertices[i][1],
                            std::max(std::fabs(vertices[i][0]),
                                     std::fabs(vertices[i][1])));
                vertices.push_back (p / std::sqrt(p.square()) *
                                    hemisphere_radius);
              }
            Assert (vertices.size() == 84, ExcInternalError());
      
                                             
            const unsigned int connectivity[12][4]
              = { { 1, 2, 3, 0 },  
                  { 3, 4, 5, 0 },
                  { 0, 5, 6, 7 },
                  { 1, 0, 7, 8 },

                  { 9, 10, 2, 1 },  
                  { 10, 11, 3, 2 },
                  { 11, 12, 4, 3 },
                  { 4, 12, 13, 5 },
                  { 5, 13, 14, 6 },
                  { 6, 14, 15, 7 },
                  { 8, 7, 15, 16 },
                  { 9, 1, 8, 16 },
              };

            for (unsigned int i=0; i<12; ++i)
              {
                CellData<3> cell;
                for (unsigned int j=0; j<4; ++j)
                  {
                    cell.vertices[j]   = connectivity[i][j]+67;
                    cell.vertices[j+4] = connectivity[i][j]+50;
                  }
                cell.material_id = 0;
                cells.push_back (cell);
              }
          }

                                           
                                           
                                           
          {
                                             
                                             
                                             
                                             
            const unsigned int vertices[9] = 
              { 9, 10, 11, 12, 13, 14, 15, 16, 9 };
                                             
                                             
            for (unsigned int i=0; i<8; ++i)
              {
                                                 
                const CellData<2> face = 
                  { { vertices[i]+50,   vertices[i+1]+50,
                      vertices[i+1]+67, vertices[i]+67 },
                    spherical_boundary_id };
                sub_cell_data.boundary_quads.push_back (face);

                                                 
                const CellData<1> edges[4] =
                  { { { vertices[i]+50,   vertices[i+1]+50 },
                      spherical_boundary_id },
                    { { vertices[i]+67,   vertices[i+1]+67 },
                      spherical_boundary_id },
                    { { vertices[i]+50,   vertices[i]+67   },
                      spherical_boundary_id },
                    { { vertices[i+1]+50, vertices[i+1]+67 },
                      spherical_boundary_id } };
                for (unsigned int j=0; j<4; ++j)
                  sub_cell_data.boundary_lines.push_back (edges[j]);
              }
          }  


                                           
                                           
                                           
          {
            vertices.push_back (Point<3> (0,0,hemisphere_radius));

            const unsigned int connectivity[4][8]
              = { { 59, 60, 61, 67,   51, 52, 53, 50 },
                  { 61, 62, 63, 67,   53, 54, 55, 50 },
                  { 67, 63, 64, 65,   50, 55, 56, 57 },
                  { 59, 67, 65, 66,   51, 50, 57, 58 }};
      
            for (unsigned int i=0; i<4; ++i)
              {
                CellData<3> cell;
                for (unsigned int j=0; j<8; ++j)
                  cell.vertices[j]   = connectivity[i][j]+17;
                cell.material_id   = 0;
                cells.push_back (cell);
              }

                                             
                                             
                                             
            for (unsigned int i=0; i<4; ++i)
              {
                const CellData<2> face = 
                  { { connectivity[i][0]+17, connectivity[i][1]+17,
                      connectivity[i][2]+17, connectivity[i][3]+17 },
                    spherical_boundary_id };
                sub_cell_data.boundary_quads.push_back (face);

                const CellData<1> edges[4] =
                  { { { connectivity[i][0]+17, connectivity[i][1]+17 },
                      spherical_boundary_id },
                    { { connectivity[i][1]+17, connectivity[i][2]+17 },
                      spherical_boundary_id },
                    { { connectivity[i][2]+17, connectivity[i][3]+17 },
                      spherical_boundary_id },
                    { { connectivity[i][3]+17, connectivity[i][0]+17 },
                      spherical_boundary_id } };
                for (unsigned int j=0; j<4; ++j)
                  sub_cell_data.boundary_lines.push_back (edges[j]);
              }
          }
        }
  

                                         
                                         
        GridReordering<3>::reorder_cells (cells);
        coarse_grid.create_triangulation_compatibility (vertices, cells,
							sub_cell_data);

                                         
                                         
                                         
        static const CylinderBoundary<3>
          bottom_cylinder_boundary (bottom_disk_radius);
        static const CylinderBoundary<3>
          middle_cylinder_boundary (hemisphere_radius);
        static const SphereBoundary<3> sphere_boundary;
        coarse_grid.set_boundary (bottom_cylinder_boundary_id,
                                  bottom_cylinder_boundary);
        coarse_grid.set_boundary (middle_cylinder_boundary_id,
                                  middle_cylinder_boundary);
        coarse_grid.set_boundary (spherical_boundary_id,
                                  sphere_boundary);

                                         
                                         
                                         
        for (Triangulation<dim>::active_cell_iterator
               cell = coarse_grid.begin_active();
             cell != coarse_grid.end(); ++cell)
          for (unsigned int f=0; f<GeometryInfo<dim>::faces_per_cell; ++f)
            if (cell->at_boundary(f))
              if ((cell->face(f)->boundary_indicator() != bottom_cylinder_boundary_id)
                  &&
                  (cell->face(f)->boundary_indicator() != middle_cylinder_boundary_id)
                  &&
                  (cell->face(f)->boundary_indicator() != spherical_boundary_id))
                {
                                                   
                                                   
                                                   
                  Assert (cell->face(f)->boundary_indicator() == 0,
                          ExcInternalError());
                  cell->face(f)->set_boundary_indicator(all_other_boundary_id);
                }
      }
  
    }


    namespace CurvedHypercube8
    {
				       
				       
      const double size = 8;

				       
				       
				       
      const double elevation = 2;

      
      template <int dim>
      class Boundary : public StraightBoundary<dim>
      {
        public:
          typedef
          typename Triangulation<dim>::line_iterator
          line_iterator;
      
          typedef
          typename Triangulation<dim>::quad_iterator
          quad_iterator;
      
          typedef
          typename Triangulation<dim>::face_iterator
          face_iterator;

					   /**
					    * Constructor
					    */
	  Boundary () : StraightBoundary<dim> () {}
	  
          virtual Point<dim>
          get_new_point_on_line (const line_iterator &line) const;

          virtual Point<dim>
          get_new_point_on_quad (const quad_iterator &quad) const;

          virtual void
          get_intermediate_points_on_line (const line_iterator &line,
                                           std::vector<Point<dim> > &points) const;

          virtual void
          get_intermediate_points_on_quad (const quad_iterator &quad,
                                           std::vector<Point<dim> > &points) const;

          virtual void
          get_normals_at_vertices (const face_iterator &face,
                                   typename Boundary<dim>::FaceVertexNormals &face_vertex_normals) const;

        private:
					   /**
					    * Given a point that
					    * should be on the upper
					    * surface, project it
					    * vertically onto it.
					    */
	  static
	  Point<dim>
	  project_upward (const Point<dim> &p);
	  
          void
          get_intermediate_points_between_points (const Point<dim> &p0,
						  const Point<dim> &p1,
                                                  std::vector<Point<dim> > &points) const;
      };


      template <>
      Point<3>
      Boundary<3>::project_upward (const Point<3> &p)
      {
	const double x = p[0];
	const double y = p[1];
	const double z = size + x/size*(1-x/size)*y/size*(1-y/size)*16 * elevation;
	return Point<3>(x,y,z);
      }


      template <>
      Point<3>
      Boundary<3>::
      get_new_point_on_line (const line_iterator &line) const
      {
        const Point<3> middle = StraightBoundary<3,3>::get_new_point_on_line (line);
	return project_upward (middle);
      }


      template<>
      Point<3>
      Boundary<3>::
      get_new_point_on_quad (const quad_iterator &quad) const
      {
        Point<3> middle = StraightBoundary<3,3>::get_new_point_on_quad (quad);
	return project_upward (middle);
      }


      template <int dim>
      void
      Boundary<dim>::
      get_intermediate_points_on_line (const line_iterator &line,
                                       std::vector<Point<dim> > &points) const
      {
        if (points.size()==1)
          points[0] = get_new_point_on_line(line);
        else
          get_intermediate_points_between_points(line->vertex(0), line->vertex(1), points);
      }

  
      template <int dim>
      void
      Boundary<dim>::
      get_intermediate_points_between_points (const Point<dim> &,
                                              const Point<dim> &,
                                              std::vector<Point<dim> > &) const
      {
        Assert (false, ExcNotImplemented());
      }


      template <>
      void
      Boundary<3>::
      get_intermediate_points_on_quad (const Triangulation<3>::quad_iterator &,
                                       std::vector<Point<3> > &) const
      {
        Assert (false, ExcNotImplemented());
      }


      template <int dim>
      void
      Boundary<dim>::
      get_normals_at_vertices (const typename Triangulation<dim>::face_iterator &,
                               typename Boundary<dim>::FaceVertexNormals &) const
      {
        Assert (false, ExcNotImplemented());
      }


      void
      create_coarse_grid (Triangulation<3> &coarse_grid)
      {
	static const Boundary<3> boundary;

	GridGenerator::hyper_cube (coarse_grid, 0, size);
	coarse_grid.set_boundary (BoundaryDescription::
				  boundary_robin_with_measurement,
				  boundary);
	  
	for (unsigned int f=0; f<GeometryInfo<3>::faces_per_cell; ++f)
	  if (coarse_grid.begin_active()->face(f)->center()[2] == size)
	    coarse_grid.begin_active()->face(f)
	      ->set_boundary_indicator (BoundaryDescription::
					boundary_robin_with_measurement);
	  else
	    coarse_grid.begin_active()->face(f)
	      ->set_boundary_indicator (BoundaryDescription::
					boundary_robin);	
      }
    }



    namespace PointCloudSurface
    {
      class Boundary : public StraightBoundary<3>
      {
	public:
					   /**
					    * Constructor.
					    */
	  Boundary (const std::string &filename);
    
					   /**
					    * Let the new point be the
					    * arithmetic mean of the two
					    * vertices of the line.
					    *
					    * Refer to the general
					    * documentation of this class
					    * and the documentation of the
					    * base class for more
					    * information.
					    */
	  virtual Point<3>
	  get_new_point_on_line (const Triangulation<3>::line_iterator &line) const;

					   /**
					    * Let the new point be the
					    * arithmetic mean of the four
					    * vertices of this quad and the
					    * four midpoints of the lines,
					    * which are already created at
					    * the time of calling this
					    * function.
					    *
					    * Refer to the general
					    * documentation of this class
					    * and the documentation of the
					    * base class for more
					    * information.
					    */
	  virtual Point<3>
	  get_new_point_on_quad (const Triangulation<3>::quad_iterator &quad) const;

					   /**
					    * Gives <tt>n=points.size()</tt>
					    * points that splits the
					    * p{StraightBoundary} line into
					    * p{n+1} partitions of equal
					    * lengths.
					    *
					    * Refer to the general
					    * documentation of this class
					    * and the documentation of the
					    * base class.
					    */
	  virtual void
	  get_intermediate_points_on_line (const Triangulation<3>::line_iterator &line,
					   std::vector<Point<3> > &points) const;

					   /**
					    * Gives <tt>n=points.size()=m*m</tt>
					    * points that splits the
					    * p{StraightBoundary} quad into
					    * <tt>(m+1)(m+1)</tt> subquads of equal
					    * size.
					    *
					    * Refer to the general
					    * documentation of this class
					    * and the documentation of the
					    * base class.
					    */
	  virtual void
	  get_intermediate_points_on_quad (const Triangulation<3>::quad_iterator &quad,
					   std::vector<Point<3> > &points) const;

					   /**
					    * A function that, given a point @p p,
					    * returns the closest point on the
					    * surface defined by the input file. For
					    * the time being, we simply return the
					    * closest point in the point cloud,
					    * rather than doing any sort of
					    * interpolation.
					    */
	  Point<3> closest_point (const Point<3> &p) const;    
	private:
	  std::vector<Point<3> > point_list;
      };


      Boundary::Boundary (const std::string &filename)
      {
					 
					 
					 
					 
					 
					 
	{
	  std::ifstream in (filename.c_str());

	  if (!in)
	    {
	      static const std::string message
		= std::string("Can't read from file <") + filename + ">";
	      AssertThrow (in, ExcMessage(message.c_str()));
	    }
    
	  while (in)
	    {
	      Point<3> p;
	      in >> p;
	      p /= 10;
	      point_list.push_back (p);
	    }

	  AssertThrow (point_list.size() > 1, ExcIO());
	}
  
					 
					 
					 
					 
					 
					 
	{
	  const Point<3> c_o_m = std::accumulate (point_list.begin(),
						  point_list.end(),
						  Point<3>()) /
				 point_list.size();
	  for (unsigned int i=0; i<point_list.size(); ++i)
	    point_list[i] -= c_o_m;
	}

					 
					 
					 
  
					 
					 
					 
					 
					 
					 
					 
	{
	  double A[2][2] = {{0,0},{0,0}};
	  double B[2] = {0,0};

	  for (unsigned int i=0; i<point_list.size(); ++i)
	    {
	      A[0][0] += point_list[i][0] * point_list[i][0];
	      A[0][1] += point_list[i][0] * point_list[i][1];
	      A[1][1] += point_list[i][1] * point_list[i][1];

	      B[0] += point_list[i][0] * point_list[i][2];
	      B[1] += point_list[i][1] * point_list[i][2];
	    }

	  const double det = A[0][0]*A[1][1]-2*A[0][1];
	  const double a = (A[1][1] * B[0] - A[0][1] * B[1]) / det;
	  const double b = (A[0][0] * B[1] - A[0][1] * B[0]) / det;


					   
					   
					   
					   
	  const Point<2> gradient_direction
	    = Point<2>(a,b) / std::sqrt(a*a+b*b);
	  const Point<2> orthogonal_direction
	    = Point<2>(-b,a) / std::sqrt(a*a+b*b);

	  const double stretch_factor = std::sqrt(1.+a*a+b*b);
    
	  for (unsigned int i=0; i<point_list.size(); ++i)
	    {
					       
					       
					       
	      point_list[i][2] -= a*point_list[i][0] + b*point_list[i][1];

					       
					       
					       
					       
					       
	      const Point<2> xy (point_list[i][0],
				 point_list[i][1]);
	      const double grad_distance = xy * gradient_direction;
	      const double orth_distance = xy * orthogonal_direction;

					       
					       
					       
					       
					       
					       
	      const Point<2> new_xy
		= (grad_distance * stretch_factor * gradient_direction +
		   orth_distance * orthogonal_direction);
	      point_list[i][0] = new_xy[0];
	      point_list[i][1] = new_xy[1];	
	    }
	}

					 
					 
					 
					 
	for (unsigned int i=0; i<point_list.size(); ++i)
	  point_list[i] += Point<3>(4,4,8);
	
      }


      Point<3>
      Boundary::closest_point (const Point<3> &p) const
      {
	double distance = p.distance (point_list[0]);
	Point<3> point = point_list[0];
  
	for (std::vector<Point<3> >::const_iterator i=point_list.begin();
	     i != point_list.end(); ++i)
	  {
	    const double d = p.distance (*i);
	    if (d < distance)
	      {
		distance = d;
		point = *i;
	      }
	  }

	return point;
      }

  
      Point<3>
      Boundary::
      get_new_point_on_line (const Triangulation<3>::line_iterator &line) const
      {
	return closest_point (StraightBoundary<3,3>::get_new_point_on_line (line));
      }



      Point<3>
      Boundary::
      get_new_point_on_quad (const Triangulation<3>::quad_iterator &quad) const
      {
	return closest_point (StraightBoundary<3,3>::get_new_point_on_quad (quad));
      }



      void
      Boundary::
      get_intermediate_points_on_line (const Triangulation<3>::line_iterator &line,
				       std::vector<Point<3> > &points) const
      {
	StraightBoundary<3,3>::get_intermediate_points_on_line (line,
							      points);
	for (unsigned int i=0; i<points.size(); ++i)
	  points[i] = closest_point(points[i]);
      }



      void
      Boundary::
      get_intermediate_points_on_quad (const Triangulation<3>::quad_iterator &quad,
				       std::vector<Point<3> > &points) const
      {
	StraightBoundary<3,3>::get_intermediate_points_on_quad (quad,
							      points);
	for (unsigned int i=0; i<points.size(); ++i)
	  points[i] = closest_point(points[i]);
      }      
    }
    
    


    template <>
    std::string default_geometry_name<3> ()
    {
      return "square";
    }
    


    template <>
    void make_coarse_grid (const std::string &name,
                           Triangulation<3>  &coarse_grid)
    {
      const unsigned int dim=3;
      
				       
				       
				       
				       
				       
      if (name == "square")
	{
	  GridGenerator::hyper_cube (coarse_grid, 0, 1);
	  
	  for (unsigned int f=0; f<GeometryInfo<dim>::faces_per_cell; ++f)
	    if (coarse_grid.begin_active()->face(f)->center()[0] == 0)
	      coarse_grid.begin_active()->face(f)
		->set_boundary_indicator (BoundaryDescription::
					  boundary_robin_with_measurement);
	    else
	      coarse_grid.begin_active()->face(f)
		->set_boundary_indicator (BoundaryDescription::
					  boundary_robin);
	}
      
      else if (name == "hypercube_8")
	{
	  GridGenerator::hyper_cube (coarse_grid, 0, 8);
	  
	  for (unsigned int f=0; f<GeometryInfo<dim>::faces_per_cell; ++f)
	    if (coarse_grid.begin_active()->face(f)->center()[2] == 8)
	      coarse_grid.begin_active()->face(f)
		->set_boundary_indicator (BoundaryDescription::
					  boundary_robin_with_measurement);
	    else
	      coarse_grid.begin_active()->face(f)
		->set_boundary_indicator (BoundaryDescription::
					  boundary_robin);
	}
      else if (name == "8x8x4")
	{
	  std::vector<unsigned int> repetitions (3, 2);
	  repetitions[2] = 1;
					   
					   
					   
					   
	  GridGenerator::subdivided_hyper_rectangle (coarse_grid,
						     repetitions,
						     Point<dim>(0,0,4),
						     Point<dim>(8,8,8));
	  for (Triangulation<dim>::active_cell_iterator
		 cell = coarse_grid.begin_active();
	       cell != coarse_grid.end(); ++cell)
	    for (unsigned int f=0; f<GeometryInfo<dim>::faces_per_cell; ++f)
	      if (cell->face(f)->center()[2] == 8)
		cell->face(f)
		  ->set_boundary_indicator (BoundaryDescription::
					    boundary_robin_with_measurement);
	      else
		cell->face(f)
		  ->set_boundary_indicator (BoundaryDescription::
					    boundary_robin);
	}
      else if (name == "curved hypercube_8")
	CurvedHypercube8::create_coarse_grid (coarse_grid);
      else if (name == "breast phantom")
        Geometry::BreastPhantom::create_coarse_grid (coarse_grid);
      else if (name.find ("experimental point cloud") == 0)
	{
	  const std::string filename (name,
				      std::string ("experimental point cloud ").size(),
				      std::string::npos);
	  static const PointCloudSurface::Boundary boundary (filename);

	  std::vector<unsigned int> repetitions (3, 2);
	  repetitions[2] = 1;
					   
					   
					   
					   
	  GridGenerator::subdivided_hyper_rectangle (coarse_grid,
						     repetitions,
						     Point<dim>(0,0,4),
						     Point<dim>(8,8,8));
	  for (Triangulation<dim>::active_cell_iterator
		 cell = coarse_grid.begin_active();
	       cell != coarse_grid.end(); ++cell)
	    for (unsigned int f=0; f<GeometryInfo<dim>::faces_per_cell; ++f)
	      if (cell->face(f)->center()[2] == 8)
		{
		  cell->face(f)
		    ->set_boundary_indicator (BoundaryDescription::
					      boundary_robin_with_measurement);
		  
		  
		  
		  
		  for (unsigned int i=0; i<4; ++i)
		    cell->face(f)->line(i)
		      ->set_boundary_indicator (BoundaryDescription::
						boundary_robin_with_measurement);
		}
	      else
		cell->face(f)
		  ->set_boundary_indicator (BoundaryDescription::
					    boundary_robin);

					   
					   
					   
	  coarse_grid.set_boundary (BoundaryDescription::
				    boundary_robin_with_measurement,
				    boundary);

					   
					   
					   
					   
	  for (Triangulation<dim>::active_cell_iterator
		 cell = coarse_grid.begin_active();
	       cell != coarse_grid.end(); ++cell)
	    for (unsigned int v=0; v<GeometryInfo<dim>::vertices_per_cell; ++v)
	      if (cell->vertex(v)[2] == 8)
		cell->vertex(v)
		  = boundary.closest_point (cell->vertex(v));
	}
      
      else
        Assert (false, ExcNotImplemented());
    }
    
#endif 


    template <int dim>
    void
    refine_measurement_cells (const unsigned int  n_times,
                                 Triangulation<dim> &coarse_grid)
    {
      for (unsigned int i=0; i<n_times; ++i)
        {
          for (typename Triangulation<dim>::active_cell_iterator
                 cell = coarse_grid.begin_active();
               cell != coarse_grid.end(); ++cell)
            for (unsigned int f=0; f<GeometryInfo<dim>::faces_per_cell; ++f)
              if (cell->at_boundary(f)
                  &&
                  BoundaryDescription::is_robin_boundary_with_measurement
                  (cell->face(f)->boundary_indicator()))
                {
                  cell->set_refine_flag ();
                  break;
                }
          coarse_grid.execute_coarsening_and_refinement ();
        }
    }  
  }
}


namespace METomography
{
  namespace GridTransfer
  {
    template
    class InitialMeshRefinement<deal_II_dimension>;
  }
  
  namespace Geometry
  {
    template
    void
    refine_measurement_cells (const unsigned int,
                              Triangulation<deal_II_dimension> &)    ;
  }
}
