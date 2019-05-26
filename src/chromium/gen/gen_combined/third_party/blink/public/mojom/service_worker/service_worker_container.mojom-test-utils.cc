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


#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/public/common/messaging/cloneable_message_struct_traits.h"
#include "third_party/blink/public/common/messaging/transferable_message_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void ServiceWorkerContainerHostInterceptorForTesting::Register(const GURL& script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr options, RegisterCallback callback) {
  GetForwardingInterface()->Register(std::move(script_url), std::move(options), std::move(callback));
}
void ServiceWorkerContainerHostInterceptorForTesting::GetRegistration(const GURL& client_url, GetRegistrationCallback callback) {
  GetForwardingInterface()->GetRegistration(std::move(client_url), std::move(callback));
}
void ServiceWorkerContainerHostInterceptorForTesting::GetRegistrations(GetRegistrationsCallback callback) {
  GetForwardingInterface()->GetRegistrations(std::move(callback));
}
void ServiceWorkerContainerHostInterceptorForTesting::GetRegistrationForReady(GetRegistrationForReadyCallback callback) {
  GetForwardingInterface()->GetRegistrationForReady(std::move(callback));
}
void ServiceWorkerContainerHostInterceptorForTesting::EnsureControllerServiceWorker(::blink::mojom::ControllerServiceWorkerRequest controller, ControllerServiceWorkerPurpose purpose) {
  GetForwardingInterface()->EnsureControllerServiceWorker(std::move(controller), std::move(purpose));
}
void ServiceWorkerContainerHostInterceptorForTesting::CloneContainerHost(ServiceWorkerContainerHostRequest container_host) {
  GetForwardingInterface()->CloneContainerHost(std::move(container_host));
}
void ServiceWorkerContainerHostInterceptorForTesting::Ping(PingCallback callback) {
  GetForwardingInterface()->Ping(std::move(callback));
}
void ServiceWorkerContainerHostInterceptorForTesting::HintToUpdateServiceWorker() {
  GetForwardingInterface()->HintToUpdateServiceWorker();
}
void ServiceWorkerContainerHostInterceptorForTesting::OnExecutionReady() {
  GetForwardingInterface()->OnExecutionReady();
}
ServiceWorkerContainerHostAsyncWaiter::ServiceWorkerContainerHostAsyncWaiter(
    ServiceWorkerContainerHost* proxy) : proxy_(proxy) {}

ServiceWorkerContainerHostAsyncWaiter::~ServiceWorkerContainerHostAsyncWaiter() = default;

void ServiceWorkerContainerHostAsyncWaiter::Register(
    const GURL& script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr options, ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration) {
  base::RunLoop loop;
  proxy_->Register(std::move(script_url),std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerErrorType* out_error
,
             base::Optional<std::string>* out_error_msg
,
             ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration
,
             ::blink::mojom::ServiceWorkerErrorType error,
             const base::Optional<std::string>& error_msg,
             ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration) {*out_error = std::move(error);*out_error_msg = std::move(error_msg);*out_registration = std::move(registration);
            loop->Quit();
          },
          &loop,
          out_error,
          out_error_msg,
          out_registration));
  loop.Run();
}
void ServiceWorkerContainerHostAsyncWaiter::GetRegistration(
    const GURL& client_url, ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration) {
  base::RunLoop loop;
  proxy_->GetRegistration(std::move(client_url),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerErrorType* out_error
,
             base::Optional<std::string>* out_error_msg
,
             ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration
,
             ::blink::mojom::ServiceWorkerErrorType error,
             const base::Optional<std::string>& error_msg,
             ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration) {*out_error = std::move(error);*out_error_msg = std::move(error_msg);*out_registration = std::move(registration);
            loop->Quit();
          },
          &loop,
          out_error,
          out_error_msg,
          out_registration));
  loop.Run();
}
void ServiceWorkerContainerHostAsyncWaiter::GetRegistrations(
    ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg, base::Optional<std::vector<::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr>>* out_infos) {
  base::RunLoop loop;
  proxy_->GetRegistrations(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerErrorType* out_error
,
             base::Optional<std::string>* out_error_msg
,
             base::Optional<std::vector<::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr>>* out_infos
,
             ::blink::mojom::ServiceWorkerErrorType error,
             const base::Optional<std::string>& error_msg,
             base::Optional<std::vector<::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr>> infos) {*out_error = std::move(error);*out_error_msg = std::move(error_msg);*out_infos = std::move(infos);
            loop->Quit();
          },
          &loop,
          out_error,
          out_error_msg,
          out_infos));
  loop.Run();
}
void ServiceWorkerContainerHostAsyncWaiter::GetRegistrationForReady(
    ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration) {
  base::RunLoop loop;
  proxy_->GetRegistrationForReady(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr* out_registration
,
             ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration) {*out_registration = std::move(registration);
            loop->Quit();
          },
          &loop,
          out_registration));
  loop.Run();
}
void ServiceWorkerContainerHostAsyncWaiter::Ping(
    ) {
  base::RunLoop loop;
  proxy_->Ping(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void ServiceWorkerContainerInterceptorForTesting::SetController(::blink::mojom::ControllerServiceWorkerInfoPtr controller_info, bool should_notify_controllerchange) {
  GetForwardingInterface()->SetController(std::move(controller_info), std::move(should_notify_controllerchange));
}
void ServiceWorkerContainerInterceptorForTesting::PostMessageToClient(::blink::mojom::ServiceWorkerObjectInfoPtr source, ::blink::TransferableMessage message) {
  GetForwardingInterface()->PostMessageToClient(std::move(source), std::move(message));
}
void ServiceWorkerContainerInterceptorForTesting::CountFeature(::blink::mojom::WebFeature feature) {
  GetForwardingInterface()->CountFeature(std::move(feature));
}
ServiceWorkerContainerAsyncWaiter::ServiceWorkerContainerAsyncWaiter(
    ServiceWorkerContainer* proxy) : proxy_(proxy) {}

ServiceWorkerContainerAsyncWaiter::~ServiceWorkerContainerAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif