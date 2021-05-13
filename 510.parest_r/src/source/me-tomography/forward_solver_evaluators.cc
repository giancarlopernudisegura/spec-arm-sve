/* $Id: forward_solver_evaluators.cc 2694 2006-05-18 07:11:07Z wolf $ */
/* Author: Wolfgang Bangerth, University of Texas, 2003 */

#include <me-tomography/forward_solver_evaluators.h>

#include <base/quadrature_lib.h>
#include <base/utilities.h>
#include <base/function.h>
#include <grid/tria_iterator.h>
#include <grid/grid_out.h>
#include <dofs/dof_accessor.h>
#include <fe/fe_values.h>
#include <numerics/data_out.h>
#include <numerics/data_out_faces.h>

#include <libparest/utilities.h>

				 
#include <fstream>
#include <complex>

				 
				 
				 
				 
				 
				 
				 
#ifdef HAVE_STD_STRINGSTREAM
#  include <sstream>
#else
#  include <strstream>
#endif


namespace METomography
{
  namespace ForwardSolver
  {
    namespace Evaluation
    {
/* ------------------- EvaluationBase ---------------------- */      
      template <int dim>
      EvaluationBase<dim>::~EvaluationBase ()
      {}
  

/* ------------------- SolutionOutput ---------------------- */      
      
      template <int dim>
      class SolutionOutput : public EvaluationBase<dim>
      {
        public:
          SolutionOutput (const std::string &output_name_base,
                          const std::string &output_format);
      
          virtual void evaluate (const DoFHandler<dim> &dof_handler,
                                 const Vector<double>  &solution,
                                 const unsigned int     experiment_no,
                                 const unsigned int     n_experiments,
                                 const unsigned int     refinement_cycle) const;
        private:
          const std::string                         output_name_base;
          const typename DataOut<dim>::OutputFormat output_format;
      };
      


      template <int dim>
      SolutionOutput<dim>::
      SolutionOutput (const std::string &output_name_base,
                      const std::string &output_format)
                      :
                      output_name_base (output_name_base),
                      output_format (DataOut<dim>().parse_output_format(output_format))
      {}
  

      template <int dim>
      void
      SolutionOutput<dim>::evaluate (const DoFHandler<dim> &dof_handler,
                                     const Vector<double>  &solution,
                                     const unsigned int     experiment_no,
                                     const unsigned int     n_experiments,
                                     const unsigned int     refinement_cycle) const
      {
        std::vector<std::string> names;
        names.push_back ("incid_re");
        names.push_back ("incid_im");
        names.push_back ("fluor_re");
        names.push_back ("fluor_im");    
    
        DataOut<dim> data_out;
        data_out.attach_dof_handler (dof_handler);
        data_out.add_data_vector (solution, names);
        data_out.build_patches ();
  
#ifdef HAVE_STD_STRINGSTREAM
        std::ostringstream filename;
#else
        std::ostrstream filename;
#endif
        filename << output_name_base << "-"
                 << Utilities::int_to_string(experiment_no,
                                             Utilities::needed_digits(n_experiments))
                 << "."
                 << refinement_cycle
                 << data_out.default_suffix (output_format)
                 << std::ends;
#ifdef HAVE_STD_STRINGSTREAM
        std::ofstream out (filename.str().c_str());
#else
        std::ofstream out (filename.str());
#endif
    
        data_out.write (out, output_format);
      }

/* ------------------- MeshOutput ---------------------- */      
      
      template <int dim>
      class MeshOutput : public EvaluationBase<dim>
      {
	public:
	  MeshOutput (const std::string &output_name_base);
      
	  virtual void evaluate (const DoFHandler<dim> &dof_handler,
				 const Vector<double>  &solution,
				 const unsigned int     experiment_no,
				 const unsigned int     n_experiments,
				 const unsigned int     refinement_cycle) const;
	private:
	  const std::string output_name_base;
      };
      


      template <int dim>
      MeshOutput<dim>::
      MeshOutput (const std::string &output_name_base)
		      :
		      output_name_base (output_name_base)
      {}
  

