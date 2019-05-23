// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "services/service_manager/public/mojom/connector.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/process_id.mojom.h"
#include "mojo/public/mojom/base/token.mojom.h"
#include "services/service_manager/public/mojom/constants.mojom.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"
#include "services/service_manager/public/mojom/service_filter.mojom.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/process_id_mojom_traits.h"
#include "mojo/public/cpp/base/token_mojom_traits.h"
#include "services/service_manager/public/cpp/identity_mojom_traits.h"
#include "services/service_manager/public/cpp/service_filter_mojom_traits.h"
#endif


namespace service_manager {
namespace mojom {


void ProcessMetadataInterceptorForTesting::SetPID(base::ProcessId pid) {
  GetForwardingInterface()->SetPID(std::move(pid));
}
ProcessMetadataAsyncWaiter::ProcessMetadataAsyncWaiter(
    ProcessMetadata* proxy) : proxy_(proxy) {}

ProcessMetadataAsyncWaiter::~ProcessMetadataAsyncWaiter() = default;




void ConnectorInterceptorForTesting::BindInterface(const ::service_manager::ServiceFilter& filter, const std::string& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfacePriority priority, BindInterfaceCallback callback) {
  GetForwardingInterface()->BindInterface(std::move(filter), std::move(interface_name), std::move(interface_pipe), std::move(priority), std::move(callback));
}
void ConnectorInterceptorForTesting::QueryService(const std::string& service_name, QueryServiceCallback callback) {
  GetForwardingInterface()->QueryService(std::move(service_name), std::move(callback));
}
void ConnectorInterceptorForTesting::WarmService(const ::service_manager::ServiceFilter& filter, WarmServiceCallback callback) {
  GetForwardingInterface()->WarmService(std::move(filter), std::move(callback));
}
void ConnectorInterceptorForTesting::RegisterServiceInstance(const ::service_manager::Identity& identity, mojo::ScopedMessagePipeHandle service, mojo::PendingReceiver<ProcessMetadata> metadata_receiver, RegisterServiceInstanceCallback callback) {
  GetForwardingInterface()->RegisterServiceInstance(std::move(identity), std::move(service), std::move(metadata_receiver), std::move(callback));
}
void ConnectorInterceptorForTesting::Clone(ConnectorRequest request) {
  GetForwardingInterface()->Clone(std::move(request));
}
void ConnectorInterceptorForTesting::FilterInterfaces(const std::string& spec, const ::service_manager::Identity& source, ::service_manager::mojom::InterfaceProviderRequest source_request, ::service_manager::mojom::InterfaceProviderPtr target) {
  GetForwardingInterface()->FilterInterfaces(std::move(spec), std::move(source), std::move(source_request), std::move(target));
}
ConnectorAsyncWaiter::ConnectorAsyncWaiter(
    Connector* proxy) : proxy_(proxy) {}

ConnectorAsyncWaiter::~ConnectorAsyncWaiter() = default;

void ConnectorAsyncWaiter::BindInterface(
    const ::service_manager::ServiceFilter& filter, const std::string& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfacePriority priority, ConnectResult* out_result, base::Optional<::service_manager::Identity>* out_identity) {
  base::RunLoop loop;
  proxy_->BindInterface(std::move(filter),std::move(interface_name),std::move(interface_pipe),std::move(priority),
      base::BindOnce(
          [](base::RunLoop* loop,
             ConnectResult* out_result
,
             base::Optional<::service_manager::Identity>* out_identity
,
             ConnectResult result,
             const base::Optional<::service_manager::Identity>& identity) {*out_result = std::move(result);*out_identity = std::move(identity);
            loop->Quit();
          },
          &loop,
          out_result,
          out_identity));
  loop.Run();
}
void ConnectorAsyncWaiter::QueryService(
    const std::string& service_name, ServiceInfoPtr* out_info) {
  base::RunLoop loop;
  proxy_->QueryService(std::move(service_name),
      base::BindOnce(
          [](base::RunLoop* loop,
             ServiceInfoPtr* out_info
,
             ServiceInfoPtr info) {*out_info = std::move(info);
            loop->Quit();
          },
          &loop,
          out_info));
  loop.Run();
}
void ConnectorAsyncWaiter::WarmService(
    const ::service_manager::ServiceFilter& filter, ConnectResult* out_result, base::Optional<::service_manager::Identity>* out_identity) {
  base::RunLoop loop;
  proxy_->WarmService(std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop,
             ConnectResult* out_result
,
             base::Optional<::service_manager::Identity>* out_identity
,
             ConnectResult result,
             const base::Optional<::service_manager::Identity>& identity) {*out_result = std::move(result);*out_identity = std::move(identity);
            loop->Quit();
          },
          &loop,
          out_result,
          out_identity));
  loop.Run();
}
void ConnectorAsyncWaiter::RegisterServiceInstance(
    const ::service_manager::Identity& identity, mojo::ScopedMessagePipeHandle service, mojo::PendingReceiver<ProcessMetadata> metadata_receiver, ConnectResult* out_result) {
  base::RunLoop loop;
  proxy_->RegisterServiceInstance(std::move(identity),std::move(service),std::move(metadata_receiver),
      base::BindOnce(
          [](base::RunLoop* loop,
             ConnectResult* out_result
,
             ConnectResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace service_manager

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif