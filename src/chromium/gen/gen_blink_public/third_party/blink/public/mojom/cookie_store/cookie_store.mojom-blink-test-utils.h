// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT CookieStoreInterceptorForTesting : public CookieStore {
  virtual CookieStore* GetForwardingInterface() = 0;
  void AppendSubscriptions(int64_t service_worker_registration_id, WTF::Vector<CookieChangeSubscriptionPtr> subscriptions, AppendSubscriptionsCallback callback) override;
  void GetSubscriptions(int64_t service_worker_registration_id, GetSubscriptionsCallback callback) override;
};
class PLATFORM_EXPORT CookieStoreAsyncWaiter {
 public:
  explicit CookieStoreAsyncWaiter(CookieStore* proxy);
  ~CookieStoreAsyncWaiter();
  void AppendSubscriptions(
      int64_t service_worker_registration_id, WTF::Vector<CookieChangeSubscriptionPtr> subscriptions, bool* out_success);
  void GetSubscriptions(
      int64_t service_worker_registration_id, WTF::Vector<CookieChangeSubscriptionPtr>* out_subscriptions, bool* out_success);

 private:
  CookieStore* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CookieStoreAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_BLINK_TEST_UTILS_H_