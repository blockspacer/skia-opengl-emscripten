// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT ServiceWorkerFetchResponseCallbackInterceptorForTesting : public ServiceWorkerFetchResponseCallback {
  virtual ServiceWorkerFetchResponseCallback* GetForwardingInterface() = 0;
  void OnResponse(::blink::mojom::blink::FetchAPIResponsePtr response, ServiceWorkerFetchEventTimingPtr timing) override;
  void OnResponseStream(::blink::mojom::blink::FetchAPIResponsePtr response, ::blink::mojom::blink::ServiceWorkerStreamHandlePtr body_as_stream, ServiceWorkerFetchEventTimingPtr timing) override;
  void OnFallback(ServiceWorkerFetchEventTimingPtr timing) override;
};
class PLATFORM_EXPORT ServiceWorkerFetchResponseCallbackAsyncWaiter {
 public:
  explicit ServiceWorkerFetchResponseCallbackAsyncWaiter(ServiceWorkerFetchResponseCallback* proxy);
  ~ServiceWorkerFetchResponseCallbackAsyncWaiter();

 private:
  ServiceWorkerFetchResponseCallback* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerFetchResponseCallbackAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_BLINK_TEST_UTILS_H_