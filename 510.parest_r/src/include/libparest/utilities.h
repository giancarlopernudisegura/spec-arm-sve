//----------------------------   utilities.h     ---------------------------
//    $Id: utilities.h 3734 2008-12-14 20:05:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2005, 2006, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   utilities.h     ---------------------------
#ifndef __libparest__utilities_h
#define __libparest__utilities_h
//----------------------------   utilities.h     ---------------------------




#include <base/exceptions.h>
#include <base/point.h>
#include <base/smartpointer.h>
#include <fe/fe.h>

#include <vector>
#include <string>

namespace dealii
{
  template <int dim> class Quadrature;
}


namespace libparest
{
  using namespace dealii;



  template <typename T>
  void delete_ptr (SmartPointer<T> &p)
  {
    if (p != 0)
      {
	T *x = p;
	p = 0;
	delete x;
      }
  }


  template <typename T>
  void delete_ptr (T *&p)
  {
    if (p != 0)
      {
	delete p;
	p = 0;
      }
  }



  bool defer_spawning_threads ();



  template <int dim>
  class FEHelper
  {
    public:
    
      static const FiniteElement<dim> &
      get_fe (const std::string  &name,
	      const unsigned int  number = 1);

      static const FiniteElement<dim> &
      get_fe (const std::string &fe1,
	      const unsigned int number1,
	      const std::string &fe2,
	      const unsigned int number2);

      static const FiniteElement<dim> &
      get_next_higher_fe (const FiniteElement<dim> &fe);
    
      static const Quadrature<dim>    &
      get_quadrature (const std::string &name);

      static const Quadrature<dim-1>  &
      get_quadrature_face (const std::string &name);

      static unsigned int memory_consumption ();
    
      DeclException0 (ExcInternalError);
  };



  template <int dim>
  std::vector<Point<dim> >
  make_integer_lattice (const unsigned int N);

  template <int dim>
  std::vector<Point<dim> >
  make_unique_integer_lattice (const unsigned int N);

  template <int dim>
  std::vector<Point<dim> >
  make_sorted_unique_integer_lattice (const unsigned int N);
}


//----------------------------   utilities.h     ---------------------------
// end of #ifndef __libparest__utilities_h
#endif
//----------------------------   utilities.h     ---------------------------
