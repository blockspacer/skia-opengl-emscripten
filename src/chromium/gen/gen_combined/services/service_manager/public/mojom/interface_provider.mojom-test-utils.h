// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_TEST_UTILS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_TEST_UTILS_H_

#include "services/service_manager/public/mojom/interface_provider.mojom.h"
#include "base/component_export.h"


namespace service_manager {
namespace mojom {


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) InterfaceProviderInterceptorForTesting : public InterfaceProvider {
  virtual InterfaceProvider* GetForwardingInterface() = 0;
  void GetInterface(const std::string& interface_name, mojo::ScopedMessagePipeHandle pipe) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) InterfaceProviderAsyncWaiter {
 public:
  explicit InterfaceProviderAsyncWaiter(InterfaceProvider* proxy);
  ~InterfaceProviderAsyncWaiter();

 private:
  InterfaceProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InterfaceProviderAsyncWaiter);
};




}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_TEST_UTILS_H_