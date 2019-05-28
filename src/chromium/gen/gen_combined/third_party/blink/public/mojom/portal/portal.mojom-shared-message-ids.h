// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1497390086 value is based on sha256(salt + "Portal1").
constexpr uint32_t kPortal_Navigate_Name = 1497390086;
// The 370867264 value is based on sha256(salt + "Portal2").
constexpr uint32_t kPortal_Activate_Name = 370867264;
// The 1372131805 value is based on sha256(salt + "Portal3").
constexpr uint32_t kPortal_PostMessageToGuest_Name = 1372131805;
// The 749522377 value is based on sha256(salt + "PortalClient1").
constexpr uint32_t kPortalClient_ForwardMessageFromGuest_Name = 749522377;
// The 450896787 value is based on sha256(salt + "PortalClient2").
constexpr uint32_t kPortalClient_DispatchLoadEvent_Name = 450896787;
// The 1282506410 value is based on sha256(salt + "PortalHost1").
constexpr uint32_t kPortalHost_PostMessageToHost_Name = 1282506410;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_SHARED_MESSAGE_IDS_H_