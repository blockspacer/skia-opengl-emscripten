// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "device/gamepad/public/mojom/gamepad.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/shared_memory.mojom.h"


#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_JUMBO_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_JUMBO_H_
#include "device/gamepad/public/cpp/gamepad_mojom_traits.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif


namespace device {
namespace mojom {


void GamepadObserverInterceptorForTesting::GamepadConnected(uint32_t index, const device::Gamepad& gamepad) {
  GetForwardingInterface()->GamepadConnected(std::move(index), std::move(gamepad));
}
void GamepadObserverInterceptorForTesting::GamepadDisconnected(uint32_t index, const device::Gamepad& gamepad) {
  GetForwardingInterface()->GamepadDisconnected(std::move(index), std::move(gamepad));
}
void GamepadObserverInterceptorForTesting::GamepadButtonOrAxisChanged(uint32_t index, const device::Gamepad& gamepad) {
  GetForwardingInterface()->GamepadButtonOrAxisChanged(std::move(index), std::move(gamepad));
}
GamepadObserverAsyncWaiter::GamepadObserverAsyncWaiter(
    GamepadObserver* proxy) : proxy_(proxy) {}

GamepadObserverAsyncWaiter::~GamepadObserverAsyncWaiter() = default;




void GamepadMonitorInterceptorForTesting::GamepadStartPolling(GamepadStartPollingCallback callback) {
  GetForwardingInterface()->GamepadStartPolling(std::move(callback));
}
void GamepadMonitorInterceptorForTesting::GamepadStopPolling(GamepadStopPollingCallback callback) {
  GetForwardingInterface()->GamepadStopPolling(std::move(callback));
}
void GamepadMonitorInterceptorForTesting::SetObserver(GamepadObserverPtr gamepad_observer) {
  GetForwardingInterface()->SetObserver(std::move(gamepad_observer));
}
GamepadMonitorAsyncWaiter::GamepadMonitorAsyncWaiter(
    GamepadMonitor* proxy) : proxy_(proxy) {}

GamepadMonitorAsyncWaiter::~GamepadMonitorAsyncWaiter() = default;

void GamepadMonitorAsyncWaiter::GamepadStartPolling(
    base::ReadOnlySharedMemoryRegion* out_memory_region) {
  base::RunLoop loop;
  proxy_->GamepadStartPolling(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::ReadOnlySharedMemoryRegion* out_memory_region
,
             base::ReadOnlySharedMemoryRegion memory_region) {*out_memory_region = std::move(memory_region);
            loop->Quit();
          },
          &loop,
          out_memory_region));
  loop.Run();
}
void GamepadMonitorAsyncWaiter::GamepadStopPolling(
    ) {
  base::RunLoop loop;
  proxy_->GamepadStopPolling(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void GamepadHapticsManagerInterceptorForTesting::PlayVibrationEffectOnce(uint32_t pad_index, GamepadHapticEffectType type, GamepadEffectParametersPtr params, PlayVibrationEffectOnceCallback callback) {
  GetForwardingInterface()->PlayVibrationEffectOnce(std::move(pad_index), std::move(type), std::move(params), std::move(callback));
}
void GamepadHapticsManagerInterceptorForTesting::ResetVibrationActuator(uint32_t pad_index, ResetVibrationActuatorCallback callback) {
  GetForwardingInterface()->ResetVibrationActuator(std::move(pad_index), std::move(callback));
}
GamepadHapticsManagerAsyncWaiter::GamepadHapticsManagerAsyncWaiter(
    GamepadHapticsManager* proxy) : proxy_(proxy) {}

GamepadHapticsManagerAsyncWaiter::~GamepadHapticsManagerAsyncWaiter() = default;

void GamepadHapticsManagerAsyncWaiter::PlayVibrationEffectOnce(
    uint32_t pad_index, GamepadHapticEffectType type, GamepadEffectParametersPtr params, GamepadHapticsResult* out_result) {
  base::RunLoop loop;
  proxy_->PlayVibrationEffectOnce(std::move(pad_index),std::move(type),std::move(params),
      base::BindOnce(
          [](base::RunLoop* loop,
             GamepadHapticsResult* out_result
,
             GamepadHapticsResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void GamepadHapticsManagerAsyncWaiter::ResetVibrationActuator(
    uint32_t pad_index, GamepadHapticsResult* out_result) {
  base::RunLoop loop;
  proxy_->ResetVibrationActuator(std::move(pad_index),
      base::BindOnce(
          [](base::RunLoop* loop,
             GamepadHapticsResult* out_result
,
             GamepadHapticsResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif