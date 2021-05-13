/* $Id: statistics.cc 2397 2005-08-11 16:48:02Z wolf $ */

#include <libparest/statistics.h>
#include <libparest/utilities.h>

#include <base/utilities.h>

#include <iomanip>

namespace libparest
{

  PerStepStatistics::~PerStepStatistics () 
  {}




  Statistics::~Statistics () 
  {
    while (steps.size() != 0)
      {
	delete_ptr (steps.back());
	steps.pop_back();
      };
  }



  void
  Statistics::add_step (PerStepStatistics *s)
  {
    steps.push_back (s);
  }



  void
  Statistics::print (std::ostream &out) const
  {
    Assert (steps.size() > 0, ExcNoDatasets());

				     
				     
				     
				     
    if (cached_column_names.size() == 0)
      cached_column_names = (*steps.begin())->declare_entries ();

				     
    unsigned int index = 1;
    for (std::list<std::string>::const_iterator name=cached_column_names.begin();
	 name != cached_column_names.end(); ++name, ++index)
      out << "# " << Utilities::int_to_string(index,
                                              Utilities::needed_digits(cached_column_names.size()))
          << ": "
	  << *name << std::endl;

				     
				     
    int sindex=0;
    for (std::list<SmartPointer<PerStepStatistics> >::const_iterator
	   step = steps.begin();
	 step != steps.end(); ++step, ++sindex)
      {
	const std::list<double> values = (*step)->get_values ();
	Assert (values.size() == cached_column_names.size(),
		ExcDatasetSizeDoesNotMatch());
	for (std::list<double>::const_iterator i=values.begin();
	     i!=values.end(); ++i)
          out << std::setw(10) << std::setprecision(6)
	      << *i << "\n";
	out << std::endl;
      };
  }



  unsigned int
  Statistics::size() const 
  {
    return steps.size();
  }



  PerStepStatistics *
  Statistics::operator[] (const unsigned int index)
  {
    std::list<SmartPointer<PerStepStatistics> >::const_iterator
      i = steps.begin();
    std::advance (i, index);
    return *i;
  }



  const PerStepStatistics *
  Statistics::operator[] (const unsigned int index) const
  {
    std::list<SmartPointer<PerStepStatistics> >::const_iterator
      i = steps.begin();
    std::advance (i, index);
    return *i;
  }



  PerStepStatistics *
  Statistics::back ()
  {
    return steps.back();
  }



  const PerStepStatistics *
  Statistics::back () const
  {
    return steps.back();
  }
 
}
