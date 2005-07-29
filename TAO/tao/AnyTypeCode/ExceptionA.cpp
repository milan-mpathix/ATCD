// $Id$

#include "ExceptionA.h"
#include "Any_Dual_Impl_T.h"
#include "tao/SystemException.h"
#include "tao/Environment.h"
#include "tao/ORB_Constants.h"
#include "tao/CORBA_String.h"
#include "tao/CDR.h"
#include "tao/debug.h"

#include "ace/Malloc.h"
#include "ace/SString.h"
#include "ace/OS_NS_string.h"

#include "ace/OS_NS_stdio.h"

ACE_RCSID (tao,
           Exception,
           "$Id$")


// Specializations for CORBA::Exception Any operators.
namespace TAO
{
  template<>
  void
  Any_Dual_Impl_T<CORBA::Exception>::value (
      const CORBA::Exception & val
    )
  {
    this->value_ = val._tao_duplicate ();
  }

  template<>
  CORBA::Boolean
  Any_Dual_Impl_T<CORBA::Exception>::marshal_value (TAO_OutputCDR &cdr)
  {
    ACE_TRY_NEW_ENV
      {
        this->value_->_tao_encode (cdr
                                   ACE_ENV_ARG_PARAMETER);
        ACE_TRY_CHECK;

        return 1;
      }
    ACE_CATCHANY
      {
      }
    ACE_ENDTRY;

    return 0;
  }

  template<>
  CORBA::Boolean
  Any_Dual_Impl_T<CORBA::Exception>::demarshal_value (TAO_InputCDR &cdr)
  {
    ACE_TRY_NEW_ENV
      {
        this->value_->_tao_decode (cdr
                                   ACE_ENV_ARG_PARAMETER);
        ACE_TRY_CHECK;

        return 1;
      }
    ACE_CATCHANY
      {
      }
    ACE_ENDTRY;

    return 0;
  }

  // This should never get called since we don't have extraction operators
  // for CORBA::Exception, but it is here to sidestep the constructor call
  // in the unspecialized version that causes a problem with compilers that
  // require explicit instantiation
  template<>
  CORBA::Boolean
  Any_Dual_Impl_T<CORBA::Exception>::extract (
      const CORBA::Any &,
      _tao_destructor,
      CORBA::TypeCode_ptr,
      const CORBA::Exception *&
    )
  {
    return 0;
  }
}

// =======================================================================


// Insertion of CORBA::Exception - copying.
void
operator<<= (CORBA::Any &any, const CORBA::Exception &exception)
{
// @todo, find solution for _tao_type
//  TAO::Any_Dual_Impl_T<CORBA::Exception>::insert_copy (
//      any,
//      CORBA::Exception::_tao_any_destructor,
//      exception._tao_type (),
//      exception
//    );
}

// Insertion of CORBA::Exception - non-copying.
void
operator<<= (CORBA::Any &any, CORBA::Exception *exception)
{
// @todo, find solution for _tao_type
//  TAO::Any_Dual_Impl_T<CORBA::Exception>::insert (
//      any,
//      CORBA::Exception::_tao_any_destructor,
//      exception->_tao_type (),
//      exception
//    );
}

