// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1282701402 value is based on sha256(salt + "PowerMonitor1").
constexpr uint32_t kPowerMonitor_AddClient_Name = 1282701402;
// The 159819990 value is based on sha256(salt + "PowerMonitorClient1").
constexpr uint32_t kPowerMonitorClient_PowerStateChange_Name = 159819990;
// The 738933499 value is based on sha256(salt + "PowerMonitorClient2").
constexpr uint32_t kPowerMonitorClient_Suspend_Name = 738933499;
// The 1210229826 value is based on sha256(salt + "PowerMonitorClient3").
constexpr uint32_t kPowerMonitorClient_Resume_Name = 1210229826;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_