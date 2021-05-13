/* $Id: utilities.cc 3641 2008-07-10 21:56:45Z bangerth $ */



#include <base/quadrature_lib.h>
#include <base/memory_consumption.h>
#include <base/thread_management.h>
#include <base/multithread_info.h>
#include <fe/fe_q.h>
#include <fe/fe_dgq.h>
#include <fe/fe_system.h>
#include <fe/fe_tools.h>

#include <libparest/utilities.h>

#include <map>


namespace libparest
{
  DeclException1 (ExcUnknownFE,
		  std::string,
		  << "Unknown finite element with name <" << arg1 << ">.");
  DeclException2 (ExcUnknownFE2,
		  std::string, std::string,
		  << "Unknown finite element with sub-names <" << arg1
		  << "> and <" << arg2 << ">.");
  DeclException2 (ExcERRNONotZero,
		  int, std::string,
		  << "After a syscall to " << arg2 << ", errno==" << arg1);

  template <int dim>
  struct StaticFEList
  {
    public:
      typedef std::map<std::string,FiniteElement<dim>*> FEMap;

      ~StaticFEList ();
    
      Threads::ThreadMutex & get_section_lock() { return section_lock; };
      FEMap &                get_fe_map ()      { return fe_map; };
	
    private:
      Threads::ThreadMutex section_lock;
      FEMap                fe_map;
  };


  template <int dim>
  StaticFEList<dim>::~StaticFEList () 
  {
				     
				     
    for (typename FEMap::iterator i=fe_map.begin(); i != fe_map.end(); ++i)
      delete_ptr (i->second);
  }


  StaticFEList<deal_II_dimension> static_fe_list;






  namespace QuadratureObjects
  {
    const QGauss2<deal_II_dimension>        q_gauss_2;
    const QGauss3<deal_II_dimension>        q_gauss_3;
    const QGauss4<deal_II_dimension>        q_gauss_4;
    const QGauss5<deal_II_dimension>        q_gauss_5;
    const QGauss6<deal_II_dimension>        q_gauss_6;
    const QGauss7<deal_II_dimension>        q_gauss_7;
  
#if deal_II_dimension != 1
    const QGauss2<deal_II_dimension-1>      q_gauss_2_face;
    const QGauss3<deal_II_dimension-1>      q_gauss_3_face;
    const QGauss4<deal_II_dimension-1>      q_gauss_4_face;
    const QGauss5<deal_II_dimension-1>      q_gauss_5_face;
    const QGauss6<deal_II_dimension-1>      q_gauss_6_face;
    const QGauss7<deal_II_dimension-1>      q_gauss_7_face;
#endif
  }



  template <int dim>
  const FiniteElement<dim> &
  FEHelper<dim>::get_fe (const std::string  &name,
			 const unsigned int  repetition)
  {
				     
				     
				     
    static_fe_list.get_section_lock().acquire ();

				     
				     
    std::string key  = name;
    for (unsigned int i=1; i<repetition; ++i)
      key += '/' + name;
  
    if (static_fe_list.get_fe_map().find (key) == static_fe_list.get_fe_map().end())
      {
	FiniteElement<dim> *fe = 0;
  
					 
	if (repetition == 1)
	  {
	    if (name=="linear")
	      fe = new FE_Q<dim>(1);
	    else
	      if (name=="quadratic")
		fe = new FE_Q<dim>(2);
	      else
		if (name=="cubic")
		  fe = new FE_Q<dim>(3);
		else
		  if (name=="discontinuous constant")
		    fe = new FE_DGQ<dim>(0);
		  else
		    if (name=="discontinuous linear")
		      fe = new FE_DGQ<dim>(1);
		    else
		      if (name=="discontinuous quadratic")
			fe = new FE_DGQ<dim>(2);
		      else
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
			fe = FETools::get_fe_from_name<dim> (name);
	  }
	else
					   
	  {
	    if (name=="linear")
	      fe = new FESystem<dim>(FE_Q<dim>(1), repetition);
	    else
	      if (name=="quadratic")
		fe = new FESystem<dim>(FE_Q<dim>(2), repetition);
	      else
		if (name=="cubic")
		  fe = new FESystem<dim>(FE_Q<dim>(3), repetition);
		else
		  if (name=="discontinuous constant")
		    fe = new FESystem<dim>(FE_DGQ<dim>(0), repetition);
		  else
		    if (name=="discontinuous linear")
		      fe = new FESystem<dim>(FE_DGQ<dim>(1), repetition);
		    else
						       
		      {
			const FiniteElement<dim> *tmp
			  = FETools::get_fe_from_name<dim> (name);
			fe = new FESystem<dim> (*tmp, repetition);
			delete tmp;
		      }
	  };
	static_fe_list.get_fe_map()[key] = fe;
      };

				     
				     
    const FiniteElement<dim> *fe = static_fe_list.get_fe_map()[key];
    Assert (fe != 0, ExcInternalError());

				     
				     
    static_fe_list.get_section_lock().release();

    return *fe;
  }



