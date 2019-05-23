// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/geolocation_context.mojom.h"


namespace device {
namespace mojom {


class  GeolocationContextInterceptorForTesting : public GeolocationContext {
  virtual GeolocationContext* GetForwardingInterface() = 0;
  void BindGeolocation(::device::mojom::GeolocationRequest request) override;
  void SetOverride(::device::mojom::GeopositionPtr geoposition) override;
  void ClearOverride() override;
};
class  GeolocationContextAsyncWaiter {
 public:
  explicit GeolocationContextAsyncWaiter(GeolocationContext* proxy);
  ~GeolocationContextAsyncWaiter();

 private:
  GeolocationContext* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationContextAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_TEST_UTILS_H_