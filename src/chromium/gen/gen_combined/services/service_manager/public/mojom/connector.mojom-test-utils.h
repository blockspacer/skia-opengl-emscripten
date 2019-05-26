// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_TEST_UTILS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_TEST_UTILS_H_

#include "services/service_manager/public/mojom/connector.mojom.h"
#include "base/component_export.h"


namespace service_manager {
namespace mojom {


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ProcessMetadataInterceptorForTesting : public ProcessMetadata {
  virtual ProcessMetadata* GetForwardingInterface() = 0;
  void SetPID(base::ProcessId pid) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ProcessMetadataAsyncWaiter {
 public:
  explicit ProcessMetadataAsyncWaiter(ProcessMetadata* proxy);
  ~ProcessMetadataAsyncWaiter();

 private:
  ProcessMetadata* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProcessMetadataAsyncWaiter);
};


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ConnectorInterceptorForTesting : public Connector {
  virtual Connector* GetForwardingInterface() = 0;
  void BindInterface(const ::service_manager::ServiceFilter& filter, const std::string& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfacePriority priority, BindInterfaceCallback callback) override;
  void QueryService(const std::string& service_name, QueryServiceCallback callback) override;
  void WarmService(const ::service_manager::ServiceFilter& filter, WarmServiceCallback callback) override;
  void RegisterServiceInstance(const ::service_manager::Identity& identity, mojo::ScopedMessagePipeHandle service, mojo::PendingReceiver<ProcessMetadata> metadata_receiver, RegisterServiceInstanceCallback callback) override;
  void Clone(ConnectorRequest request) override;
  void FilterInterfaces(const std::string& spec, const ::service_manager::Identity& source, ::service_manager::mojom::InterfaceProviderRequest source_request, ::service_manager::mojom::InterfaceProviderPtr target) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ConnectorAsyncWaiter {
 public:
  explicit ConnectorAsyncWaiter(Connector* proxy);
  ~ConnectorAsyncWaiter();
  void BindInterface(
      const ::service_manager::ServiceFilter& filter, const std::string& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfacePriority priority, ConnectResult* out_result, base::Optional<::service_manager::Identity>* out_identity);
  void QueryService(
      const std::string& service_name, ServiceInfoPtr* out_info);
  void WarmService(
      const ::service_manager::ServiceFilter& filter, ConnectResult* out_result, base::Optional<::service_manager::Identity>* out_identity);
  void RegisterServiceInstance(
      const ::service_manager::Identity& identity, mojo::ScopedMessagePipeHandle service, mojo::PendingReceiver<ProcessMetadata> metadata_receiver, ConnectResult* out_result);

 private:
  Connector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ConnectorAsyncWaiter);
};




}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_TEST_UTILS_H_