      template <int dim>
      void
      MeshOutput<dim>::evaluate (const DoFHandler<dim> &dof_handler,
				 const Vector<double>  &/*solution*/,
				 const unsigned int     experiment_no,
				 const unsigned int     n_experiments,
				 const unsigned int     refinement_cycle) const
      {  
#ifdef HAVE_STD_STRINGSTREAM
	std::ostringstream filename;
#else
	std::ostrstream filename;
#endif
	filename << output_name_base << "-"
		 << Utilities::int_to_string(experiment_no,
					     Utilities::needed_digits(n_experiments))
		 << "."
		 << refinement_cycle
		 << ".eps"
		 << std::ends;
#ifdef HAVE_STD_STRINGSTREAM
	std::ofstream out (filename.str().c_str());
#else
	std::ofstream out (filename.str());
#endif
    
	GridOut().write_eps (dof_handler.get_tria(), out);
      }
      


/* ------------------- SurfaceOutput ---------------------- */      

      template <int dim>
      class SurfaceOutput : public EvaluationBase<dim>
      {
        public:
          SurfaceOutput (const std::string &output_name_base,
                         const std::string &output_format);
      
          virtual void evaluate (const DoFHandler<dim> &dof_handler,
                                 const Vector<double>  &solution,
                                 const unsigned int     experiment_no,
                                 const unsigned int     n_experiments,
                                 const unsigned int     refinement_cycle) const;
        private:
          const std::string                         output_name_base;
          const typename DataOutFaces<dim>::OutputFormat output_format;
      };


      template <int dim>
      SurfaceOutput<dim>::
      SurfaceOutput (const std::string &output_name_base,
                     const std::string &output_format)
                      :
                      output_name_base (output_name_base),
                      output_format (DataOutFaces<dim>().parse_output_format(output_format))
      {}
  

      template <int dim>
      void
      SurfaceOutput<dim>::evaluate (const DoFHandler<dim> &dof_handler,
                                    const Vector<double>  &solution,
                                    const unsigned int     experiment_no,
                                    const unsigned int     n_experiments,
                                    const unsigned int     refinement_cycle) const
      {
        std::vector<std::string> names;
        names.push_back ("incid_re");
        names.push_back ("incid_im");
        names.push_back ("fluor_re");
        names.push_back ("fluor_im");    
    
        DataOutFaces<dim> data_out;
        data_out.attach_dof_handler (dof_handler);
        data_out.add_data_vector (solution, names);
        data_out.build_patches ();
  
#ifdef HAVE_STD_STRINGSTREAM
        std::ostringstream filename;
#else
        std::ostrstream filename;
#endif
        filename << output_name_base << "-"
                 << Utilities::int_to_string(experiment_no,
                                             Utilities::needed_digits(n_experiments))
                 << "."
                 << refinement_cycle
                 << data_out.default_suffix (output_format)
                 << std::ends;
#ifdef HAVE_STD_STRINGSTREAM
        std::ofstream out (filename.str().c_str());
#else
        std::ofstream out (filename.str());
#endif
    
        data_out.write (out, output_format);
      }



      namespace BreastPhantomGeometry
      {

