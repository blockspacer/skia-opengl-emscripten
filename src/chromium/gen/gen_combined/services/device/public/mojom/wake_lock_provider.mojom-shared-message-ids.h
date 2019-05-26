// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 294368223 value is based on sha256(salt + "WakeLockProvider1").
constexpr uint32_t kWakeLockProvider_GetWakeLockContextForID_Name = 294368223;
// The 1170829262 value is based on sha256(salt + "WakeLockProvider2").
constexpr uint32_t kWakeLockProvider_GetWakeLockWithoutContext_Name = 1170829262;
// The 1540955828 value is based on sha256(salt + "WakeLockProvider3").
constexpr uint32_t kWakeLockProvider_NotifyOnWakeLockDeactivation_Name = 1540955828;
// The 1742860509 value is based on sha256(salt + "WakeLockProvider4").
constexpr uint32_t kWakeLockProvider_GetActiveWakeLocksForTests_Name = 1742860509;
// The 1497210956 value is based on sha256(salt + "WakeLockObserver1").
constexpr uint32_t kWakeLockObserver_OnWakeLockDeactivated_Name = 1497210956;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_