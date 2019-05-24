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


#include "services/device/public/mojom/vibration_manager.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_BLINK_JUMBO_H_
#endif


namespace device {
namespace mojom {
namespace blink {


void VibrationManagerInterceptorForTesting::Vibrate(int64_t milliseconds, VibrateCallback callback) {
  GetForwardingInterface()->Vibrate(std::move(milliseconds), std::move(callback));
}
void VibrationManagerInterceptorForTesting::Cancel(CancelCallback callback) {
  GetForwardingInterface()->Cancel(std::move(callback));
}
VibrationManagerAsyncWaiter::VibrationManagerAsyncWaiter(
    VibrationManager* proxy) : proxy_(proxy) {}

VibrationManagerAsyncWaiter::~VibrationManagerAsyncWaiter() = default;

void VibrationManagerAsyncWaiter::Vibrate(
    int64_t milliseconds) {
  base::RunLoop loop;
  proxy_->Vibrate(std::move(milliseconds),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void VibrationManagerAsyncWaiter::Cancel(
    ) {
  base::RunLoop loop;
  proxy_->Cancel(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif