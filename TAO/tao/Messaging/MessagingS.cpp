// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html


// TAO_IDL - Generated from 
// be\be_codegen.cpp:599

#ifndef _TAO_IDL_ORIG_MESSAGINGS_CPP_
#define _TAO_IDL_ORIG_MESSAGINGS_CPP_


#include "MessagingS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Direct_Collocation_Upcall_Wrapper.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/PortableServer/Object_SArgument_T.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/TypeCode_SArg_Traits.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/TypeCode.h"
#include "tao/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:69

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:69

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1455

class TAO_Messaging_ReplyHandler_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Messaging_ReplyHandler_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Messaging_ReplyHandler_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
#if defined (ACE_MVS)
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14,  0,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14,  0,
     14, 14, 14,  1, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14,  0, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14,
#else
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14,  0, 14,  0, 14, 14,
     14,  1, 14, 14, 14, 14, 14, 14, 14, 14,
     14, 14, 14, 14, 14, 14,  0, 14, 14, 14,
     14, 14, 14, 14, 14, 14, 14, 14,
#endif /* ACE_MVS */
    };
  return len + asso_values[(int) str[len - 1]] + asso_values[(int) str[0]];
}

const TAO_operation_db_entry *
TAO_Messaging_ReplyHandler_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 4,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 13,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 13,
      HASH_VALUE_RANGE = 9,
      DUPLICATES = 0,
      WORDLIST_SIZE = 9
    };

  static const TAO_operation_db_entry  wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &POA_Messaging::ReplyHandler::_is_a_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &POA_Messaging::ReplyHandler::_component_skel, 0},
      {"_interface", &POA_Messaging::ReplyHandler::_interface_skel, 0},
      {"",0,0},
      {"_non_existent", &POA_Messaging::ReplyHandler::_non_existent_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_Messaging_ReplyHandler_Perfect_Hash_OpTable tao_Messaging_ReplyHandler_optable;
///////////////////////////////////////////////////////////////////////
//            Strategized Proxy Broker Implementation
//

// TAO_IDL - Generated from
// be\be_visitor_interface/strategized_proxy_broker_ss.cpp:40

// Factory function Implementation.
POA_Messaging::_TAO_ReplyHandler_Strategized_Proxy_Broker *
POA_Messaging::_TAO_ReplyHandler_Strategized_Proxy_Broker::the_TAO_ReplyHandler_Strategized_Proxy_Broker (void)
{
  static POA_Messaging::_TAO_ReplyHandler_Strategized_Proxy_Broker
  strategized_proxy_broker;
  
  return &strategized_proxy_broker;
}

POA_Messaging::_TAO_ReplyHandler_Strategized_Proxy_Broker::_TAO_ReplyHandler_Strategized_Proxy_Broker (void)
{
}

POA_Messaging::_TAO_ReplyHandler_Strategized_Proxy_Broker::~_TAO_ReplyHandler_Strategized_Proxy_Broker (void)
{
}

TAO::Collocation_Strategy
POA_Messaging::_TAO_ReplyHandler_Strategized_Proxy_Broker::get_strategy (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  TAO::Collocation_Strategy strategy =
    TAO_ORB_Core::collocation_strategy (obj ACE_ENV_ARG_PARAMETER);
  ACE_CHECK_RETURN (TAO::TAO_CS_REMOTE_STRATEGY);
  
  return strategy;
}

void
POA_Messaging::_TAO_ReplyHandler_Strategized_Proxy_Broker::dispatch (
    CORBA::Object_ptr obj,
    CORBA::Object_out forward_obj,
    TAO::Argument ** args,
    int num_args,
    const char * op,
    size_t op_len,
    TAO::Collocation_Strategy strategy
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((CORBA::Exception))
{
  TAO::Direct_Collocation_Upcall_Wrapper collocation_upcall_wrapper;
  collocation_upcall_wrapper.upcall (
    obj, 
    forward_obj, 
    args, 
    num_args, 
    op, 
    op_len, 
    strategy 
    ACE_ENV_ARG_PARAMETER);
}

//
//        End Strategized Proxy Broker Implementation
///////////////////////////////////////////////////////////////////////

// TAO_IDL - Generated from
// be\be_visitor_interface/interface_ss.cpp:999

TAO::Collocation_Proxy_Broker *
Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_function (CORBA::Object_ptr)
{
  return
    ::POA_Messaging::_TAO_ReplyHandler_Strategized_Proxy_Broker::the_TAO_ReplyHandler_Strategized_Proxy_Broker ();
}

int
Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_Initializer (size_t)
{
  Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_function_pointer = 
    Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_function;
  
  return 0;
}

static int
Messaging__TAO_ReplyHandler_Proxy_Broker_Stub_Factory_Initializer_Scarecrow =
  Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_Initializer (
      reinterpret_cast<size_t> (Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_Initializer)
    );



///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl::_TAO_ReplyHandler_Direct_Proxy_Impl (void)
{}

POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl::~_TAO_ReplyHandler_Direct_Proxy_Impl (void)
{}


//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////

// TAO_IDL - Generated from 
// be\be_visitor_interface/interface_ss.cpp:103

POA_Messaging::ReplyHandler::ReplyHandler (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Messaging_ReplyHandler_optable;
}

POA_Messaging::ReplyHandler::ReplyHandler (const ReplyHandler& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Messaging::ReplyHandler::~ReplyHandler (void)
{
}

// TAO_IDL - Generated from 
// be\be_visitor_interface/interface_ss.cpp:169

namespace POA_Messaging
{
  
  
  // TAO_IDL - Generated from
  // be\be_visitor_operation/upcall_command_ss.cpp:127
  
  class _is_a_ReplyHandler_Upcall_Command
    : public TAO::Upcall_Command
  {
  public:
    inline _is_a_ReplyHandler_Upcall_Command (
      POA_Messaging::ReplyHandler * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
    {
    }
    
    virtual void execute (ACE_ENV_SINGLE_ARG_DECL)
    {
      TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::ACE_InputCDR::to_boolean, TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_arg_type> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< CORBA::Char *>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< CORBA::Char *, TAO::SArg_Traits< CORBA::Char *>::in_arg_type> (
          this->operation_details_,
          this->args_,
          1);
        
      
      retval =
        this->servant_-> _is_a (
          arg_1
          ACE_ENV_ARG_PARAMETER);
        
    }
  
  private:
    POA_Messaging::ReplyHandler * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
  
}
void POA_Messaging::ReplyHandler::_is_a_skel (
    TAO_ServerRequest & server_request, 
    void * TAO_INTERCEPTOR (servant_upcall),
    void * servant
    ACE_ENV_ARG_DECL
  )
{
  
  
#if TAO_HAS_INTERCEPTORS == 1
  static CORBA::TypeCode_ptr const * const exceptions = 0;
  static size_t const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */
  
  TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_val retval;
  TAO::SArg_Traits< CORBA::Char *>::in_arg_val _tao_repository_id;
  
  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_repository_id
    };
  
  static size_t const nargs = 2;
  
  POA_Messaging::ReplyHandler * const impl =
    static_cast<POA_Messaging::ReplyHandler *> (servant);
  
  _is_a_ReplyHandler_Upcall_Command command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         ACE_ENV_ARG_PARAMETER);
  ACE_CHECK;
  
}

namespace POA_Messaging
{
  
  
  // TAO_IDL - Generated from
  // be\be_visitor_operation/upcall_command_ss.cpp:127
  
  class _non_existent_ReplyHandler_Upcall_Command
    : public TAO::Upcall_Command
  {
  public:
    inline _non_existent_ReplyHandler_Upcall_Command (
      POA_Messaging::ReplyHandler * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
    {
    }
    
    virtual void execute (ACE_ENV_SINGLE_ARG_DECL)
    {
      TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::ACE_InputCDR::to_boolean, TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_arg_type> (
          this->operation_details_,
          this->args_);
      
      
      retval =
        this->servant_-> _non_existent (
          ACE_ENV_SINGLE_ARG_PARAMETER);
        
    }
  
  private:
    POA_Messaging::ReplyHandler * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
  
}
void POA_Messaging::ReplyHandler::_non_existent_skel (
    TAO_ServerRequest & server_request, 
    void * TAO_INTERCEPTOR (servant_upcall),
    void * servant
    ACE_ENV_ARG_DECL
  )
{
  
  
#if TAO_HAS_INTERCEPTORS == 1
  static CORBA::TypeCode_ptr const * const exceptions = 0;
  static size_t const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */
  
  TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_val retval;
  
  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;
  
  POA_Messaging::ReplyHandler * const impl =
    static_cast<POA_Messaging::ReplyHandler *> (servant);
  
  _non_existent_ReplyHandler_Upcall_Command command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         ACE_ENV_ARG_PARAMETER);
  ACE_CHECK;
  
}



// TAO_IDL - Generated from 
// be\be_visitor_interface/interface_ss.cpp:393



void POA_Messaging::ReplyHandler::_interface_skel (
    TAO_ServerRequest & server_request, 
    void * /* servant_upcall */,
    void * servant
    ACE_ENV_ARG_DECL
  )
{
  TAO_IFR_Client_Adapter *_tao_adapter =
    ACE_Dynamic_Service<TAO_IFR_Client_Adapter>::instance (
        TAO_ORB_Core::ifr_client_adapter_name ()
      );
    
  if (_tao_adapter == 0)
    {
      ACE_THROW (CORBA::INTF_REPOS (CORBA::OMGVMCID | 1,
                                    CORBA::COMPLETED_NO));
    }
  
  POA_Messaging::ReplyHandler * const impl =
    static_cast<POA_Messaging::ReplyHandler *> (servant);
  CORBA::InterfaceDef_ptr _tao_retval = 
    impl->_get_interface (ACE_ENV_SINGLE_ARG_PARAMETER);
  ACE_CHECK;
  
  server_request.init_reply ();
  TAO_OutputCDR &_tao_out = *server_request.outgoing ();
  
  CORBA::Boolean const _tao_result =
    _tao_adapter->interfacedef_cdr_insert (
        _tao_out,
        _tao_retval
      );
  
  _tao_adapter->dispose (_tao_retval);
  
  if (_tao_result == 0)
    {
      ACE_THROW (CORBA::MARSHAL ());
    }
}

namespace POA_Messaging
{
  
  
  // TAO_IDL - Generated from
  // be\be_visitor_operation/upcall_command_ss.cpp:127
  
  class _get_component_ReplyHandler_Upcall_Command
    : public TAO::Upcall_Command
  {
  public:
    inline _get_component_ReplyHandler_Upcall_Command (
      POA_Messaging::ReplyHandler * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
    {
    }
    
    virtual void execute (ACE_ENV_SINGLE_ARG_DECL)
    {
      TAO::SArg_Traits< ::CORBA::Object>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::Object, TAO::SArg_Traits< ::CORBA::Object>::ret_arg_type> (
          this->operation_details_,
          this->args_);
      
      
      retval =
        this->servant_-> _get_component (
          ACE_ENV_SINGLE_ARG_PARAMETER);
        
    }
  
  private:
    POA_Messaging::ReplyHandler * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
  
}
void POA_Messaging::ReplyHandler::_component_skel (
    TAO_ServerRequest & server_request, 
    void * TAO_INTERCEPTOR (servant_upcall),
    void * servant
    ACE_ENV_ARG_DECL
  )
{
  
  
#if TAO_HAS_INTERCEPTORS == 1
  static CORBA::TypeCode_ptr const * const exceptions = 0;
  static size_t const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */
  
  TAO::SArg_Traits< ::CORBA::Object>::ret_val retval;
  
  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;
  
  POA_Messaging::ReplyHandler * const impl =
    static_cast<POA_Messaging::ReplyHandler *> (servant);
  
  _get_component_ReplyHandler_Upcall_Command command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         ACE_ENV_ARG_PARAMETER);
  ACE_CHECK;
  
}

CORBA::Boolean POA_Messaging::ReplyHandler::_is_a (
    const char* value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  return
    (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/Messaging/ReplyHandler:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Messaging::ReplyHandler::_interface_repository_id (void) const
{
  return "IDL:omg.org/Messaging/ReplyHandler:1.0";
}

// TAO_IDL - Generated from
// be\be_visitor_interface/interface_ss.cpp:940

void POA_Messaging::ReplyHandler::_dispatch (
    TAO_ServerRequest & req,
    void * servant_upcall
    ACE_ENV_ARG_DECL
  )
{
  this->synchronous_upcall_dispatch (req,
                                     servant_upcall,
                                     this
                                     ACE_ENV_ARG_PARAMETER);
}

// TAO_IDL - Generated from
// be\be_visitor_interface/interface_ss.cpp:891

Messaging::ReplyHandler *
POA_Messaging::ReplyHandler::_this (ACE_ENV_SINGLE_ARG_DECL)
{
  TAO_Stub *stub = this->_create_stub (ACE_ENV_SINGLE_ARG_PARAMETER);
  ACE_CHECK_RETURN (0);
  
  TAO_Stub_Auto_Ptr safe_stub (stub);
  CORBA::Object_ptr tmp = CORBA::Object::_nil ();
  
  CORBA::Boolean _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      CORBA::Object (stub, _tao_opt_colloc, this),
      0
    );
  
  CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();
  
  typedef ::Messaging::ReplyHandler STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in (),
        Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_function_pointer
      );
}

#endif /* ifndef */

