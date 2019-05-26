// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/leak_detector/leak_detector.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT LeakDetectorInterceptorForTesting : public LeakDetector {
  virtual LeakDetector* GetForwardingInterface() = 0;
  void PerformLeakDetection(PerformLeakDetectionCallback callback) override;
};
class BLINK_COMMON_EXPORT LeakDetectorAsyncWaiter {
 public:
  explicit LeakDetectorAsyncWaiter(LeakDetector* proxy);
  ~LeakDetectorAsyncWaiter();
  void PerformLeakDetection(
      LeakDetectionResultPtr* out_result);

 private:
  LeakDetector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LeakDetectorAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_TEST_UTILS_H_