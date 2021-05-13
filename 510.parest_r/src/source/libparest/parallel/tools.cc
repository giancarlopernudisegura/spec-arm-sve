#if DEAL_II_USE_MPI == 1

#include <libparest/parallel/tools.h>

#include <lac/vector.h>

#include <ctime>

namespace libparest
{

  namespace MPI_Tools
  {
    MessageStats sent_message_stats;

    void
    MessageStats::log_transaction (const unsigned int byte_size)
    {
      ++n_transactions;
      total_size += byte_size;
    }


    void
    MessageStats::write_statistics (std::ostream &out) const
    {
      out << "World rank:           " << ::MPI::COMM_WORLD.Get_rank () << std::endl
	  << "Number of messages:   " << n_transactions << std::endl
	  << "Bytes transfered:     " << total_size << std::endl
	  << "Average message size: " << 1.*total_size / n_transactions
	  << std::endl;
    }
    


    
    void
    poll_for_incoming_message (const MPI::Comm      &communicator,
			       Threads::ThreadMutex &mpi_mutex)
    {
				       
				       
      const timespec sleep_time = { 0, 100*1000*1000 };

      MPI::Status status;

				       
				       
				       
      while (true)
	{
	  mpi_mutex.acquire ();
	  const bool incoming_message
	    = communicator.Iprobe (MPI::ANY_SOURCE, MPI::ANY_TAG, status);
	  mpi_mutex.release ();
      
	  if (incoming_message)
	    break;
      
	  ::nanosleep (&sleep_time, 0);
	}
    }


    
    MPIStream::MPIStream (::MPI::Intracomm &communicator,
			  Threads::ThreadMutex &mpi_mutex)
		    :
		    communicator (communicator),
		    mpi_mutex (mpi_mutex)
    {}



    MPIStream::operator const ::MPI::Intracomm & () const
    {
      return communicator;
    }




    P2PIStream::P2PIStream (const MPIStream    &mpi_stream,
			    const unsigned int  tag,
			    const unsigned int  sender)
		    :
		    mpi_stream (mpi_stream),
		    tag (tag),
		    sender (sender)
    {}
    


    template <typename T>
    void
    P2PIStream::verify_type () const
    {
				       
				       
				       
				       
				       
				       
				       
				       
				       
				       
      poll_for_incoming_message (mpi_stream.communicator, mpi_stream.mpi_mutex);
      
      unsigned int size;
      mpi_stream.mpi_mutex.acquire();
      mpi_stream.communicator.Recv (&size, 1, ::MPI::UNSIGNED,
				    sender, tag, status);
      mpi_stream.mpi_mutex.release();
      Assert (status.Get_count(::MPI::UNSIGNED) == 1, ExcInternalError());

      
      std::vector<char> text (size);
      mpi_stream.mpi_mutex.acquire();
      mpi_stream.communicator.Recv (&text[0], size, ::MPI::CHAR,
				    sender, tag, status);
      mpi_stream.mpi_mutex.release();
      Assert (static_cast<unsigned int>(status.Get_count(::MPI::CHAR)) == size,
	      ExcInternalError());
     
      const std::string name (text.begin(), text.end());
      AssertThrow (name == typeid(T).name(),
		   ExcTypeVerificationError(typeid(T).name(), name));
    }



    const P2PIStream &
    P2PIStream::operator >> (unsigned int &i) const
    {
				       
				       
				       
				       
      verify_type<unsigned int> ();
      
      mpi_stream.mpi_mutex.acquire();      
      mpi_stream.communicator.Recv (&i, 1, ::MPI::UNSIGNED,
				    sender, tag, status);
      mpi_stream.mpi_mutex.release();

      Assert (status.Get_count(::MPI::UNSIGNED) == 1, ExcInternalError());

      return *this;
    }
    


    const P2PIStream &
    P2PIStream::operator >> (int &i) const
    {
				       
				       
				       
				       
      verify_type<int> ();
      
      mpi_stream.mpi_mutex.acquire();      
      mpi_stream.communicator.Recv (&i, 1, ::MPI::INT,
				    sender, tag, status);
      mpi_stream.mpi_mutex.release();

      Assert (status.Get_count(::MPI::INT) == 1, ExcInternalError());

      return *this;
    }
    


    const P2PIStream &
    P2PIStream::operator >> (double &d) const
    {
				       
				       
				       
				       
      verify_type<double> ();

      mpi_stream.mpi_mutex.acquire();      
      mpi_stream.communicator.Recv (&d, 1, ::MPI::DOUBLE,
				    sender, tag, status);
      mpi_stream.mpi_mutex.release();

      Assert (status.Get_count(::MPI::DOUBLE) == 1, ExcInternalError());

      return *this;
    }
    


    const P2PIStream &
    P2PIStream::operator >> (Vector<double> &v) const
    {
				       
				       
				       
				       
      verify_type<Vector<double> > ();

      unsigned int size;
      *this >> size;

      Assert ((v.size() == 0) || (v.size() == size), ExcInternalError());
      v.reinit (size);
	      
      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Recv (v.begin(), v.size(), ::MPI::DOUBLE,
				    sender, tag, status);
      mpi_stream.mpi_mutex.release ();
      
      Assert (status.Get_count(::MPI::DOUBLE) == static_cast<int>(v.size()),
	      ExcInternalError());

      return *this;
    }
    


    const P2PIStream &
    P2PIStream::operator >> (Vector<float> &v) const
    {
				       
				       
				       
				       
      verify_type<Vector<float> > ();

      unsigned int size;
      *this >> size;

      Assert ((v.size() == 0) || (v.size() == size), ExcInternalError());
      v.reinit (size);

      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Recv (v.begin(), v.size(), ::MPI::FLOAT,
				    sender, tag, status);
      mpi_stream.mpi_mutex.release ();
      
      Assert (status.Get_count(::MPI::FLOAT) == static_cast<int>(v.size()),
	      ExcInternalError());

      return *this;
    }
    


    const P2PIStream &
    P2PIStream::operator >> (std::vector<double> &v) const
    {
				       
				       
				       
				       
      verify_type<std::vector<double> > ();

      unsigned int size;
      *this >> size;

      Assert ((v.size() == 0) || (v.size() == size), ExcInternalError());
      v.resize (size);

      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Recv (&v[0], v.size(), ::MPI::DOUBLE,
				    sender, tag, status);
      mpi_stream.mpi_mutex.release ();
      
      Assert (status.Get_count(::MPI::DOUBLE) == static_cast<int>(v.size()),
	      ExcInternalError());

      return *this;
    }    



    const P2PIStream &
    P2PIStream::operator >> (std::vector<char> &v) const
    {
				       
				       
				       
				       
      verify_type<std::vector<char> > ();

      unsigned int size;
      *this >> size;

      Assert ((v.size() == 0) || (v.size() == size), ExcInternalError());
      v.resize (size);
      
      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Recv (&v[0], v.size(), ::MPI::CHAR,
				    sender, tag, status);
      mpi_stream.mpi_mutex.release ();
      
      Assert (status.Get_count(::MPI::CHAR) == static_cast<int>(v.size()),
	      ExcInternalError());

      return *this;
    }

    

    const P2PIStream &
    P2PIStream::operator >> (std::list<double> &l) const
    {
				       
				       
				       
				       
      verify_type<std::list<double> > ();

				       
      std::vector<double> v;
      *this >> v;

				       
      l = std::list<double> (v.begin(), v.end());

      return *this;
    }    


    
    const P2PIStream &
    P2PIStream::operator >> (std::vector<Vector<double>*> &vv) const
    {
				       
				       
				       
				       
      verify_type<std::vector<Vector<double>*> > ();

				       
				       
				       
				       
      unsigned int size;
      *this >> size;

      Assert (size == vv.size(), ExcInternalError());

      for (unsigned int i=0; i<size; ++i)
	*this >> *vv[i];

      return *this;
    }    



    const P2PIStream &
    P2PIStream::operator >> (std::vector<Vector<double> > &vv) const
    {
				       
				       
				       
				       
      verify_type<std::vector<Vector<double> > > ();

				       
				       
				       
				       
      unsigned int size;
      *this >> size;

      Assert (size == vv.size(), ExcInternalError());

      for (unsigned int i=0; i<size; ++i)
	*this >> vv[i];

      return *this;
    }    
    

    
    const P2PIStream &
    P2PIStream::operator >> (std::vector<bool> &v) const
    {
				       
				       
				       
				       
      verify_type<std::vector<bool> > ();

				       
				       
      std::vector<char> vc;
      *this >> vc;

				       
      v = std::vector<bool> (vc.begin(), vc.end());

      return *this;
    }    



    const P2PIStream &
    P2PIStream::operator >> (std::list<std::string> &string_list) const
    {
				       
				       
				       
				       
      verify_type<std::list<std::string> > ();

      unsigned int size;
      *this >> size;

      for (unsigned int i=0; i<size; ++i)
	{
	  std::string s;
	  *this >> s;

	  string_list.push_back (s);
	}
      return *this;
    }

    
    const P2PIStream &
    P2PIStream::operator >> (std::string &s) const
    {
				       
				       
				       
				       
      verify_type<std::string> ();

      std::vector<char> c;
      *this >> c;
      s = std::string (c.begin(), c.end());
      
      return *this;
    }



    const ::MPI::Status &
    P2PIStream::last_status () const
    {
      return status;
    }
    



    template <typename T>
    void
    P2POStream::push_type () const
    {
				       
				       
				       
				       
				       
				       
				       
				       
				       
      const std::type_info &ti = typeid(T);
      const unsigned int size = strlen(ti.name());

      sent_message_stats.log_transaction (sizeof(unsigned));
      sent_message_stats.log_transaction (size*sizeof(char));
      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Bsend (&size, 1, ::MPI::UNSIGNED, destination, tag);
      mpi_stream.communicator.Bsend (ti.name(), size, ::MPI::CHAR, destination, tag);
      mpi_stream.mpi_mutex.release ();
    }
    

    
    P2POStream::P2POStream (const MPIStream    &mpi_stream,
			    const unsigned int  tag,
			    const unsigned int  destination)
		    :
		    mpi_stream (mpi_stream),
		    tag (tag),
		    destination (destination)
    {}
    


