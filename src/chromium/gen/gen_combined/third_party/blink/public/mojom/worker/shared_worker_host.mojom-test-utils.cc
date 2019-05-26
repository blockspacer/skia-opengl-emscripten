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


#include "third_party/blink/public/mojom/worker/shared_worker_host.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_JUMBO_H_
#endif


namespace blink {
namespace mojom {


void SharedWorkerHostInterceptorForTesting::OnConnected(int32_t connection_id) {
  GetForwardingInterface()->OnConnected(std::move(connection_id));
}
void SharedWorkerHostInterceptorForTesting::OnContextClosed() {
  GetForwardingInterface()->OnContextClosed();
}
void SharedWorkerHostInterceptorForTesting::OnReadyForInspection() {
  GetForwardingInterface()->OnReadyForInspection();
}
void SharedWorkerHostInterceptorForTesting::OnScriptLoaded() {
  GetForwardingInterface()->OnScriptLoaded();
}
void SharedWorkerHostInterceptorForTesting::OnScriptLoadFailed() {
  GetForwardingInterface()->OnScriptLoadFailed();
}
void SharedWorkerHostInterceptorForTesting::OnFeatureUsed(::blink::mojom::WebFeature feature) {
  GetForwardingInterface()->OnFeatureUsed(std::move(feature));
}
SharedWorkerHostAsyncWaiter::SharedWorkerHostAsyncWaiter(
    SharedWorkerHost* proxy) : proxy_(proxy) {}

SharedWorkerHostAsyncWaiter::~SharedWorkerHostAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif