//----------------------------   work_stream.h     ---------------------------
//    $Id: work_stream.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2007, 2008, 2009 by Wolfgang Bangerth
//
//----------------------------   work_stream.h     ---------------------------
#ifndef __libparest__work_stream_h
#define __libparest__work_stream_h
//----------------------------   work_stream.h     ---------------------------


#include <base/multithread_info.h>

#include <vector>


namespace libparest
{
  class WorkStream
  {
    public:
      WorkStream (const unsigned int queue_length
		  = 4*multithread_info.n_default_threads);

      template <typename MainClass,
		typename Iterator,
		typename AdditionalData>
      void run (const Iterator       &begin,
		const Iterator       &end,
		MainClass            &main_object,
		void (MainClass::*worker) (const Iterator &,
					   AdditionalData &),
		void (MainClass::*copier) (const AdditionalData &),
		const AdditionalData &sample_additional_data);

    private:
      const unsigned int queue_length;
  };


// --------------------------------- inline and template functions ---------------


#if DEAL_II_USE_MT == 1

  namespace internal
  {
    template <typename MainClass,
	      typename Iterator,
	      typename AdditionalData>
    void
    run_on_subrange (const Iterator       &begin,
		     const Iterator       &end,
		     MainClass            &main_object,
		     void (MainClass::*worker) (const Iterator &,
						AdditionalData &),
		     void (MainClass::*copier) (const AdditionalData &),
		     const AdditionalData &sample_additional_data)
    {
      AdditionalData local_data (sample_additional_data);
      for (Iterator i=begin; i!=end; ++i)
	{
	  (main_object.*worker) (i, local_data);
	  (main_object.*copier) (local_data);
	}
    }
  }


  inline
  WorkStream::WorkStream (const unsigned int queue_length)
		  :
		  queue_length (queue_length)
  {}



  template <typename MainClass,
	    typename Iterator,
	    typename AdditionalData>
  void
  WorkStream::run (const Iterator       &begin,
		   const Iterator       &end,
		   MainClass            &main_object,
		   void (MainClass::*worker) (const Iterator &,
					      AdditionalData &),
		   void (MainClass::*copier) (const AdditionalData &),
		   const AdditionalData &sample_additional_data)
  {
    std::vector<std::pair<Iterator,Iterator> >
      ranges = Threads::split_range (begin, end,
				     multithread_info.n_default_threads);
    Threads::ThreadGroup<> threads;
    for (unsigned int i=0; i<ranges.size(); ++i)
      threads += Threads::spawn (&internal::run_on_subrange<MainClass,Iterator,AdditionalData>)
		 (ranges[i].first, ranges[i].second, main_object, worker, copier,
		  sample_additional_data);

    threads.join_all ();
  }


#else // DEAL_II_USE_MT

  inline
  WorkStream::WorkStream (const unsigned int /*queue_length*/)
		  :
		  queue_length (0)
  {}



  template <typename MainClass,
	    typename Iterator,
	    typename AdditionalData>
  void
  WorkStream::run (const Iterator       &begin,
		   const Iterator       &end,
		   MainClass            &main_object,
		   void (MainClass::*worker) (const Iterator &,
					      AdditionalData &),
		   void (MainClass::*copier) (const AdditionalData &),
		   const AdditionalData &sample_additional_data)
  {
				     // need to copy the sample since it is
				     // marked const
    AdditionalData additional_data = sample_additional_data;

    for (Iterator i = begin; i!=end; ++i)
      {
	(main_object.*worker) (i, additional_data);
	(main_object.*copier) (additional_data);
      }
  }

#endif // DEAL_II_USE_MT

}



//----------------------------   work_stream.h     ---------------------------
// end of #ifndef __libparest__work_stream_h
#endif
//----------------------------   work_stream.h     ---------------------------
