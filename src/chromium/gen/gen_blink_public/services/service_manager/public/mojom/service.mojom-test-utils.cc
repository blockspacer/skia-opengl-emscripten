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


#include "services/service_manager/public/mojom/service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/process_id.mojom.h"
#include "services/service_manager/public/mojom/connector.mojom.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"
#include "services/service_manager/public/mojom/interface_provider_spec.mojom.h"
#include "services/service_manager/public/mojom/service_control.mojom.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/token_mojom_traits.h"
#include "services/service_manager/public/cpp/bind_source_info_mojom_traits.h"
#include "services/service_manager/public/cpp/identity_mojom_traits.h"
#include "services/service_manager/public/cpp/interface_provider_spec_mojom_traits.h"
#endif


namespace service_manager {
namespace mojom {


void ServiceInterceptorForTesting::OnStart(const ::service_manager::Identity& identity, OnStartCallback callback) {
  GetForwardingInterface()->OnStart(std::move(identity), std::move(callback));
}
void ServiceInterceptorForTesting::OnBindInterface(const ::service_manager::BindSourceInfo& source, const std::string& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, OnBindInterfaceCallback callback) {
  GetForwardingInterface()->OnBindInterface(std::move(source), std::move(interface_name), std::move(interface_pipe), std::move(callback));
}
void ServiceInterceptorForTesting::CreatePackagedServiceInstance(const ::service_manager::Identity& identity, mojo::PendingReceiver<Service> receiver, mojo::PendingRemote<::service_manager::mojom::ProcessMetadata> metadata) {
  GetForwardingInterface()->CreatePackagedServiceInstance(std::move(identity), std::move(receiver), std::move(metadata));
}
ServiceAsyncWaiter::ServiceAsyncWaiter(
    Service* proxy) : proxy_(proxy) {}

ServiceAsyncWaiter::~ServiceAsyncWaiter() = default;

void ServiceAsyncWaiter::OnStart(
    const ::service_manager::Identity& identity, ::service_manager::mojom::ConnectorRequest* out_connector_request, ::service_manager::mojom::ServiceControlAssociatedRequest* out_control_request) {
  base::RunLoop loop;
  proxy_->OnStart(std::move(identity),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::service_manager::mojom::ConnectorRequest* out_connector_request
,
             ::service_manager::mojom::ServiceControlAssociatedRequest* out_control_request
,
             ::service_manager::mojom::ConnectorRequest connector_request,
             ::service_manager::mojom::ServiceControlAssociatedRequest control_request) {*out_connector_request = std::move(connector_request);*out_control_request = std::move(control_request);
            loop->Quit();
          },
          &loop,
          out_connector_request,
          out_control_request));
  loop.Run();
}
void ServiceAsyncWaiter::OnBindInterface(
    const ::service_manager::BindSourceInfo& source, const std::string& interface_name, mojo::ScopedMessagePipeHandle interface_pipe) {
  base::RunLoop loop;
  proxy_->OnBindInterface(std::move(source),std::move(interface_name),std::move(interface_pipe),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}





}  // namespace mojom
}  // namespace service_manager

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif