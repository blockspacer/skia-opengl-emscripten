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


#include "services/tracing/public/mojom/traced_process.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/tracing/public/mojom/perfetto_service.mojom.h"
#include "services/tracing/public/mojom/tracing.mojom.h"


#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_JUMBO_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_JUMBO_H_
#endif


namespace tracing {
namespace mojom {


void TracedProcessInterceptorForTesting::ConnectToTracingService(ConnectToTracingRequestPtr request) {
  GetForwardingInterface()->ConnectToTracingService(std::move(request));
}
TracedProcessAsyncWaiter::TracedProcessAsyncWaiter(
    TracedProcess* proxy) : proxy_(proxy) {}

TracedProcessAsyncWaiter::~TracedProcessAsyncWaiter() = default;






}  // namespace mojom
}  // namespace tracing

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif