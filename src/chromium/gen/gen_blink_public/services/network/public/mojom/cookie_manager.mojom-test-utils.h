// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/cookie_manager.mojom.h"


namespace network {
namespace mojom {


class  CookieChangeListenerInterceptorForTesting : public CookieChangeListener {
  virtual CookieChangeListener* GetForwardingInterface() = 0;
  void OnCookieChange(const net::CanonicalCookie& cookie, CookieChangeCause cause) override;
};
class  CookieChangeListenerAsyncWaiter {
 public:
  explicit CookieChangeListenerAsyncWaiter(CookieChangeListener* proxy);
  ~CookieChangeListenerAsyncWaiter();

 private:
  CookieChangeListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CookieChangeListenerAsyncWaiter);
};


class  CookieManagerInterceptorForTesting : public CookieManager {
  virtual CookieManager* GetForwardingInterface() = 0;
  void GetAllCookies(GetAllCookiesCallback callback) override;
  void GetCookieList(const GURL& url, const net::CookieOptions& cookie_options, GetCookieListCallback callback) override;
  void SetCanonicalCookie(const net::CanonicalCookie& cookie, const std::string& source_scheme, const net::CookieOptions& cookie_options, SetCanonicalCookieCallback callback) override;
  void DeleteCanonicalCookie(const net::CanonicalCookie& cookie, DeleteCanonicalCookieCallback callback) override;
  void DeleteCookies(CookieDeletionFilterPtr filter, DeleteCookiesCallback callback) override;
  void AddCookieChangeListener(const GURL& url, const std::string& name, CookieChangeListenerPtr listener) override;
  void AddGlobalChangeListener(CookieChangeListenerPtr notification_pointer) override;
  void CloneInterface(CookieManagerRequest new_interface) override;
  void FlushCookieStore(FlushCookieStoreCallback callback) override;
  void AllowFileSchemeCookies(bool allow, AllowFileSchemeCookiesCallback callback) override;
  void SetContentSettings(const std::vector<::ContentSettingPatternSource>& settings) override;
  void SetForceKeepSessionState() override;
  void BlockThirdPartyCookies(bool block) override;
};
class  CookieManagerAsyncWaiter {
 public:
  explicit CookieManagerAsyncWaiter(CookieManager* proxy);
  ~CookieManagerAsyncWaiter();
  void GetAllCookies(
      std::vector<net::CanonicalCookie>* out_cookies);
  void GetCookieList(
      const GURL& url, const net::CookieOptions& cookie_options, std::vector<net::CanonicalCookie>* out_cookies, std::vector<net::CookieWithStatus>* out_excluded_cookies);
  void SetCanonicalCookie(
      const net::CanonicalCookie& cookie, const std::string& source_scheme, const net::CookieOptions& cookie_options, net::CanonicalCookie::CookieInclusionStatus* out_status);
  void DeleteCanonicalCookie(
      const net::CanonicalCookie& cookie, bool* out_success);
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




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_TEST_UTILS_H_