  template <int dim>
  const FiniteElement<dim> &
  FEHelper<dim>::get_fe (const std::string  &name1,
			 const unsigned int  number1,
			 const std::string  &name2,
			 const unsigned int  number2)
  {
				     
				     
				     
				     
    if (name1 == name2)
      return get_fe (name1, number1+number2);
  
				     
				     
				     
  
				     
				     
				     
    static_fe_list.get_section_lock().acquire ();

				     
				     
    std::string key = name1;
    for (unsigned int i=1; i<number1; ++i)
      key += '/' + name1;
    for (unsigned int i=0; i<number2; ++i)
      key += '/' + name2;

    if (static_fe_list.get_fe_map().find (key) == static_fe_list.get_fe_map().end())
      {
	FiniteElement<dim> *fe = 0;

	if ((name1=="linear") &&
	    (name2=="discontinuous constant") )
	  fe = new FESystem<dim>(FE_Q<dim>(1),   number1,
				 FE_DGQ<dim>(0), number2);
	else if ((name1=="quadratic") &&
		 (name2=="discontinuous constant") )
	  fe = new FESystem<dim>(FE_Q<dim>(2),   number1,
				 FE_DGQ<dim>(0), number2);
	else if ((name1=="quadratic") &&
		 (name2=="discontinuous linear") )
	  fe = new FESystem<dim>(FE_Q<dim>(2),   number1,
				 FE_DGQ<dim>(1), number2);
	else if ((name1=="cubic") &&
		 (name2=="discontinuous linear") )
	  fe = new FESystem<dim>(FE_Q<dim>(3),   number1,
				 FE_DGQ<dim>(1), number2);
	else if ((name1=="cubic") &&
		 (name2=="discontinuous quadratic") )
	  fe = new FESystem<dim>(FE_Q<dim>(3),   number1,
				 FE_DGQ<dim>(2), number2);
	else if ((name1=="quadratic") &&
		 (name2=="linear") )
	  fe = new FESystem<dim>(FE_Q<dim>(2),   number1,
				 FE_Q<dim>(1),   number2);
	else
	  AssertThrow (false, ExcUnknownFE2(name1, name2));

	static_fe_list.get_fe_map()[key] = fe;
      };

				     
				     
    const FiniteElement<dim> *fe = static_fe_list.get_fe_map()[key];
    Assert (fe != 0, ExcInternalError());

				     
				     
    static_fe_list.get_section_lock().release();

    return *fe;
  }



