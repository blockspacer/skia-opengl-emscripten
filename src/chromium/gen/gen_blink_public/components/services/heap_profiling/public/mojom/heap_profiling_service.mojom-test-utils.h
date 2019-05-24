// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_TEST_UTILS_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_TEST_UTILS_H_

#include "components/services/heap_profiling/public/mojom/heap_profiling_service.mojom.h"


namespace heap_profiling {
namespace mojom {


class  ProfilingServiceInterceptorForTesting : public ProfilingService {
  virtual ProfilingService* GetForwardingInterface() = 0;
  void AddProfilingClient(base::ProcessId pid, ::heap_profiling::mojom::ProfilingClientPtr client, ProcessType process_type, ::heap_profiling::mojom::ProfilingParamsPtr params) override;
  void GetProfiledPids(GetProfiledPidsCallback callback) override;
};
class  ProfilingServiceAsyncWaiter {
 public:
  explicit ProfilingServiceAsyncWaiter(ProfilingService* proxy);
  ~ProfilingServiceAsyncWaiter();
  void GetProfiledPids(
      std::vector<base::ProcessId>* out_pids);

 private:
  ProfilingService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProfilingServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_TEST_UTILS_H_