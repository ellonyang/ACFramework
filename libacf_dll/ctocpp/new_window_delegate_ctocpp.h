// Copyright (c) 2023 Admenri. All rights reserved.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the ACF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=f0e4499f21c6c2ab79350d95d40513ffe1ea55ed$
//

#ifndef ACF_CTOCPP_NEW_WINDOW_DELEGATE_CTOCPP_H_
#define ACF_CTOCPP_NEW_WINDOW_DELEGATE_CTOCPP_H_
#pragma once

#include "include/acf_browser.h"
#include "include/acf_environment.h"
#include "include/acf_frame.h"
#include "include/acf_profile.h"
#include "include/capi/acf_browser_capi.h"
#include "include/capi/acf_environment_capi.h"
#include "include/capi/acf_frame_capi.h"
#include "include/capi/acf_profile_capi.h"
#include "libacf_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class AcfNewWindowDelegateCToCpp
    : public AcfCToCppRefCounted<AcfNewWindowDelegateCToCpp,
                                 AcfNewWindowDelegate,
                                 acf_new_window_delegate_t> {
 public:
  AcfNewWindowDelegateCToCpp();
  virtual ~AcfNewWindowDelegateCToCpp();

  // AcfNewWindowDelegate methods.
  bool SetNewBrowser(AcfRefPtr<AcfBrowser> browser) override;
  AcfString GetTargetURL() override;
  void HandleRequest(bool handled) override;
};

#endif  // ACF_CTOCPP_NEW_WINDOW_DELEGATE_CTOCPP_H_
