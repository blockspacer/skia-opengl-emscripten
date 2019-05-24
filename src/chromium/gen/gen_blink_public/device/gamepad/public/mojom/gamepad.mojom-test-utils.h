// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_TEST_UTILS_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_TEST_UTILS_H_

#include "device/gamepad/public/mojom/gamepad.mojom.h"
#include "base/component_export.h"


namespace device {
namespace mojom {


class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadObserverInterceptorForTesting : public GamepadObserver {
  virtual GamepadObserver* GetForwardingInterface() = 0;
  void GamepadConnected(uint32_t index, const device::Gamepad& gamepad) override;
  void GamepadDisconnected(uint32_t index, const device::Gamepad& gamepad) override;
  void GamepadButtonOrAxisChanged(uint32_t index, const device::Gamepad& gamepad) override;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadObserverAsyncWaiter {
 public:
  explicit GamepadObserverAsyncWaiter(GamepadObserver* proxy);
  ~GamepadObserverAsyncWaiter();

 private:
  GamepadObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GamepadObserverAsyncWaiter);
};


class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadMonitorInterceptorForTesting : public GamepadMonitor {
  virtual GamepadMonitor* GetForwardingInterface() = 0;
  void GamepadStartPolling(GamepadStartPollingCallback callback) override;
  void GamepadStopPolling(GamepadStopPollingCallback callback) override;
  void SetObserver(GamepadObserverPtr gamepad_observer) override;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadMonitorAsyncWaiter {
 public:
  explicit GamepadMonitorAsyncWaiter(GamepadMonitor* proxy);
  ~GamepadMonitorAsyncWaiter();
  void GamepadStartPolling(
      base::ReadOnlySharedMemoryRegion* out_memory_region);
  void GamepadStopPolling(
      );

 private:
  GamepadMonitor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GamepadMonitorAsyncWaiter);
};


class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadHapticsManagerInterceptorForTesting : public GamepadHapticsManager {
  virtual GamepadHapticsManager* GetForwardingInterface() = 0;
  void PlayVibrationEffectOnce(uint32_t pad_index, GamepadHapticEffectType type, GamepadEffectParametersPtr params, PlayVibrationEffectOnceCallback callback) override;
  void ResetVibrationActuator(uint32_t pad_index, ResetVibrationActuatorCallback callback) override;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadHapticsManagerAsyncWaiter {
 public:
  explicit GamepadHapticsManagerAsyncWaiter(GamepadHapticsManager* proxy);
  ~GamepadHapticsManagerAsyncWaiter();
  void PlayVibrationEffectOnce(
      uint32_t pad_index, GamepadHapticEffectType type, GamepadEffectParametersPtr params, GamepadHapticsResult* out_result);
  void ResetVibrationActuator(
      uint32_t pad_index, GamepadHapticsResult* out_result);

 private:
  GamepadHapticsManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GamepadHapticsManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_TEST_UTILS_H_