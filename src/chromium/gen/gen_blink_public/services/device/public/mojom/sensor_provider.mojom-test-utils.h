// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/sensor_provider.mojom.h"


namespace device {
namespace mojom {


class  SensorProviderInterceptorForTesting : public SensorProvider {
  virtual SensorProvider* GetForwardingInterface() = 0;
  void GetSensor(::device::mojom::SensorType type, GetSensorCallback callback) override;
};
class  SensorProviderAsyncWaiter {
 public:
  explicit SensorProviderAsyncWaiter(SensorProvider* proxy);
  ~SensorProviderAsyncWaiter();
  void GetSensor(
      ::device::mojom::SensorType type, SensorCreationResult* out_result, SensorInitParamsPtr* out_init_params);

 private:
  SensorProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SensorProviderAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_TEST_UTILS_H_