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
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be/be_codegen.cpp:314


#include "IOP_CodecC.h"
#include "tao/Stub.h"
#include "tao/Invocation.h"
#include "tao/PortableInterceptor.h"

#if TAO_HAS_INTERCEPTORS == 1
#include "tao/RequestInfo_Util.h"
#include "tao/ClientRequestInfo_i.h"
#include "tao/ClientInterceptorAdapter.h"
#endif  /* TAO_HAS_INTERCEPTORS == 1 */


#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "IOP_CodecC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:63

int IOP::Codec::_tao_class_id = 0;

IOP::Codec_ptr
tao_IOP_Codec_duplicate (
    IOP::Codec_ptr p
  )
{
  return IOP::Codec::_duplicate (p);
}

void
tao_IOP_Codec_release (
    IOP::Codec_ptr p
  )
{
  CORBA::release (p);
}

IOP::Codec_ptr
tao_IOP_Codec_nil (
    void
  )
{
  return IOP::Codec::_nil ();
}

IOP::Codec_ptr
tao_IOP_Codec_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return IOP::Codec::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
tao_IOP_Codec_upcast (
    void *src
  )
{
  IOP::Codec **tmp =
    ACE_static_cast (IOP::Codec **, src);
  return *tmp;
}

CORBA::Boolean
tao_IOP_Codec_marshal (
    IOP::Codec_ptr p,
    TAO_OutputCDR &strm
  )
{
  return p->marshal (strm);
}

// TAO_IDL - Generated from
// be/be_interface.cpp:722

// *************************************************************
// IOP::Codec_var
// *************************************************************

IOP::Codec_var::Codec_var (void)
  : ptr_ (Codec::_nil ())
{}

::IOP::Codec_ptr
IOP::Codec_var::ptr (void) const
{
  return this->ptr_;
}

IOP::Codec_var::Codec_var (const ::IOP::Codec_var &p)
  : TAO_Base_var (),
    ptr_ (Codec::_duplicate (p.ptr ()))
{}

IOP::Codec_var::~Codec_var (void)
{
  CORBA::release (this->ptr_);
}

IOP::Codec_var &
IOP::Codec_var::operator= (Codec_ptr p)
{
  CORBA::release (this->ptr_);
  this->ptr_ = p;
  return *this;
}

IOP::Codec_var &
IOP::Codec_var::operator= (const ::IOP::Codec_var &p)
{
  if (this != &p)
  {
    CORBA::release (this->ptr_);
    this->ptr_ = ::IOP::Codec::_duplicate (p.ptr ());
  }
  return *this;
}

IOP::Codec_var::operator const ::IOP::Codec_ptr &() const // cast
{
  return this->ptr_;
}

IOP::Codec_var::operator ::IOP::Codec_ptr &() // cast 
{
  return this->ptr_;
}

::IOP::Codec_ptr
IOP::Codec_var::operator-> (void) const
{
  return this->ptr_;
}

::IOP::Codec_ptr
IOP::Codec_var::in (void) const
{
  return this->ptr_;
}

::IOP::Codec_ptr &
IOP::Codec_var::inout (void)
{
  return this->ptr_;
}

::IOP::Codec_ptr &
IOP::Codec_var::out (void)
{
  CORBA::release (this->ptr_);
  this->ptr_ = ::IOP::Codec::_nil ();
  return this->ptr_;
}

::IOP::Codec_ptr
IOP::Codec_var::_retn (void)
{
  // yield ownership of managed obj reference
  ::IOP::Codec_ptr val = this->ptr_;
  this->ptr_ = ::IOP::Codec::_nil ();
  return val;
}

::IOP::Codec_ptr
IOP::Codec_var::tao_duplicate (Codec_ptr p)
{
  return ::IOP::Codec::_duplicate (p);
}

void
IOP::Codec_var::tao_release (Codec_ptr p)
{
  CORBA::release (p);
}

::IOP::Codec_ptr
IOP::Codec_var::tao_nil (void)
{
  return ::IOP::Codec::_nil ();
}

::IOP::Codec_ptr
IOP::Codec_var::tao_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return ::IOP::Codec::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
IOP::Codec_var::tao_upcast (void *src)
{
  Codec **tmp =
    ACE_static_cast (Codec **, src);
  return *tmp;
}

// TAO_IDL - Generated from
// be/be_interface.cpp:1031

// *************************************************************
// IOP::Codec_out
// *************************************************************

IOP::Codec_out::Codec_out (Codec_ptr &p)
  : ptr_ (p)
{
  this->ptr_ = ::IOP::Codec::_nil ();
}

IOP::Codec_out::Codec_out (Codec_var &p)
  : ptr_ (p.out ())
{
  CORBA::release (this->ptr_);
  this->ptr_ = ::IOP::Codec::_nil ();
}

IOP::Codec_out::Codec_out (const ::IOP::Codec_out &p)
  : ptr_ (ACE_const_cast (Codec_out &, p).ptr_)
{}

::IOP::Codec_out &
IOP::Codec_out::operator= (const ::IOP::Codec_out &p)
{
  this->ptr_ = ACE_const_cast (Codec_out&, p).ptr_;
  return *this;
}

IOP::Codec_out &
IOP::Codec_out::operator= (const ::IOP::Codec_var &p)
{
  this->ptr_ = ::IOP::Codec::_duplicate (p.ptr ());
  return *this;
}

IOP::Codec_out &
IOP::Codec_out::operator= (Codec_ptr p)
{
  this->ptr_ = p;
  return *this;
}

IOP::Codec_out::operator ::IOP::Codec_ptr &() // cast
{
  return this->ptr_;
}

::IOP::Codec_ptr &
IOP::Codec_out::ptr (void)
{
  return this->ptr_;
}

::IOP::Codec_ptr
IOP::Codec_out::operator-> (void)
{
  return this->ptr_;
}

// TAO_IDL - Generated from 
// be/be_visitor_interface/interface_cs.cpp:236

IOP::Codec::Codec (void)
{}

IOP::Codec::~Codec (void)
{}

void 
IOP::Codec::_tao_any_destructor (void *_tao_void_pointer)
{
  Codec *tmp = ACE_static_cast (Codec *, _tao_void_pointer);
  CORBA::release (tmp);
}

IOP::Codec_ptr
IOP::Codec::_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL
  )
{
  return Codec::_unchecked_narrow (obj ACE_ENV_ARG_PARAMETER);
}

IOP::Codec_ptr 
IOP::Codec::_unchecked_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (obj))
    {
      return Codec::_nil ();
    }
  
  return
      ACE_reinterpret_cast (
          Codec_ptr,
          obj->_tao_QueryInterface (
              ACE_reinterpret_cast (
                  ptr_arith_t,
                  &Codec::_tao_class_id
                )
            )
        );
}

IOP::Codec_ptr
IOP::Codec::_duplicate (Codec_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void *IOP::Codec::_tao_QueryInterface (ptr_arith_t type)
{
  void *retv = 0;
  
  if (type == ACE_reinterpret_cast (
              ptr_arith_t,
              &ACE_NESTED_CLASS (::IOP, Codec)::_tao_class_id)
            )
    {
      retv = ACE_reinterpret_cast (void*, this);
    }
  else if (type == ACE_reinterpret_cast (
               ptr_arith_t,
               &CORBA::Object::_tao_class_id)
             )
    {
      retv =
        ACE_reinterpret_cast (
            void *,
            ACE_static_cast (CORBA::Object_ptr, this)
          );
    }
  
  if (retv != 0)
    {
      this->_add_ref ();
    }
  
  return retv;
}

const char* IOP::Codec::_interface_repository_id (void) const
{
  return "IDL:omg.org/IOP/Codec:1.0";
}

CORBA::Boolean
IOP::Codec::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from 
// be/be_visitor_exception/exception_cs.cpp:63

IOP::Codec::InvalidTypeForEncoding::InvalidTypeForEncoding (void)
  : CORBA::UserException (
        "IDL:omg.org/IOP/Codec/InvalidTypeForEncoding:1.0",
        "InvalidTypeForEncoding"
      )
{
}

IOP::Codec::InvalidTypeForEncoding::~InvalidTypeForEncoding (void)
{
}

IOP::Codec::InvalidTypeForEncoding::InvalidTypeForEncoding (const ::IOP::Codec::InvalidTypeForEncoding &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

IOP::Codec::InvalidTypeForEncoding&
IOP::Codec::InvalidTypeForEncoding::operator= (const ::IOP::Codec::InvalidTypeForEncoding &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void IOP::Codec::InvalidTypeForEncoding::_tao_any_destructor (void *_tao_void_pointer)
{
  InvalidTypeForEncoding *tmp = ACE_static_cast (InvalidTypeForEncoding*, _tao_void_pointer);
  delete tmp;
}

IOP::Codec::InvalidTypeForEncoding *
IOP::Codec::InvalidTypeForEncoding::_downcast (CORBA::Exception *_tao_excp)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/IOP/Codec/InvalidTypeForEncoding:1.0", _tao_excp->_rep_id ()))
    {
      return ACE_dynamic_cast (InvalidTypeForEncoding *, _tao_excp);
    }
  else
    {
      return 0;
    }
}

CORBA::Exception *IOP::Codec::InvalidTypeForEncoding::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::IOP::Codec::InvalidTypeForEncoding, 0);
  return retval;
}

CORBA::Exception *
IOP::Codec::InvalidTypeForEncoding::_tao_duplicate (void) const
{
  CORBA::Exception *result;
  ACE_NEW_RETURN (
      result,
      ::IOP::Codec::InvalidTypeForEncoding (*this),
      0
    );
  return result;
}

void IOP::Codec::InvalidTypeForEncoding::_raise (void)
{
  TAO_RAISE (*this);
}

void IOP::Codec::InvalidTypeForEncoding::_tao_encode (
    TAO_OutputCDR &
    ACE_ENV_ARG_DECL
  ) const
{
  ACE_THROW (CORBA::MARSHAL ());
}

void IOP::Codec::InvalidTypeForEncoding::_tao_decode (
    TAO_InputCDR &
    ACE_ENV_ARG_DECL
  )
{
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr IOP::Codec::InvalidTypeForEncoding::_type (void) const
{
  return ::IOP::Codec::_tc_InvalidTypeForEncoding;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_IOP_Codec_InvalidTypeForEncoding[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  49,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x632f496e), 
  ACE_NTOHL (0x76616c69), 
  ACE_NTOHL (0x64547970), 
  ACE_NTOHL (0x65466f72), 
  ACE_NTOHL (0x456e636f), 
  ACE_NTOHL (0x64696e67), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IOP/Codec/InvalidTypeForEncoding:1.0
    23,
  ACE_NTOHL (0x496e7661), 
  ACE_NTOHL (0x6c696454), 
  ACE_NTOHL (0x79706546), 
  ACE_NTOHL (0x6f72456e), 
  ACE_NTOHL (0x636f6469), 
  ACE_NTOHL (0x6e670000),  // name = InvalidTypeForEncoding
  0, // member count
  };

static CORBA::TypeCode _tc_TAO_tc_IOP_Codec_InvalidTypeForEncoding (
    CORBA::tk_except,
    sizeof (_oc_IOP_Codec_InvalidTypeForEncoding),
    (char *) &_oc_IOP_Codec_InvalidTypeForEncoding,
    0,
    sizeof (IOP::Codec::InvalidTypeForEncoding)
  );

::CORBA::TypeCode_ptr IOP::Codec::_tc_InvalidTypeForEncoding =
  &_tc_TAO_tc_IOP_Codec_InvalidTypeForEncoding;

// TAO_IDL - Generated from 
// be/be_visitor_exception/exception_cs.cpp:63

IOP::Codec::FormatMismatch::FormatMismatch (void)
  : CORBA::UserException (
        "IDL:omg.org/IOP/Codec/FormatMismatch:1.0",
        "FormatMismatch"
      )
{
}

IOP::Codec::FormatMismatch::~FormatMismatch (void)
{
}

IOP::Codec::FormatMismatch::FormatMismatch (const ::IOP::Codec::FormatMismatch &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

IOP::Codec::FormatMismatch&
IOP::Codec::FormatMismatch::operator= (const ::IOP::Codec::FormatMismatch &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void IOP::Codec::FormatMismatch::_tao_any_destructor (void *_tao_void_pointer)
{
  FormatMismatch *tmp = ACE_static_cast (FormatMismatch*, _tao_void_pointer);
  delete tmp;
}

IOP::Codec::FormatMismatch *
IOP::Codec::FormatMismatch::_downcast (CORBA::Exception *_tao_excp)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/IOP/Codec/FormatMismatch:1.0", _tao_excp->_rep_id ()))
    {
      return ACE_dynamic_cast (FormatMismatch *, _tao_excp);
    }
  else
    {
      return 0;
    }
}

CORBA::Exception *IOP::Codec::FormatMismatch::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::IOP::Codec::FormatMismatch, 0);
  return retval;
}

CORBA::Exception *
IOP::Codec::FormatMismatch::_tao_duplicate (void) const
{
  CORBA::Exception *result;
  ACE_NEW_RETURN (
      result,
      ::IOP::Codec::FormatMismatch (*this),
      0
    );
  return result;
}

void IOP::Codec::FormatMismatch::_raise (void)
{
  TAO_RAISE (*this);
}

void IOP::Codec::FormatMismatch::_tao_encode (
    TAO_OutputCDR &
    ACE_ENV_ARG_DECL
  ) const
{
  ACE_THROW (CORBA::MARSHAL ());
}

void IOP::Codec::FormatMismatch::_tao_decode (
    TAO_InputCDR &
    ACE_ENV_ARG_DECL
  )
{
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr IOP::Codec::FormatMismatch::_type (void) const
{
  return ::IOP::Codec::_tc_FormatMismatch;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_IOP_Codec_FormatMismatch[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  41,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x632f466f), 
  ACE_NTOHL (0x726d6174), 
  ACE_NTOHL (0x4d69736d), 
  ACE_NTOHL (0x61746368), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IOP/Codec/FormatMismatch:1.0
    15,
  ACE_NTOHL (0x466f726d), 
  ACE_NTOHL (0x61744d69), 
  ACE_NTOHL (0x736d6174), 
  ACE_NTOHL (0x63680000),  // name = FormatMismatch
  0, // member count
  };

static CORBA::TypeCode _tc_TAO_tc_IOP_Codec_FormatMismatch (
    CORBA::tk_except,
    sizeof (_oc_IOP_Codec_FormatMismatch),
    (char *) &_oc_IOP_Codec_FormatMismatch,
    0,
    sizeof (IOP::Codec::FormatMismatch)
  );

::CORBA::TypeCode_ptr IOP::Codec::_tc_FormatMismatch =
  &_tc_TAO_tc_IOP_Codec_FormatMismatch;

// TAO_IDL - Generated from 
// be/be_visitor_exception/exception_cs.cpp:63

IOP::Codec::TypeMismatch::TypeMismatch (void)
  : CORBA::UserException (
        "IDL:omg.org/IOP/Codec/TypeMismatch:1.0",
        "TypeMismatch"
      )
{
}

IOP::Codec::TypeMismatch::~TypeMismatch (void)
{
}

IOP::Codec::TypeMismatch::TypeMismatch (const ::IOP::Codec::TypeMismatch &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

IOP::Codec::TypeMismatch&
IOP::Codec::TypeMismatch::operator= (const ::IOP::Codec::TypeMismatch &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void IOP::Codec::TypeMismatch::_tao_any_destructor (void *_tao_void_pointer)
{
  TypeMismatch *tmp = ACE_static_cast (TypeMismatch*, _tao_void_pointer);
  delete tmp;
}

IOP::Codec::TypeMismatch *
IOP::Codec::TypeMismatch::_downcast (CORBA::Exception *_tao_excp)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/IOP/Codec/TypeMismatch:1.0", _tao_excp->_rep_id ()))
    {
      return ACE_dynamic_cast (TypeMismatch *, _tao_excp);
    }
  else
    {
      return 0;
    }
}

CORBA::Exception *IOP::Codec::TypeMismatch::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::IOP::Codec::TypeMismatch, 0);
  return retval;
}

CORBA::Exception *
IOP::Codec::TypeMismatch::_tao_duplicate (void) const
{
  CORBA::Exception *result;
  ACE_NEW_RETURN (
      result,
      ::IOP::Codec::TypeMismatch (*this),
      0
    );
  return result;
}

void IOP::Codec::TypeMismatch::_raise (void)
{
  TAO_RAISE (*this);
}

void IOP::Codec::TypeMismatch::_tao_encode (
    TAO_OutputCDR &
    ACE_ENV_ARG_DECL
  ) const
{
  ACE_THROW (CORBA::MARSHAL ());
}

