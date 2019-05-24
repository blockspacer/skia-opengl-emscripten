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


#include "third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-blink.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-blink.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-blink.h"
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void DedicatedWorkerHostFactoryClientInterceptorForTesting::OnWorkerHostCreated(::service_manager::mojom::blink::InterfaceProviderPtr interface_provider) {
  GetForwardingInterface()->OnWorkerHostCreated(std::move(interface_provider));
}
void DedicatedWorkerHostFactoryClientInterceptorForTesting::OnScriptLoadStarted(::blink::mojom::blink::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr main_script_load_params, ::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories, ::blink::mojom::blink::ControllerServiceWorkerInfoPtr controller_info) {
  GetForwardingInterface()->OnScriptLoadStarted(std::move(service_worker_provider_info), std::move(main_script_load_params), std::move(subresource_loader_factories), std::move(controller_info));
}
void DedicatedWorkerHostFactoryClientInterceptorForTesting::OnScriptLoadStartFailed() {
  GetForwardingInterface()->OnScriptLoadStartFailed();
}
DedicatedWorkerHostFactoryClientAsyncWaiter::DedicatedWorkerHostFactoryClientAsyncWaiter(
    DedicatedWorkerHostFactoryClient* proxy) : proxy_(proxy) {}

DedicatedWorkerHostFactoryClientAsyncWaiter::~DedicatedWorkerHostFactoryClientAsyncWaiter() = default;




void DedicatedWorkerHostFactoryInterceptorForTesting::CreateWorkerHost(const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::service_manager::mojom::blink::InterfaceProviderRequest worker_interface_provider) {
  GetForwardingInterface()->CreateWorkerHost(std::move(origin), std::move(worker_interface_provider));
}
void DedicatedWorkerHostFactoryInterceptorForTesting::CreateWorkerHostAndStartScriptLoad(const ::blink::KURL& script_url, const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::blink::mojom::blink::BlobURLTokenPtr blob_url_token, DedicatedWorkerHostFactoryClientPtr client) {
  GetForwardingInterface()->CreateWorkerHostAndStartScriptLoad(std::move(script_url), std::move(origin), std::move(blob_url_token), std::move(client));
}
DedicatedWorkerHostFactoryAsyncWaiter::DedicatedWorkerHostFactoryAsyncWaiter(
    DedicatedWorkerHostFactory* proxy) : proxy_(proxy) {}

DedicatedWorkerHostFactoryAsyncWaiter::~DedicatedWorkerHostFactoryAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif