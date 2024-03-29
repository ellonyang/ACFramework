// Copyright (c) 2023 Admenri. All rights reserved.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the ACF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=a9d024dfb0046fa84906b1d03ee244648e6d35b9$
//

#ifndef ACF_CPPTOC_BROWSER_CPPTOC_H_
#define ACF_CPPTOC_BROWSER_CPPTOC_H_
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
class AcfBrowserCppToC
    : public AcfCppToCRefCounted<AcfBrowserCppToC, AcfBrowser, acf_browser_t> {
 public:
  AcfBrowserCppToC();
  virtual ~AcfBrowserCppToC();
};

#endif  // ACF_CPPTOC_BROWSER_CPPTOC_H_
