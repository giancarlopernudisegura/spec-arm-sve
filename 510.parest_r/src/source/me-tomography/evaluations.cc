#include <me-tomography/evaluations.h>
#include <me-tomography/me_slave.h>
#include <libparest/utilities.h>

#include <base/utilities.h>
#include <lac/block_vector.h>
#include <grid/tria_iterator.h>
#include <grid/geometry_info.h>
#include <dofs/dof_accessor.h>
#include <dofs/dof_handler.h>
#include <fe/mapping_q1.h>
#include <fe/fe_values.h>

#include <fstream>


namespace METomography
{
  namespace Evaluations
  {
    template <int dim, typename number>
    Grid128x128<dim,number>::
    Grid128x128 (const libparest::GlobalParameters<dim> &global_parameters)
                    :
                    libparest::Slave::Stationary::Evaluations::
                       PointEvaluationBase<dim,number> (global_parameters,
                                                 get_points(),
                                                 ".points_128x128")
    {}



    template <int dim, typename number>
    std::vector<Point<dim> > 
    Grid128x128<dim,number>::get_points ()
    {
      Assert (false, ExcInternalError());
      return std::vector<Point<dim> > (0);
    }



    template <>
    std::vector<Point<3> >
    Grid128x128<3>::get_points ()
    {
      const unsigned int N = 128;
	
      std::vector<Point<3> > points;
      points.reserve (N*N);
      for (unsigned int i=0; i<=N; ++i)
        for (unsigned int j=0; j<=N; ++j)
          points.push_back (Point<3> (0., 8.*i/N, 8.*j/N));
	
      return points;
    }



    template <int dim, typename number>
    WriteMatrixA<dim,number>::
    WriteMatrixA (const libparest::GlobalParameters<dim> &global_parameters)
                    :
                    libparest::Slave::Stationary::Evaluations::Base<dim,number> (global_parameters)
    {}



    template <int dim, typename number>
    void
    WriteMatrixA<dim,number>::
    evaluate (const DoFHandler<dim> &/*dof_handler*/,
	      const Vector<number>  &/*solution*/,
	      const unsigned int     experiment_no,
	      const unsigned int     iteration,
	      const libparest::Slave::Stationary::Slave<dim,number> &slave) const
    {
      const std::string filename
	= this->parameters->output_directory
	+ Utilities::int_to_string(iteration,3)
	+ "-s"
	+ Utilities::int_to_string(experiment_no,
				   Utilities::needed_digits(this->parameters->n_experiments))
	+ ".matrices.A";
      std::ofstream out(filename.c_str());
      AssertThrow (out, ExcIO());

      out << slave.get_global_matrix().global_matrix.block(1,0).m() << ' '
	  << slave.get_global_matrix().global_matrix.block(1,0).n()
	  << std::endl;
      slave.get_global_matrix().global_matrix.block(1,0).print (out);
    }



    template <int dim, typename number>
    void
    WriteMatrixA<dim,number>::
    evaluate (const DoFHandler<dim> &dof_handler,
	      const BlockVector<number>  &solution,
	      const unsigned int     experiment_no,
	      const unsigned int     iteration,
	      const libparest::Slave::Stationary::Slave<dim,number> &slave) const
    {
      Vector<number> tmp (solution.size());
      std::copy (solution.begin(), solution.end(), tmp.begin());
      WriteMatrixA<dim,number>::evaluate (dof_handler, tmp,
					  experiment_no, iteration,
					  slave);
    }



    template <int dim, typename number>
    WriteMatrixM<dim,number>::
    WriteMatrixM (const libparest::GlobalParameters<dim> &global_parameters)
                    :
                    libparest::Slave::Stationary::Evaluations::Base<dim,number> (global_parameters)
    {}



    template <int dim, typename number>
    void
    WriteMatrixM<dim,number>::
    evaluate (const DoFHandler<dim> &/*dof_handler*/,
	      const Vector<number>  &/*solution*/,
	      const unsigned int     experiment_no,
	      const unsigned int     iteration,
	      const libparest::Slave::Stationary::Slave<dim,number> &slave) const
    {
      const std::string filename
	= this->parameters->output_directory
	+ Utilities::int_to_string(iteration,3)
	+ "-s"
	+ Utilities::int_to_string(experiment_no,
				   Utilities::needed_digits(this->parameters->n_experiments))
	+ ".matrices.M";
      std::ofstream out(filename.c_str());
      AssertThrow (out, ExcIO());
      
      out << slave.get_global_matrix().M->m() << ' ' << slave.get_global_matrix().M->n()
	  << std::endl;
      slave.get_global_matrix().M->print (out);
    }



    template <int dim, typename number>
    void
    WriteMatrixM<dim,number>::
    evaluate (const DoFHandler<dim> &dof_handler,
	      const BlockVector<number>  &solution,
	      const unsigned int     experiment_no,
	      const unsigned int     iteration,
	      const libparest::Slave::Stationary::Slave<dim,number> &slave) const
    {
      Vector<number> tmp (solution.size());
      std::copy (solution.begin(), solution.end(), tmp.begin());
      WriteMatrixM<dim,number>::evaluate (dof_handler, tmp,
					  experiment_no, iteration,
					  slave);
    }



    template <int dim, typename number>
    WriteMatrixCX<dim,number>::
    WriteMatrixCX (const libparest::GlobalParameters<dim> &global_parameters)
                    :
                    libparest::Slave::Stationary::Evaluations::Base<dim,number> (global_parameters)
    {}



    template <int dim, typename number>
    void
    WriteMatrixCX<dim,number>::
    evaluate (const DoFHandler<dim> &/*dof_handler*/,
	      const Vector<number>  &/*solution*/,
	      const unsigned int     experiment_no,
	      const unsigned int     iteration,
	      const libparest::Slave::Stationary::Slave<dim,number> &slave) const
    {
      const unsigned int N_u = slave.get_global_matrix().C->m(),
			 N_q = slave.get_global_matrix().C->n();
      
      FullMatrix<double> CX (N_u, N_q);
      Vector<double> tmp1 (N_q);
      Vector<double> tmp2 (N_u);
      for (unsigned int i=0; i<N_q; ++i)
	{
	  tmp1 = 0;
	  tmp1(i) = 1;
	  slave.get_global_matrix().C->vmult (tmp2, tmp1);

	  for (unsigned int j=0; j<N_u; ++j)
	    CX(j,i) = tmp2(j);
	}

	
      const std::string filename
	= this->parameters->output_directory
	+ Utilities::int_to_string(iteration,3)
	+ "-s"
	+ Utilities::int_to_string(experiment_no,
				   Utilities::needed_digits(this->parameters->n_experiments))
	+ ".matrices.CX";
      std::ofstream out(filename.c_str());
      AssertThrow (out, ExcIO());

      out << CX.m() << ' ' << CX.n() << std::endl;
      for (unsigned int i=0; i<CX.m(); ++i)
	for (unsigned int j=0; j<CX.n(); ++j)
	  if (CX(i,j) != 0)
	    out << i << ' ' << j << ' ' << CX(i,j) << std::endl;
    }



    template <int dim, typename number>
    void
    WriteMatrixCX<dim,number>::
    evaluate (const DoFHandler<dim> &dof_handler,
	      const BlockVector<number>  &solution,
	      const unsigned int     experiment_no,
	      const unsigned int     iteration,
	      const libparest::Slave::Stationary::Slave<dim,number> &slave) const
    {
      Vector<number> tmp (solution.size());
      std::copy (solution.begin(), solution.end(), tmp.begin());
      WriteMatrixCX<dim,number>::evaluate (dof_handler, tmp,
					   experiment_no, iteration,
					   slave);
    }
  }

  

  namespace Evaluations
  {
    template class Grid128x128<deal_II_dimension, double>;
    template class WriteMatrixA<deal_II_dimension, double>;
    template class WriteMatrixM<deal_II_dimension, double>;
    template class WriteMatrixCX<deal_II_dimension, double>;
  }
}
