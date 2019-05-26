// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 259037690 value is based on sha256(salt + "FrameHostTestInterface1").
constexpr uint32_t kFrameHostTestInterface_Ping_Name = 259037690;
// The 1771715231 value is based on sha256(salt + "FrameHostTestInterface2").
constexpr uint32_t kFrameHostTestInterface_GetName_Name = 1771715231;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_SHARED_MESSAGE_IDS_H_