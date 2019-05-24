// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT ServiceWorkerObjectHostInterceptorForTesting : public ServiceWorkerObjectHost {
  virtual ServiceWorkerObjectHost* GetForwardingInterface() = 0;
  void PostMessageToServiceWorker(::blink::BlinkTransferableMessage message) override;
  void TerminateForTesting(TerminateForTestingCallback callback) override;
};
class CORE_EXPORT ServiceWorkerObjectHostAsyncWaiter {
 public:
  explicit ServiceWorkerObjectHostAsyncWaiter(ServiceWorkerObjectHost* proxy);
  ~ServiceWorkerObjectHostAsyncWaiter();
  void TerminateForTesting(
      );

 private:
  ServiceWorkerObjectHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerObjectHostAsyncWaiter);
};


class CORE_EXPORT ServiceWorkerObjectInterceptorForTesting : public ServiceWorkerObject {
  virtual ServiceWorkerObject* GetForwardingInterface() = 0;
  void StateChanged(::blink::mojom::blink::ServiceWorkerState state) override;
};
class CORE_EXPORT ServiceWorkerObjectAsyncWaiter {
 public:
  explicit ServiceWorkerObjectAsyncWaiter(ServiceWorkerObject* proxy);
  ~ServiceWorkerObjectAsyncWaiter();

 private:
  ServiceWorkerObject* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerObjectAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_BLINK_TEST_UTILS_H_