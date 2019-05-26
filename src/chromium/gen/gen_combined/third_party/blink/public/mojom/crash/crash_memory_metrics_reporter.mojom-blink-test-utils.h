// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CRASH_CRASH_MEMORY_METRICS_REPORTER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CRASH_CRASH_MEMORY_METRICS_REPORTER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/crash/crash_memory_metrics_reporter.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT CrashMemoryMetricsReporterInterceptorForTesting : public CrashMemoryMetricsReporter {
  virtual CrashMemoryMetricsReporter* GetForwardingInterface() = 0;
  void SetSharedMemory(base::UnsafeSharedMemoryRegion shared_metrics_buffer) override;
};
class PLATFORM_EXPORT CrashMemoryMetricsReporterAsyncWaiter {
 public:
  explicit CrashMemoryMetricsReporterAsyncWaiter(CrashMemoryMetricsReporter* proxy);
  ~CrashMemoryMetricsReporterAsyncWaiter();

 private:
  CrashMemoryMetricsReporter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CrashMemoryMetricsReporterAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CRASH_CRASH_MEMORY_METRICS_REPORTER_MOJOM_BLINK_TEST_UTILS_H_