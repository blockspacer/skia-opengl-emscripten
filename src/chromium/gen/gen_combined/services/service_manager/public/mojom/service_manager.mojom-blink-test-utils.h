// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/service_manager/public/mojom/service_manager.mojom-blink.h"
#include "base/component_export.h"


namespace service_manager {
namespace mojom {
namespace blink {


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerListenerInterceptorForTesting : public ServiceManagerListener {
  virtual ServiceManagerListener* GetForwardingInterface() = 0;
  void OnInit(WTF::Vector<RunningServiceInfoPtr> running_services) override;
  void OnServiceCreated(RunningServiceInfoPtr service) override;
  void OnServiceStarted(::service_manager::mojom::blink::IdentityPtr identity, uint32_t pid_deprecated) override;
  void OnServicePIDReceived(::service_manager::mojom::blink::IdentityPtr identity, uint32_t pid) override;
  void OnServiceFailedToStart(::service_manager::mojom::blink::IdentityPtr identity) override;
  void OnServiceStopped(::service_manager::mojom::blink::IdentityPtr identity) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerListenerAsyncWaiter {
 public:
  explicit ServiceManagerListenerAsyncWaiter(ServiceManagerListener* proxy);
  ~ServiceManagerListenerAsyncWaiter();

 private:
  ServiceManagerListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceManagerListenerAsyncWaiter);
};


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerInterceptorForTesting : public ServiceManager {
  virtual ServiceManager* GetForwardingInterface() = 0;
  void AddListener(ServiceManagerListenerPtr listener) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerAsyncWaiter {
 public:
  explicit ServiceManagerAsyncWaiter(ServiceManager* proxy);
  ~ServiceManagerAsyncWaiter();

 private:
  ServiceManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_