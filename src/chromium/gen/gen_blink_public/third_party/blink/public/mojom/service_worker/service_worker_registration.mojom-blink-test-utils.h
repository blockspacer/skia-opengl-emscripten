// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT ServiceWorkerRegistrationObjectHostInterceptorForTesting : public ServiceWorkerRegistrationObjectHost {
  virtual ServiceWorkerRegistrationObjectHost* GetForwardingInterface() = 0;
  void Update(UpdateCallback callback) override;
  void Unregister(UnregisterCallback callback) override;
  void EnableNavigationPreload(bool enable, EnableNavigationPreloadCallback callback) override;
  void GetNavigationPreloadState(GetNavigationPreloadStateCallback callback) override;
  void SetNavigationPreloadHeader(const WTF::String& value, SetNavigationPreloadHeaderCallback callback) override;
};
class CORE_EXPORT ServiceWorkerRegistrationObjectHostAsyncWaiter {
 public:
  explicit ServiceWorkerRegistrationObjectHostAsyncWaiter(ServiceWorkerRegistrationObjectHost* proxy);
  ~ServiceWorkerRegistrationObjectHostAsyncWaiter();
  void Update(
      ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg);
  void Unregister(
      ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg);
  void EnableNavigationPreload(
      bool enable, ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg);
  void GetNavigationPreloadState(
      ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg, ::blink::mojom::blink::NavigationPreloadStatePtr* out_state);
  void SetNavigationPreloadHeader(
      const WTF::String& value, ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg);

 private:
  ServiceWorkerRegistrationObjectHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHostAsyncWaiter);
};


class CORE_EXPORT ServiceWorkerRegistrationObjectInterceptorForTesting : public ServiceWorkerRegistrationObject {
  virtual ServiceWorkerRegistrationObject* GetForwardingInterface() = 0;
  void SetServiceWorkerObjects(ChangedServiceWorkerObjectsMaskPtr changed_mask, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr installing, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr waiting, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr active) override;
  void SetUpdateViaCache(ServiceWorkerUpdateViaCache update_via_cache) override;
  void UpdateFound() override;
};
class CORE_EXPORT ServiceWorkerRegistrationObjectAsyncWaiter {
 public:
  explicit ServiceWorkerRegistrationObjectAsyncWaiter(ServiceWorkerRegistrationObject* proxy);
  ~ServiceWorkerRegistrationObjectAsyncWaiter();

 private:
  ServiceWorkerRegistrationObject* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_TEST_UTILS_H_