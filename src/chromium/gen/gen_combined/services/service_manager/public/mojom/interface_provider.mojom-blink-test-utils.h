// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/service_manager/public/mojom/interface_provider.mojom-blink.h"
#include "base/component_export.h"


namespace service_manager {
namespace mojom {
namespace blink {


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) InterfaceProviderInterceptorForTesting : public InterfaceProvider {
  virtual InterfaceProvider* GetForwardingInterface() = 0;
  void GetInterface(const WTF::String& interface_name, mojo::ScopedMessagePipeHandle pipe) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) InterfaceProviderAsyncWaiter {
 public:
  explicit InterfaceProviderAsyncWaiter(InterfaceProvider* proxy);
  ~InterfaceProviderAsyncWaiter();

 private:
  InterfaceProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InterfaceProviderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_