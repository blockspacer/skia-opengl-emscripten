// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_BLINK_TEST_UTILS_H_

#include "services/shape_detection/public/mojom/barcodedetection.mojom-blink.h"


namespace shape_detection {
namespace mojom {
namespace blink {


class  BarcodeDetectionInterceptorForTesting : public BarcodeDetection {
  virtual BarcodeDetection* GetForwardingInterface() = 0;
  void Detect(const SkBitmap& bitmap_data, DetectCallback callback) override;
};
class  BarcodeDetectionAsyncWaiter {
 public:
  explicit BarcodeDetectionAsyncWaiter(BarcodeDetection* proxy);
  ~BarcodeDetectionAsyncWaiter();
  void Detect(
      const SkBitmap& bitmap_data, WTF::Vector<BarcodeDetectionResultPtr>* out_results);

 private:
  BarcodeDetection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BarcodeDetectionAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_BLINK_TEST_UTILS_H_