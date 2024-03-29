// Copyright (c) 2023 Admenri. All rights reserved.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the ACF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=cc166c81668ef9361a40fa6ed06a643ed543b02a$
//

#include "libacf_dll/ctocpp/profile_handler_ctocpp.h"
#include "libacf_dll/cpptoc/profile_cpptoc.h"

// VIRTUAL METHODS - Body may be edited by hand.

void AcfProfileHandlerCToCpp::OnProfileCreated(AcfRefPtr<AcfProfile> profile) {
  acf_profile_handler_t* _struct = GetStruct();
  if (ACF_MEMBER_MISSING(_struct, on_profile_created))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: profile; type: refptr_diff
  if (!profile.get())
    return;

  // Execute
  _struct->on_profile_created(_struct, AcfProfileCppToC::Wrap(profile));
}

void AcfProfileHandlerCToCpp::OnProfileDestroyed(
    AcfRefPtr<AcfProfile> profile) {
  acf_profile_handler_t* _struct = GetStruct();
  if (ACF_MEMBER_MISSING(_struct, on_profile_destroyed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: profile; type: refptr_diff
  if (!profile.get())
    return;

  // Execute
  _struct->on_profile_destroyed(_struct, AcfProfileCppToC::Wrap(profile));
}

// CONSTRUCTOR - Do not edit by hand.

AcfProfileHandlerCToCpp::AcfProfileHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

AcfProfileHandlerCToCpp::~AcfProfileHandlerCToCpp() {}

template <>
acf_profile_handler_t* AcfCToCppRefCounted<
    AcfProfileHandlerCToCpp,
    AcfProfileHandler,
    acf_profile_handler_t>::UnwrapDerived(AcfWrapperType type,
                                          AcfProfileHandler* c) {
  return nullptr;
}

template <>
AcfWrapperType AcfCToCppRefCounted<AcfProfileHandlerCToCpp,
                                   AcfProfileHandler,
                                   acf_profile_handler_t>::kWrapperType =
    WT_PROFILE_HANDLER;
