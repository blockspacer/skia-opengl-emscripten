// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/geolocation_control.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT GeolocationControlInterceptorForTesting : public GeolocationControl {
  virtual GeolocationControl* GetForwardingInterface() = 0;
  void UserDidOptIntoLocationServices() override;
};
class BLINK_PLATFORM_EXPORT GeolocationControlAsyncWaiter {
 public:
  explicit GeolocationControlAsyncWaiter(GeolocationControl* proxy);
  ~GeolocationControlAsyncWaiter();

 private:
  GeolocationControl* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationControlAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_BLINK_TEST_UTILS_H_