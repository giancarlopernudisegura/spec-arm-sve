//----------------------------   evaluations.h     ---------------------------
//    $Id: evaluations.h 3734 2008-12-14 20:05:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   evaluations.h     ---------------------------
#ifndef __libparest__evaluations_h
#define __libparest__evaluations_h
//----------------------------   evaluations.h     ---------------------------


#include <base/subscriptor.h>
#include <dofs/dof_handler.h>
#include <libparest/global_parameters.h>

#include <vector>
#include <string>

namespace dealii
{
  template <typename> class Vector;
  template <typename> class BlockVector;
  template <int>      class Point;
}


namespace libparest
{
  using namespace dealii;


  namespace Slave
  {
    namespace Stationary
    {
      template <int dim, typename number>
      class Slave;
    
    
      namespace Evaluations
      {
        template <int dim, typename number=double>
        class Base : public Subscriptor
        {
          public:
            Base (const GlobalParameters<dim> &parameters);
            
            virtual void evaluate (const DoFHandler<dim>       &dof_handler,
                                   const Vector<number>        &solution,
                                   const unsigned int           experiment_no,
                                   const unsigned int           iteration,
				   const Slave<dim,number> &slave) const = 0;

            virtual void evaluate (const DoFHandler<dim>       &dof_handler,
                                   const BlockVector<number>   &solution,
                                   const unsigned int           experiment_no,
                                   const unsigned int           iteration,
				   const Slave<dim,number> &slave) const;

          protected:
            const SmartPointer<const GlobalParameters<dim> > parameters;
        };

        template <int dim, typename number=double>
        class PointEvaluationBase : public Base<dim, number>
        {
          public:
            PointEvaluationBase (const GlobalParameters<dim>    &parameters,
                                 const std::vector<Point<dim> > &point_list,
                                 const std::string              &file_suffix);

            virtual void evaluate (const DoFHandler<dim>       &dof_handler,
                                   const Vector<number>        &solution,
                                   const unsigned int           experiment_no,
                                   const unsigned int           iteration,
				   const Slave<dim,number> &slave) const;

            virtual void evaluate (const DoFHandler<dim>       &dof_handler,
                                   const BlockVector<number>   &solution,
                                   const unsigned int           experiment_no,
                                   const unsigned int           iteration,
				   const Slave<dim,number> &slave) const;
          private:
            const std::vector<Point<dim> > point_list;

            const std::string              file_suffix;
        };
      }
    }
  }
}



//----------------------------   evaluations.h     ---------------------------
// end of #ifndef __libparest__evaluations_h
#endif
//----------------------------   evaluations.h     ---------------------------
