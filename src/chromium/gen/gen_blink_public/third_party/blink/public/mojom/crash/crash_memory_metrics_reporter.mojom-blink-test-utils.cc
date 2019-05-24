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


#include "third_party/blink/public/mojom/crash/crash_memory_metrics_reporter.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/shared_memory.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CRASH_CRASH_MEMORY_METRICS_REPORTER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CRASH_CRASH_MEMORY_METRICS_REPORTER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void CrashMemoryMetricsReporterInterceptorForTesting::SetSharedMemory(base::UnsafeSharedMemoryRegion shared_metrics_buffer) {
  GetForwardingInterface()->SetSharedMemory(std::move(shared_metrics_buffer));
}
CrashMemoryMetricsReporterAsyncWaiter::CrashMemoryMetricsReporterAsyncWaiter(
    CrashMemoryMetricsReporter* proxy) : proxy_(proxy) {}

CrashMemoryMetricsReporterAsyncWaiter::~CrashMemoryMetricsReporterAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif