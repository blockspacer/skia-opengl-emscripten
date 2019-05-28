// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 206354838 value is based on sha256(salt + "GamepadObserver1").
constexpr uint32_t kGamepadObserver_GamepadConnected_Name = 206354838;
// The 306677693 value is based on sha256(salt + "GamepadObserver2").
constexpr uint32_t kGamepadObserver_GamepadDisconnected_Name = 306677693;
// The 1183104285 value is based on sha256(salt + "GamepadObserver3").
constexpr uint32_t kGamepadObserver_GamepadButtonOrAxisChanged_Name = 1183104285;
// The 725084007 value is based on sha256(salt + "GamepadMonitor1").
constexpr uint32_t kGamepadMonitor_GamepadStartPolling_Name = 725084007;
// The 1525844144 value is based on sha256(salt + "GamepadMonitor2").
constexpr uint32_t kGamepadMonitor_GamepadStopPolling_Name = 1525844144;
// The 1391704236 value is based on sha256(salt + "GamepadMonitor3").
constexpr uint32_t kGamepadMonitor_SetObserver_Name = 1391704236;
// The 1752990601 value is based on sha256(salt + "GamepadHapticsManager1").
constexpr uint32_t kGamepadHapticsManager_PlayVibrationEffectOnce_Name = 1752990601;
// The 1369319802 value is based on sha256(salt + "GamepadHapticsManager2").
constexpr uint32_t kGamepadHapticsManager_ResetVibrationActuator_Name = 1369319802;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_