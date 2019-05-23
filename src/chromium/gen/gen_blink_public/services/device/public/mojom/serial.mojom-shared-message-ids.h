// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 422998895 value is based on sha256(salt + "SerialPortManager1").
constexpr uint32_t kSerialPortManager_GetDevices_Name = 422998895;
// The 1417625937 value is based on sha256(salt + "SerialPortManager2").
constexpr uint32_t kSerialPortManager_GetPort_Name = 1417625937;
// The 1430493837 value is based on sha256(salt + "SerialPort1").
constexpr uint32_t kSerialPort_Open_Name = 1430493837;
// The 314654651 value is based on sha256(salt + "SerialPort2").
constexpr uint32_t kSerialPort_ClearSendError_Name = 314654651;
// The 1391832256 value is based on sha256(salt + "SerialPort3").
constexpr uint32_t kSerialPort_ClearReadError_Name = 1391832256;
// The 1793815278 value is based on sha256(salt + "SerialPort4").
constexpr uint32_t kSerialPort_Flush_Name = 1793815278;
// The 334548885 value is based on sha256(salt + "SerialPort5").
constexpr uint32_t kSerialPort_GetControlSignals_Name = 334548885;
// The 1352980616 value is based on sha256(salt + "SerialPort6").
constexpr uint32_t kSerialPort_SetControlSignals_Name = 1352980616;
// The 1629570034 value is based on sha256(salt + "SerialPort7").
constexpr uint32_t kSerialPort_ConfigurePort_Name = 1629570034;
// The 642906998 value is based on sha256(salt + "SerialPort8").
constexpr uint32_t kSerialPort_GetPortInfo_Name = 642906998;
// The 1699734787 value is based on sha256(salt + "SerialPort9").
constexpr uint32_t kSerialPort_SetBreak_Name = 1699734787;
// The 259022733 value is based on sha256(salt + "SerialPort10").
constexpr uint32_t kSerialPort_ClearBreak_Name = 259022733;
// The 1889306514 value is based on sha256(salt + "SerialPortClient1").
constexpr uint32_t kSerialPortClient_OnReadError_Name = 1889306514;
// The 1150681918 value is based on sha256(salt + "SerialPortClient2").
constexpr uint32_t kSerialPortClient_OnSendError_Name = 1150681918;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_