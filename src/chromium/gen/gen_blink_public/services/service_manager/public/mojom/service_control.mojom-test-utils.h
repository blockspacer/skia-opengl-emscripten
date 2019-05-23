// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_TEST_UTILS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_TEST_UTILS_H_

#include "services/service_manager/public/mojom/service_control.mojom.h"
#include "base/component_export.h"


namespace service_manager {
namespace mojom {


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceControlInterceptorForTesting : public ServiceControl {
  virtual ServiceControl* GetForwardingInterface() = 0;
  void RequestQuit() override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceControlAsyncWaiter {
 public:
  explicit ServiceControlAsyncWaiter(ServiceControl* proxy);
  ~ServiceControlAsyncWaiter();

 private:
  ServiceControl* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceControlAsyncWaiter);
};




}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_TEST_UTILS_H_