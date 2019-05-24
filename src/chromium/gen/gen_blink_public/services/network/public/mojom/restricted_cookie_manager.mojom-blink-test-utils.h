// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/restricted_cookie_manager.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT RestrictedCookieManagerInterceptorForTesting : public RestrictedCookieManager {
  virtual RestrictedCookieManager* GetForwardingInterface() = 0;
  void GetAllForUrl(const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, CookieManagerGetOptionsPtr options, GetAllForUrlCallback callback) override;
  void SetCanonicalCookie(const ::blink::WebCanonicalCookie& cookie, const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, SetCanonicalCookieCallback callback) override;
  void AddChangeListener(const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, ::network::mojom::blink::CookieChangeListenerPtr listener, AddChangeListenerCallback callback) override;
};
class BLINK_PLATFORM_EXPORT RestrictedCookieManagerAsyncWaiter {
 public:
  explicit RestrictedCookieManagerAsyncWaiter(RestrictedCookieManager* proxy);
  ~RestrictedCookieManagerAsyncWaiter();
  void GetAllForUrl(
      const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, CookieManagerGetOptionsPtr options, WTF::Vector<::blink::WebCanonicalCookie>* out_cookies);
  void SetCanonicalCookie(
      const ::blink::WebCanonicalCookie& cookie, const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, bool* out_success);
  void AddChangeListener(
      const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, ::network::mojom::blink::CookieChangeListenerPtr listener);

 private:
  RestrictedCookieManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_