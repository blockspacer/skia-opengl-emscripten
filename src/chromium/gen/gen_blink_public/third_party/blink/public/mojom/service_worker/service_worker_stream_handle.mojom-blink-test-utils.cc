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


#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void ServiceWorkerStreamCallbackInterceptorForTesting::OnCompleted() {
  GetForwardingInterface()->OnCompleted();
}
void ServiceWorkerStreamCallbackInterceptorForTesting::OnAborted() {
  GetForwardingInterface()->OnAborted();
}
ServiceWorkerStreamCallbackAsyncWaiter::ServiceWorkerStreamCallbackAsyncWaiter(
    ServiceWorkerStreamCallback* proxy) : proxy_(proxy) {}

ServiceWorkerStreamCallbackAsyncWaiter::~ServiceWorkerStreamCallbackAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif