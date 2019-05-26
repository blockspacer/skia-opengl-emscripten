// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "services/network/public/mojom/cookie_manager.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "components/content_settings/core/common/content_settings.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_JUMBO_H_
#include "components/content_settings/core/common/content_settings_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "services/network/public/cpp/cookie_manager_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void CookieChangeListenerInterceptorForTesting::OnCookieChange(const net::CanonicalCookie& cookie, CookieChangeCause cause) {
  GetForwardingInterface()->OnCookieChange(std::move(cookie), std::move(cause));
}
CookieChangeListenerAsyncWaiter::CookieChangeListenerAsyncWaiter(
    CookieChangeListener* proxy) : proxy_(proxy) {}

CookieChangeListenerAsyncWaiter::~CookieChangeListenerAsyncWaiter() = default;




void CookieManagerInterceptorForTesting::GetAllCookies(GetAllCookiesCallback callback) {
  GetForwardingInterface()->GetAllCookies(std::move(callback));
}
void CookieManagerInterceptorForTesting::GetCookieList(const GURL& url, const net::CookieOptions& cookie_options, GetCookieListCallback callback) {
  GetForwardingInterface()->GetCookieList(std::move(url), std::move(cookie_options), std::move(callback));
}
void CookieManagerInterceptorForTesting::SetCanonicalCookie(const net::CanonicalCookie& cookie, const std::string& source_scheme, const net::CookieOptions& cookie_options, SetCanonicalCookieCallback callback) {
  GetForwardingInterface()->SetCanonicalCookie(std::move(cookie), std::move(source_scheme), std::move(cookie_options), std::move(callback));
}
void CookieManagerInterceptorForTesting::DeleteCanonicalCookie(const net::CanonicalCookie& cookie, DeleteCanonicalCookieCallback callback) {
  GetForwardingInterface()->DeleteCanonicalCookie(std::move(cookie), std::move(callback));
}
void CookieManagerInterceptorForTesting::DeleteCookies(CookieDeletionFilterPtr filter, DeleteCookiesCallback callback) {
  GetForwardingInterface()->DeleteCookies(std::move(filter), std::move(callback));
}
void CookieManagerInterceptorForTesting::AddCookieChangeListener(const GURL& url, const std::string& name, CookieChangeListenerPtr listener) {
  GetForwardingInterface()->AddCookieChangeListener(std::move(url), std::move(name), std::move(listener));
}
void CookieManagerInterceptorForTesting::AddGlobalChangeListener(CookieChangeListenerPtr notification_pointer) {
  GetForwardingInterface()->AddGlobalChangeListener(std::move(notification_pointer));
}
void CookieManagerInterceptorForTesting::CloneInterface(CookieManagerRequest new_interface) {
  GetForwardingInterface()->CloneInterface(std::move(new_interface));
}
void CookieManagerInterceptorForTesting::FlushCookieStore(FlushCookieStoreCallback callback) {
  GetForwardingInterface()->FlushCookieStore(std::move(callback));
}
void CookieManagerInterceptorForTesting::AllowFileSchemeCookies(bool allow, AllowFileSchemeCookiesCallback callback) {
  GetForwardingInterface()->AllowFileSchemeCookies(std::move(allow), std::move(callback));
}
void CookieManagerInterceptorForTesting::SetContentSettings(const std::vector<::ContentSettingPatternSource>& settings) {
  GetForwardingInterface()->SetContentSettings(std::move(settings));
}
void CookieManagerInterceptorForTesting::SetForceKeepSessionState() {
  GetForwardingInterface()->SetForceKeepSessionState();
}
void CookieManagerInterceptorForTesting::BlockThirdPartyCookies(bool block) {
  GetForwardingInterface()->BlockThirdPartyCookies(std::move(block));
}
CookieManagerAsyncWaiter::CookieManagerAsyncWaiter(
    CookieManager* proxy) : proxy_(proxy) {}

CookieManagerAsyncWaiter::~CookieManagerAsyncWaiter() = default;

void CookieManagerAsyncWaiter::GetAllCookies(
    std::vector<net::CanonicalCookie>* out_cookies) {
  base::RunLoop loop;
  proxy_->GetAllCookies(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<net::CanonicalCookie>* out_cookies
,
             const std::vector<net::CanonicalCookie>& cookies) {*out_cookies = std::move(cookies);
            loop->Quit();
          },
          &loop,
          out_cookies));
  loop.Run();
}
void CookieManagerAsyncWaiter::GetCookieList(
    const GURL& url, const net::CookieOptions& cookie_options, std::vector<net::CanonicalCookie>* out_cookies, std::vector<net::CookieWithStatus>* out_excluded_cookies) {
  base::RunLoop loop;
  proxy_->GetCookieList(std::move(url),std::move(cookie_options),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<net::CanonicalCookie>* out_cookies
,
             std::vector<net::CookieWithStatus>* out_excluded_cookies
,
             const std::vector<net::CanonicalCookie>& cookies,
             const std::vector<net::CookieWithStatus>& excluded_cookies) {*out_cookies = std::move(cookies);*out_excluded_cookies = std::move(excluded_cookies);
            loop->Quit();
          },
          &loop,
          out_cookies,
          out_excluded_cookies));
  loop.Run();
}
void CookieManagerAsyncWaiter::SetCanonicalCookie(
    const net::CanonicalCookie& cookie, const std::string& source_scheme, const net::CookieOptions& cookie_options, net::CanonicalCookie::CookieInclusionStatus* out_status) {
  base::RunLoop loop;
  proxy_->SetCanonicalCookie(std::move(cookie),std::move(source_scheme),std::move(cookie_options),
      base::BindOnce(
          [](base::RunLoop* loop,
             net::CanonicalCookie::CookieInclusionStatus* out_status
,
             net::CanonicalCookie::CookieInclusionStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void CookieManagerAsyncWaiter::DeleteCanonicalCookie(
    const net::CanonicalCookie& cookie, bool* out_success) {
  base::RunLoop loop;
  proxy_->DeleteCanonicalCookie(std::move(cookie),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void CookieManagerAsyncWaiter::DeleteCookies(
    CookieDeletionFilterPtr filter, uint32_t* out_num_deleted) {
  base::RunLoop loop;
  proxy_->DeleteCookies(std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_num_deleted
,
             uint32_t num_deleted) {*out_num_deleted = std::move(num_deleted);
            loop->Quit();
          },
          &loop,
          out_num_deleted));
  loop.Run();
}
void CookieManagerAsyncWaiter::FlushCookieStore(
    ) {
  base::RunLoop loop;
  proxy_->FlushCookieStore(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void CookieManagerAsyncWaiter::AllowFileSchemeCookies(
    bool allow, bool* out_success) {
  base::RunLoop loop;
  proxy_->AllowFileSchemeCookies(std::move(allow),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}





}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif