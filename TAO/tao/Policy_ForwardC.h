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
// be\be_codegen.cpp:154

#ifndef _TAO_IDL_POLICY_FORWARDC_H_
#define _TAO_IDL_POLICY_FORWARDC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/TAO_Export.h"
#include "tao/ORB.h"
#include "tao/Environment.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{

  // TAO_IDL - Generated from
  // be\be_visitor_typedef/typedef_ch.cpp:379

  typedef CORBA::ULong PolicyType;
  typedef CORBA::ULong_out PolicyType_out;

  // TAO_IDL - Generated from
  // be\be_interface.cpp:598

#if !defined (_CORBA_POLICY__VAR_OUT_CH_)
#define _CORBA_POLICY__VAR_OUT_CH_

  class Policy;
  typedef Policy *Policy_ptr;

  typedef
    TAO_Objref_Var_T<
        Policy
      >
    Policy_var;

  typedef
    TAO_Objref_Out_T<
        Policy
      >
    Policy_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_sequence/sequence_ch.cpp:101

#if !defined (_CORBA_POLICYLIST_CH_)
#define _CORBA_POLICYLIST_CH_

  class PolicyList;

  typedef
    TAO_VarSeq_Var_T<
        PolicyList
      >
    PolicyList_var;

  typedef
    TAO_Seq_Out_T<
        PolicyList,
        PolicyList_var
      >
    PolicyList_out;

  class TAO_Export PolicyList
    : public
        TAO::unbounded_object_reference_sequence<
            Policy,
            Policy_var
          >
  {
  public:
    PolicyList (void);
    PolicyList (CORBA::ULong max);
    PolicyList (
        CORBA::ULong max,
        CORBA::ULong length,
        Policy_ptr* buffer,
        CORBA::Boolean release = 0
      );
    PolicyList (const PolicyList &);
    ~PolicyList (void);

    static void _tao_any_destructor (void *);

    typedef PolicyList_var _var_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_sequence/sequence_ch.cpp:101

#if !defined (_CORBA_POLICYTYPESEQ_CH_)
#define _CORBA_POLICYTYPESEQ_CH_

  class PolicyTypeSeq;

  typedef
    TAO_FixedSeq_Var_T<
        PolicyTypeSeq
      >
    PolicyTypeSeq_var;

  typedef
    TAO_Seq_Out_T<
        PolicyTypeSeq,
        PolicyTypeSeq_var
      >
    PolicyTypeSeq_out;

  class TAO_Export PolicyTypeSeq
    : public
        TAO::unbounded_value_sequence<
            PolicyType
          >
  {
  public:
    PolicyTypeSeq (void);
    PolicyTypeSeq (CORBA::ULong max);
    PolicyTypeSeq (
        CORBA::ULong max,
        CORBA::ULong length,
        CORBA::ULong* buffer,
        CORBA::Boolean release = 0
      );
    PolicyTypeSeq (const PolicyTypeSeq &);
    ~PolicyTypeSeq (void);

    static void _tao_any_destructor (void *);

    typedef PolicyTypeSeq_var _var_type;
    typedef PolicyTypeSeq_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_interface.cpp:598

#if !defined (_CORBA_POLICYCURRENT__VAR_OUT_CH_)
#define _CORBA_POLICYCURRENT__VAR_OUT_CH_

  class PolicyCurrent;
  typedef PolicyCurrent *PolicyCurrent_ptr;

  typedef
    TAO_Objref_Var_T<
        PolicyCurrent
      >
    PolicyCurrent_var;

  typedef
    TAO_Objref_Out_T<
        PolicyCurrent
      >
    PolicyCurrent_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_enum/enum_ch.cpp:57

  enum SetOverrideType
  {
    SET_OVERRIDE,
    ADD_OVERRIDE
  };

  typedef SetOverrideType &SetOverrideType_out;

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:78

} // module CORBA

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:61

// Traits specializations.
namespace TAO
{

#if !defined (_CORBA_POLICY__TRAITS_)
#define _CORBA_POLICY__TRAITS_

  template<>
  struct TAO_Export Objref_Traits< ::CORBA::Policy>
  {
    static ::CORBA::Policy_ptr duplicate (
        ::CORBA::Policy_ptr
      );
    static void release (
        ::CORBA::Policy_ptr
      );
    static ::CORBA::Policy_ptr nil (void);
    static CORBA::Boolean marshal (
        const ::CORBA::Policy_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */

#if !defined (_CORBA_POLICYCURRENT__TRAITS_)
#define _CORBA_POLICYCURRENT__TRAITS_

  template<>
  struct TAO_Export Objref_Traits< ::CORBA::PolicyCurrent>
  {
    static ::CORBA::PolicyCurrent_ptr duplicate (
        ::CORBA::PolicyCurrent_ptr
      );
    static void release (
        ::CORBA::PolicyCurrent_ptr
      );
    static ::CORBA::PolicyCurrent_ptr nil (void);
    static CORBA::Boolean marshal (
        const ::CORBA::PolicyCurrent_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}

// TAO_IDL - Generated from
// be\be_visitor_interface_fwd/cdr_op_ch.cpp:66

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::Policy_ptr );
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::Policy_ptr &);


// TAO_IDL - Generated from
// be\be_visitor_sequence/cdr_op_ch.cpp:71

#if !defined _TAO_CDR_OP_CORBA_PolicyList_H_
#define _TAO_CDR_OP_CORBA_PolicyList_H_

TAO_Export CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const CORBA::PolicyList &
  );
TAO_Export CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CORBA::PolicyList &
  );

#endif /* _TAO_CDR_OP_CORBA_PolicyList_H_ */

// TAO_IDL - Generated from
// be\be_visitor_sequence/cdr_op_ch.cpp:71

#if !defined _TAO_CDR_OP_CORBA_PolicyTypeSeq_H_
#define _TAO_CDR_OP_CORBA_PolicyTypeSeq_H_

TAO_Export CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const CORBA::PolicyTypeSeq &
  );
TAO_Export CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CORBA::PolicyTypeSeq &
  );

#endif /* _TAO_CDR_OP_CORBA_PolicyTypeSeq_H_ */

// TAO_IDL - Generated from
// be\be_visitor_enum/cdr_op_ch.cpp:50

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, CORBA::SetOverrideType);
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::SetOverrideType &);

// TAO_IDL - Generated from
// be\be_codegen.cpp:1028

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */


