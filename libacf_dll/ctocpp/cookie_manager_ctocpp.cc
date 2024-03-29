// Copyright (c) 2023 Admenri. All rights reserved.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the ACF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=2e06fdbce8f2eed2e638d7fcab79cb89aa3f2fd3$
//

#include "libacf_dll/ctocpp/cookie_manager_ctocpp.h"
#include "libacf_dll/cpptoc/complete_handler_cpptoc.h"
#include "libacf_dll/cpptoc/cookie_visitor_cpptoc.h"
#include "libacf_dll/cpptoc/number_complete_handler_cpptoc.h"
#include "libacf_dll/ctocpp/cookie_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

void AcfCookieManagerCToCpp::GetCookies(const AcfString& url,
                                        bool includeHttpOnly,
                                        AcfRefPtr<AcfCookieVisitor> visitor) {
  acf_cookie_manager_t* _struct = GetStruct();
  if (ACF_MEMBER_MISSING(_struct, get_cookies))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: visitor; type: refptr_diff
  if (!visitor.get())
    return;
  // Unverified params: url

  // Execute
  _struct->get_cookies(_struct, url.GetStruct(), includeHttpOnly,
                       AcfCookieVisitorCppToC::Wrap(visitor));
}

void AcfCookieManagerCToCpp::SetCookie(const AcfString& url,
                                       AcfRefPtr<AcfCookie> cookie,
                                       AcfRefPtr<AcfCompleteHandler> callback) {
  acf_cookie_manager_t* _struct = GetStruct();
  if (ACF_MEMBER_MISSING(_struct, set_cookie))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  if (url.empty())
    return;
  // Verify param: cookie; type: refptr_same
  if (!cookie.get())
    return;
  // Unverified params: callback

  // Execute
  _struct->set_cookie(_struct, url.GetStruct(), AcfCookieCToCpp::Unwrap(cookie),
                      AcfCompleteHandlerCppToC::Wrap(callback));
}

void AcfCookieManagerCToCpp::DeleteCookies(
    const AcfString& url,
    const AcfString& cookie_name,
    AcfRefPtr<AcfNumberCompleteHandler> callback) {
  acf_cookie_manager_t* _struct = GetStruct();
  if (ACF_MEMBER_MISSING(_struct, delete_cookies))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: url, cookie_name, callback

  // Execute
  _struct->delete_cookies(_struct, url.GetStruct(), cookie_name.GetStruct(),
                          AcfNumberCompleteHandlerCppToC::Wrap(callback));
}

void AcfCookieManagerCToCpp::FlushStore(
    AcfRefPtr<AcfCompleteHandler> callback) {
  acf_cookie_manager_t* _struct = GetStruct();
  if (ACF_MEMBER_MISSING(_struct, flush_store))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: callback

  // Execute
  _struct->flush_store(_struct, AcfCompleteHandlerCppToC::Wrap(callback));
}

// CONSTRUCTOR - Do not edit by hand.

AcfCookieManagerCToCpp::AcfCookieManagerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

AcfCookieManagerCToCpp::~AcfCookieManagerCToCpp() {}

template <>
acf_cookie_manager_t*
AcfCToCppRefCounted<AcfCookieManagerCToCpp,
                    AcfCookieManager,
                    acf_cookie_manager_t>::UnwrapDerived(AcfWrapperType type,
                                                         AcfCookieManager* c) {
  return nullptr;
}

template <>
AcfWrapperType AcfCToCppRefCounted<AcfCookieManagerCToCpp,
                                   AcfCookieManager,
                                   acf_cookie_manager_t>::kWrapperType =
    WT_COOKIE_MANAGER;
