// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kUsbDevice_Open_Name = 0;
constexpr uint32_t kUsbDevice_Close_Name = 1;
constexpr uint32_t kUsbDevice_SetConfiguration_Name = 2;
constexpr uint32_t kUsbDevice_ClaimInterface_Name = 3;
constexpr uint32_t kUsbDevice_ReleaseInterface_Name = 4;
constexpr uint32_t kUsbDevice_SetInterfaceAlternateSetting_Name = 5;
constexpr uint32_t kUsbDevice_Reset_Name = 6;
constexpr uint32_t kUsbDevice_ClearHalt_Name = 7;
constexpr uint32_t kUsbDevice_ControlTransferIn_Name = 8;
constexpr uint32_t kUsbDevice_ControlTransferOut_Name = 9;
constexpr uint32_t kUsbDevice_GenericTransferIn_Name = 10;
constexpr uint32_t kUsbDevice_GenericTransferOut_Name = 11;
constexpr uint32_t kUsbDevice_IsochronousTransferIn_Name = 12;
constexpr uint32_t kUsbDevice_IsochronousTransferOut_Name = 13;
constexpr uint32_t kUsbDeviceClient_OnDeviceOpened_Name = 0;
constexpr uint32_t kUsbDeviceClient_OnDeviceClosed_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_