void IOP::Codec::TypeMismatch::_tao_decode (
    TAO_InputCDR &
    ACE_ENV_ARG_DECL
  )
{
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr IOP::Codec::TypeMismatch::_type (void) const
{
  return ::IOP::Codec::_tc_TypeMismatch;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_IOP_Codec_TypeMismatch[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  39,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x632f5479), 
  ACE_NTOHL (0x70654d69), 
  ACE_NTOHL (0x736d6174), 
  ACE_NTOHL (0x63683a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/IOP/Codec/TypeMismatch:1.0
    13,
  ACE_NTOHL (0x54797065), 
  ACE_NTOHL (0x4d69736d), 
  ACE_NTOHL (0x61746368), 
  ACE_NTOHL (0x0),  // name = TypeMismatch
  0, // member count
  };

static CORBA::TypeCode _tc_TAO_tc_IOP_Codec_TypeMismatch (
    CORBA::tk_except,
    sizeof (_oc_IOP_Codec_TypeMismatch),
    (char *) &_oc_IOP_Codec_TypeMismatch,
    0,
    sizeof (IOP::Codec::TypeMismatch)
  );

::CORBA::TypeCode_ptr IOP::Codec::_tc_TypeMismatch =
  &_tc_TAO_tc_IOP_Codec_TypeMismatch;

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_IOP_Codec[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  26,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x633a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/IOP/Codec:1.0
    6,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x63000000),  // name = Codec
  };

static CORBA::TypeCode _tc_TAO_tc_IOP_Codec (
    CORBA::tk_objref,
    sizeof (_oc_IOP_Codec),
    (char *) &_oc_IOP_Codec,
    0,
    sizeof (IOP::Codec)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (IOP)
TAO_NAMESPACE_DEFINE (
    ::CORBA::TypeCode_ptr,
    _tc_Codec,
    &_tc_TAO_tc_IOP_Codec
  )
TAO_NAMESPACE_END

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_IOP_EncodingFormat[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  35,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x456e636f), 
  ACE_NTOHL (0x64696e67), 
  ACE_NTOHL (0x466f726d), 
  ACE_NTOHL (0x61743a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/IOP/EncodingFormat:1.0
    15,
  ACE_NTOHL (0x456e636f), 
  ACE_NTOHL (0x64696e67), 
  ACE_NTOHL (0x466f726d), 
  ACE_NTOHL (0x61740000),  // name = EncodingFormat
    CORBA::tk_short,

};

static CORBA::TypeCode _tc_TAO_tc_IOP_EncodingFormat (
    CORBA::tk_alias,
    sizeof (_oc_IOP_EncodingFormat),
    (char *) &_oc_IOP_EncodingFormat,
    0,
    sizeof (IOP::EncodingFormat)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (IOP)
TAO_NAMESPACE_DEFINE (
    ::CORBA::TypeCode_ptr,
    _tc_EncodingFormat,
    &_tc_TAO_tc_IOP_EncodingFormat
  )
TAO_NAMESPACE_END

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_IOP_Encoding[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  29,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x456e636f), 
  ACE_NTOHL (0x64696e67), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IOP/Encoding:1.0
    9,
  ACE_NTOHL (0x456e636f), 
  ACE_NTOHL (0x64696e67), 
  ACE_NTOHL (0x0),  // name = Encoding
  3, // member count
    7,
  ACE_NTOHL (0x666f726d), 
  ACE_NTOHL (0x61740000),  // name = format
    CORBA::tk_alias, // typecode kind for typedefs
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    35,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x494f502f), 
    ACE_NTOHL (0x456e636f), 
    ACE_NTOHL (0x64696e67), 
    ACE_NTOHL (0x466f726d), 
    ACE_NTOHL (0x61743a31), 
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/IOP/EncodingFormat:1.0
        15,
    ACE_NTOHL (0x456e636f), 
    ACE_NTOHL (0x64696e67), 
    ACE_NTOHL (0x466f726d), 
    ACE_NTOHL (0x61740000),  // name = EncodingFormat
        CORBA::tk_short,


  14,
  ACE_NTOHL (0x6d616a6f), 
  ACE_NTOHL (0x725f7665), 
  ACE_NTOHL (0x7273696f), 
  ACE_NTOHL (0x6e000000),  // name = major_version
    CORBA::tk_octet,

  14,
  ACE_NTOHL (0x6d696e6f), 
  ACE_NTOHL (0x725f7665), 
  ACE_NTOHL (0x7273696f), 
  ACE_NTOHL (0x6e000000),  // name = minor_version
    CORBA::tk_octet,

};

static CORBA::TypeCode _tc_TAO_tc_IOP_Encoding (
    CORBA::tk_struct,
    sizeof (_oc_IOP_Encoding),
    (char *) &_oc_IOP_Encoding,
    0,
    sizeof (IOP::Encoding)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (IOP)
TAO_NAMESPACE_DEFINE (
    ::CORBA::TypeCode_ptr,
    _tc_Encoding,
    &_tc_TAO_tc_IOP_Encoding
  )
TAO_NAMESPACE_END

// TAO_IDL - Generated from 
// be/be_visitor_structure/structure_cs.cpp:66

void IOP::Encoding::_tao_any_destructor (void *_tao_void_pointer)
{
  Encoding *tmp = ACE_static_cast (Encoding*, _tao_void_pointer);
  delete tmp;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:63

int IOP::CodecFactory::_tao_class_id = 0;

IOP::CodecFactory_ptr
tao_IOP_CodecFactory_duplicate (
    IOP::CodecFactory_ptr p
  )
{
  return IOP::CodecFactory::_duplicate (p);
}

void
tao_IOP_CodecFactory_release (
    IOP::CodecFactory_ptr p
  )
{
  CORBA::release (p);
}

IOP::CodecFactory_ptr
tao_IOP_CodecFactory_nil (
    void
  )
{
  return IOP::CodecFactory::_nil ();
}

IOP::CodecFactory_ptr
tao_IOP_CodecFactory_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return IOP::CodecFactory::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
tao_IOP_CodecFactory_upcast (
    void *src
  )
{
  IOP::CodecFactory **tmp =
    ACE_static_cast (IOP::CodecFactory **, src);
  return *tmp;
}

CORBA::Boolean
tao_IOP_CodecFactory_marshal (
    IOP::CodecFactory_ptr p,
    TAO_OutputCDR &strm
  )
{
  return p->marshal (strm);
}

// TAO_IDL - Generated from
// be/be_interface.cpp:722

// *************************************************************
// IOP::CodecFactory_var
// *************************************************************

IOP::CodecFactory_var::CodecFactory_var (void)
  : ptr_ (CodecFactory::_nil ())
{}

::IOP::CodecFactory_ptr
IOP::CodecFactory_var::ptr (void) const
{
  return this->ptr_;
}

IOP::CodecFactory_var::CodecFactory_var (const ::IOP::CodecFactory_var &p)
  : TAO_Base_var (),
    ptr_ (CodecFactory::_duplicate (p.ptr ()))
{}

IOP::CodecFactory_var::~CodecFactory_var (void)
{
  CORBA::release (this->ptr_);
}

IOP::CodecFactory_var &
IOP::CodecFactory_var::operator= (CodecFactory_ptr p)
{
  CORBA::release (this->ptr_);
  this->ptr_ = p;
  return *this;
}

IOP::CodecFactory_var &
IOP::CodecFactory_var::operator= (const ::IOP::CodecFactory_var &p)
{
  if (this != &p)
  {
    CORBA::release (this->ptr_);
    this->ptr_ = ::IOP::CodecFactory::_duplicate (p.ptr ());
  }
  return *this;
}

IOP::CodecFactory_var::operator const ::IOP::CodecFactory_ptr &() const // cast
{
  return this->ptr_;
}

IOP::CodecFactory_var::operator ::IOP::CodecFactory_ptr &() // cast 
{
  return this->ptr_;
}

::IOP::CodecFactory_ptr
IOP::CodecFactory_var::operator-> (void) const
{
  return this->ptr_;
}

::IOP::CodecFactory_ptr
IOP::CodecFactory_var::in (void) const
{
  return this->ptr_;
}

::IOP::CodecFactory_ptr &
IOP::CodecFactory_var::inout (void)
{
  return this->ptr_;
}

::IOP::CodecFactory_ptr &
IOP::CodecFactory_var::out (void)
{
  CORBA::release (this->ptr_);
  this->ptr_ = ::IOP::CodecFactory::_nil ();
  return this->ptr_;
}

::IOP::CodecFactory_ptr
IOP::CodecFactory_var::_retn (void)
{
  // yield ownership of managed obj reference
  ::IOP::CodecFactory_ptr val = this->ptr_;
  this->ptr_ = ::IOP::CodecFactory::_nil ();
  return val;
}

::IOP::CodecFactory_ptr
IOP::CodecFactory_var::tao_duplicate (CodecFactory_ptr p)
{
  return ::IOP::CodecFactory::_duplicate (p);
}

void
IOP::CodecFactory_var::tao_release (CodecFactory_ptr p)
{
  CORBA::release (p);
}

::IOP::CodecFactory_ptr
IOP::CodecFactory_var::tao_nil (void)
{
  return ::IOP::CodecFactory::_nil ();
}

::IOP::CodecFactory_ptr
IOP::CodecFactory_var::tao_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return ::IOP::CodecFactory::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
IOP::CodecFactory_var::tao_upcast (void *src)
{
  CodecFactory **tmp =
    ACE_static_cast (CodecFactory **, src);
  return *tmp;
}

// TAO_IDL - Generated from
// be/be_interface.cpp:1031

// *************************************************************
// IOP::CodecFactory_out
// *************************************************************

IOP::CodecFactory_out::CodecFactory_out (CodecFactory_ptr &p)
  : ptr_ (p)
{
  this->ptr_ = ::IOP::CodecFactory::_nil ();
}

IOP::CodecFactory_out::CodecFactory_out (CodecFactory_var &p)
  : ptr_ (p.out ())
{
  CORBA::release (this->ptr_);
  this->ptr_ = ::IOP::CodecFactory::_nil ();
}

IOP::CodecFactory_out::CodecFactory_out (const ::IOP::CodecFactory_out &p)
  : ptr_ (ACE_const_cast (CodecFactory_out &, p).ptr_)
{}

::IOP::CodecFactory_out &
IOP::CodecFactory_out::operator= (const ::IOP::CodecFactory_out &p)
{
  this->ptr_ = ACE_const_cast (CodecFactory_out&, p).ptr_;
  return *this;
}

IOP::CodecFactory_out &
IOP::CodecFactory_out::operator= (const ::IOP::CodecFactory_var &p)
{
  this->ptr_ = ::IOP::CodecFactory::_duplicate (p.ptr ());
  return *this;
}

IOP::CodecFactory_out &
IOP::CodecFactory_out::operator= (CodecFactory_ptr p)
{
  this->ptr_ = p;
  return *this;
}

IOP::CodecFactory_out::operator ::IOP::CodecFactory_ptr &() // cast
{
  return this->ptr_;
}

::IOP::CodecFactory_ptr &
IOP::CodecFactory_out::ptr (void)
{
  return this->ptr_;
}

::IOP::CodecFactory_ptr
IOP::CodecFactory_out::operator-> (void)
{
  return this->ptr_;
}

// TAO_IDL - Generated from 
// be/be_visitor_interface/interface_cs.cpp:236

IOP::CodecFactory::CodecFactory (void)
{}

IOP::CodecFactory::~CodecFactory (void)
{}

void 
IOP::CodecFactory::_tao_any_destructor (void *_tao_void_pointer)
{
  CodecFactory *tmp = ACE_static_cast (CodecFactory *, _tao_void_pointer);
  CORBA::release (tmp);
}

IOP::CodecFactory_ptr
IOP::CodecFactory::_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL
  )
{
  return CodecFactory::_unchecked_narrow (obj ACE_ENV_ARG_PARAMETER);
}

IOP::CodecFactory_ptr 
IOP::CodecFactory::_unchecked_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (obj))
    {
      return CodecFactory::_nil ();
    }
  
  return
      ACE_reinterpret_cast (
          CodecFactory_ptr,
          obj->_tao_QueryInterface (
              ACE_reinterpret_cast (
                  ptr_arith_t,
                  &CodecFactory::_tao_class_id
                )
            )
        );
}

