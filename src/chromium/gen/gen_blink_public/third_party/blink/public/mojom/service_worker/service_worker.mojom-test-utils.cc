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


#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/network/public/mojom/cookie_manager.mojom.h"
#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom.h"
#include "third_party/blink/public/mojom/notifications/notification.mojom.h"
#include "third_party/blink/public/mojom/payments/payment_app.mojom.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/cookie_manager_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/public/common/fetch/fetch_api_request_headers_mojom_traits.h"
#include "third_party/blink/public/common/messaging/cloneable_message_struct_traits.h"
#include "third_party/blink/public/common/messaging/transferable_message_struct_traits.h"
#include "third_party/blink/public/common/notifications/notification_struct_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void ServiceWorkerHostInterceptorForTesting::SetCachedMetadata(const GURL& url, const std::vector<uint8_t>& data) {
  GetForwardingInterface()->SetCachedMetadata(std::move(url), std::move(data));
}
void ServiceWorkerHostInterceptorForTesting::ClearCachedMetadata(const GURL& url) {
  GetForwardingInterface()->ClearCachedMetadata(std::move(url));
}
void ServiceWorkerHostInterceptorForTesting::GetClients(::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) {
  GetForwardingInterface()->GetClients(std::move(options), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::GetClient(const std::string& client_uuid, GetClientCallback callback) {
  GetForwardingInterface()->GetClient(std::move(client_uuid), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::OpenNewTab(const GURL& url, OpenNewTabCallback callback) {
  GetForwardingInterface()->OpenNewTab(std::move(url), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::OpenPaymentHandlerWindow(const GURL& url, OpenPaymentHandlerWindowCallback callback) {
  GetForwardingInterface()->OpenPaymentHandlerWindow(std::move(url), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::PostMessageToClient(const std::string& client_uuid, ::blink::TransferableMessage message) {
  GetForwardingInterface()->PostMessageToClient(std::move(client_uuid), std::move(message));
}
void ServiceWorkerHostInterceptorForTesting::FocusClient(const std::string& client_uuid, FocusClientCallback callback) {
  GetForwardingInterface()->FocusClient(std::move(client_uuid), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::NavigateClient(const std::string& client_uuid, const GURL& url, NavigateClientCallback callback) {
  GetForwardingInterface()->NavigateClient(std::move(client_uuid), std::move(url), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::SkipWaiting(SkipWaitingCallback callback) {
  GetForwardingInterface()->SkipWaiting(std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::ClaimClients(ClaimClientsCallback callback) {
  GetForwardingInterface()->ClaimClients(std::move(callback));
}
ServiceWorkerHostAsyncWaiter::ServiceWorkerHostAsyncWaiter(
    ServiceWorkerHost* proxy) : proxy_(proxy) {}

ServiceWorkerHostAsyncWaiter::~ServiceWorkerHostAsyncWaiter() = default;

void ServiceWorkerHostAsyncWaiter::GetClients(
    ::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, std::vector<::blink::mojom::ServiceWorkerClientInfoPtr>* out_clients) {
  base::RunLoop loop;
  proxy_->GetClients(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<::blink::mojom::ServiceWorkerClientInfoPtr>* out_clients
,
             std::vector<::blink::mojom::ServiceWorkerClientInfoPtr> clients) {*out_clients = std::move(clients);
            loop->Quit();
          },
          &loop,
          out_clients));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::GetClient(
    const std::string& client_uuid, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client) {
  base::RunLoop loop;
  proxy_->GetClient(std::move(client_uuid),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerClientInfoPtr* out_client
,
             ::blink::mojom::ServiceWorkerClientInfoPtr client) {*out_client = std::move(client);
            loop->Quit();
          },
          &loop,
          out_client));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::OpenNewTab(
    const GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, base::Optional<std::string>* out_error_msg) {
  base::RunLoop loop;
  proxy_->OpenNewTab(std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             ::blink::mojom::ServiceWorkerClientInfoPtr* out_client
,
             base::Optional<std::string>* out_error_msg
,
             bool success,
             ::blink::mojom::ServiceWorkerClientInfoPtr client,
             const base::Optional<std::string>& error_msg) {*out_success = std::move(success);*out_client = std::move(client);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_success,
          out_client,
          out_error_msg));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::OpenPaymentHandlerWindow(
    const GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, base::Optional<std::string>* out_error_msg) {
  base::RunLoop loop;
  proxy_->OpenPaymentHandlerWindow(std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             ::blink::mojom::ServiceWorkerClientInfoPtr* out_client
,
             base::Optional<std::string>* out_error_msg
,
             bool success,
             ::blink::mojom::ServiceWorkerClientInfoPtr client,
             const base::Optional<std::string>& error_msg) {*out_success = std::move(success);*out_client = std::move(client);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_success,
          out_client,
          out_error_msg));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::FocusClient(
    const std::string& client_uuid, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client) {
  base::RunLoop loop;
  proxy_->FocusClient(std::move(client_uuid),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerClientInfoPtr* out_client
,
             ::blink::mojom::ServiceWorkerClientInfoPtr client) {*out_client = std::move(client);
            loop->Quit();
          },
          &loop,
          out_client));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::NavigateClient(
    const std::string& client_uuid, const GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, base::Optional<std::string>* out_error_msg) {
  base::RunLoop loop;
  proxy_->NavigateClient(std::move(client_uuid),std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             ::blink::mojom::ServiceWorkerClientInfoPtr* out_client
,
             base::Optional<std::string>* out_error_msg
,
             bool success,
             ::blink::mojom::ServiceWorkerClientInfoPtr client,
             const base::Optional<std::string>& error_msg) {*out_success = std::move(success);*out_client = std::move(client);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_success,
          out_client,
          out_error_msg));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::SkipWaiting(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->SkipWaiting(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::ClaimClients(
    ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg) {
  base::RunLoop loop;
  proxy_->ClaimClients(
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



void ServiceWorkerInterceptorForTesting::InitializeGlobalScope(ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration_info, FetchHandlerExistence fetch_handler_existence) {
  GetForwardingInterface()->InitializeGlobalScope(std::move(service_worker_host), std::move(registration_info), std::move(fetch_handler_existence));
}
void ServiceWorkerInterceptorForTesting::DispatchInstallEvent(DispatchInstallEventCallback callback) {
  GetForwardingInterface()->DispatchInstallEvent(std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchActivateEvent(DispatchActivateEventCallback callback) {
  GetForwardingInterface()->DispatchActivateEvent(std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchBackgroundFetchAbortEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchAbortEventCallback callback) {
  GetForwardingInterface()->DispatchBackgroundFetchAbortEvent(std::move(registration), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchBackgroundFetchClickEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchClickEventCallback callback) {
  GetForwardingInterface()->DispatchBackgroundFetchClickEvent(std::move(registration), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchBackgroundFetchFailEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchFailEventCallback callback) {
  GetForwardingInterface()->DispatchBackgroundFetchFailEvent(std::move(registration), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchBackgroundFetchSuccessEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchSuccessEventCallback callback) {
  GetForwardingInterface()->DispatchBackgroundFetchSuccessEvent(std::move(registration), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchCookieChangeEvent(const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) {
  GetForwardingInterface()->DispatchCookieChangeEvent(std::move(cookie), std::move(cause), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchFetchEvent(::blink::mojom::DispatchFetchEventParamsPtr params, ::blink::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) {
  GetForwardingInterface()->DispatchFetchEvent(std::move(params), std::move(response_callback), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchNotificationClickEvent(const std::string& notification_id, const blink::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, DispatchNotificationClickEventCallback callback) {
  GetForwardingInterface()->DispatchNotificationClickEvent(std::move(notification_id), std::move(notification_data), std::move(action_index), std::move(reply), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchNotificationCloseEvent(const std::string& notification_id, const blink::PlatformNotificationData& notification_data, DispatchNotificationCloseEventCallback callback) {
  GetForwardingInterface()->DispatchNotificationCloseEvent(std::move(notification_id), std::move(notification_data), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchPushEvent(const base::Optional<std::string>& payload, DispatchPushEventCallback callback) {
  GetForwardingInterface()->DispatchPushEvent(std::move(payload), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchSyncEvent(const std::string& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) {
  GetForwardingInterface()->DispatchSyncEvent(std::move(id), std::move(last_chance), std::move(timeout), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchAbortPaymentEvent(::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) {
  GetForwardingInterface()->DispatchAbortPaymentEvent(std::move(result_of_abort_payment), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchCanMakePaymentEvent(::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) {
  GetForwardingInterface()->DispatchCanMakePaymentEvent(std::move(event_data), std::move(result_of_can_make_payment), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchPaymentRequestEvent(::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) {
  GetForwardingInterface()->DispatchPaymentRequestEvent(std::move(request_data), std::move(response_callback), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) {
  GetForwardingInterface()->DispatchExtendableMessageEvent(std::move(event), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::DispatchExtendableMessageEventWithCustomTimeout(ExtendableMessageEventPtr event, base::TimeDelta timeout, DispatchExtendableMessageEventWithCustomTimeoutCallback callback) {
  GetForwardingInterface()->DispatchExtendableMessageEventWithCustomTimeout(std::move(event), std::move(timeout), std::move(callback));
}
void ServiceWorkerInterceptorForTesting::Ping(PingCallback callback) {
  GetForwardingInterface()->Ping(std::move(callback));
}
void ServiceWorkerInterceptorForTesting::SetIdleTimerDelayToZero() {
  GetForwardingInterface()->SetIdleTimerDelayToZero();
}
ServiceWorkerAsyncWaiter::ServiceWorkerAsyncWaiter(
    ServiceWorker* proxy) : proxy_(proxy) {}

ServiceWorkerAsyncWaiter::~ServiceWorkerAsyncWaiter() = default;

void ServiceWorkerAsyncWaiter::DispatchInstallEvent(
    ::blink::mojom::ServiceWorkerEventStatus* out_status, bool* out_has_fetch_handler) {
  base::RunLoop loop;
  proxy_->DispatchInstallEvent(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             bool* out_has_fetch_handler
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             bool has_fetch_handler) {*out_status = std::move(status);*out_has_fetch_handler = std::move(has_fetch_handler);
            loop->Quit();
          },
          &loop,
          out_status,
          out_has_fetch_handler));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchActivateEvent(
    ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchActivateEvent(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchBackgroundFetchAbortEvent(
    ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchBackgroundFetchAbortEvent(std::move(registration),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchBackgroundFetchClickEvent(
    ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchBackgroundFetchClickEvent(std::move(registration),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchBackgroundFetchFailEvent(
    ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchBackgroundFetchFailEvent(std::move(registration),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchBackgroundFetchSuccessEvent(
    ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchBackgroundFetchSuccessEvent(std::move(registration),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchCookieChangeEvent(
    const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchCookieChangeEvent(std::move(cookie),std::move(cause),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchFetchEvent(
    ::blink::mojom::DispatchFetchEventParamsPtr params, ::blink::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchFetchEvent(std::move(params),std::move(response_callback),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchNotificationClickEvent(
    const std::string& notification_id, const blink::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchNotificationClickEvent(std::move(notification_id),std::move(notification_data),std::move(action_index),std::move(reply),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchNotificationCloseEvent(
    const std::string& notification_id, const blink::PlatformNotificationData& notification_data, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchNotificationCloseEvent(std::move(notification_id),std::move(notification_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchPushEvent(
    const base::Optional<std::string>& payload, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchPushEvent(std::move(payload),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchSyncEvent(
    const std::string& id, bool last_chance, base::TimeDelta timeout, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchSyncEvent(std::move(id),std::move(last_chance),std::move(timeout),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchAbortPaymentEvent(
    ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchAbortPaymentEvent(std::move(result_of_abort_payment),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchCanMakePaymentEvent(
    ::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchCanMakePaymentEvent(std::move(event_data),std::move(result_of_can_make_payment),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchPaymentRequestEvent(
    ::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchPaymentRequestEvent(std::move(request_data),std::move(response_callback),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchExtendableMessageEvent(
    ExtendableMessageEventPtr event, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchExtendableMessageEvent(std::move(event),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::DispatchExtendableMessageEventWithCustomTimeout(
    ExtendableMessageEventPtr event, base::TimeDelta timeout, ::blink::mojom::ServiceWorkerEventStatus* out_status) {
  base::RunLoop loop;
  proxy_->DispatchExtendableMessageEventWithCustomTimeout(std::move(event),std::move(timeout),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             ::blink::mojom::ServiceWorkerEventStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void ServiceWorkerAsyncWaiter::Ping(
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





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif