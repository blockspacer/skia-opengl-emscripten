// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ServiceWorkerFetchResponseCallbackInterceptorForTesting : public ServiceWorkerFetchResponseCallback {
  virtual ServiceWorkerFetchResponseCallback* GetForwardingInterface() = 0;
  void OnResponse(::blink::mojom::FetchAPIResponsePtr response, ServiceWorkerFetchEventTimingPtr timing) override;
  void OnResponseStream(::blink::mojom::FetchAPIResponsePtr response, ::blink::mojom::ServiceWorkerStreamHandlePtr body_as_stream, ServiceWorkerFetchEventTimingPtr timing) override;
  void OnFallback(ServiceWorkerFetchEventTimingPtr timing) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerFetchResponseCallbackAsyncWaiter {
 public:
  explicit ServiceWorkerFetchResponseCallbackAsyncWaiter(ServiceWorkerFetchResponseCallback* proxy);
  ~ServiceWorkerFetchResponseCallbackAsyncWaiter();

 private:
  ServiceWorkerFetchResponseCallback* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerFetchResponseCallbackAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_TEST_UTILS_H_