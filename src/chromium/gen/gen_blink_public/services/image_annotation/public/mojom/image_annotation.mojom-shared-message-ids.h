// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace image_annotation {
namespace mojom {

namespace internal {


// The 2084554043 value is based on sha256(salt + "ImageProcessor1").
constexpr uint32_t kImageProcessor_GetJpgImageData_Name = 2084554043;
// The 744503131 value is based on sha256(salt + "Annotator1").
constexpr uint32_t kAnnotator_AnnotateImage_Name = 744503131;

}  // namespace internal
}  // namespace mojom
}  // namespace image_annotation

#endif  // SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_