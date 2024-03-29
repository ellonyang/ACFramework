// Copyright (c) 2023 Admenri. All rights reserved.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the ACF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=56e3c10d0f78c3928add01f92975217624c0fe0a$
//

#ifndef ACF_CPPTOC_LOGIN_DELEGATE_CPPTOC_H_
#define ACF_CPPTOC_LOGIN_DELEGATE_CPPTOC_H_
#pragma once

#include "include/acf_browser.h"
#include "include/acf_environment.h"
#include "include/acf_frame.h"
#include "include/acf_profile.h"
#include "include/capi/acf_browser_capi.h"
#include "include/capi/acf_environment_capi.h"
#include "include/capi/acf_frame_capi.h"
#include "include/capi/acf_profile_capi.h"
#include "libacf_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class AcfLoginDelegateCppToC
    : public AcfCppToCRefCounted<AcfLoginDelegateCppToC,
                                 AcfLoginDelegate,
                                 acf_login_delegate_t> {
 public:
  AcfLoginDelegateCppToC();
  virtual ~AcfLoginDelegateCppToC();
};

#endif  // ACF_CPPTOC_LOGIN_DELEGATE_CPPTOC_H_
