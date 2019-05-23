// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ServiceWorkerStreamCallbackInterceptorForTesting : public ServiceWorkerStreamCallback {
  virtual ServiceWorkerStreamCallback* GetForwardingInterface() = 0;
  void OnCompleted() override;
  void OnAborted() override;
};
class BLINK_COMMON_EXPORT ServiceWorkerStreamCallbackAsyncWaiter {
 public:
  explicit ServiceWorkerStreamCallbackAsyncWaiter(ServiceWorkerStreamCallback* proxy);
  ~ServiceWorkerStreamCallbackAsyncWaiter();

 private:
  ServiceWorkerStreamCallback* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerStreamCallbackAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_TEST_UTILS_H_