// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/vibration_manager.mojom.h"


namespace device {
namespace mojom {


class  VibrationManagerInterceptorForTesting : public VibrationManager {
  virtual VibrationManager* GetForwardingInterface() = 0;
  void Vibrate(int64_t milliseconds, VibrateCallback callback) override;
  void Cancel(CancelCallback callback) override;
};
class  VibrationManagerAsyncWaiter {
 public:
  explicit VibrationManagerAsyncWaiter(VibrationManager* proxy);
  ~VibrationManagerAsyncWaiter();
  void Vibrate(
      int64_t milliseconds);
  void Cancel(
      );

 private:
  VibrationManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VibrationManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_TEST_UTILS_H_