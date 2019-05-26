// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_TEST_UTILS_H_

#include "services/service_manager/public/mojom/connector.mojom-blink.h"
#include "base/component_export.h"


namespace service_manager {
namespace mojom {
namespace blink {


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ProcessMetadataInterceptorForTesting : public ProcessMetadata {
  virtual ProcessMetadata* GetForwardingInterface() = 0;
  void SetPID(::mojo_base::mojom::blink::ProcessIdPtr pid) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ProcessMetadataAsyncWaiter {
 public:
  explicit ProcessMetadataAsyncWaiter(ProcessMetadata* proxy);
  ~ProcessMetadataAsyncWaiter();

 private:
  ProcessMetadata* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProcessMetadataAsyncWaiter);
};


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ConnectorInterceptorForTesting : public Connector {
  virtual Connector* GetForwardingInterface() = 0;
  void BindInterface(::service_manager::mojom::blink::ServiceFilterPtr filter, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfacePriority priority, BindInterfaceCallback callback) override;
  void QueryService(const WTF::String& service_name, QueryServiceCallback callback) override;
  void WarmService(::service_manager::mojom::blink::ServiceFilterPtr filter, WarmServiceCallback callback) override;
  void RegisterServiceInstance(IdentityPtr identity, mojo::ScopedMessagePipeHandle service, mojo::PendingReceiver<ProcessMetadata> metadata_receiver, RegisterServiceInstanceCallback callback) override;
  void Clone(ConnectorRequest request) override;
  void FilterInterfaces(const WTF::String& spec, IdentityPtr source, ::service_manager::mojom::blink::InterfaceProviderRequest source_request, ::service_manager::mojom::blink::InterfaceProviderPtr target) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ConnectorAsyncWaiter {
 public:
  explicit ConnectorAsyncWaiter(Connector* proxy);
  ~ConnectorAsyncWaiter();
  void BindInterface(
      ::service_manager::mojom::blink::ServiceFilterPtr filter, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfacePriority priority, ConnectResult* out_result, IdentityPtr* out_identity);
  void QueryService(
      const WTF::String& service_name, ServiceInfoPtr* out_info);
  void WarmService(
      ::service_manager::mojom::blink::ServiceFilterPtr filter, ConnectResult* out_result, IdentityPtr* out_identity);
  void RegisterServiceInstance(
      IdentityPtr identity, mojo::ScopedMessagePipeHandle service, mojo::PendingReceiver<ProcessMetadata> metadata_receiver, ConnectResult* out_result);

 private:
  Connector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ConnectorAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_TEST_UTILS_H_