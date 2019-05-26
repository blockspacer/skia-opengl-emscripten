// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_BLINK_TEST_UTILS_H_

#include "services/shape_detection/public/mojom/facedetection.mojom-blink.h"


namespace shape_detection {
namespace mojom {
namespace blink {


class  FaceDetectionInterceptorForTesting : public FaceDetection {
  virtual FaceDetection* GetForwardingInterface() = 0;
  void Detect(const SkBitmap& bitmap_data, DetectCallback callback) override;
};
class  FaceDetectionAsyncWaiter {
 public:
  explicit FaceDetectionAsyncWaiter(FaceDetection* proxy);
  ~FaceDetectionAsyncWaiter();
  void Detect(
      const SkBitmap& bitmap_data, WTF::Vector<FaceDetectionResultPtr>* out_results);

 private:
  FaceDetection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FaceDetectionAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_BLINK_TEST_UTILS_H_