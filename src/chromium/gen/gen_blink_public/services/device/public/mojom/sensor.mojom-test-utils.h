// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/sensor.mojom.h"


namespace device {
namespace mojom {


class  SensorInterceptorForTesting : public Sensor {
  virtual Sensor* GetForwardingInterface() = 0;
  void GetDefaultConfiguration(GetDefaultConfigurationCallback callback) override;
  void AddConfiguration(const device::PlatformSensorConfiguration& configuration, AddConfigurationCallback callback) override;
  void RemoveConfiguration(const device::PlatformSensorConfiguration& configuration) override;
  void Suspend() override;
  void Resume() override;
  void ConfigureReadingChangeNotifications(bool enabled) override;
};
class  SensorAsyncWaiter {
 public:
  explicit SensorAsyncWaiter(Sensor* proxy);
  ~SensorAsyncWaiter();
  void GetDefaultConfiguration(
      device::PlatformSensorConfiguration* out_configuration);
  void AddConfiguration(
      const device::PlatformSensorConfiguration& configuration, bool* out_success);

 private:
  Sensor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SensorAsyncWaiter);
};


class  SensorClientInterceptorForTesting : public SensorClient {
  virtual SensorClient* GetForwardingInterface() = 0;
  void RaiseError() override;
  void SensorReadingChanged() override;
};
class  SensorClientAsyncWaiter {
 public:
  explicit SensorClientAsyncWaiter(SensorClient* proxy);
  ~SensorClientAsyncWaiter();

 private:
  SensorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SensorClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_TEST_UTILS_H_