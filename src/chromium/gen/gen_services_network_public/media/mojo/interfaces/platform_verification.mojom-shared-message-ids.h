// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1284277351 value is based on sha256(salt + "PlatformVerification1").
constexpr uint32_t kPlatformVerification_ChallengePlatform_Name = 1284277351;
// The 1365968556 value is based on sha256(salt + "PlatformVerification2").
constexpr uint32_t kPlatformVerification_GetStorageId_Name = 1365968556;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_SHARED_MESSAGE_IDS_H_