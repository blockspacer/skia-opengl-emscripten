// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ServiceWorkerContainerHostInterceptorForTesting : public ServiceWorkerContainerHost {
  virtual ServiceWorkerContainerHost* GetForwardingInterface() = 0;
  void Register(const GURL& script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr options, RegisterCallback callback) override;
  void GetRegistration(const GURL& client_url, GetRegistrationCallback callback) override;
  void GetRegistrations(GetRegistrationsCallback callback) override;
  void GetRegistrationForReady(GetRegistrationForReadyCallback callback) override;
  void EnsureControllerServiceWorker(::blink::mojom::ControllerServiceWorkerRequest controller, ControllerServiceWorkerPurpose purpose) override;
  void CloneContainerHost(ServiceWorkerContainerHostRequest container_host) override;
  void Ping(PingCallback callback) override;
  void HintToUpdateServiceWorker() override;
  void OnExecutionReady() override;
};
class BLINK_COMMON_EXPORT ServiceWorkerContainerHostAsyncWaiter {
 public:
  explicit ServiceWorkerContainerHostAsyncWaiter(ServiceWorkerContainerHost* proxy);
  ~ServiceWorkerContainerHostAsyncWaiter();
  void Register(
      const GURL& script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr options, ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration);
  void GetRegistration(
      const GURL& client_url, ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration);
  void GetRegistrations(
      ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg, base::Optional<std::vector<::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr>>* out_infos);
  void GetRegistrationForReady(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration);
  void Ping(
      );

 private:
  ServiceWorkerContainerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHostAsyncWaiter);
};


class BLINK_COMMON_EXPORT ServiceWorkerContainerInterceptorForTesting : public ServiceWorkerContainer {
  virtual ServiceWorkerContainer* GetForwardingInterface() = 0;
  void SetController(::blink::mojom::ControllerServiceWorkerInfoPtr controller_info, bool should_notify_controllerchange) override;
  void PostMessageToClient(::blink::mojom::ServiceWorkerObjectInfoPtr source, ::blink::TransferableMessage message) override;
  void CountFeature(::blink::mojom::WebFeature feature) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerContainerAsyncWaiter {
 public:
  explicit ServiceWorkerContainerAsyncWaiter(ServiceWorkerContainer* proxy);
  ~ServiceWorkerContainerAsyncWaiter();

 private:
  ServiceWorkerContainer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_TEST_UTILS_H_