// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/geolocation.mojom.h"


namespace device {
namespace mojom {


class  GeolocationInterceptorForTesting : public Geolocation {
  virtual Geolocation* GetForwardingInterface() = 0;
  void SetHighAccuracy(bool high_accuracy) override;
  void QueryNextPosition(QueryNextPositionCallback callback) override;
};
class  GeolocationAsyncWaiter {
 public:
  explicit GeolocationAsyncWaiter(Geolocation* proxy);
  ~GeolocationAsyncWaiter();
  void QueryNextPosition(
      ::device::mojom::GeopositionPtr* out_geoposition);

 private:
  Geolocation* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_TEST_UTILS_H_