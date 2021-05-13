//----------------------------   statistics.h     ---------------------------
//    $Id: statistics.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   statistics.h     ---------------------------
#ifndef __libparest__statistics_h
#define __libparest__statistics_h
//----------------------------   statistics.h     ---------------------------

#include <base/subscriptor.h>
#include <base/smartpointer.h>
#include <list>
#include <string>


namespace libparest
{
  using namespace dealii;



  class PerStepStatistics : public Subscriptor
  {
    public:
      virtual ~PerStepStatistics ();

      virtual
      std::list<std::string>
      declare_entries () const = 0;

      virtual
      std::list<double>
      get_values () const = 0;
  };



  class Statistics 
  {
    public:
      ~Statistics ();
    
      void add_step (PerStepStatistics *s);

      void print (std::ostream &out) const;

      unsigned int size () const;

      PerStepStatistics * operator[] (const unsigned int index);

      const PerStepStatistics * operator[] (const unsigned int index) const;
    
      PerStepStatistics * back ();
    
      const PerStepStatistics * back () const;
    
      DeclException0 (ExcNoDatasets);
      DeclException0 (ExcDatasetSizeDoesNotMatch);
    
    
    private:
      std::list<SmartPointer<PerStepStatistics> > steps;

      mutable std::list<std::string> cached_column_names;
  };



  inline
  std::ostream & operator << (std::ostream     &out,
			      const Statistics &statistics) 
  {
    statistics.print (out);
    return out;
  }
 
}
 
//----------------------------   statistics.h     ---------------------------
// end of #ifndef __libparest__statistics_h
#endif
//----------------------------   statistics.h     ---------------------------
