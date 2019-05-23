// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 367665165 value is based on sha256(salt + "HidManagerClient1").
constexpr uint32_t kHidManagerClient_DeviceAdded_Name = 367665165;
// The 1100853023 value is based on sha256(salt + "HidManagerClient2").
constexpr uint32_t kHidManagerClient_DeviceRemoved_Name = 1100853023;
// The 2064231308 value is based on sha256(salt + "HidManager1").
constexpr uint32_t kHidManager_GetDevicesAndSetClient_Name = 2064231308;
// The 589706133 value is based on sha256(salt + "HidManager2").
constexpr uint32_t kHidManager_GetDevices_Name = 589706133;
// The 1908967672 value is based on sha256(salt + "HidManager3").
constexpr uint32_t kHidManager_Connect_Name = 1908967672;
// The 1797065976 value is based on sha256(salt + "HidConnection1").
constexpr uint32_t kHidConnection_Read_Name = 1797065976;
// The 791380314 value is based on sha256(salt + "HidConnection2").
constexpr uint32_t kHidConnection_Write_Name = 791380314;
// The 1453155022 value is based on sha256(salt + "HidConnection3").
constexpr uint32_t kHidConnection_GetFeatureReport_Name = 1453155022;
// The 392163613 value is based on sha256(salt + "HidConnection4").
constexpr uint32_t kHidConnection_SendFeatureReport_Name = 392163613;
// The 1888786027 value is based on sha256(salt + "HidConnectionClient1").
constexpr uint32_t kHidConnectionClient_OnInputReport_Name = 1888786027;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_