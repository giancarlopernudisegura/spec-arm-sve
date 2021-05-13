//----------------------------   evaluations.h     ---------------------------
//    $Id: evaluations.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   evaluations.h     ---------------------------
#ifndef __parameter_estimation__evaluations_h
#define __parameter_estimation__evaluations_h
//----------------------------   evaluations.h     ---------------------------

#include <libparest/slave/stationary/evaluations.h>

#include "config.h"


namespace METomography
{
  namespace Slave
  {
    template <int> class Slave;
  }
}



namespace METomography
{
  namespace Evaluations
  {
    template <int dim, typename number=double>
    class Grid128x128 : public libparest::Slave::Stationary::Evaluations::PointEvaluationBase<dim,number>
    {
      public:
        Grid128x128 (const libparest::GlobalParameters<dim> &global_parameters);

      private:
        static std::vector<Point<dim> > get_points ();
    };

    

    template <int dim, typename number=double>
    class WriteMatrixA : public libparest::Slave::Stationary::Evaluations::Base<dim,number>
    {
      public:
        WriteMatrixA (const libparest::GlobalParameters<dim> &global_parameters);

	virtual void evaluate (const DoFHandler<dim> &dof_handler,
			       const Vector<number>  &solution,
			       const unsigned int     experiment_no,
			       const unsigned int     iteration,
			       const libparest::Slave::Stationary::Slave<dim,number> &slave) const;

	virtual void evaluate (const DoFHandler<dim> &dof_handler,
			       const BlockVector<number>  &solution,
			       const unsigned int     experiment_no,
			       const unsigned int     iteration,
			       const libparest::Slave::Stationary::Slave<dim,number> &slave) const;
    };



    template <int dim, typename number=double>
    class WriteMatrixM : public libparest::Slave::Stationary::Evaluations::Base<dim,number>
    {
      public:
        WriteMatrixM (const libparest::GlobalParameters<dim> &global_parameters);

	virtual void evaluate (const DoFHandler<dim> &dof_handler,
			       const Vector<number>  &solution,
			       const unsigned int     experiment_no,
			       const unsigned int     iteration,
			       const libparest::Slave::Stationary::Slave<dim,number> &slave) const;

	virtual void evaluate (const DoFHandler<dim> &dof_handler,
			       const BlockVector<number>  &solution,
			       const unsigned int     experiment_no,
			       const unsigned int     iteration,
			       const libparest::Slave::Stationary::Slave<dim,number> &slave) const;
    };



    template <int dim, typename number=double>
    class WriteMatrixCX : public libparest::Slave::Stationary::Evaluations::Base<dim,number>
    {
      public:
        WriteMatrixCX (const libparest::GlobalParameters<dim> &global_parameters);

	virtual void evaluate (const DoFHandler<dim> &dof_handler,
			       const Vector<number>  &solution,
			       const unsigned int     experiment_no,
			       const unsigned int     iteration,
			       const libparest::Slave::Stationary::Slave<dim,number> &slave) const;

	virtual void evaluate (const DoFHandler<dim> &dof_handler,
			       const BlockVector<number>  &solution,
			       const unsigned int     experiment_no,
			       const unsigned int     iteration,
			       const libparest::Slave::Stationary::Slave<dim,number> &slave) const;
    };
  }
}


//----------------------------   evaluations.h     ---------------------------
// end of #ifndef __parameter_estimation__evaluations_h
#endif
//----------------------------   evaluations.h     ---------------------------


