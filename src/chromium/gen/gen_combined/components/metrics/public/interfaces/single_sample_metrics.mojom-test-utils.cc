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


#include "components/metrics/public/interfaces/single_sample_metrics.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_JUMBO_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_JUMBO_H_
#endif


namespace metrics {
namespace mojom {


void SingleSampleMetricsProviderInterceptorForTesting::AcquireSingleSampleMetric(const std::string& histogram_name, int32_t min, int32_t max, uint32_t bucket_count, int32_t flags, SingleSampleMetricRequest request) {
  GetForwardingInterface()->AcquireSingleSampleMetric(std::move(histogram_name), std::move(min), std::move(max), std::move(bucket_count), std::move(flags), std::move(request));
}
SingleSampleMetricsProviderAsyncWaiter::SingleSampleMetricsProviderAsyncWaiter(
    SingleSampleMetricsProvider* proxy) : proxy_(proxy) {}

SingleSampleMetricsProviderAsyncWaiter::~SingleSampleMetricsProviderAsyncWaiter() = default;




void SingleSampleMetricInterceptorForTesting::SetSample(int32_t sample) {
  GetForwardingInterface()->SetSample(std::move(sample));
}
SingleSampleMetricAsyncWaiter::SingleSampleMetricAsyncWaiter(
    SingleSampleMetric* proxy) : proxy_(proxy) {}

SingleSampleMetricAsyncWaiter::~SingleSampleMetricAsyncWaiter() = default;






}  // namespace mojom
}  // namespace metrics

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif