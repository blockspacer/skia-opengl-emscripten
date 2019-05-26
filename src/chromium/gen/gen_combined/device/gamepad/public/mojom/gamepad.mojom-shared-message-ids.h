// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1172572971 value is based on sha256(salt + "GamepadObserver1").
constexpr uint32_t kGamepadObserver_GamepadConnected_Name = 1172572971;
// The 1344715377 value is based on sha256(salt + "GamepadObserver2").
constexpr uint32_t kGamepadObserver_GamepadDisconnected_Name = 1344715377;
// The 969501178 value is based on sha256(salt + "GamepadObserver3").
constexpr uint32_t kGamepadObserver_GamepadButtonOrAxisChanged_Name = 969501178;
// The 1827564842 value is based on sha256(salt + "GamepadMonitor1").
constexpr uint32_t kGamepadMonitor_GamepadStartPolling_Name = 1827564842;
// The 1594039122 value is based on sha256(salt + "GamepadMonitor2").
constexpr uint32_t kGamepadMonitor_GamepadStopPolling_Name = 1594039122;
// The 764720800 value is based on sha256(salt + "GamepadMonitor3").
constexpr uint32_t kGamepadMonitor_SetObserver_Name = 764720800;
// The 893357777 value is based on sha256(salt + "GamepadHapticsManager1").
constexpr uint32_t kGamepadHapticsManager_PlayVibrationEffectOnce_Name = 893357777;
// The 62973833 value is based on sha256(salt + "GamepadHapticsManager2").
constexpr uint32_t kGamepadHapticsManager_ResetVibrationActuator_Name = 62973833;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_