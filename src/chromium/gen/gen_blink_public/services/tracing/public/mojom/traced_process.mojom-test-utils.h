// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_TEST_UTILS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_TEST_UTILS_H_

#include "services/tracing/public/mojom/traced_process.mojom.h"
#include "base/component_export.h"


namespace tracing {
namespace mojom {


class COMPONENT_EXPORT(TRACING_MOJOM) TracedProcessInterceptorForTesting : public TracedProcess {
  virtual TracedProcess* GetForwardingInterface() = 0;
  void ConnectToTracingService(ConnectToTracingRequestPtr request) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) TracedProcessAsyncWaiter {
 public:
  explicit TracedProcessAsyncWaiter(TracedProcess* proxy);
  ~TracedProcessAsyncWaiter();

 private:
  TracedProcess* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TracedProcessAsyncWaiter);
};




}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_TEST_UTILS_H_