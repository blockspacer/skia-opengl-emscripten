// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1269074724 value is based on sha256(salt + "HidManagerClient1").
constexpr uint32_t kHidManagerClient_DeviceAdded_Name = 1269074724;
// The 1538190208 value is based on sha256(salt + "HidManagerClient2").
constexpr uint32_t kHidManagerClient_DeviceRemoved_Name = 1538190208;
// The 1986304871 value is based on sha256(salt + "HidManager1").
constexpr uint32_t kHidManager_GetDevicesAndSetClient_Name = 1986304871;
// The 564628123 value is based on sha256(salt + "HidManager2").
constexpr uint32_t kHidManager_GetDevices_Name = 564628123;
// The 1947525912 value is based on sha256(salt + "HidManager3").
constexpr uint32_t kHidManager_Connect_Name = 1947525912;
// The 417968275 value is based on sha256(salt + "HidConnection1").
constexpr uint32_t kHidConnection_Read_Name = 417968275;
// The 336359335 value is based on sha256(salt + "HidConnection2").
constexpr uint32_t kHidConnection_Write_Name = 336359335;
// The 107563085 value is based on sha256(salt + "HidConnection3").
constexpr uint32_t kHidConnection_GetFeatureReport_Name = 107563085;
// The 2092336436 value is based on sha256(salt + "HidConnection4").
constexpr uint32_t kHidConnection_SendFeatureReport_Name = 2092336436;
// The 1064880002 value is based on sha256(salt + "HidConnectionClient1").
constexpr uint32_t kHidConnectionClient_OnInputReport_Name = 1064880002;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_