// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/quota/quota_dispatcher_host.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT QuotaDispatcherHostInterceptorForTesting : public QuotaDispatcherHost {
  virtual QuotaDispatcherHost* GetForwardingInterface() = 0;
  void QueryStorageUsageAndQuota(const url::Origin& origin, ::blink::mojom::StorageType storage_type, QueryStorageUsageAndQuotaCallback callback) override;
  void RequestStorageQuota(const url::Origin& origin, ::blink::mojom::StorageType storage_type, uint64_t requested_size, RequestStorageQuotaCallback callback) override;
};
class BLINK_COMMON_EXPORT QuotaDispatcherHostAsyncWaiter {
 public:
  explicit QuotaDispatcherHostAsyncWaiter(QuotaDispatcherHost* proxy);
  ~QuotaDispatcherHostAsyncWaiter();
  void QueryStorageUsageAndQuota(
      const url::Origin& origin, ::blink::mojom::StorageType storage_type, ::blink::mojom::QuotaStatusCode* out_error, int64_t* out_current_usage, int64_t* out_current_quota, ::blink::mojom::UsageBreakdownPtr* out_usage_breakdown);
  void RequestStorageQuota(
      const url::Origin& origin, ::blink::mojom::StorageType storage_type, uint64_t requested_size, ::blink::mojom::QuotaStatusCode* out_error, int64_t* out_current_usage, int64_t* out_granted_quota);

 private:
  QuotaDispatcherHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(QuotaDispatcherHostAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_TEST_UTILS_H_