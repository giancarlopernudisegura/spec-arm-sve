//---------------------------------------------------------------------------
//    $Id: polynomials_raviart_thomas.cc 17196 2008-10-13 18:09:20Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2004, 2005, 2006, 2007, 2008 by the deal.II authors
//
//    This file is subject to QPL and may not be  distributed
//    without copyright and license information. Please refer
//    to the file deal.II/doc/license.html for the  text  and
//    further information on this license.
//
//---------------------------------------------------------------------------

#include <base/polynomials_raviart_thomas.h>
#include <base/quadrature_lib.h>
#include <base/thread_management.h>
#include <iostream>
#include <iomanip>

//TODO[WB]: This class is not thread-safe: it uses mutable member variables that contain temporary state. this is not what one would want when one uses a finite element object in a number of different contexts on different threads: finite element objects should be stateless

DEAL_II_NAMESPACE_OPEN


template <int dim>
PolynomialsRaviartThomas<dim>::PolynomialsRaviartThomas (const unsigned int k)
		:
		my_degree(k),
		polynomial_space (create_polynomials (k)),
		n_pols(compute_n_pols(k))
{}



template <int dim>
std::vector<std::vector< Polynomials::Polynomial< double > > >
PolynomialsRaviartThomas<dim>::create_polynomials (const unsigned int k)
{
  std::vector<std::vector< Polynomials::Polynomial< double > > > pols(dim);
  pols[0] = Polynomials::LagrangeEquidistant::generate_complete_basis(k+1);
  if (k == 0)
    for (unsigned int d=1;d<dim;++d)
      pols[d] = Polynomials::Legendre::generate_complete_basis(0);
  else
    for (unsigned int d=1;d<dim;++d)
      pols[d] = Polynomials::LagrangeEquidistant::generate_complete_basis(k);

  return pols;
}


template <int dim>
void
PolynomialsRaviartThomas<dim>::compute (const Point<dim>            &unit_point,
					std::vector<Tensor<1,dim> > &values,
					std::vector<Tensor<2,dim> > &grads,
					std::vector<Tensor<3,dim> > &grad_grads) const
{
  Assert(values.size()==n_pols || values.size()==0,
	 ExcDimensionMismatch(values.size(), n_pols));
  Assert(grads.size()==n_pols|| grads.size()==0,
	 ExcDimensionMismatch(grads.size(), n_pols));
  Assert(grad_grads.size()==n_pols|| grad_grads.size()==0,
	 ExcDimensionMismatch(grad_grads.size(), n_pols));

				   // have a few scratch
				   // arrays. because we don't want to
				   // re-allocate them every time this
				   // function is called, we make them
				   // static. however, in return we
				   // have to ensure that the calls to
				   // the use of these variables is
				   // locked with a mutex. if the
				   // mutex is removed, several tests
				   // (notably
				   // deal.II/create_mass_matrix_05)
				   // will start to produce random
				   // results in multithread mode
  static Threads::ThreadMutex mutex;
  Threads::ThreadMutex::ScopedLock lock(mutex);

  static std::vector<double> p_values;    
  static std::vector<Tensor<1,dim> > p_grads;
  static std::vector<Tensor<2,dim> > p_grad_grads;

  const unsigned int n_sub = polynomial_space.n();  
  p_values.resize((values.size() == 0) ? 0 : n_sub);
  p_grads.resize((grads.size() == 0) ? 0 : n_sub);
  p_grad_grads.resize((grad_grads.size() == 0) ? 0 : n_sub);
  
  for (unsigned int d=0;d<dim;++d)
    {
				       // First we copy the point. The
				       // polynomial space for
				       // component d consists of
				       // polynomials of degree k+1 in
				       // x_d and degree k in the
				       // other variables. in order to
				       // simplify this, we use the
				       // same AnisotropicPolynomial
				       // space and simply rotate the
				       // coordinates through all
				       // directions.
      Point<dim> p;
      for (unsigned int c=0;c<dim;++c)
	p(c) = unit_point((c+d)%dim);
      
      polynomial_space.compute (p, p_values, p_grads, p_grad_grads);
      
      for (unsigned int i=0;i<p_values.size();++i)
	  values[i+d*n_sub][d] = p_values[i];
      
      for (unsigned int i=0;i<p_grads.size();++i)
	for (unsigned int d1=0;d1<dim;++d1)
	  grads[i+d*n_sub][d][(d1+d)%dim] = p_grads[i][d1];
      
      for (unsigned int i=0;i<p_grad_grads.size();++i)
	for (unsigned int d1=0;d1<dim;++d1)
	  for (unsigned int d2=0;d2<dim;++d2)
	    grad_grads[i+d*n_sub][d][(d1+d)%dim][(d2+d)%dim]
	      = p_grad_grads[i][d1][d2];
    }
}


template <int dim>
unsigned int
PolynomialsRaviartThomas<dim>::compute_n_pols(unsigned int k)
{
  if (dim == 1) return k+1;
  if (dim == 2) return 2*(k+1)*(k+2);
  if (dim == 3) return 3*(k+1)*(k+1)*(k+2);
  
  Assert(false, ExcNotImplemented());
  return 0;
}


template class PolynomialsRaviartThomas<1>;
template class PolynomialsRaviartThomas<2>;
template class PolynomialsRaviartThomas<3>;


DEAL_II_NAMESPACE_CLOSE
