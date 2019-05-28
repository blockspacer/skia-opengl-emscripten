// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 87885297 value is based on sha256(salt + "PowerMonitor1").
constexpr uint32_t kPowerMonitor_AddClient_Name = 87885297;
// The 1242630663 value is based on sha256(salt + "PowerMonitorClient1").
constexpr uint32_t kPowerMonitorClient_PowerStateChange_Name = 1242630663;
// The 700510803 value is based on sha256(salt + "PowerMonitorClient2").
constexpr uint32_t kPowerMonitorClient_Suspend_Name = 700510803;
// The 183912095 value is based on sha256(salt + "PowerMonitorClient3").
constexpr uint32_t kPowerMonitorClient_Resume_Name = 183912095;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_