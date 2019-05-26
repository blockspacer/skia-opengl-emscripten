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


#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-blink.h"
#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker_mode.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider_type.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void ServiceWorkerWorkerClientInterceptorForTesting::OnControllerChanged(::blink::mojom::blink::ControllerServiceWorkerMode mode) {
  GetForwardingInterface()->OnControllerChanged(std::move(mode));
}
ServiceWorkerWorkerClientAsyncWaiter::ServiceWorkerWorkerClientAsyncWaiter(
    ServiceWorkerWorkerClient* proxy) : proxy_(proxy) {}

ServiceWorkerWorkerClientAsyncWaiter::~ServiceWorkerWorkerClientAsyncWaiter() = default;




void ServiceWorkerWorkerClientRegistryInterceptorForTesting::RegisterWorkerClient(ServiceWorkerWorkerClientPtr client) {
  GetForwardingInterface()->RegisterWorkerClient(std::move(client));
}
void ServiceWorkerWorkerClientRegistryInterceptorForTesting::CloneWorkerClientRegistry(ServiceWorkerWorkerClientRegistryRequest host) {
  GetForwardingInterface()->CloneWorkerClientRegistry(std::move(host));
}
ServiceWorkerWorkerClientRegistryAsyncWaiter::ServiceWorkerWorkerClientRegistryAsyncWaiter(
    ServiceWorkerWorkerClientRegistry* proxy) : proxy_(proxy) {}

ServiceWorkerWorkerClientRegistryAsyncWaiter::~ServiceWorkerWorkerClientRegistryAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif