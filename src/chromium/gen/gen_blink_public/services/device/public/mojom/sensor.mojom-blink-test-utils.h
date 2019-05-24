// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/sensor.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT SensorInterceptorForTesting : public Sensor {
  virtual Sensor* GetForwardingInterface() = 0;
  void GetDefaultConfiguration(GetDefaultConfigurationCallback callback) override;
  void AddConfiguration(SensorConfigurationPtr configuration, AddConfigurationCallback callback) override;
  void RemoveConfiguration(SensorConfigurationPtr configuration) override;
  void Suspend() override;
  void Resume() override;
  void ConfigureReadingChangeNotifications(bool enabled) override;
};
class BLINK_PLATFORM_EXPORT SensorAsyncWaiter {
 public:
  explicit SensorAsyncWaiter(Sensor* proxy);
  ~SensorAsyncWaiter();
  void GetDefaultConfiguration(
      SensorConfigurationPtr* out_configuration);
  void AddConfiguration(
      SensorConfigurationPtr configuration, bool* out_success);

 private:
  Sensor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SensorAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT SensorClientInterceptorForTesting : public SensorClient {
  virtual SensorClient* GetForwardingInterface() = 0;
  void RaiseError() override;
  void SensorReadingChanged() override;
};
class BLINK_PLATFORM_EXPORT SensorClientAsyncWaiter {
 public:
  explicit SensorClientAsyncWaiter(SensorClient* proxy);
  ~SensorClientAsyncWaiter();

 private:
  SensorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SensorClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_BLINK_TEST_UTILS_H_