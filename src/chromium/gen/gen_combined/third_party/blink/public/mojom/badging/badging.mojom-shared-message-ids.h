// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 69000444 value is based on sha256(salt + "BadgeService1").
constexpr uint32_t kBadgeService_SetInteger_Name = 69000444;
// The 722141220 value is based on sha256(salt + "BadgeService2").
constexpr uint32_t kBadgeService_SetFlag_Name = 722141220;
// The 797899703 value is based on sha256(salt + "BadgeService3").
constexpr uint32_t kBadgeService_ClearBadge_Name = 797899703;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_SHARED_MESSAGE_IDS_H_