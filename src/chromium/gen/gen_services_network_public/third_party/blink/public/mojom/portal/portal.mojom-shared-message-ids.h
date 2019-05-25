// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 162578282 value is based on sha256(salt + "Portal1").
constexpr uint32_t kPortal_Navigate_Name = 162578282;
// The 1971737900 value is based on sha256(salt + "Portal2").
constexpr uint32_t kPortal_Activate_Name = 1971737900;
// The 667443263 value is based on sha256(salt + "Portal3").
constexpr uint32_t kPortal_PostMessageToGuest_Name = 667443263;
// The 149826047 value is based on sha256(salt + "PortalClient1").
constexpr uint32_t kPortalClient_ForwardMessageFromGuest_Name = 149826047;
// The 518727623 value is based on sha256(salt + "PortalClient2").
constexpr uint32_t kPortalClient_DispatchLoadEvent_Name = 518727623;
// The 42992376 value is based on sha256(salt + "PortalHost1").
constexpr uint32_t kPortalHost_PostMessageToHost_Name = 42992376;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_SHARED_MESSAGE_IDS_H_