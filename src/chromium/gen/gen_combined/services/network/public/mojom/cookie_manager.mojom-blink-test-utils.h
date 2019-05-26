// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/cookie_manager.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT CookieChangeListenerInterceptorForTesting : public CookieChangeListener {
  virtual CookieChangeListener* GetForwardingInterface() = 0;
  void OnCookieChange(const ::blink::WebCanonicalCookie& cookie, CookieChangeCause cause) override;
};
class BLINK_PLATFORM_EXPORT CookieChangeListenerAsyncWaiter {
 public:
  explicit CookieChangeListenerAsyncWaiter(CookieChangeListener* proxy);
  ~CookieChangeListenerAsyncWaiter();

 private:
  CookieChangeListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CookieChangeListenerAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT CookieManagerInterceptorForTesting : public CookieManager {
  virtual CookieManager* GetForwardingInterface() = 0;
  void GetAllCookies(GetAllCookiesCallback callback) override;
  void GetCookieList(const ::blink::KURL& url, CookieOptionsPtr cookie_options, GetCookieListCallback callback) override;
  void SetCanonicalCookie(const ::blink::WebCanonicalCookie& cookie, const WTF::String& source_scheme, CookieOptionsPtr cookie_options, SetCanonicalCookieCallback callback) override;
  void DeleteCanonicalCookie(const ::blink::WebCanonicalCookie& cookie, DeleteCanonicalCookieCallback callback) override;
  void DeleteCookies(CookieDeletionFilterPtr filter, DeleteCookiesCallback callback) override;
  void AddCookieChangeListener(const ::blink::KURL& url, const WTF::String& name, CookieChangeListenerPtr listener) override;
  void AddGlobalChangeListener(CookieChangeListenerPtr notification_pointer) override;
  void CloneInterface(CookieManagerRequest new_interface) override;
  void FlushCookieStore(FlushCookieStoreCallback callback) override;
  void AllowFileSchemeCookies(bool allow, AllowFileSchemeCookiesCallback callback) override;
  void SetContentSettings(WTF::Vector<::content_settings::mojom::blink::ContentSettingPatternSourcePtr> settings) override;
  void SetForceKeepSessionState() override;
  void BlockThirdPartyCookies(bool block) override;
};
class BLINK_PLATFORM_EXPORT CookieManagerAsyncWaiter {
 public:
  explicit CookieManagerAsyncWaiter(CookieManager* proxy);
  ~CookieManagerAsyncWaiter();
  void GetAllCookies(
      WTF::Vector<::blink::WebCanonicalCookie>* out_cookies);
  void GetCookieList(
      const ::blink::KURL& url, CookieOptionsPtr cookie_options, WTF::Vector<::blink::WebCanonicalCookie>* out_cookies, WTF::Vector<CookieWithStatusPtr>* out_excluded_cookies);
  void SetCanonicalCookie(
      const ::blink::WebCanonicalCookie& cookie, const WTF::String& source_scheme, CookieOptionsPtr cookie_options, CookieInclusionStatus* out_status);
  void DeleteCanonicalCookie(
      const ::blink::WebCanonicalCookie& cookie, bool* out_success);
  void DeleteCookies(
      CookieDeletionFilterPtr filter, uint32_t* out_num_deleted);
  void FlushCookieStore(
      );
  void AllowFileSchemeCookies(
      bool allow, bool* out_success);

 private:
  CookieManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CookieManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_