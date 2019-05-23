// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/restricted_cookie_manager.mojom.h"


namespace network {
namespace mojom {


class  RestrictedCookieManagerInterceptorForTesting : public RestrictedCookieManager {
  virtual RestrictedCookieManager* GetForwardingInterface() = 0;
  void GetAllForUrl(const GURL& url, const GURL& site_for_cookies, CookieManagerGetOptionsPtr options, GetAllForUrlCallback callback) override;
  void SetCanonicalCookie(const net::CanonicalCookie& cookie, const GURL& url, const GURL& site_for_cookies, SetCanonicalCookieCallback callback) override;
  void AddChangeListener(const GURL& url, const GURL& site_for_cookies, ::network::mojom::CookieChangeListenerPtr listener, AddChangeListenerCallback callback) override;
};
class  RestrictedCookieManagerAsyncWaiter {
 public:
  explicit RestrictedCookieManagerAsyncWaiter(RestrictedCookieManager* proxy);
  ~RestrictedCookieManagerAsyncWaiter();
  void GetAllForUrl(
      const GURL& url, const GURL& site_for_cookies, CookieManagerGetOptionsPtr options, std::vector<net::CanonicalCookie>* out_cookies);
  void SetCanonicalCookie(
      const net::CanonicalCookie& cookie, const GURL& url, const GURL& site_for_cookies, bool* out_success);
  void AddChangeListener(
      const GURL& url, const GURL& site_for_cookies, ::network::mojom::CookieChangeListenerPtr listener);

 private:
  RestrictedCookieManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_TEST_UTILS_H_