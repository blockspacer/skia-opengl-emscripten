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


#include "services/device/public/mojom/screen_orientation.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom-blink.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/public/common/screen_orientation/web_screen_orientation_mojom_traits.h"
#endif


namespace device {
namespace mojom {
namespace blink {


void ScreenOrientationInterceptorForTesting::LockOrientation(::blink::WebScreenOrientationLockType orientation, LockOrientationCallback callback) {
  GetForwardingInterface()->LockOrientation(std::move(orientation), std::move(callback));
}
void ScreenOrientationInterceptorForTesting::UnlockOrientation() {
  GetForwardingInterface()->UnlockOrientation();
}
ScreenOrientationAsyncWaiter::ScreenOrientationAsyncWaiter(
    ScreenOrientation* proxy) : proxy_(proxy) {}

ScreenOrientationAsyncWaiter::~ScreenOrientationAsyncWaiter() = default;

void ScreenOrientationAsyncWaiter::LockOrientation(
    ::blink::WebScreenOrientationLockType orientation, ::device::mojom::blink::ScreenOrientationLockResult* out_result) {
  base::RunLoop loop;
  proxy_->LockOrientation(std::move(orientation),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::device::mojom::blink::ScreenOrientationLockResult* out_result
,
             ::device::mojom::blink::ScreenOrientationLockResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}



void ScreenOrientationListenerInterceptorForTesting::IsAutoRotateEnabledByUser(IsAutoRotateEnabledByUserCallback callback) {
  GetForwardingInterface()->IsAutoRotateEnabledByUser(std::move(callback));
}
ScreenOrientationListenerAsyncWaiter::ScreenOrientationListenerAsyncWaiter(
    ScreenOrientationListener* proxy) : proxy_(proxy) {}

ScreenOrientationListenerAsyncWaiter::~ScreenOrientationListenerAsyncWaiter() = default;

void ScreenOrientationListenerAsyncWaiter::IsAutoRotateEnabledByUser(
    bool* out_enabled) {
  base::RunLoop loop;
  proxy_->IsAutoRotateEnabledByUser(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_enabled
,
             bool enabled) {*out_enabled = std::move(enabled);
            loop->Quit();
          },
          &loop,
          out_enabled));
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