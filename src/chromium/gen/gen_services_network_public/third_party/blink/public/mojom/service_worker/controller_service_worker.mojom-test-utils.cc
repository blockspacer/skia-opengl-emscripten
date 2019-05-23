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


#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/url_loader.mojom.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker_mode.mojom.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "third_party/blink/public/common/fetch/fetch_api_request_headers_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void ControllerServiceWorkerInterceptorForTesting::DispatchFetchEvent(::blink::mojom::DispatchFetchEventParamsPtr params, ::blink::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) {
  GetForwardingInterface()->DispatchFetchEvent(std::move(params), std::move(response_callback), std::move(callback));
}
void ControllerServiceWorkerInterceptorForTesting::Clone(ControllerServiceWorkerRequest controller) {
  GetForwardingInterface()->Clone(std::move(controller));
}
ControllerServiceWorkerAsyncWaiter::ControllerServiceWorkerAsyncWaiter(
    ControllerServiceWorker* proxy) : proxy_(proxy) {}

ControllerServiceWorkerAsyncWaiter::~ControllerServiceWorkerAsyncWaiter() = default;

void ControllerServiceWorkerAsyncWaiter::DispatchFetchEvent(
    ::blink::mojom::DispatchFetchEventParamsPtr params, ::blink::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchFetchEvent(std::move(params),std::move(response_callback),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}



void ControllerServiceWorkerConnectorInterceptorForTesting::UpdateController(ControllerServiceWorkerPtr controller) {
  GetForwardingInterface()->UpdateController(std::move(controller));
}
ControllerServiceWorkerConnectorAsyncWaiter::ControllerServiceWorkerConnectorAsyncWaiter(
    ControllerServiceWorkerConnector* proxy) : proxy_(proxy) {}

ControllerServiceWorkerConnectorAsyncWaiter::~ControllerServiceWorkerConnectorAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif