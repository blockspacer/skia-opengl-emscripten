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


#include "services/network/public/mojom/restricted_cookie_manager.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/network/public/mojom/cookie_manager.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/canonical_cookie_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace network {
namespace mojom {
namespace blink {


void RestrictedCookieManagerInterceptorForTesting::GetAllForUrl(const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, CookieManagerGetOptionsPtr options, GetAllForUrlCallback callback) {
  GetForwardingInterface()->GetAllForUrl(std::move(url), std::move(site_for_cookies), std::move(options), std::move(callback));
}
void RestrictedCookieManagerInterceptorForTesting::SetCanonicalCookie(const ::blink::WebCanonicalCookie& cookie, const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, SetCanonicalCookieCallback callback) {
  GetForwardingInterface()->SetCanonicalCookie(std::move(cookie), std::move(url), std::move(site_for_cookies), std::move(callback));
}
void RestrictedCookieManagerInterceptorForTesting::AddChangeListener(const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, ::network::mojom::blink::CookieChangeListenerPtr listener, AddChangeListenerCallback callback) {
  GetForwardingInterface()->AddChangeListener(std::move(url), std::move(site_for_cookies), std::move(listener), std::move(callback));
}
RestrictedCookieManagerAsyncWaiter::RestrictedCookieManagerAsyncWaiter(
    RestrictedCookieManager* proxy) : proxy_(proxy) {}

RestrictedCookieManagerAsyncWaiter::~RestrictedCookieManagerAsyncWaiter() = default;

void RestrictedCookieManagerAsyncWaiter::GetAllForUrl(
    const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, CookieManagerGetOptionsPtr options, WTF::Vector<::blink::WebCanonicalCookie>* out_cookies) {
  base::RunLoop loop;
  proxy_->GetAllForUrl(std::move(url),std::move(site_for_cookies),std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<::blink::WebCanonicalCookie>* out_cookies
,
             const WTF::Vector<::blink::WebCanonicalCookie>& cookies) {*out_cookies = std::move(cookies);
            loop->Quit();
          },
          &loop,
          out_cookies));
  loop.Run();
}
void RestrictedCookieManagerAsyncWaiter::SetCanonicalCookie(
    const ::blink::WebCanonicalCookie& cookie, const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetCanonicalCookie(std::move(cookie),std::move(url),std::move(site_for_cookies),
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
void RestrictedCookieManagerAsyncWaiter::AddChangeListener(
    const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, ::network::mojom::blink::CookieChangeListenerPtr listener) {
  base::RunLoop loop;
  proxy_->AddChangeListener(std::move(url),std::move(site_for_cookies),std::move(listener),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif