/* $Id: evaluations.cc 2724 2006-06-07 21:09:48Z wolf $ */

#include <libparest/slave/stationary/evaluations.h>
#include <libparest/utilities.h>

#include <base/utilities.h>
#include <lac/vector.h>
#include <lac/block_vector.h>
#include <grid/tria_iterator.h>
#include <grid/geometry_info.h>
#include <dofs/dof_accessor.h>
#include <dofs/dof_handler.h>
#include <fe/mapping_q1.h>
#include <fe/fe_values.h>

#include <fstream>
#include <algorithm>


namespace libparest
{
  namespace Slave
  {
    namespace Stationary
    {
      namespace Evaluations
      {
        template <int dim, typename number>
        Base<dim,number>::Base (const GlobalParameters<dim> &parameters)
                        :
                        parameters (&parameters)
        {}


        
        template <int dim, typename number>
        void
        Base<dim,number>::
        evaluate (const DoFHandler<dim>     &dof_handler,
                  const BlockVector<number> &solution,
                  const unsigned int         experiment_no,
                  const unsigned int         iteration,
		  const Slave<dim,number> &slave) const
        {
          Vector<number> tmp (solution.size());
          std::copy (solution.begin(), solution.end(), tmp.begin());
          evaluate (dof_handler, tmp, experiment_no, iteration, slave);
        }
        

          
        template <int dim, typename number>
        PointEvaluationBase<dim,number>::
        PointEvaluationBase (const GlobalParameters<dim>    &parameters,
                             const std::vector<Point<dim> > &point_list,
                             const std::string              &file_suffix)
                        :
                        Base<dim,number> (parameters),
                        point_list (point_list),
                        file_suffix (file_suffix)
        {}



        template <int dim, typename number>
        void
        PointEvaluationBase<dim,number>::
        evaluate (const DoFHandler<dim> &dof_handler,
                  const Vector<number>  &solution,
                  const unsigned int     experiment_no,
                  const unsigned int     iteration,
		  const Slave<dim,number> &/*slave*/) const
        {
          const std::string filename
            = this->parameters->output_directory
            + Utilities::int_to_string(iteration,3)
            + "-s"
            + Utilities::int_to_string(experiment_no,
                                       Utilities::needed_digits(this->parameters->n_experiments))
            + file_suffix;









                                           
                                           
                                           
                                           
                                           
          std::vector<bool> point_handled (this->point_list.size(), false);
	
          MappingQ1<dim> mapping;
          std::vector<Vector<double> >
            function_values (1, Vector<double>(dof_handler.get_fe().n_components()));
	
                                           
          for (typename DoFHandler<dim>::active_cell_iterator
                 cell = dof_handler.begin_active();
               cell!=dof_handler.end(); ++cell)
            {
                                               
                                               
                                               
                                               
              for (unsigned int point=0;
                   point<this->point_list.size(); ++point)
                {
                                                   
                                                   
                                                   
                  if (point_handled[point] == true)
                    continue;

                                                   
                                                   
                                                   
                                                   
                  const Point<dim> unit_coordinates
                    = mapping.transform_real_to_unit_cell(cell,
                                                          this->point_list[point]);

                  if (!GeometryInfo<dim>::is_inside_unit_cell (unit_coordinates))
                    continue;

                                                   
                                                   
                                                   
                  const Quadrature<dim> evaluator
                    (std::vector<Point<dim> >(1, unit_coordinates),
                     std::vector<double> (1, 1.));
                  FEValues<dim> fe_values (dof_handler.get_fe(), evaluator,
                                           update_values);
                  fe_values.reinit (cell);
                  fe_values.get_function_values (solution, function_values);

                                                   
                                                   
                                                   







                                                   
                                                   
                                                   
                  point_handled[point] = true;
                }
            }
        }



        template <int dim, typename number>
        void
        PointEvaluationBase<dim,number>::
        evaluate (const DoFHandler<dim>     &dof_handler,
                  const BlockVector<number> &solution,
                  const unsigned int         experiment_no,
                  const unsigned int         iteration,
		  const Slave<dim,number> &slave) const
        {
          Vector<number> tmp (solution.size());
          std::copy (solution.begin(), solution.end(), tmp.begin());
          PointEvaluationBase<dim,number>::evaluate (dof_handler, tmp,
						     experiment_no, iteration,
						     slave);
        }
        


  

        template class Base<deal_II_dimension,double>;
	template class Base<deal_II_dimension,float>;
        template class PointEvaluationBase<deal_II_dimension,double>;
        template class PointEvaluationBase<deal_II_dimension,float>;
      }
    }
  }
}
