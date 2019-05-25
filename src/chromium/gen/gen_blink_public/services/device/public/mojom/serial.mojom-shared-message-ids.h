// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1690960531 value is based on sha256(salt + "SerialPortManager1").
constexpr uint32_t kSerialPortManager_GetDevices_Name = 1690960531;
// The 508113172 value is based on sha256(salt + "SerialPortManager2").
constexpr uint32_t kSerialPortManager_GetPort_Name = 508113172;
// The 1024789080 value is based on sha256(salt + "SerialPort1").
constexpr uint32_t kSerialPort_Open_Name = 1024789080;
// The 1333798324 value is based on sha256(salt + "SerialPort2").
constexpr uint32_t kSerialPort_ClearSendError_Name = 1333798324;
// The 1635196831 value is based on sha256(salt + "SerialPort3").
constexpr uint32_t kSerialPort_ClearReadError_Name = 1635196831;
// The 1654016726 value is based on sha256(salt + "SerialPort4").
constexpr uint32_t kSerialPort_Flush_Name = 1654016726;
// The 871123182 value is based on sha256(salt + "SerialPort5").
constexpr uint32_t kSerialPort_GetControlSignals_Name = 871123182;
// The 320518629 value is based on sha256(salt + "SerialPort6").
constexpr uint32_t kSerialPort_SetControlSignals_Name = 320518629;
// The 1915236140 value is based on sha256(salt + "SerialPort7").
constexpr uint32_t kSerialPort_ConfigurePort_Name = 1915236140;
// The 1296062430 value is based on sha256(salt + "SerialPort8").
constexpr uint32_t kSerialPort_GetPortInfo_Name = 1296062430;
// The 1432937960 value is based on sha256(salt + "SerialPort9").
constexpr uint32_t kSerialPort_SetBreak_Name = 1432937960;
// The 1613493350 value is based on sha256(salt + "SerialPort10").
constexpr uint32_t kSerialPort_ClearBreak_Name = 1613493350;
// The 135651498 value is based on sha256(salt + "SerialPortClient1").
constexpr uint32_t kSerialPortClient_OnReadError_Name = 135651498;
// The 874952324 value is based on sha256(salt + "SerialPortClient2").
constexpr uint32_t kSerialPortClient_OnSendError_Name = 874952324;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_