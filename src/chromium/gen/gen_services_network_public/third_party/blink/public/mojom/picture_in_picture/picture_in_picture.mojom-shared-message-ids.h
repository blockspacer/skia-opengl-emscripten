// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 331762757 value is based on sha256(salt + "PictureInPictureDelegate1").
constexpr uint32_t kPictureInPictureDelegate_PictureInPictureWindowSizeChanged_Name = 331762757;
// The 930200782 value is based on sha256(salt + "PictureInPictureService1").
constexpr uint32_t kPictureInPictureService_StartSession_Name = 930200782;
// The 993894760 value is based on sha256(salt + "PictureInPictureService2").
constexpr uint32_t kPictureInPictureService_EndSession_Name = 993894760;
// The 1274381318 value is based on sha256(salt + "PictureInPictureService3").
constexpr uint32_t kPictureInPictureService_UpdateSession_Name = 1274381318;
// The 32267460 value is based on sha256(salt + "PictureInPictureService4").
constexpr uint32_t kPictureInPictureService_SetDelegate_Name = 32267460;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_SHARED_MESSAGE_IDS_H_