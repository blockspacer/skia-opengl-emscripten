// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kUsbDeviceManager_EnumerateDevicesAndSetClient_Name = 0;
constexpr uint32_t kUsbDeviceManager_GetDevices_Name = 1;
constexpr uint32_t kUsbDeviceManager_GetDevice_Name = 2;
constexpr uint32_t kUsbDeviceManager_SetClient_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_