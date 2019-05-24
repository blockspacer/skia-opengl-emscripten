// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-blink.h"


namespace shape_detection {
namespace mojom {
namespace blink {


class  BarcodeDetectionProviderInterceptorForTesting : public BarcodeDetectionProvider {
  virtual BarcodeDetectionProvider* GetForwardingInterface() = 0;
  void CreateBarcodeDetection(::shape_detection::mojom::blink::BarcodeDetectionRequest request, BarcodeDetectorOptionsPtr options) override;
  void EnumerateSupportedFormats(EnumerateSupportedFormatsCallback callback) override;
};
class  BarcodeDetectionProviderAsyncWaiter {
 public:
  explicit BarcodeDetectionProviderAsyncWaiter(BarcodeDetectionProvider* proxy);
  ~BarcodeDetectionProviderAsyncWaiter();
  void EnumerateSupportedFormats(
      WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat>* out_supported_formats);

 private:
  BarcodeDetectionProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BarcodeDetectionProviderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_