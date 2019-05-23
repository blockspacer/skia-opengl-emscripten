// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ServiceWorkerWorkerClientInterceptorForTesting : public ServiceWorkerWorkerClient {
  virtual ServiceWorkerWorkerClient* GetForwardingInterface() = 0;
  void OnControllerChanged(::blink::mojom::ControllerServiceWorkerMode mode) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerWorkerClientAsyncWaiter {
 public:
  explicit ServiceWorkerWorkerClientAsyncWaiter(ServiceWorkerWorkerClient* proxy);
  ~ServiceWorkerWorkerClientAsyncWaiter();

 private:
  ServiceWorkerWorkerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerWorkerClientAsyncWaiter);
};


class BLINK_COMMON_EXPORT ServiceWorkerWorkerClientRegistryInterceptorForTesting : public ServiceWorkerWorkerClientRegistry {
  virtual ServiceWorkerWorkerClientRegistry* GetForwardingInterface() = 0;
  void RegisterWorkerClient(ServiceWorkerWorkerClientPtr client) override;
  void CloneWorkerClientRegistry(ServiceWorkerWorkerClientRegistryRequest host) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerWorkerClientRegistryAsyncWaiter {
 public:
  explicit ServiceWorkerWorkerClientRegistryAsyncWaiter(ServiceWorkerWorkerClientRegistry* proxy);
  ~ServiceWorkerWorkerClientRegistryAsyncWaiter();

 private:
  ServiceWorkerWorkerClientRegistry* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerWorkerClientRegistryAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_TEST_UTILS_H_