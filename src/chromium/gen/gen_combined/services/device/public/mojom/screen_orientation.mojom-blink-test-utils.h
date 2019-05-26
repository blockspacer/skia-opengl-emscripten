// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/screen_orientation.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT ScreenOrientationInterceptorForTesting : public ScreenOrientation {
  virtual ScreenOrientation* GetForwardingInterface() = 0;
  void LockOrientation(::blink::WebScreenOrientationLockType orientation, LockOrientationCallback callback) override;
  void UnlockOrientation() override;
};
class BLINK_PLATFORM_EXPORT ScreenOrientationAsyncWaiter {
 public:
  explicit ScreenOrientationAsyncWaiter(ScreenOrientation* proxy);
  ~ScreenOrientationAsyncWaiter();
  void LockOrientation(
      ::blink::WebScreenOrientationLockType orientation, ::device::mojom::blink::ScreenOrientationLockResult* out_result);

 private:
  ScreenOrientation* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ScreenOrientationAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT ScreenOrientationListenerInterceptorForTesting : public ScreenOrientationListener {
  virtual ScreenOrientationListener* GetForwardingInterface() = 0;
  void IsAutoRotateEnabledByUser(IsAutoRotateEnabledByUserCallback callback) override;
};
class BLINK_PLATFORM_EXPORT ScreenOrientationListenerAsyncWaiter {
 public:
  explicit ScreenOrientationListenerAsyncWaiter(ScreenOrientationListener* proxy);
  ~ScreenOrientationListenerAsyncWaiter();
  void IsAutoRotateEnabledByUser(
      bool* out_enabled);

 private:
  ScreenOrientationListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ScreenOrientationListenerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_TEST_UTILS_H_