// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 144663203 value is based on sha256(salt + "PictureInPictureDelegate1").
constexpr uint32_t kPictureInPictureDelegate_PictureInPictureWindowSizeChanged_Name = 144663203;
// The 1010983623 value is based on sha256(salt + "PictureInPictureService1").
constexpr uint32_t kPictureInPictureService_StartSession_Name = 1010983623;
// The 469461026 value is based on sha256(salt + "PictureInPictureService2").
constexpr uint32_t kPictureInPictureService_EndSession_Name = 469461026;
// The 1813495861 value is based on sha256(salt + "PictureInPictureService3").
constexpr uint32_t kPictureInPictureService_UpdateSession_Name = 1813495861;
// The 1170768516 value is based on sha256(salt + "PictureInPictureService4").
constexpr uint32_t kPictureInPictureService_SetDelegate_Name = 1170768516;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_SHARED_MESSAGE_IDS_H_