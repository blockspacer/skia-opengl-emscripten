// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_TEST_UTILS_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_TEST_UTILS_H_

#include "components/metrics/public/interfaces/single_sample_metrics.mojom.h"


namespace metrics {
namespace mojom {


class  SingleSampleMetricsProviderInterceptorForTesting : public SingleSampleMetricsProvider {
  virtual SingleSampleMetricsProvider* GetForwardingInterface() = 0;
  void AcquireSingleSampleMetric(const std::string& histogram_name, int32_t min, int32_t max, uint32_t bucket_count, int32_t flags, SingleSampleMetricRequest request) override;
};
class  SingleSampleMetricsProviderAsyncWaiter {
 public:
  explicit SingleSampleMetricsProviderAsyncWaiter(SingleSampleMetricsProvider* proxy);
  ~SingleSampleMetricsProviderAsyncWaiter();

 private:
  SingleSampleMetricsProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SingleSampleMetricsProviderAsyncWaiter);
};


class  SingleSampleMetricInterceptorForTesting : public SingleSampleMetric {
  virtual SingleSampleMetric* GetForwardingInterface() = 0;
  void SetSample(int32_t sample) override;
};
class  SingleSampleMetricAsyncWaiter {
 public:
  explicit SingleSampleMetricAsyncWaiter(SingleSampleMetric* proxy);
  ~SingleSampleMetricAsyncWaiter();

 private:
  SingleSampleMetric* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SingleSampleMetricAsyncWaiter);
};




}  // namespace mojom
}  // namespace metrics

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_TEST_UTILS_H_