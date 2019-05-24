// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/sensor_provider.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT SensorProviderInterceptorForTesting : public SensorProvider {
  virtual SensorProvider* GetForwardingInterface() = 0;
  void GetSensor(::device::mojom::blink::SensorType type, GetSensorCallback callback) override;
};
class BLINK_PLATFORM_EXPORT SensorProviderAsyncWaiter {
 public:
  explicit SensorProviderAsyncWaiter(SensorProvider* proxy);
  ~SensorProviderAsyncWaiter();
  void GetSensor(
      ::device::mojom::blink::SensorType type, SensorCreationResult* out_result, SensorInitParamsPtr* out_init_params);

 private:
  SensorProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SensorProviderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_