// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 351189335 value is based on sha256(salt + "BackgroundSyncService1").
constexpr uint32_t kBackgroundSyncService_Register_Name = 351189335;
// The 1430662273 value is based on sha256(salt + "BackgroundSyncService2").
constexpr uint32_t kBackgroundSyncService_DidResolveRegistration_Name = 1430662273;
// The 1322053306 value is based on sha256(salt + "BackgroundSyncService3").
constexpr uint32_t kBackgroundSyncService_GetRegistrations_Name = 1322053306;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_MESSAGE_IDS_H_