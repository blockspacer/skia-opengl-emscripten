// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 2017308072 value is based on sha256(salt + "WakeLock1").
constexpr uint32_t kWakeLock_RequestWakeLock_Name = 2017308072;
// The 1135940108 value is based on sha256(salt + "WakeLock2").
constexpr uint32_t kWakeLock_CancelWakeLock_Name = 1135940108;
// The 360144793 value is based on sha256(salt + "WakeLock3").
constexpr uint32_t kWakeLock_AddClient_Name = 360144793;
// The 1851030998 value is based on sha256(salt + "WakeLock4").
constexpr uint32_t kWakeLock_ChangeType_Name = 1851030998;
// The 184004284 value is based on sha256(salt + "WakeLock5").
constexpr uint32_t kWakeLock_HasWakeLockForTests_Name = 184004284;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_