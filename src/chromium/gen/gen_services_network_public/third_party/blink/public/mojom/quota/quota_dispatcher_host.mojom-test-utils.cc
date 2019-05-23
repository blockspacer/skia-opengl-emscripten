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


#include "third_party/blink/public/mojom/quota/quota_dispatcher_host.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/quota/quota_types.mojom.h"
#include "url/mojom/origin.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void QuotaDispatcherHostInterceptorForTesting::QueryStorageUsageAndQuota(const url::Origin& origin, ::blink::mojom::StorageType storage_type, QueryStorageUsageAndQuotaCallback callback) {
  GetForwardingInterface()->QueryStorageUsageAndQuota(std::move(origin), std::move(storage_type), std::move(callback));
}
void QuotaDispatcherHostInterceptorForTesting::RequestStorageQuota(const url::Origin& origin, ::blink::mojom::StorageType storage_type, uint64_t requested_size, RequestStorageQuotaCallback callback) {
  GetForwardingInterface()->RequestStorageQuota(std::move(origin), std::move(storage_type), std::move(requested_size), std::move(callback));
}
QuotaDispatcherHostAsyncWaiter::QuotaDispatcherHostAsyncWaiter(
    QuotaDispatcherHost* proxy) : proxy_(proxy) {}

QuotaDispatcherHostAsyncWaiter::~QuotaDispatcherHostAsyncWaiter() = default;

void QuotaDispatcherHostAsyncWaiter::QueryStorageUsageAndQuota(
    const url::Origin& origin, ::blink::mojom::StorageType storage_type, ::blink::mojom::QuotaStatusCode* out_error, int64_t* out_current_usage, int64_t* out_current_quota, ::blink::mojom::UsageBreakdownPtr* out_usage_breakdown) {
  base::RunLoop loop;
  proxy_->QueryStorageUsageAndQuota(std::move(origin),std::move(storage_type),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::QuotaStatusCode* out_error
,
             int64_t* out_current_usage
,
             int64_t* out_current_quota
,
             ::blink::mojom::UsageBreakdownPtr* out_usage_breakdown
,
             ::blink::mojom::QuotaStatusCode error,
             int64_t current_usage,
             int64_t current_quota,
             ::blink::mojom::UsageBreakdownPtr usage_breakdown) {*out_error = std::move(error);*out_current_usage = std::move(current_usage);*out_current_quota = std::move(current_quota);*out_usage_breakdown = std::move(usage_breakdown);
            loop->Quit();
          },
          &loop,
          out_error,
          out_current_usage,
          out_current_quota,
          out_usage_breakdown));
  loop.Run();
}
void QuotaDispatcherHostAsyncWaiter::RequestStorageQuota(
    const url::Origin& origin, ::blink::mojom::StorageType storage_type, uint64_t requested_size, ::blink::mojom::QuotaStatusCode* out_error, int64_t* out_current_usage, int64_t* out_granted_quota) {
  base::RunLoop loop;
  proxy_->RequestStorageQuota(std::move(origin),std::move(storage_type),std::move(requested_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::QuotaStatusCode* out_error
,
             int64_t* out_current_usage
,
             int64_t* out_granted_quota
,
             ::blink::mojom::QuotaStatusCode error,
             int64_t current_usage,
             int64_t granted_quota) {*out_error = std::move(error);*out_current_usage = std::move(current_usage);*out_granted_quota = std::move(granted_quota);
            loop->Quit();
          },
          &loop,
          out_error,
          out_current_usage,
          out_granted_quota));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif