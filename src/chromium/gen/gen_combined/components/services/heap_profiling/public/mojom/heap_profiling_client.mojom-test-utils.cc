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


#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_JUMBO_H_
#endif


namespace heap_profiling {
namespace mojom {


void ProfilingClientInterceptorForTesting::StartProfiling(ProfilingParamsPtr params) {
  GetForwardingInterface()->StartProfiling(std::move(params));
}
void ProfilingClientInterceptorForTesting::RetrieveHeapProfile(RetrieveHeapProfileCallback callback) {
  GetForwardingInterface()->RetrieveHeapProfile(std::move(callback));
}
ProfilingClientAsyncWaiter::ProfilingClientAsyncWaiter(
    ProfilingClient* proxy) : proxy_(proxy) {}

ProfilingClientAsyncWaiter::~ProfilingClientAsyncWaiter() = default;

void ProfilingClientAsyncWaiter::RetrieveHeapProfile(
    HeapProfilePtr* out_profile) {
  base::RunLoop loop;
  proxy_->RetrieveHeapProfile(
      base::BindOnce(
          [](base::RunLoop* loop,
             HeapProfilePtr* out_profile
,
             HeapProfilePtr profile) {*out_profile = std::move(profile);
            loop->Quit();
          },
          &loop,
          out_profile));
  loop.Run();
}





}  // namespace mojom
}  // namespace heap_profiling

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif