#include <libparest/message_log.h>
#include <libparest/utilities.h>

#include <base/utilities.h>

#include <fstream>

namespace libparest
{

  namespace MessageLog
  {
    namespace Filters
    {

      Base::~Base ()
      {}


      OStream::OStream (std::ostream       &out,
			const unsigned int  priority_threshold,
			const bool          log_time)
		      :
		      out (out),
		      priority_threshold (priority_threshold),
		      log_time (log_time)
      {}


      bool
      OStream::filter (const std::string  &prefix,
		       const std::string  &message,
		       const unsigned int  priority) const
      {
	if (priority <= priority_threshold)
	  {
					     
					     
					     
					     
	    Threads::ThreadMutex::ScopedLock lock (output_lock);

	    out << prefix << " [" << priority << ']';
      
	    out << ": " << message;
	    out.flush ();
	  }

					 
					 
	return false;
      }


    
      OFStream::OFStream (const std::string  &file_name,
			  const unsigned int  priority_threshold,
			  const bool          log_time)
		      :
						       
						       
						       
						       
						       
		      OStream (*new std::ofstream(file_name.c_str()),
			       priority_threshold,
			       log_time)
      {
	if (!out)
	  {
	    static const std::string message
	      = std::string("Can't write to file <") + file_name + ">";
	    AssertThrow (out, ExcMessage(message.c_str()));
	  }
      }


      OFStream::~OFStream ()
      {
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
					 
	delete &out;
      }
    
    

      bool
      GraphicalOutput::filter (const std::string  &,
			       const std::string  &message,
			       const unsigned int) const
      {
					 
					 
	const std::string::size_type pos = message.find ("program status: ");

					 
					 
	if (pos == std::string::npos)
	  return false;
	else
					   
					   
					   
	  {
	    const std::string rest (message, pos+16);
	    graphical_display.put_status_string (rest);
	    return true;
	  };
      }

    }




    ServerBase::~ServerBase ()
    {
				       
				       
      for (unsigned int i=0; i<filters.size(); ++i)
	delete_ptr (filters[i]);
      filters.resize (0);
    }



    void
    ServerBase::attach_filter (const Filters::Base *filter)
    {
      filters.push_back (filter);
    }



    bool
    ServerBase::apply_filters (const std::string &prefix,
			       const std::string &message,
			       const unsigned int priority) const
    {
				       
				       
				       
      for (int i=filters.size()-1; i>=0; --i)
	if (filters[i]->filter (prefix, message, priority) == true)
	  return true;
      return false;
    }
  
      
  

    Server::~Server ()
    {
      Assert (id_to_name_map.size() == 0,
	      ExcStillRegisteredClients(id_to_name_map.size()));
    }



    Server::Server ()
		    :
		    next_free_id (0),
		    max_name_length (0)
    {}



    unsigned int
    Server::register_client (const std::string &name)
    {
      Threads::ThreadMutex::ScopedLock lock (id_lock);
    
      for (std::map<unsigned int, std::string>::const_iterator i=id_to_name_map.begin();
	   i != id_to_name_map.end(); ++i)
	if (i->second == name)
	  AssertThrow (false, ExcNameAlreadyUsed (name));

      const unsigned int id = next_free_id;
      id_to_name_map[id] = name;
      ++next_free_id;

      if (name.size() > max_name_length)
	max_name_length = name.size();

      return id;
    }



    void
    Server::deregister_client (const unsigned int id)
    {
      Threads::ThreadMutex::ScopedLock lock (id_lock);

      if (id_to_name_map.find (id) == id_to_name_map.end())
	AssertThrow (false, ExcIDNotRegistered (id));

      id_to_name_map.erase (id_to_name_map.find(id));
    }



    void
    Server::put_message (const unsigned int  id,
			 const std::string  &s,
			 const unsigned int  priority)
    {
      Assert (id_to_name_map.find (id) != id_to_name_map.end(),
	      ExcIDNotRegistered (id));

      apply_filters (id_to_name_map[id], s, priority);
    }

  


    Client::Client (ServerBase &message_log_server,
		    const std::string    &name)
		    :
		    message_log_server (&message_log_server),
		    id (message_log_server.register_client(name)),
#ifdef HAVE_STD_STRINGSTREAM
		    message_buffer (new std::ostringstream()),		
#else
		    message_buffer (new std::ostrstream()),
#endif
		    next_priority (0)
    {}



    Client::~Client ()
    {
      delete_ptr (message_buffer);
      message_log_server->deregister_client (id);
    }



    Client &
    Client::operator<< (std::ostream& (*p) (std::ostream&))
    {
      Threads::ThreadMutex::ScopedLock lock (synchronisation_lock);
				       
				       
				       
      typedef std::ostream & (*manipulator) (std::ostream &);
      const manipulator flush_ptr = &std::flush;
      if (p == flush_ptr)
	{
#ifndef HAVE_STD_STRINGSTREAM
					   
	  *message_buffer << std::ends;
#endif      
					   
	  message_log_server->put_message (id, message_buffer->str(),
					   next_priority);
					   
					   
	  delete_ptr (message_buffer);
#ifdef HAVE_STD_STRINGSTREAM
	  message_buffer = new std::ostringstream();
#else
	  message_buffer = new std::ostrstream();
#endif

	  next_priority = 0;
	}
      else
					 
					 
	*message_buffer << p;

      return *this;
    }



    Client &
    Client::operator<< (const PriorityObject &priority)
    {
      next_priority = priority.priority;
      return *this;
    }



    Client::PriorityObject::PriorityObject (const unsigned int priority)
		    :
		    priority (priority)
    {}



    ServerBase &
    Client::get_server () const
    {
      return *message_log_server;
    }



    ServerFactory::~ServerFactory () 
    {}
  }


  MessageLog::Client::PriorityObject
  set_priority (const unsigned int priority)
  {
    return MessageLog::Client::PriorityObject(priority);
  }
 
}
