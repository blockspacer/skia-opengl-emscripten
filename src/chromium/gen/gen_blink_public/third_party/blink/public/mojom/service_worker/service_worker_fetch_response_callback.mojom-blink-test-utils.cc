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


#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-blink.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void ServiceWorkerFetchResponseCallbackInterceptorForTesting::OnResponse(::blink::mojom::blink::FetchAPIResponsePtr response, ServiceWorkerFetchEventTimingPtr timing) {
  GetForwardingInterface()->OnResponse(std::move(response), std::move(timing));
}
void ServiceWorkerFetchResponseCallbackInterceptorForTesting::OnResponseStream(::blink::mojom::blink::FetchAPIResponsePtr response, ::blink::mojom::blink::ServiceWorkerStreamHandlePtr body_as_stream, ServiceWorkerFetchEventTimingPtr timing) {
  GetForwardingInterface()->OnResponseStream(std::move(response), std::move(body_as_stream), std::move(timing));
}
void ServiceWorkerFetchResponseCallbackInterceptorForTesting::OnFallback(ServiceWorkerFetchEventTimingPtr timing) {
  GetForwardingInterface()->OnFallback(std::move(timing));
}
ServiceWorkerFetchResponseCallbackAsyncWaiter::ServiceWorkerFetchResponseCallbackAsyncWaiter(
    ServiceWorkerFetchResponseCallback* proxy) : proxy_(proxy) {}

ServiceWorkerFetchResponseCallbackAsyncWaiter::~ServiceWorkerFetchResponseCallbackAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif