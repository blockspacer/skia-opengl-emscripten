// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


constexpr uint32_t kImageCapture_GetPhotoState_Name = 0;
constexpr uint32_t kImageCapture_SetOptions_Name = 1;
constexpr uint32_t kImageCapture_TakePhoto_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_