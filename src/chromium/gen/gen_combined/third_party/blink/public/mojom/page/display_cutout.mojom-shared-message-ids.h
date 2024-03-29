// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1573385222 value is based on sha256(salt + "DisplayCutoutHost1").
constexpr uint32_t kDisplayCutoutHost_NotifyViewportFitChanged_Name = 1573385222;
// The 1759197638 value is based on sha256(salt + "DisplayCutoutClient1").
constexpr uint32_t kDisplayCutoutClient_SetSafeArea_Name = 1759197638;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_SHARED_MESSAGE_IDS_H_