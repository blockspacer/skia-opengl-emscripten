// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 124300402 value is based on sha256(salt + "WebBluetoothService1").
constexpr uint32_t kWebBluetoothService_RequestDevice_Name = 124300402;
// The 2004131431 value is based on sha256(salt + "WebBluetoothService2").
constexpr uint32_t kWebBluetoothService_RemoteServerConnect_Name = 2004131431;
// The 1540714948 value is based on sha256(salt + "WebBluetoothService3").
constexpr uint32_t kWebBluetoothService_RemoteServerDisconnect_Name = 1540714948;
// The 1023735619 value is based on sha256(salt + "WebBluetoothService4").
constexpr uint32_t kWebBluetoothService_RemoteServerGetPrimaryServices_Name = 1023735619;
// The 970788020 value is based on sha256(salt + "WebBluetoothService5").
constexpr uint32_t kWebBluetoothService_RemoteServiceGetCharacteristics_Name = 970788020;
// The 1945057206 value is based on sha256(salt + "WebBluetoothService6").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicReadValue_Name = 1945057206;
// The 1118095467 value is based on sha256(salt + "WebBluetoothService7").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicWriteValue_Name = 1118095467;
// The 1839270363 value is based on sha256(salt + "WebBluetoothService8").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicStartNotifications_Name = 1839270363;
// The 1985162635 value is based on sha256(salt + "WebBluetoothService9").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicStopNotifications_Name = 1985162635;
// The 1714563678 value is based on sha256(salt + "WebBluetoothService10").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name = 1714563678;
// The 809157368 value is based on sha256(salt + "WebBluetoothService11").
constexpr uint32_t kWebBluetoothService_RemoteDescriptorReadValue_Name = 809157368;
// The 906708085 value is based on sha256(salt + "WebBluetoothService12").
constexpr uint32_t kWebBluetoothService_RemoteDescriptorWriteValue_Name = 906708085;
// The 714966240 value is based on sha256(salt + "WebBluetoothService13").
constexpr uint32_t kWebBluetoothService_RequestScanningStart_Name = 714966240;
// The 1804349855 value is based on sha256(salt + "WebBluetoothServerClient1").
constexpr uint32_t kWebBluetoothServerClient_GATTServerDisconnected_Name = 1804349855;
// The 2130037081 value is based on sha256(salt + "WebBluetoothCharacteristicClient1").
constexpr uint32_t kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name = 2130037081;
// The 399111503 value is based on sha256(salt + "WebBluetoothScanClient1").
constexpr uint32_t kWebBluetoothScanClient_ScanEvent_Name = 399111503;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_