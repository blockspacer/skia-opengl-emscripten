// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT SharedWorkerFactoryInterceptorForTesting : public SharedWorkerFactory {
  virtual SharedWorkerFactory* GetForwardingInterface() = 0;
  void CreateSharedWorker(::blink::mojom::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::RendererPreferencesPtr renderer_preferences, ::blink::mojom::RendererPreferenceWatcherRequest preference_watcher_request, ::blink::mojom::WorkerContentSettingsProxyPtr content_settings, ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, int32_t appcache_host_id, ::network::mojom::URLLoaderFactoryPtr main_script_loader_factory, ::blink::mojom::WorkerMainScriptLoadParamsPtr main_script_load_params, std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories, ::blink::mojom::ControllerServiceWorkerInfoPtr controller_info, ::blink::mojom::SharedWorkerHostPtr host, ::blink::mojom::SharedWorkerRequest shared_worker, ::service_manager::mojom::InterfaceProviderPtr interface_provider) override;
};
class BLINK_COMMON_EXPORT SharedWorkerFactoryAsyncWaiter {
 public:
  explicit SharedWorkerFactoryAsyncWaiter(SharedWorkerFactory* proxy);
  ~SharedWorkerFactoryAsyncWaiter();

 private:
  SharedWorkerFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerFactoryAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_TEST_UTILS_H_