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


#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void CookieStoreInterceptorForTesting::AppendSubscriptions(int64_t service_worker_registration_id, WTF::Vector<CookieChangeSubscriptionPtr> subscriptions, AppendSubscriptionsCallback callback) {
  GetForwardingInterface()->AppendSubscriptions(std::move(service_worker_registration_id), std::move(subscriptions), std::move(callback));
}
void CookieStoreInterceptorForTesting::GetSubscriptions(int64_t service_worker_registration_id, GetSubscriptionsCallback callback) {
  GetForwardingInterface()->GetSubscriptions(std::move(service_worker_registration_id), std::move(callback));
}
CookieStoreAsyncWaiter::CookieStoreAsyncWaiter(
    CookieStore* proxy) : proxy_(proxy) {}

CookieStoreAsyncWaiter::~CookieStoreAsyncWaiter() = default;

void CookieStoreAsyncWaiter::AppendSubscriptions(
    int64_t service_worker_registration_id, WTF::Vector<CookieChangeSubscriptionPtr> subscriptions, bool* out_success) {
  base::RunLoop loop;
  proxy_->AppendSubscriptions(std::move(service_worker_registration_id),std::move(subscriptions),
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
void CookieStoreAsyncWaiter::GetSubscriptions(
    int64_t service_worker_registration_id, WTF::Vector<CookieChangeSubscriptionPtr>* out_subscriptions, bool* out_success) {
  base::RunLoop loop;
  proxy_->GetSubscriptions(std::move(service_worker_registration_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<CookieChangeSubscriptionPtr>* out_subscriptions
,
             bool* out_success
,
             WTF::Vector<CookieChangeSubscriptionPtr> subscriptions,
             bool success) {*out_subscriptions = std::move(subscriptions);*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_subscriptions,
          out_success));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif