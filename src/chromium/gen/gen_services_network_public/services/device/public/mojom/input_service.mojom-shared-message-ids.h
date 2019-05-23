// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 700816169 value is based on sha256(salt + "InputDeviceManagerClient1").
constexpr uint32_t kInputDeviceManagerClient_InputDeviceAdded_Name = 700816169;
// The 1081463907 value is based on sha256(salt + "InputDeviceManagerClient2").
constexpr uint32_t kInputDeviceManagerClient_InputDeviceRemoved_Name = 1081463907;
// The 1835566287 value is based on sha256(salt + "InputDeviceManager1").
constexpr uint32_t kInputDeviceManager_GetDevicesAndSetClient_Name = 1835566287;
// The 825413116 value is based on sha256(salt + "InputDeviceManager2").
constexpr uint32_t kInputDeviceManager_GetDevices_Name = 825413116;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_