IOP::CodecFactory_ptr
IOP::CodecFactory::_duplicate (CodecFactory_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void *IOP::CodecFactory::_tao_QueryInterface (ptr_arith_t type)
{
  void *retv = 0;
  
  if (type == ACE_reinterpret_cast (
              ptr_arith_t,
              &ACE_NESTED_CLASS (::IOP, CodecFactory)::_tao_class_id)
            )
    {
      retv = ACE_reinterpret_cast (void*, this);
    }
  else if (type == ACE_reinterpret_cast (
               ptr_arith_t,
               &CORBA::Object::_tao_class_id)
             )
    {
      retv =
        ACE_reinterpret_cast (
            void *,
            ACE_static_cast (CORBA::Object_ptr, this)
          );
    }
  
  if (retv != 0)
    {
      this->_add_ref ();
    }
  
  return retv;
}

const char* IOP::CodecFactory::_interface_repository_id (void) const
{
  return "IDL:omg.org/IOP/CodecFactory:1.0";
}

CORBA::Boolean
IOP::CodecFactory::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from 
// be/be_visitor_exception/exception_cs.cpp:63

IOP::CodecFactory::UnknownEncoding::UnknownEncoding (void)
  : CORBA::UserException (
        "IDL:omg.org/IOP/CodecFactory/UnknownEncoding:1.0",
        "UnknownEncoding"
      )
{
}

IOP::CodecFactory::UnknownEncoding::~UnknownEncoding (void)
{
}

IOP::CodecFactory::UnknownEncoding::UnknownEncoding (const ::IOP::CodecFactory::UnknownEncoding &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

IOP::CodecFactory::UnknownEncoding&
IOP::CodecFactory::UnknownEncoding::operator= (const ::IOP::CodecFactory::UnknownEncoding &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void IOP::CodecFactory::UnknownEncoding::_tao_any_destructor (void *_tao_void_pointer)
{
  UnknownEncoding *tmp = ACE_static_cast (UnknownEncoding*, _tao_void_pointer);
  delete tmp;
}

IOP::CodecFactory::UnknownEncoding *
IOP::CodecFactory::UnknownEncoding::_downcast (CORBA::Exception *_tao_excp)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/IOP/CodecFactory/UnknownEncoding:1.0", _tao_excp->_rep_id ()))
    {
      return ACE_dynamic_cast (UnknownEncoding *, _tao_excp);
    }
  else
    {
      return 0;
    }
}

CORBA::Exception *IOP::CodecFactory::UnknownEncoding::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::IOP::CodecFactory::UnknownEncoding, 0);
  return retval;
}

CORBA::Exception *
IOP::CodecFactory::UnknownEncoding::_tao_duplicate (void) const
{
  CORBA::Exception *result;
  ACE_NEW_RETURN (
      result,
      ::IOP::CodecFactory::UnknownEncoding (*this),
      0
    );
  return result;
}

void IOP::CodecFactory::UnknownEncoding::_raise (void)
{
  TAO_RAISE (*this);
}

void IOP::CodecFactory::UnknownEncoding::_tao_encode (
    TAO_OutputCDR &
    ACE_ENV_ARG_DECL
  ) const
{
  ACE_THROW (CORBA::MARSHAL ());
}

void IOP::CodecFactory::UnknownEncoding::_tao_decode (
    TAO_InputCDR &
    ACE_ENV_ARG_DECL
  )
{
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr IOP::CodecFactory::UnknownEncoding::_type (void) const
{
  return ::IOP::CodecFactory::_tc_UnknownEncoding;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_IOP_CodecFactory_UnknownEncoding[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  49,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x63466163), 
  ACE_NTOHL (0x746f7279), 
  ACE_NTOHL (0x2f556e6b), 
  ACE_NTOHL (0x6e6f776e), 
  ACE_NTOHL (0x456e636f), 
  ACE_NTOHL (0x64696e67), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IOP/CodecFactory/UnknownEncoding:1.0
    16,
  ACE_NTOHL (0x556e6b6e), 
  ACE_NTOHL (0x6f776e45), 
  ACE_NTOHL (0x6e636f64), 
  ACE_NTOHL (0x696e6700),  // name = UnknownEncoding
  0, // member count
  };

static CORBA::TypeCode _tc_TAO_tc_IOP_CodecFactory_UnknownEncoding (
    CORBA::tk_except,
    sizeof (_oc_IOP_CodecFactory_UnknownEncoding),
    (char *) &_oc_IOP_CodecFactory_UnknownEncoding,
    0,
    sizeof (IOP::CodecFactory::UnknownEncoding)
  );

::CORBA::TypeCode_ptr IOP::CodecFactory::_tc_UnknownEncoding =
  &_tc_TAO_tc_IOP_CodecFactory_UnknownEncoding;

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_IOP_CodecFactory[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  33,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x494f502f), 
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x63466163), 
  ACE_NTOHL (0x746f7279), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IOP/CodecFactory:1.0
    13,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x63466163), 
  ACE_NTOHL (0x746f7279), 
  ACE_NTOHL (0x0),  // name = CodecFactory
  };

