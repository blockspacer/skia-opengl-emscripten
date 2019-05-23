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


#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/script/script_type.mojom.h"
#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void ServiceWorkerRegistrationObjectHostInterceptorForTesting::Update(UpdateCallback callback) {
  GetForwardingInterface()->Update(std::move(callback));
}
void ServiceWorkerRegistrationObjectHostInterceptorForTesting::Unregister(UnregisterCallback callback) {
  GetForwardingInterface()->Unregister(std::move(callback));
}
void ServiceWorkerRegistrationObjectHostInterceptorForTesting::EnableNavigationPreload(bool enable, EnableNavigationPreloadCallback callback) {
  GetForwardingInterface()->EnableNavigationPreload(std::move(enable), std::move(callback));
}
void ServiceWorkerRegistrationObjectHostInterceptorForTesting::GetNavigationPreloadState(GetNavigationPreloadStateCallback callback) {
  GetForwardingInterface()->GetNavigationPreloadState(std::move(callback));
}
void ServiceWorkerRegistrationObjectHostInterceptorForTesting::SetNavigationPreloadHeader(const std::string& value, SetNavigationPreloadHeaderCallback callback) {
  GetForwardingInterface()->SetNavigationPreloadHeader(std::move(value), std::move(callback));
}
ServiceWorkerRegistrationObjectHostAsyncWaiter::ServiceWorkerRegistrationObjectHostAsyncWaiter(
    ServiceWorkerRegistrationObjectHost* proxy) : proxy_(proxy) {}

ServiceWorkerRegistrationObjectHostAsyncWaiter::~ServiceWorkerRegistrationObjectHostAsyncWaiter() = default;

void ServiceWorkerRegistrationObjectHostAsyncWaiter::Update(
    ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg) {
  base::RunLoop loop;
  proxy_->Update(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerErrorType* out_error
,
             base::Optional<std::string>* out_error_msg
,
             ::blink::mojom::ServiceWorkerErrorType error,
             const base::Optional<std::string>& error_msg) {*out_error = std::move(error);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_error,
          out_error_msg));
  loop.Run();
}
void ServiceWorkerRegistrationObjectHostAsyncWaiter::Unregister(
    ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg) {
  base::RunLoop loop;
  proxy_->Unregister(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerErrorType* out_error
,
             base::Optional<std::string>* out_error_msg
,
             ::blink::mojom::ServiceWorkerErrorType error,
             const base::Optional<std::string>& error_msg) {*out_error = std::move(error);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_error,
          out_error_msg));
  loop.Run();
}
void ServiceWorkerRegistrationObjectHostAsyncWaiter::EnableNavigationPreload(
    bool enable, ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg) {
  base::RunLoop loop;
  proxy_->EnableNavigationPreload(std::move(enable),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerErrorType* out_error
,
             base::Optional<std::string>* out_error_msg
,
             ::blink::mojom::ServiceWorkerErrorType error,
             const base::Optional<std::string>& error_msg) {*out_error = std::move(error);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_error,
          out_error_msg));
  loop.Run();
}
void ServiceWorkerRegistrationObjectHostAsyncWaiter::GetNavigationPreloadState(
    ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg, ::blink::mojom::NavigationPreloadStatePtr* out_state) {
  base::RunLoop loop;
  proxy_->GetNavigationPreloadState(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerErrorType* out_error
,
             base::Optional<std::string>* out_error_msg
,
             ::blink::mojom::NavigationPreloadStatePtr* out_state
,
             ::blink::mojom::ServiceWorkerErrorType error,
             const base::Optional<std::string>& error_msg,
             ::blink::mojom::NavigationPreloadStatePtr state) {*out_error = std::move(error);*out_error_msg = std::move(error_msg);*out_state = std::move(state);
            loop->Quit();
          },
          &loop,
          out_error,
          out_error_msg,
          out_state));
  loop.Run();
}
void ServiceWorkerRegistrationObjectHostAsyncWaiter::SetNavigationPreloadHeader(
    const std::string& value, ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg) {
  base::RunLoop loop;
  proxy_->SetNavigationPreloadHeader(std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerErrorType* out_error
,
             base::Optional<std::string>* out_error_msg
,
             ::blink::mojom::ServiceWorkerErrorType error,
             const base::Optional<std::string>& error_msg) {*out_error = std::move(error);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_error,
          out_error_msg));
  loop.Run();
}



void ServiceWorkerRegistrationObjectInterceptorForTesting::SetServiceWorkerObjects(ChangedServiceWorkerObjectsMaskPtr changed_mask, ::blink::mojom::ServiceWorkerObjectInfoPtr installing, ::blink::mojom::ServiceWorkerObjectInfoPtr waiting, ::blink::mojom::ServiceWorkerObjectInfoPtr active) {
  GetForwardingInterface()->SetServiceWorkerObjects(std::move(changed_mask), std::move(installing), std::move(waiting), std::move(active));
}
void ServiceWorkerRegistrationObjectInterceptorForTesting::SetUpdateViaCache(ServiceWorkerUpdateViaCache update_via_cache) {
  GetForwardingInterface()->SetUpdateViaCache(std::move(update_via_cache));
}
void ServiceWorkerRegistrationObjectInterceptorForTesting::UpdateFound() {
  GetForwardingInterface()->UpdateFound();
}
ServiceWorkerRegistrationObjectAsyncWaiter::ServiceWorkerRegistrationObjectAsyncWaiter(
    ServiceWorkerRegistrationObject* proxy) : proxy_(proxy) {}

ServiceWorkerRegistrationObjectAsyncWaiter::~ServiceWorkerRegistrationObjectAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif