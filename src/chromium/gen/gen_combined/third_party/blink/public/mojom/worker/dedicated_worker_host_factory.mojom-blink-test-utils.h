// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT DedicatedWorkerHostFactoryClientInterceptorForTesting : public DedicatedWorkerHostFactoryClient {
  virtual DedicatedWorkerHostFactoryClient* GetForwardingInterface() = 0;
  void OnWorkerHostCreated(::service_manager::mojom::blink::InterfaceProviderPtr interface_provider) override;
  void OnScriptLoadStarted(::blink::mojom::blink::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr main_script_load_params, ::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories, ::blink::mojom::blink::ControllerServiceWorkerInfoPtr controller_info) override;
  void OnScriptLoadStartFailed() override;
};
class CORE_EXPORT DedicatedWorkerHostFactoryClientAsyncWaiter {
 public:
  explicit DedicatedWorkerHostFactoryClientAsyncWaiter(DedicatedWorkerHostFactoryClient* proxy);
  ~DedicatedWorkerHostFactoryClientAsyncWaiter();

 private:
  DedicatedWorkerHostFactoryClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DedicatedWorkerHostFactoryClientAsyncWaiter);
};


class CORE_EXPORT DedicatedWorkerHostFactoryInterceptorForTesting : public DedicatedWorkerHostFactory {
  virtual DedicatedWorkerHostFactory* GetForwardingInterface() = 0;
#if defined(ENABLE_GNET)
  void CreateWorkerHost(const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::service_manager::mojom::blink::InterfaceProviderRequest worker_interface_provider) override;
  void CreateWorkerHostAndStartScriptLoad(const ::blink::KURL& script_url, const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::blink::mojom::blink::BlobURLTokenPtr blob_url_token, DedicatedWorkerHostFactoryClientPtr client) override;
#endif // ENABLE_GNET
};
class CORE_EXPORT DedicatedWorkerHostFactoryAsyncWaiter {
 public:
  explicit DedicatedWorkerHostFactoryAsyncWaiter(DedicatedWorkerHostFactory* proxy);
  ~DedicatedWorkerHostFactoryAsyncWaiter();

 private:
  DedicatedWorkerHostFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DedicatedWorkerHostFactoryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_TEST_UTILS_H_
