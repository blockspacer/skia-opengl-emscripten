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


#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom.h"
#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom.h"
#include "third_party/blink/public/mojom/worker/shared_worker.mojom.h"
#include "third_party/blink/public/mojom/worker/shared_worker_host.mojom.h"
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom.h"
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "third_party/blink/public/common/loader/url_loader_factory_bundle_mojom_traits.h"
#include "ui/gfx/mojo/font_render_params_struct_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void SharedWorkerFactoryInterceptorForTesting::CreateSharedWorker(::blink::mojom::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::RendererPreferencesPtr renderer_preferences, ::blink::mojom::RendererPreferenceWatcherRequest preference_watcher_request, ::blink::mojom::WorkerContentSettingsProxyPtr content_settings, ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, int32_t appcache_host_id, ::network::mojom::URLLoaderFactoryPtr main_script_loader_factory, ::blink::mojom::WorkerMainScriptLoadParamsPtr main_script_load_params, std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories, ::blink::mojom::ControllerServiceWorkerInfoPtr controller_info, ::blink::mojom::SharedWorkerHostPtr host, ::blink::mojom::SharedWorkerRequest shared_worker, ::service_manager::mojom::InterfaceProviderPtr interface_provider) {
  GetForwardingInterface()->CreateSharedWorker(std::move(info), std::move(pause_on_start), std::move(devtools_worker_token), std::move(renderer_preferences), std::move(preference_watcher_request), std::move(content_settings), std::move(service_worker_provider_info), std::move(appcache_host_id), std::move(main_script_loader_factory), std::move(main_script_load_params), std::move(subresource_loader_factories), std::move(controller_info), std::move(host), std::move(shared_worker), std::move(interface_provider));
}
SharedWorkerFactoryAsyncWaiter::SharedWorkerFactoryAsyncWaiter(
    SharedWorkerFactory* proxy) : proxy_(proxy) {}

SharedWorkerFactoryAsyncWaiter::~SharedWorkerFactoryAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif