// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace shape_detection {
namespace mojom {

namespace internal {


// The 468194532 value is based on sha256(salt + "BarcodeDetectionProvider1").
constexpr uint32_t kBarcodeDetectionProvider_CreateBarcodeDetection_Name = 468194532;
// The 2130087449 value is based on sha256(salt + "BarcodeDetectionProvider2").
constexpr uint32_t kBarcodeDetectionProvider_EnumerateSupportedFormats_Name = 2130087449;

}  // namespace internal
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_