    const P2POStream &
    P2POStream::operator << (const unsigned int i) const
    {
      push_type<unsigned int>();
      
      sent_message_stats.log_transaction (sizeof(unsigned));
      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Bsend (&i, 1, ::MPI::UNSIGNED, destination, tag);
      mpi_stream.mpi_mutex.release ();

      return *this;
    }


    const P2POStream &
    P2POStream::operator << (const int i) const
    {		  
      push_type<int>();

      sent_message_stats.log_transaction (sizeof(int));
      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Bsend (&i, 1, ::MPI::INT, destination, tag);
      mpi_stream.mpi_mutex.release ();

      return *this;
    }
    


    const P2POStream &
    P2POStream::operator << (const double d) const
    {
      push_type<double>();

      sent_message_stats.log_transaction (sizeof(double));
      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Bsend (&d, 1, ::MPI::DOUBLE, destination, tag);
      mpi_stream.mpi_mutex.release ();

      return *this;
    }
    


    const P2POStream &
    P2POStream::operator << (const Vector<double> &v) const
    {
      push_type<Vector<double> >();

      *this << static_cast<unsigned int>(v.size());
      
      sent_message_stats.log_transaction (v.size()*sizeof(double));
      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Bsend (v.begin(), v.size(), ::MPI::DOUBLE, destination, tag);
      mpi_stream.mpi_mutex.release ();
      
      return *this;
    }
    


    const P2POStream &
    P2POStream::operator << (const std::vector<Vector<double>*> &v) const
    {
      push_type<std::vector<Vector<double>*> >();
      
      *this << static_cast<unsigned int>(v.size());
      for (unsigned int i=0; i<v.size(); ++i)
	*this << *v[i];
      
      return *this;
    }



    const P2POStream &
    P2POStream::operator << (const std::vector<Vector<double> > &v) const
    {
      push_type<std::vector<Vector<double> > >();
      
      *this << static_cast<unsigned int>(v.size());
      for (unsigned int i=0; i<v.size(); ++i)
	*this << v[i];
      
      return *this;
    }
    


    const P2POStream &
    P2POStream::operator << (const Vector<float> &v) const
    {		  
      push_type<Vector<float> >();

      *this << static_cast<unsigned int>(v.size());

      sent_message_stats.log_transaction (v.size()*sizeof(float));
      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Bsend (v.begin(), v.size(), ::MPI::FLOAT, destination, tag);
      mpi_stream.mpi_mutex.release ();
      
      return *this;
    }
    


    const P2POStream &
    P2POStream::operator << (const std::vector<double> &v) const
    {
      push_type<std::vector<double> >();

      *this << static_cast<unsigned int>(v.size());

      sent_message_stats.log_transaction (v.size()*sizeof(double));
      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Bsend (&*v.begin(), v.size(), ::MPI::DOUBLE, destination, tag);
      mpi_stream.mpi_mutex.release ();
      
      return *this;
    }    



    const P2POStream &
    P2POStream::operator << (const std::vector<char> &v) const
    {
      push_type<std::vector<char> >();

      *this << static_cast<unsigned int>(v.size());

      sent_message_stats.log_transaction (v.size()*sizeof(char));
      mpi_stream.mpi_mutex.acquire ();
      mpi_stream.communicator.Bsend (&v[0], v.size(), ::MPI::CHAR, destination, tag);
      mpi_stream.mpi_mutex.release ();

      return *this;
    }



    const P2POStream &
    P2POStream::operator << (const std::string &s) const
    {
      push_type<std::string>();

      *this << std::vector<char> (s.begin(), s.end());

      return *this;
    }
    

    const P2POStream &
    P2POStream::operator << (const std::list<double> &v) const
    {
      push_type<std::list<double> >();

      *this << std::vector<double> (v.begin(), v.end());
      
      return *this;
    }    


    const P2POStream &
    P2POStream::operator << (const std::vector<bool> &v) const
    {
      push_type<std::vector<bool> >();

      *this << std::vector<char> (v.begin(), v.end());
      
      return *this;
    }    


    const P2POStream &
    P2POStream::operator << (const std::list<std::string> &string_list) const
    {
      push_type<std::list<std::string> >();

      *this << static_cast<unsigned int>(string_list.size());
      
      std::list<std::string>::const_iterator present_entry = string_list.begin();
      for (unsigned int i=0; i<string_list.size(); ++i, ++present_entry)
	*this << *present_entry;

      return *this;
    }    





    P2PIOStream::P2PIOStream (const MPIStream    &mpi_stream,
			      const unsigned int  tag,
			      const unsigned int  other_side)
		    :
		    P2PIStream (mpi_stream, tag, other_side),
		    P2POStream (mpi_stream, tag, other_side)
    {}

  }
  
}

#endif
