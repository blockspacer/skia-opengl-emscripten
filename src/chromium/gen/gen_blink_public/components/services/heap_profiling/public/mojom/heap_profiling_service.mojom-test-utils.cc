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


#include "components/services/heap_profiling/public/mojom/heap_profiling_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom.h"
#include "mojo/public/mojom/base/process_id.mojom.h"


#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/process_id_mojom_traits.h"
#endif


namespace heap_profiling {
namespace mojom {


void ProfilingServiceInterceptorForTesting::AddProfilingClient(base::ProcessId pid, ::heap_profiling::mojom::ProfilingClientPtr client, ProcessType process_type, ::heap_profiling::mojom::ProfilingParamsPtr params) {
  GetForwardingInterface()->AddProfilingClient(std::move(pid), std::move(client), std::move(process_type), std::move(params));
}
void ProfilingServiceInterceptorForTesting::GetProfiledPids(GetProfiledPidsCallback callback) {
  GetForwardingInterface()->GetProfiledPids(std::move(callback));
}
ProfilingServiceAsyncWaiter::ProfilingServiceAsyncWaiter(
    ProfilingService* proxy) : proxy_(proxy) {}

ProfilingServiceAsyncWaiter::~ProfilingServiceAsyncWaiter() = default;

void ProfilingServiceAsyncWaiter::GetProfiledPids(
    std::vector<base::ProcessId>* out_pids) {
  base::RunLoop loop;
  proxy_->GetProfiledPids(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<base::ProcessId>* out_pids
,
             const std::vector<base::ProcessId>& pids) {*out_pids = std::move(pids);
            loop->Quit();
          },
          &loop,
          out_pids));
  loop.Run();
}





}  // namespace mojom
}  // namespace heap_profiling

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif