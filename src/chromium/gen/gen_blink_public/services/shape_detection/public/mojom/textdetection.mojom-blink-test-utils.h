// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_BLINK_TEST_UTILS_H_

#include "services/shape_detection/public/mojom/textdetection.mojom-blink.h"


namespace shape_detection {
namespace mojom {
namespace blink {


class  TextDetectionInterceptorForTesting : public TextDetection {
  virtual TextDetection* GetForwardingInterface() = 0;
  void Detect(const SkBitmap& bitmap_data, DetectCallback callback) override;
};
class  TextDetectionAsyncWaiter {
 public:
  explicit TextDetectionAsyncWaiter(TextDetection* proxy);
  ~TextDetectionAsyncWaiter();
  void Detect(
      const SkBitmap& bitmap_data, WTF::Vector<TextDetectionResultPtr>* out_results);

 private:
  TextDetection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TextDetectionAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_BLINK_TEST_UTILS_H_