        const Point<3> detector_positions[]
 = 	  { Point<3>( -5.0000, -0.0000,  0.0000),
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

        const unsigned int n_detectors
        = sizeof(detector_positions)/sizeof(detector_positions[0]);
        
/* ------------------- DetectorPositions ---------------------- */      

        template <int dim>
        class DetectorPositions : public EvaluationBase<dim>
        {
          public:
            DetectorPositions (const std::string &output_name_base);
      
            virtual void evaluate (const DoFHandler<dim> &dof_handler,
                                   const Vector<double>  &solution,
                                   const unsigned int     experiment_no,
                                   const unsigned int     n_experiments,
                                   const unsigned int     refinement_cycle) const;
          private:
            const std::string output_name_base;
        };


        template <int dim>
        DetectorPositions<dim>::
        DetectorPositions (const std::string &output_name_base)
                        :
                        output_name_base (output_name_base)
        {}
  

        template <int dim>
        void
        DetectorPositions<dim>::
        evaluate (const DoFHandler<dim> &dof_handler,
                  const Vector<double>  &solution,
                  const unsigned int     experiment_no,
                  const unsigned int     n_experiments,
                  const unsigned int     refinement_cycle) const
        {
          const double radius = 0.5;
          
                                           
                                           
                                           
                                           
                                           
                                           
                                           
                                           
                                           
          std::vector<std::complex<double> > integrals (n_detectors, 0.);
          std::vector<double>                volumes (n_detectors, 0.);

          const QTrapez<1> q_trapez;
          const QIterated<dim> quadrature (q_trapez, 4);
          const unsigned int n_q_points = quadrature.n_quadrature_points;
          
          FEValues<dim> fe_values (dof_handler.get_fe(), quadrature,
                                   update_values | update_JxW_values |
                                   update_q_points);

          std::vector<Vector<double> >
            solution_values (n_q_points, Vector<double> (4));
          
          for (typename DoFHandler<dim>::active_cell_iterator
                 cell = dof_handler.begin_active();
               cell != dof_handler.end(); ++cell)
            {
              const double     h           = cell->diameter();
              const Point<dim> cell_center = cell->center();
              
              for (unsigned int i=0; i<n_detectors; ++i)
                if (cell_center.distance (detector_positions[i])
                    < h+radius)
                  {
                    fe_values.reinit (cell);
                    fe_values.get_function_values (solution,
                                                   solution_values);
                    for (unsigned int q=0; q<n_q_points; ++q)
                      if (fe_values.quadrature_point(q)
                          .distance(detector_positions[i]) < radius)
                        {
                          integrals[i] +=
                            std::complex<double> (solution_values[q](2),
                                                  solution_values[q](3)) *
                            fe_values.JxW (q);
                          volumes[i] += fe_values.JxW(q);
                        }
                  }
            }

#ifdef HAVE_STD_STRINGSTREAM
          std::ostringstream filename;
#else
          std::ostrstream filename;
#endif
          filename << output_name_base << "-"
                   << Utilities::int_to_string(experiment_no,
                                               Utilities::needed_digits(n_experiments))
                   << "."
                   << refinement_cycle
                   << std::ends;
#ifdef HAVE_STD_STRINGSTREAM
          std::ofstream out (filename.str().c_str());
#else
          std::ofstream out (filename.str());
#endif
          for (unsigned int i=0; i<n_detectors; ++i)
            {
              AssertThrow (volumes[i] > 0,
                           ExcMessage ("Detector point not found"));
              out << integrals[i].real() / volumes[i] << ' '
                  << integrals[i].imag() / volumes[i] << ' '
                  << volumes[i] << std::endl;
            }
        }
      }
    

/* ------------------- global functions ---------------------- */      
      
      
      template <int dim>
      typename EvaluatorList<dim>::type
      get_evaluator_list (const Parameters<dim> &parameters)
      {
        const std::vector<std::string> name_list
          = Utilities::split_string_list (parameters.evaluators);
        
        typename EvaluatorList<dim>::type
          ret_val;
        for (unsigned int i=0; i<name_list.size(); ++i)
          {
            if (name_list[i] == "output")
              ret_val.
                push_back (boost::shared_ptr<EvaluationBase<dim> >
                           (new SolutionOutput<dim>(parameters.output_directory +
                                                    "forward",
                                                    parameters.output_format)));
	    else if (name_list[i] == "mesh output")
              ret_val.
                push_back (boost::shared_ptr<EvaluationBase<dim> >
                           (new MeshOutput<dim>(parameters.output_directory +
						"forward")));
            else if (name_list[i] == "surface output")
              ret_val.
                push_back (boost::shared_ptr<EvaluationBase<dim> >
                           (new SurfaceOutput<dim>(parameters.output_directory +
                                                   "forward-surface",
                                                   parameters.output_format)));
            else if (name_list[i] == "phantom: detectors")
              ret_val.
                push_back (boost::shared_ptr<EvaluationBase<dim> >
                           (new BreastPhantomGeometry::
                            DetectorPositions<dim>(parameters.output_directory +
                                                   "forward-detectors")));
            else
              AssertThrow (false,
                           ExcMessage ((std::string("There is no evaluator named <") +
                                        name_list[i] + ">").c_str()));
          }
        
        return ret_val;
      }
    }    
  }
}


namespace METomography
{
  namespace ForwardSolver
  {
    namespace Evaluation
    {
      template class EvaluationBase<deal_II_dimension>;
      template class SolutionOutput<deal_II_dimension>;
      template class MeshOutput<deal_II_dimension>;
      template class SurfaceOutput<deal_II_dimension>;

      namespace BreastPhantomGeometry
      {
        template class DetectorPositions<deal_II_dimension>;
      }
      
      template
      EvaluatorList<deal_II_dimension>::type
      get_evaluator_list (const Parameters<deal_II_dimension> &);
    }
  }
}
