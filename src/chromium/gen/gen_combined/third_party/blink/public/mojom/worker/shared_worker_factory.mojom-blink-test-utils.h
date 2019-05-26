// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT SharedWorkerFactoryInterceptorForTesting : public SharedWorkerFactory {
  virtual SharedWorkerFactory* GetForwardingInterface() = 0;
  void CreateSharedWorker(::blink::mojom::blink::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::blink::RendererPreferencesPtr renderer_preferences, ::blink::mojom::blink::RendererPreferenceWatcherRequest preference_watcher_request, ::blink::mojom::blink::WorkerContentSettingsProxyPtr content_settings, ::blink::mojom::blink::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, int32_t appcache_host_id, ::network::mojom::blink::URLLoaderFactoryPtr main_script_loader_factory, ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr main_script_load_params, ::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories, ::blink::mojom::blink::ControllerServiceWorkerInfoPtr controller_info, ::blink::mojom::blink::SharedWorkerHostPtr host, ::blink::mojom::blink::SharedWorkerRequest shared_worker, ::service_manager::mojom::blink::InterfaceProviderPtr interface_provider) override;
};
class CORE_EXPORT SharedWorkerFactoryAsyncWaiter {
 public:
  explicit SharedWorkerFactoryAsyncWaiter(SharedWorkerFactory* proxy);
  ~SharedWorkerFactoryAsyncWaiter();

 private:
  SharedWorkerFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerFactoryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_BLINK_TEST_UTILS_H_