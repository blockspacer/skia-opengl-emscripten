// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT CookieStoreInterceptorForTesting : public CookieStore {
  virtual CookieStore* GetForwardingInterface() = 0;
  void AppendSubscriptions(int64_t service_worker_registration_id, std::vector<CookieChangeSubscriptionPtr> subscriptions, AppendSubscriptionsCallback callback) override;
  void GetSubscriptions(int64_t service_worker_registration_id, GetSubscriptionsCallback callback) override;
};
class BLINK_COMMON_EXPORT CookieStoreAsyncWaiter {
 public:
  explicit CookieStoreAsyncWaiter(CookieStore* proxy);
  ~CookieStoreAsyncWaiter();
  void AppendSubscriptions(
      int64_t service_worker_registration_id, std::vector<CookieChangeSubscriptionPtr> subscriptions, bool* out_success);
  void GetSubscriptions(
      int64_t service_worker_registration_id, std::vector<CookieChangeSubscriptionPtr>* out_subscriptions, bool* out_success);

 private:
  CookieStore* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CookieStoreAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_TEST_UTILS_H_