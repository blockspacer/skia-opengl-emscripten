// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "services/service_manager/public/mojom/service.mojom-blink.h"
#include "base/component_export.h"


namespace service_manager {
namespace mojom {
namespace blink {


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceInterceptorForTesting : public Service {
  virtual Service* GetForwardingInterface() = 0;
  void OnStart(::service_manager::mojom::blink::IdentityPtr identity, OnStartCallback callback) override;
  void OnBindInterface(BindSourceInfoPtr source, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, OnBindInterfaceCallback callback) override;
  void CreatePackagedServiceInstance(::service_manager::mojom::blink::IdentityPtr identity, mojo::PendingReceiver<Service> receiver, mojo::PendingRemote<::service_manager::mojom::blink::ProcessMetadata> metadata) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceAsyncWaiter {
 public:
  explicit ServiceAsyncWaiter(Service* proxy);
  ~ServiceAsyncWaiter();
  void OnStart(
      ::service_manager::mojom::blink::IdentityPtr identity, ::service_manager::mojom::blink::ConnectorRequest* out_connector_request, ::service_manager::mojom::blink::ServiceControlAssociatedRequest* out_control_request);
  void OnBindInterface(
      BindSourceInfoPtr source, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe);

 private:
  Service* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_BLINK_TEST_UTILS_H_