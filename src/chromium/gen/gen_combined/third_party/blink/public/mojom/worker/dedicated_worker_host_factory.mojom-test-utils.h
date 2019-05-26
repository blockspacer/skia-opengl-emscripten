// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT DedicatedWorkerHostFactoryClientInterceptorForTesting : public DedicatedWorkerHostFactoryClient {
  virtual DedicatedWorkerHostFactoryClient* GetForwardingInterface() = 0;
  void OnWorkerHostCreated(::service_manager::mojom::InterfaceProviderPtr interface_provider) override;
  void OnScriptLoadStarted(::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, ::blink::mojom::WorkerMainScriptLoadParamsPtr main_script_load_params, std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories, ::blink::mojom::ControllerServiceWorkerInfoPtr controller_info) override;
  void OnScriptLoadStartFailed() override;
};
class BLINK_COMMON_EXPORT DedicatedWorkerHostFactoryClientAsyncWaiter {
 public:
  explicit DedicatedWorkerHostFactoryClientAsyncWaiter(DedicatedWorkerHostFactoryClient* proxy);
  ~DedicatedWorkerHostFactoryClientAsyncWaiter();

 private:
  DedicatedWorkerHostFactoryClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DedicatedWorkerHostFactoryClientAsyncWaiter);
};


class BLINK_COMMON_EXPORT DedicatedWorkerHostFactoryInterceptorForTesting : public DedicatedWorkerHostFactory {
  virtual DedicatedWorkerHostFactory* GetForwardingInterface() = 0;
  void CreateWorkerHost(const url::Origin& origin, ::service_manager::mojom::InterfaceProviderRequest worker_interface_provider) override;
  void CreateWorkerHostAndStartScriptLoad(const GURL& script_url, const url::Origin& origin, ::blink::mojom::BlobURLTokenPtr blob_url_token, DedicatedWorkerHostFactoryClientPtr client) override;
};
class BLINK_COMMON_EXPORT DedicatedWorkerHostFactoryAsyncWaiter {
 public:
  explicit DedicatedWorkerHostFactoryAsyncWaiter(DedicatedWorkerHostFactory* proxy);
  ~DedicatedWorkerHostFactoryAsyncWaiter();

 private:
  DedicatedWorkerHostFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DedicatedWorkerHostFactoryAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_TEST_UTILS_H_