static CORBA::TypeCode _tc_TAO_tc_IOP_CodecFactory (
    CORBA::tk_objref,
    sizeof (_oc_IOP_CodecFactory),
    (char *) &_oc_IOP_CodecFactory,
    0,
    sizeof (IOP::CodecFactory)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (IOP)
TAO_NAMESPACE_DEFINE (
    ::CORBA::TypeCode_ptr,
    _tc_CodecFactory,
    &_tc_TAO_tc_IOP_CodecFactory
  )
TAO_NAMESPACE_END

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:52

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    IOP::Codec_ptr _tao_elem
  )
{
  IOP::Codec_ptr _tao_objptr =
    IOP::Codec::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    IOP::Codec_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<IOP::Codec>::insert (
      _tao_any,
      IOP::Codec::_tao_any_destructor,
      IOP::_tc_Codec,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    IOP::Codec_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<IOP::Codec>::extract (
        _tao_any,
        IOP::Codec::_tao_any_destructor,
        IOP::_tc_Codec,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
  template class TAO_Object_Manager<IOP::Codec,IOP::Codec_var>;
  template class TAO::Any_Impl_T<IOP::Codec>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
# pragma instantiate TAO_Object_Manager<IOP::Codec, IOP::Codec_var>
# pragma instantiate TAO::Any_Impl_T<IOP::Codec>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

// TAO_IDL - Generated from 
// be/be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const IOP::Encoding &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::Encoding>::insert_copy (
      _tao_any,
      IOP::Encoding::_tao_any_destructor,
      IOP::_tc_Encoding,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    IOP::Encoding *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<IOP::Encoding>::insert (
      _tao_any,
      IOP::Encoding::_tao_any_destructor,
      IOP::_tc_Encoding,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    IOP::Encoding *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const IOP::Encoding *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const IOP::Encoding *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<IOP::Encoding>::extract (
        _tao_any,
        IOP::Encoding::_tao_any_destructor,
        IOP::_tc_Encoding,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
  template class TAO::Any_Dual_Impl_T<IOP::Encoding>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
# pragma instantiate TAO::Any_Dual_Impl_T<IOP::Encoding>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:52

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    IOP::CodecFactory_ptr _tao_elem
  )
{
  IOP::CodecFactory_ptr _tao_objptr =
    IOP::CodecFactory::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    IOP::CodecFactory_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<IOP::CodecFactory>::insert (
      _tao_any,
      IOP::CodecFactory::_tao_any_destructor,
      IOP::_tc_CodecFactory,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    IOP::CodecFactory_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<IOP::CodecFactory>::extract (
        _tao_any,
        IOP::CodecFactory::_tao_any_destructor,
        IOP::_tc_CodecFactory,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
  template class TAO_Object_Manager<IOP::CodecFactory,IOP::CodecFactory_var>;
  template class TAO::Any_Impl_T<IOP::CodecFactory>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
# pragma instantiate TAO_Object_Manager<IOP::CodecFactory, IOP::CodecFactory_var>
# pragma instantiate TAO::Any_Impl_T<IOP::CodecFactory>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