  template <int dim>
  const FiniteElement<dim> &
  FEHelper<dim>::get_next_higher_fe (const FiniteElement<dim> &fe)
  {
				     
    static_fe_list.get_section_lock().acquire();
    std::string fe_name;
    for (typename StaticFEList<dim>::FEMap::const_iterator i=static_fe_list.get_fe_map().begin();
	 i != static_fe_list.get_fe_map().end(); ++i)
      if (i->second == &fe)
	fe_name = i->first;
    static_fe_list.get_section_lock().release();

				     
				     
    Assert (fe_name != "", ExcInternalError());

				     
				     
    std::vector<std::pair<std::string, unsigned int> > component_names;
    std::string tmp = fe_name;
    while (tmp.find ('/') != std::string::npos)
      {
					 
					 
					 
	const std::string subname = tmp.substr(0,tmp.find ('/'));
	if ((component_names.size() != 0) &&
	    (component_names.back().first == subname))
	  ++component_names.back().second;
	else
	  component_names.push_back (std::make_pair (subname, 1U));

					 
	tmp.erase (0, tmp.find ('/')+1);
      };
				     
    if ((component_names.size() != 0) &&
	(component_names.back().first == tmp))
      ++component_names.back().second;
    else
      component_names.push_back (std::make_pair (tmp, 1U));
  
				     
				     
    for (unsigned int i=0; i<component_names.size(); ++i)
      if (component_names[i].first == "linear")
	component_names[i].first = "quadratic";
      else if (component_names[i].first == "quadratic")
	component_names[i].first = "cubic";
      else if (component_names[i].first == "discontinuous constant")
	component_names[i].first = "discontinuous linear";
      else if (component_names[i].first == "discontinuous linear")
	component_names[i].first = "discontinuous quadratic";
      else
	Assert (false, ExcInternalError());

				     
				     
				     
				     
    switch (component_names.size())
      {
	case 1:
	      return get_fe (component_names[0].first,
			     component_names[0].second);
	case 2:
	      return get_fe (component_names[0].first,
			     component_names[0].second,
			     component_names[1].first,
			     component_names[1].second);
	default:
	      AssertThrow (false, ExcNotImplemented());
      };
				     
				     
    return get_fe (component_names[0].first,
		   component_names[0].second);
  }



  template <int dim>
  const Quadrature<dim> &
  FEHelper<dim>::get_quadrature (const std::string &name)
  {
    if ((name=="linear") || (name=="discontinuous linear") ||
	(name == "discontinuous constant"))
      return QuadratureObjects::q_gauss_2;
    else
      if ((name=="quadratic") || (name=="discontinuous quadratic"))
	return QuadratureObjects::q_gauss_3;
      else
	if ((name=="cubic") || (name=="discontinuous cubic"))
	  return QuadratureObjects::q_gauss_4;
	else
	  if ((name=="quartic") || (name=="discontinuous quartic"))
	    return QuadratureObjects::q_gauss_5;
  
    Assert (false, ExcInternalError());

    return QuadratureObjects::q_gauss_2;
  }


#if deal_II_dimension != 1

  template <int dim>
  const Quadrature<dim-1> &
  FEHelper<dim>::get_quadrature_face (const std::string &name)
  {
    if ((name=="linear") || (name=="discontinuous linear") ||
	(name == "discontinuous constant"))
      return QuadratureObjects::q_gauss_2_face;
    else
      if ((name=="quadratic") || (name=="discontinuous quadratic"))
	return QuadratureObjects::q_gauss_3_face;
      else
	if ((name=="cubic") || (name=="discontinuous cubic"))
	  return QuadratureObjects::q_gauss_4_face;
	else
	  if ((name=="quartic") || (name=="discontinuous quartic"))
	    return QuadratureObjects::q_gauss_5_face;
  
    Assert (false, ExcInternalError());

    return QuadratureObjects::q_gauss_2_face;
  }

#else

  template <>
  const Quadrature<0> &
  FEHelper<1>::get_quadrature_face (const std::string &/*name*/)
  {
    Assert (false, ExcInternalError());
    static const Quadrature<0> dummy(0);
    return dummy;
  }

#endif


  template <int dim>
  unsigned int
  FEHelper<dim>::memory_consumption ()
  {
    unsigned int mem_consumption = sizeof(FEHelper<dim>);
    for (typename StaticFEList<dim>::FEMap::const_iterator
	   i=static_fe_list.get_fe_map().begin();
	 i != static_fe_list.get_fe_map().end(); ++i)
      mem_consumption += MemoryConsumption::memory_consumption (i->first) +
			 MemoryConsumption::memory_consumption (*i->second);
    return mem_consumption;
  }



  bool
  defer_spawning_threads ()
  {
    return (Threads::n_existing_threads() > 5*multithread_info.n_cpus);
  }



  template <int dim>
  std::vector<Point<dim> >
  make_integer_lattice (const unsigned int N)
  {
    std::vector<Point<dim> > lattice;
    switch (dim)
      {
	case 1:
	      for (int i=-N; i<=static_cast<signed int>(N); ++i)
		lattice.push_back (Point<dim>(1.*i));
	      break;
	case 2:
	      for (int i=-N; i<=static_cast<signed int>(N); ++i)
		for (int j=-N; j<=static_cast<signed int>(N); ++j)
		  lattice.push_back (Point<dim>(1.*i,1.*j));
	      break;
	case 3:
	      for (int i=-N; i<=static_cast<signed int>(N); ++i)
		for (int j=-N; j<=static_cast<signed int>(N); ++j)
		  for (int k=-N; k<=static_cast<signed int>(N); ++k)
		    lattice.push_back (Point<dim>(1.*i,1.*j,1.*k));
	      break;
	default:
	      Assert (false, ExcNotImplemented());
      }
    return lattice;
  }



  template <int dim>
  std::vector<Point<dim> >
  make_unique_integer_lattice (const unsigned int N)
  {
    const std::vector<Point<dim> > lattice = make_integer_lattice<dim> (N);
    std::vector<Point<dim> > unique_lattice;

				     
				     
				     
    for (unsigned int i=0; i<lattice.size(); ++i)
      {
					 
					 
					 
					 
	switch (dim)
	  {
	    case 1:
		  if (lattice[i][0] < 0)
		    continue;
		  break;
	    case 2:
		  if ((lattice[i][1] < 0) ||
		      ((lattice[i][1] == 0) && (lattice[i][0] < 0)))
		    continue;
		  break;
	    case 3:
		  if ((lattice[i][2] < 0) ||
		      ((lattice[i][2] == 0) &&
		       ((lattice[i][1] < 0) ||
			((lattice[i][1] == 0) &&
			 (lattice[i][0] < 0)))))
		    continue;
		  break;
		
	    default:
		  Assert (false, ExcInternalError());
	  }
      
	bool is_unique = true;
					 
	for (unsigned int j=0; j<lattice.size(); ++j)
					   
	  if ((i != j)
	      &&
					       
	      (std::fabs(lattice[i]*lattice[j] -
			 std::sqrt(lattice[i].square() * lattice[j].square()))
	       < 1.e-14*std::sqrt(lattice[i].square() * lattice[j].square()))
	      &&
					       
	      (lattice[j].square() < lattice[i].square()))
	    {
	      is_unique = false;
	      break;
	    }

					 
	if (is_unique == true)
	  unique_lattice.push_back (lattice[i]);
      }

    return unique_lattice;
  }


  namespace 
  {
    template <int dim>
    struct ComparePointMagnitudes
    {
	bool operator() (const Point<dim> &a,
			 const Point<dim> &b)
	  {
	    return a.square() < b.square();
	  }
    };
  }



  template <int dim>
  std::vector<Point<dim> >
  make_sorted_unique_integer_lattice (const unsigned int N)
  {
    std::vector<Point<dim> > lattice = make_unique_integer_lattice<dim> (N);
    std::sort (lattice.begin(),
	       lattice.end(),
	       ComparePointMagnitudes<dim>());
    return lattice;
  }




  template class StaticFEList<deal_II_dimension>;
  template class FEHelper<deal_II_dimension>;

  template std::vector<Point<1> > make_integer_lattice<1> (const unsigned int);
  template std::vector<Point<2> > make_integer_lattice<2> (const unsigned int);
  template std::vector<Point<3> > make_integer_lattice<3> (const unsigned int);

  template std::vector<Point<1> > make_unique_integer_lattice<1> (const unsigned int);
  template std::vector<Point<2> > make_unique_integer_lattice<2> (const unsigned int);
  template std::vector<Point<3> > make_unique_integer_lattice<3> (const unsigned int);

  template std::vector<Point<1> > make_sorted_unique_integer_lattice<1> (const unsigned int);
  template std::vector<Point<2> > make_sorted_unique_integer_lattice<2> (const unsigned int);
  template std::vector<Point<3> > make_sorted_unique_integer_lattice<3> (const unsigned int); 
}
