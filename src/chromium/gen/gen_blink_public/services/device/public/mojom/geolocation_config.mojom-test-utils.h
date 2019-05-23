// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/geolocation_config.mojom.h"


namespace device {
namespace mojom {


class  GeolocationConfigInterceptorForTesting : public GeolocationConfig {
  virtual GeolocationConfig* GetForwardingInterface() = 0;
  void IsHighAccuracyLocationBeingCaptured(IsHighAccuracyLocationBeingCapturedCallback callback) override;
};
class  GeolocationConfigAsyncWaiter {
 public:
  explicit GeolocationConfigAsyncWaiter(GeolocationConfig* proxy);
  ~GeolocationConfigAsyncWaiter();
  void IsHighAccuracyLocationBeingCaptured(
      bool* out_high_accuracy);

 private:
  GeolocationConfig* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationConfigAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_TEST_UTILS_H_