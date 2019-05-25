// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1994538910 value is based on sha256(salt + "BluetoothSystemFactory1").
constexpr uint32_t kBluetoothSystemFactory_Create_Name = 1994538910;
// The 67869680 value is based on sha256(salt + "BluetoothSystem1").
constexpr uint32_t kBluetoothSystem_GetState_Name = 67869680;
// The 2067773635 value is based on sha256(salt + "BluetoothSystem2").
constexpr uint32_t kBluetoothSystem_SetPowered_Name = 2067773635;
// The 686080500 value is based on sha256(salt + "BluetoothSystem3").
constexpr uint32_t kBluetoothSystem_GetScanState_Name = 686080500;
// The 1542375020 value is based on sha256(salt + "BluetoothSystem4").
constexpr uint32_t kBluetoothSystem_StartScan_Name = 1542375020;
// The 593467156 value is based on sha256(salt + "BluetoothSystem5").
constexpr uint32_t kBluetoothSystem_StopScan_Name = 593467156;
// The 1948140086 value is based on sha256(salt + "BluetoothSystem6").
constexpr uint32_t kBluetoothSystem_GetAvailableDevices_Name = 1948140086;
// The 1436276034 value is based on sha256(salt + "BluetoothSystemClient1").
constexpr uint32_t kBluetoothSystemClient_OnStateChanged_Name = 1436276034;
// The 1691309197 value is based on sha256(salt + "BluetoothSystemClient2").
constexpr uint32_t kBluetoothSystemClient_OnScanStateChanged_Name = 1691309197;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_