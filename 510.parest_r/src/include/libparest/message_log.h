//----------------------------   message_log.h     ---------------------------
//    $Id: message_log.h 3039 2006-10-23 18:54:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2001, 2002, 2003, 2006, 2009 by Wolfgang Bangerth
//
//----------------------------   message_log.h     ---------------------------
#ifndef __libparest__message_log_h
#define __libparest__message_log_h
//----------------------------   message_log.h     ---------------------------


#include "graphical_display.h"

#include <base/subscriptor.h>
#include <base/smartpointer.h>
#include <base/thread_management.h>

#include <map>
#include <vector>
#include <string>
#include <iosfwd>

#ifdef HAVE_STD_STRINGSTREAM
#  include <sstream>
#else
#  include <strstream>
#endif


namespace libparest
{
  using namespace dealii;



  namespace MessageLog
  {
    namespace Filters
    {
      class Base
      {
	public:
	  virtual ~Base ();

	  virtual bool filter (const std::string  &prefix,
			       const std::string  &message,
			       const unsigned int  priority) const = 0;
      };


      class OStream : public Base
      {
	public:
	  OStream (std::ostream       &out,
		   const unsigned int  priority_threshold,
		   const bool          log_time);

	  virtual bool filter (const std::string  &prefix,
			       const std::string  &message,
			       const unsigned int  priority) const;
	protected:
	  std::ostream       &out;

	private:
	  const unsigned int  priority_threshold;

	  const bool          log_time;

	  mutable Threads::ThreadMutex output_lock;
      };


      class OFStream : public OStream
      {
	public:
	  OFStream (const std::string  &file_name,
		    const unsigned int  priority_threshold,
		    const bool          log_time);

	  virtual ~OFStream ();
      };
    

      class GraphicalOutput : public Base
      {
	public:
	  virtual bool filter (const std::string  &prefix,
			       const std::string  &message,
			       const unsigned int  priority) const;
    
	private:
	  GraphicalDisplay graphical_display;
      };    
    }
  





    class ServerBase : public Subscriptor
    {
      public:
	virtual ~ServerBase ();
    
	virtual unsigned int register_client (const std::string &name) = 0;

	virtual void deregister_client (const unsigned int id) = 0;

	virtual void put_message (const unsigned int  id,
				  const std::string  &message,
				  const unsigned int  priority) = 0;
    
	virtual void attach_filter (const Filters::Base *filter);

	DeclException1 (ExcNameAlreadyUsed,
			std::string,
			<< "The name " << arg1 << " is already in use for a client.");
    
	DeclException1 (ExcIDNotRegistered,
			unsigned int,
			<< "The identifier " << arg1 << " has not been registered by a client.");
	DeclException1 (ExcStillRegisteredClients,
			int,
			<< "There are still " << arg1 << " clients which have not yet deregistered");
      
      protected:
	bool apply_filters (const std::string &prefix,
			    const std::string &message,
			    const unsigned int priority) const;

      private:

	std::vector<const Filters::Base *>  filters;      
    };


    class Server : public ServerBase
    {
      public:
	Server ();
    
	virtual ~Server ();

	virtual unsigned int register_client (const std::string &name);

	virtual void deregister_client (const unsigned int);
    
	virtual void put_message (const unsigned int  id,
				  const std::string  &message,
				  const unsigned int  priority);

      protected:
	std::map<unsigned int, std::string> id_to_name_map;

	unsigned int                   next_free_id;

	unsigned int                   max_name_length;
    
	Threads::ThreadMutex           id_lock;
    };
  

    class Client
    {
      public:

	struct PriorityObject
	{
	    PriorityObject (const unsigned int priority);

	    const unsigned int priority;
	};
    

    
	Client (ServerBase        &message_log_server,
		const std::string &name);

	~Client();

	template <typename T>
	Client & operator<< (T t);

	Client & operator<< (std::ostream& (*p) (std::ostream&));    

	Client & operator<< (const PriorityObject &priority);

	ServerBase & get_server () const;
    
      private:
	SmartPointer<ServerBase> message_log_server;

	const unsigned int id;

#ifdef HAVE_STD_STRINGSTREAM
	std::ostringstream *message_buffer;
#else
	std::ostrstream *message_buffer;
#endif

	unsigned int next_priority;
    
	Threads::ThreadMutex           synchronisation_lock;

	friend
	PriorityObject set_priority (const unsigned int priority);
    };



    class ServerFactory
    {
      public:
	virtual ~ServerFactory ();
    
	virtual ServerBase * create () const = 0;
    };



// ----------------------- inline and template functions ---------


    template <typename T>
    Client &
    Client::operator<< (T t)
    {
      Threads::ThreadMutex::ScopedLock lock (synchronisation_lock);

      *message_buffer << t;

      return *this;
    }
  }


  MessageLog::Client::PriorityObject
  set_priority (const unsigned int priority);
 
}



//----------------------------   message_log.h     ---------------------------
// end of #ifndef __libparest__message_log_h
#endif
//----------------------------   message_log.h     ---------------------------
