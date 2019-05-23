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


#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_state.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/public/common/messaging/cloneable_message_struct_traits.h"
#include "third_party/blink/public/common/messaging/transferable_message_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void ServiceWorkerObjectHostInterceptorForTesting::PostMessageToServiceWorker(::blink::TransferableMessage message) {
  GetForwardingInterface()->PostMessageToServiceWorker(std::move(message));
}
void ServiceWorkerObjectHostInterceptorForTesting::TerminateForTesting(TerminateForTestingCallback callback) {
  GetForwardingInterface()->TerminateForTesting(std::move(callback));
}
ServiceWorkerObjectHostAsyncWaiter::ServiceWorkerObjectHostAsyncWaiter(
    ServiceWorkerObjectHost* proxy) : proxy_(proxy) {}

ServiceWorkerObjectHostAsyncWaiter::~ServiceWorkerObjectHostAsyncWaiter() = default;

void ServiceWorkerObjectHostAsyncWaiter::TerminateForTesting(
    ) {
  base::RunLoop loop;
  proxy_->TerminateForTesting(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void ServiceWorkerObjectInterceptorForTesting::StateChanged(::blink::mojom::ServiceWorkerState state) {
  GetForwardingInterface()->StateChanged(std::move(state));
}
ServiceWorkerObjectAsyncWaiter::ServiceWorkerObjectAsyncWaiter(
    ServiceWorkerObject* proxy) : proxy_(proxy) {}

ServiceWorkerObjectAsyncWaiter::~ServiceWorkerObjectAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif