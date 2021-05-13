//----------------------------   parallel_tools.h     ---------------------------
//    $Id: tools.h 3503 2007-12-12 23:01:24Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2004, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   parallel_tools.h     ---------------------------
#ifndef __libparest__parallel_tools_h
#define __libparest__parallel_tools_h
//----------------------------   parallel_tools.h     ---------------------------


#if DEAL_II_USE_MPI == 1


#include <base/thread_management.h>
#include <libparest/parallel/mpi.h>

#include <vector>
#include <typeinfo>

namespace dealii
{
  template <typename> class Vector;
}


namespace libparest
{
  using namespace dealii;
  
  

  namespace MPI_Tools
  {
    class MessageStats
    {
      public:
	void log_transaction (const unsigned int byte_size);

	void write_statistics (std::ostream &out) const;
	
      private:
	unsigned int n_transactions;

	unsigned int total_size;
    };

    extern MessageStats sent_message_stats;
    
	
    void poll_for_incoming_message (const MPI::Comm      &communicator,
				    Threads::ThreadMutex &mpi_mutex);

    class MPIStream
    {
      public:
        MPIStream (::MPI::Intracomm &communicator,
                   Threads::ThreadMutex &mpi_mutex);

        operator const ::MPI::Intracomm & () const;

      private:

        ::MPI::Intracomm communicator;

        mutable Threads::ThreadMutex &mpi_mutex;

	friend class P2PIStream;
	friend class P2POStream;
    };  


    class P2PIStream 
    {
      public:
	P2PIStream (const MPIStream    &mpi_stream,
		    const unsigned int  tag    = ::MPI::ANY_TAG,
		    const unsigned int  sender = ::MPI::ANY_SOURCE);

	const P2PIStream & operator >> (unsigned int &i) const;

	const P2PIStream & operator >> (int &i) const;

	const P2PIStream & operator >> (double &i) const;

	const P2PIStream & operator >> (Vector<double> &i) const;

	const P2PIStream & operator >> (Vector<float> &i) const;

	const P2PIStream & operator >> (std::vector<Vector<double>*> &vv) const;

	const P2PIStream & operator >> (std::vector<Vector<double> > &vv) const;
	
	const P2PIStream & operator >> (std::vector<double> &i) const;

	const P2PIStream & operator >> (std::vector<char> &i) const;

	const P2PIStream & operator >> (std::vector<bool> &i) const;

	const P2PIStream & operator >> (std::list<double> &i) const;

	const P2PIStream & operator >> (std::list<std::string> &sl) const;

	const P2PIStream & operator >> (std::string &s) const;

	const P2PIStream & operator >> (std::type_info &ti) const;	

	const ::MPI::Status & last_status () const;

	DeclException2 (ExcTypeVerificationError,
			std::string, std::string,
			<< "A variable of type " << arg1
			<< " was expected on the MPI stream, but a variable of type " << arg2
			<< " was sent!");

      private:
	const MPIStream    &mpi_stream;


	const unsigned int  tag;

	const unsigned int  sender;

	mutable ::MPI::Status status;
	
	template <typename T> void verify_type () const;
    };
	    

    class P2POStream 
    {
      public:
	P2POStream (const MPIStream    &mpi_stream,
		    const unsigned int  tag,
		    const unsigned int  destination);

	const P2POStream & operator << (const unsigned int i) const;

	const P2POStream & operator << (const int i) const;

	const P2POStream & operator << (const double i) const;

	const P2POStream & operator << (const Vector<double> &i) const;

	const P2POStream & operator << (const Vector<float> &i) const;

	const P2POStream & operator << (const std::vector<Vector<double>*> &vv) const;

	const P2POStream & operator << (const std::vector<Vector<double> > &vv) const;
	
	const P2POStream & operator << (const std::vector<double> &i) const;

	const P2POStream & operator << (const std::vector<char> &i) const;

	const P2POStream & operator << (const std::vector<bool> &i) const;

	const P2POStream & operator << (const std::list<double> &i) const;	

	const P2POStream & operator << (const std::string &s) const;

	const P2POStream & operator << (const std::list<std::string> &l) const;

      private:
	const MPIStream    &mpi_stream;

	const unsigned int  tag;

	const unsigned int  destination;

	template <typename T> void push_type () const;
    };
	    

    class P2PIOStream  : public P2PIStream, public P2POStream
    {
      public:
	P2PIOStream (const MPIStream    &mpi_stream,
		    const unsigned int  tag,
		    const unsigned int  other_side);
    };
    
  }
 
}


#endif // if DEAL_II_USE_MPI == 1


//----------------------------   parallel_tools.h     ---------------------------
// end of #ifndef __libparest__parallel_tools_h
#endif
//----------------------------   parallel_tools.h     ---------------------------
