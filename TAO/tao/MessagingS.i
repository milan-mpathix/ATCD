/* -*- C++ -*- */
// $Id$

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#if defined (TAO_POLLER)
ACE_INLINE void POA_Messaging::Poller::is_ready_skel (
                                                      CORBA::ServerRequest &req,
                                                      void *obj,
                                                      void *context,
                                                      CORBA::Environment &env
                                                      )
{
  POA_CORBA::Pollable_ptr impl = (POA_Messaging::Poller_ptr) obj;
  POA_CORBA::Pollable::is_ready_skel (
                                      req,
                                      (POA_CORBA::Pollable_ptr) impl,
                                      context,
                                      env
                                      );
}
ACE_INLINE void POA_Messaging::Poller::create_pollable_set_skel (
                                                                 CORBA::ServerRequest &req,
                                                                 void *obj,
                                                                 void *context,
                                                                 CORBA::Environment &env
                                                                 )
{
  POA_CORBA::Pollable_ptr impl = (POA_Messaging::Poller_ptr) obj;
  POA_CORBA::Pollable::create_pollable_set_skel (
                                                 req,
                                                 (POA_CORBA::Pollable_ptr) impl,
                                                 context,
                                                 env
                                                 );
}
#endif /* TAO_POLLER */
