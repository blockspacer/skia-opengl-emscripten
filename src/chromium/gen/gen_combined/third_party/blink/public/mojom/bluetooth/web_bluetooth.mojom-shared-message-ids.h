// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1701765083 value is based on sha256(salt + "WebBluetoothService1").
constexpr uint32_t kWebBluetoothService_RequestDevice_Name = 1701765083;
// The 1085224529 value is based on sha256(salt + "WebBluetoothService2").
constexpr uint32_t kWebBluetoothService_RemoteServerConnect_Name = 1085224529;
// The 2109794032 value is based on sha256(salt + "WebBluetoothService3").
constexpr uint32_t kWebBluetoothService_RemoteServerDisconnect_Name = 2109794032;
// The 1571210339 value is based on sha256(salt + "WebBluetoothService4").
constexpr uint32_t kWebBluetoothService_RemoteServerGetPrimaryServices_Name = 1571210339;
// The 1413425954 value is based on sha256(salt + "WebBluetoothService5").
constexpr uint32_t kWebBluetoothService_RemoteServiceGetCharacteristics_Name = 1413425954;
// The 171892666 value is based on sha256(salt + "WebBluetoothService6").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicReadValue_Name = 171892666;
// The 949845679 value is based on sha256(salt + "WebBluetoothService7").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicWriteValue_Name = 949845679;
// The 1764990394 value is based on sha256(salt + "WebBluetoothService8").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicStartNotifications_Name = 1764990394;
// The 529480837 value is based on sha256(salt + "WebBluetoothService9").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicStopNotifications_Name = 529480837;
// The 174958394 value is based on sha256(salt + "WebBluetoothService10").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name = 174958394;
// The 226301449 value is based on sha256(salt + "WebBluetoothService11").
constexpr uint32_t kWebBluetoothService_RemoteDescriptorReadValue_Name = 226301449;
// The 506016997 value is based on sha256(salt + "WebBluetoothService12").
constexpr uint32_t kWebBluetoothService_RemoteDescriptorWriteValue_Name = 506016997;
// The 623033161 value is based on sha256(salt + "WebBluetoothService13").
constexpr uint32_t kWebBluetoothService_RequestScanningStart_Name = 623033161;
// The 657432622 value is based on sha256(salt + "WebBluetoothServerClient1").
constexpr uint32_t kWebBluetoothServerClient_GATTServerDisconnected_Name = 657432622;
// The 1026560971 value is based on sha256(salt + "WebBluetoothCharacteristicClient1").
constexpr uint32_t kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name = 1026560971;
// The 1612988766 value is based on sha256(salt + "WebBluetoothScanClient1").
constexpr uint32_t kWebBluetoothScanClient_ScanEvent_Name = 1612988766;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_