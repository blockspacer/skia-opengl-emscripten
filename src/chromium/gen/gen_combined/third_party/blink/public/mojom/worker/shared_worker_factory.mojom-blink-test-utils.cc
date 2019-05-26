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


#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-blink.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-blink.h"
#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom-blink.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-blink.h"
#include "third_party/blink/public/mojom/worker/shared_worker.mojom-blink.h"
#include "third_party/blink/public/mojom/worker/shared_worker_host.mojom-blink.h"
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-blink.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-blink.h"
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void SharedWorkerFactoryInterceptorForTesting::CreateSharedWorker(::blink::mojom::blink::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::blink::RendererPreferencesPtr renderer_preferences, ::blink::mojom::blink::RendererPreferenceWatcherRequest preference_watcher_request, ::blink::mojom::blink::WorkerContentSettingsProxyPtr content_settings, ::blink::mojom::blink::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, int32_t appcache_host_id, ::network::mojom::blink::URLLoaderFactoryPtr main_script_loader_factory, ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr main_script_load_params, ::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories, ::blink::mojom::blink::ControllerServiceWorkerInfoPtr controller_info, ::blink::mojom::blink::SharedWorkerHostPtr host, ::blink::mojom::blink::SharedWorkerRequest shared_worker, ::service_manager::mojom::blink::InterfaceProviderPtr interface_provider) {
  GetForwardingInterface()->CreateSharedWorker(std::move(info), std::move(pause_on_start), std::move(devtools_worker_token), std::move(renderer_preferences), std::move(preference_watcher_request), std::move(content_settings), std::move(service_worker_provider_info), std::move(appcache_host_id), std::move(main_script_loader_factory), std::move(main_script_load_params), std::move(subresource_loader_factories), std::move(controller_info), std::move(host), std::move(shared_worker), std::move(interface_provider));
}
SharedWorkerFactoryAsyncWaiter::SharedWorkerFactoryAsyncWaiter(
    SharedWorkerFactory* proxy) : proxy_(proxy) {}

SharedWorkerFactoryAsyncWaiter::~SharedWorkerFactoryAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif