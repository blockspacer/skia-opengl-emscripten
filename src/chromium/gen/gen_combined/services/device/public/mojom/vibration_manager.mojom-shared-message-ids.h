// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 104392361 value is based on sha256(salt + "VibrationManager1").
constexpr uint32_t kVibrationManager_Vibrate_Name = 104392361;
// The 785637130 value is based on sha256(salt + "VibrationManager2").
constexpr uint32_t kVibrationManager_Cancel_Name = 785637130;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_