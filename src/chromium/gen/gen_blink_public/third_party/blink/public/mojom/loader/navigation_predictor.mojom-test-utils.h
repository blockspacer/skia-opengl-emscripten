// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/loader/navigation_predictor.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT AnchorElementMetricsHostInterceptorForTesting : public AnchorElementMetricsHost {
  virtual AnchorElementMetricsHost* GetForwardingInterface() = 0;
  void ReportAnchorElementMetricsOnClick(AnchorElementMetricsPtr metrics) override;
  void ReportAnchorElementMetricsOnLoad(std::vector<AnchorElementMetricsPtr> metrics) override;
};
class BLINK_COMMON_EXPORT AnchorElementMetricsHostAsyncWaiter {
 public:
  explicit AnchorElementMetricsHostAsyncWaiter(AnchorElementMetricsHost* proxy);
  ~AnchorElementMetricsHostAsyncWaiter();

 private:
  AnchorElementMetricsHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AnchorElementMetricsHostAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_TEST_UTILS_H_