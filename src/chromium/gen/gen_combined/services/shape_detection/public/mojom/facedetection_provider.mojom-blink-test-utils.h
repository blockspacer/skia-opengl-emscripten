// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/shape_detection/public/mojom/facedetection_provider.mojom-blink.h"


namespace shape_detection {
namespace mojom {
namespace blink {


class  FaceDetectionProviderInterceptorForTesting : public FaceDetectionProvider {
  virtual FaceDetectionProvider* GetForwardingInterface() = 0;
  void CreateFaceDetection(::shape_detection::mojom::blink::FaceDetectionRequest request, ::shape_detection::mojom::blink::FaceDetectorOptionsPtr options) override;
};
class  FaceDetectionProviderAsyncWaiter {
 public:
  explicit FaceDetectionProviderAsyncWaiter(FaceDetectionProvider* proxy);
  ~FaceDetectionProviderAsyncWaiter();

 private:
  FaceDetectionProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FaceDetectionProviderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_