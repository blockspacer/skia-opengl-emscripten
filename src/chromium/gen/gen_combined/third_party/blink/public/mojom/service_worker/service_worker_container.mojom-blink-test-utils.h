// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT ServiceWorkerContainerHostInterceptorForTesting : public ServiceWorkerContainerHost {
  virtual ServiceWorkerContainerHost* GetForwardingInterface() = 0;
  void Register(const ::blink::KURL& script_url, ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr options, RegisterCallback callback) override;
  void GetRegistration(const ::blink::KURL& client_url, GetRegistrationCallback callback) override;
  void GetRegistrations(GetRegistrationsCallback callback) override;
  void GetRegistrationForReady(GetRegistrationForReadyCallback callback) override;
  void EnsureControllerServiceWorker(::blink::mojom::blink::ControllerServiceWorkerRequest controller, ControllerServiceWorkerPurpose purpose) override;
  void CloneContainerHost(ServiceWorkerContainerHostRequest container_host) override;
  void Ping(PingCallback callback) override;
  void HintToUpdateServiceWorker() override;
  void OnExecutionReady() override;
};
class CORE_EXPORT ServiceWorkerContainerHostAsyncWaiter {
 public:
  explicit ServiceWorkerContainerHostAsyncWaiter(ServiceWorkerContainerHost* proxy);
  ~ServiceWorkerContainerHostAsyncWaiter();
  void Register(
      const ::blink::KURL& script_url, ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr options, ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg, ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr* out_registration);
  void GetRegistration(
      const ::blink::KURL& client_url, ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg, ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr* out_registration);
  void GetRegistrations(
      ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg, base::Optional<WTF::Vector<::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr>>* out_infos);
  void GetRegistrationForReady(
      ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr* out_registration);
  void Ping(
      );

 private:
  ServiceWorkerContainerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHostAsyncWaiter);
};


class CORE_EXPORT ServiceWorkerContainerInterceptorForTesting : public ServiceWorkerContainer {
  virtual ServiceWorkerContainer* GetForwardingInterface() = 0;
  void SetController(::blink::mojom::blink::ControllerServiceWorkerInfoPtr controller_info, bool should_notify_controllerchange) override;
  void PostMessageToClient(::blink::mojom::blink::ServiceWorkerObjectInfoPtr source, ::blink::BlinkTransferableMessage message) override;
  void CountFeature(::blink::mojom::blink::WebFeature feature) override;
};
class CORE_EXPORT ServiceWorkerContainerAsyncWaiter {
 public:
  explicit ServiceWorkerContainerAsyncWaiter(ServiceWorkerContainer* proxy);
  ~ServiceWorkerContainerAsyncWaiter();

 private:
  ServiceWorkerContainer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_BLINK_TEST_UTILS_H_