// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_TEST_UTILS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_TEST_UTILS_H_

#include "services/service_manager/public/mojom/service.mojom.h"
#include "base/component_export.h"


namespace service_manager {
namespace mojom {


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceInterceptorForTesting : public Service {
  virtual Service* GetForwardingInterface() = 0;
  void OnStart(const ::service_manager::Identity& identity, OnStartCallback callback) override;
  void OnBindInterface(const ::service_manager::BindSourceInfo& source, const std::string& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, OnBindInterfaceCallback callback) override;
  void CreatePackagedServiceInstance(const ::service_manager::Identity& identity, mojo::PendingReceiver<Service> receiver, mojo::PendingRemote<::service_manager::mojom::ProcessMetadata> metadata) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceAsyncWaiter {
 public:
  explicit ServiceAsyncWaiter(Service* proxy);
  ~ServiceAsyncWaiter();
  void OnStart(
      const ::service_manager::Identity& identity, ::service_manager::mojom::ConnectorRequest* out_connector_request, ::service_manager::mojom::ServiceControlAssociatedRequest* out_control_request);
  void OnBindInterface(
      const ::service_manager::BindSourceInfo& source, const std::string& interface_name, mojo::ScopedMessagePipeHandle interface_pipe);

 private:
  Service* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_TEST_UTILS_H_