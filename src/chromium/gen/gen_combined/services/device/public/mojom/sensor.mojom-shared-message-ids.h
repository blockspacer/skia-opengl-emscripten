// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


constexpr uint32_t kSensor_GetDefaultConfiguration_Name = 0;
constexpr uint32_t kSensor_AddConfiguration_Name = 1;
constexpr uint32_t kSensor_RemoveConfiguration_Name = 2;
constexpr uint32_t kSensor_Suspend_Name = 3;
constexpr uint32_t kSensor_Resume_Name = 4;
constexpr uint32_t kSensor_ConfigureReadingChangeNotifications_Name = 5;
constexpr uint32_t kSensorClient_RaiseError_Name = 0;
constexpr uint32_t kSensorClient_SensorReadingChanged_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_SHARED_MESSAGE_IDS_H_