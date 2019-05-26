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


#include "services/service_manager/public/mojom/service_manager.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/service_manager/public/mojom/connector.mojom.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/token_mojom_traits.h"
#include "services/service_manager/public/cpp/identity_mojom_traits.h"
#endif


namespace service_manager {
namespace mojom {


void ServiceManagerListenerInterceptorForTesting::OnInit(std::vector<RunningServiceInfoPtr> running_services) {
  GetForwardingInterface()->OnInit(std::move(running_services));
}
void ServiceManagerListenerInterceptorForTesting::OnServiceCreated(RunningServiceInfoPtr service) {
  GetForwardingInterface()->OnServiceCreated(std::move(service));
}
void ServiceManagerListenerInterceptorForTesting::OnServiceStarted(const ::service_manager::Identity& identity, uint32_t pid_deprecated) {
  GetForwardingInterface()->OnServiceStarted(std::move(identity), std::move(pid_deprecated));
}
void ServiceManagerListenerInterceptorForTesting::OnServicePIDReceived(const ::service_manager::Identity& identity, uint32_t pid) {
  GetForwardingInterface()->OnServicePIDReceived(std::move(identity), std::move(pid));
}
void ServiceManagerListenerInterceptorForTesting::OnServiceFailedToStart(const ::service_manager::Identity& identity) {
  GetForwardingInterface()->OnServiceFailedToStart(std::move(identity));
}
void ServiceManagerListenerInterceptorForTesting::OnServiceStopped(const ::service_manager::Identity& identity) {
  GetForwardingInterface()->OnServiceStopped(std::move(identity));
}
ServiceManagerListenerAsyncWaiter::ServiceManagerListenerAsyncWaiter(
    ServiceManagerListener* proxy) : proxy_(proxy) {}

ServiceManagerListenerAsyncWaiter::~ServiceManagerListenerAsyncWaiter() = default;




void ServiceManagerInterceptorForTesting::AddListener(ServiceManagerListenerPtr listener) {
  GetForwardingInterface()->AddListener(std::move(listener));
}
ServiceManagerAsyncWaiter::ServiceManagerAsyncWaiter(
    ServiceManager* proxy) : proxy_(proxy) {}

ServiceManagerAsyncWaiter::~ServiceManagerAsyncWaiter() = default;






}  // namespace mojom
}  // namespace service_manager

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif