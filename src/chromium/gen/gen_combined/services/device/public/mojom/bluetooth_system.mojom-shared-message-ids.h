// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 2012502012 value is based on sha256(salt + "BluetoothSystemFactory1").
constexpr uint32_t kBluetoothSystemFactory_Create_Name = 2012502012;
// The 560077377 value is based on sha256(salt + "BluetoothSystem1").
constexpr uint32_t kBluetoothSystem_GetState_Name = 560077377;
// The 429562962 value is based on sha256(salt + "BluetoothSystem2").
constexpr uint32_t kBluetoothSystem_SetPowered_Name = 429562962;
// The 1569760121 value is based on sha256(salt + "BluetoothSystem3").
constexpr uint32_t kBluetoothSystem_GetScanState_Name = 1569760121;
// The 1202279261 value is based on sha256(salt + "BluetoothSystem4").
constexpr uint32_t kBluetoothSystem_StartScan_Name = 1202279261;
// The 179938305 value is based on sha256(salt + "BluetoothSystem5").
constexpr uint32_t kBluetoothSystem_StopScan_Name = 179938305;
// The 1300869308 value is based on sha256(salt + "BluetoothSystem6").
constexpr uint32_t kBluetoothSystem_GetAvailableDevices_Name = 1300869308;
// The 1520310386 value is based on sha256(salt + "BluetoothSystemClient1").
constexpr uint32_t kBluetoothSystemClient_OnStateChanged_Name = 1520310386;
// The 1575278183 value is based on sha256(salt + "BluetoothSystemClient2").
constexpr uint32_t kBluetoothSystemClient_OnScanStateChanged_Name = 1575278183;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_