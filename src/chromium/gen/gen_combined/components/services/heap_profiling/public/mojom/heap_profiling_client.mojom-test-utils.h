// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_TEST_UTILS_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_TEST_UTILS_H_

#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom.h"


namespace heap_profiling {
namespace mojom {


class  ProfilingClientInterceptorForTesting : public ProfilingClient {
  virtual ProfilingClient* GetForwardingInterface() = 0;
  void StartProfiling(ProfilingParamsPtr params) override;
  void RetrieveHeapProfile(RetrieveHeapProfileCallback callback) override;
};
class  ProfilingClientAsyncWaiter {
 public:
  explicit ProfilingClientAsyncWaiter(ProfilingClient* proxy);
  ~ProfilingClientAsyncWaiter();
  void RetrieveHeapProfile(
      HeapProfilePtr* out_profile);

 private:
  ProfilingClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProfilingClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_TEST_UTILS_H_