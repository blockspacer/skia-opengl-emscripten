// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT ServiceWorkerHostInterceptorForTesting : public ServiceWorkerHost {
  virtual ServiceWorkerHost* GetForwardingInterface() = 0;
  void SetCachedMetadata(const ::blink::KURL& url, const WTF::Vector<uint8_t>& data) override;
  void ClearCachedMetadata(const ::blink::KURL& url) override;
  void GetClients(::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) override;
  void GetClient(const WTF::String& client_uuid, GetClientCallback callback) override;
  void OpenNewTab(const ::blink::KURL& url, OpenNewTabCallback callback) override;
  void OpenPaymentHandlerWindow(const ::blink::KURL& url, OpenPaymentHandlerWindowCallback callback) override;
  void PostMessageToClient(const WTF::String& client_uuid, ::blink::BlinkTransferableMessage message) override;
  void FocusClient(const WTF::String& client_uuid, FocusClientCallback callback) override;
  void NavigateClient(const WTF::String& client_uuid, const ::blink::KURL& url, NavigateClientCallback callback) override;
  void SkipWaiting(SkipWaitingCallback callback) override;
  void ClaimClients(ClaimClientsCallback callback) override;
};
class CORE_EXPORT ServiceWorkerHostAsyncWaiter {
 public:
  explicit ServiceWorkerHostAsyncWaiter(ServiceWorkerHost* proxy);
  ~ServiceWorkerHostAsyncWaiter();
  void GetClients(
      ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr options, WTF::Vector<::blink::mojom::blink::ServiceWorkerClientInfoPtr>* out_clients);
  void GetClient(
      const WTF::String& client_uuid, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client);
  void OpenNewTab(
      const ::blink::KURL& url, bool* out_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client, WTF::String* out_error_msg);
  void OpenPaymentHandlerWindow(
      const ::blink::KURL& url, bool* out_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client, WTF::String* out_error_msg);
  void FocusClient(
      const WTF::String& client_uuid, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client);
  void NavigateClient(
      const WTF::String& client_uuid, const ::blink::KURL& url, bool* out_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client, WTF::String* out_error_msg);
  void SkipWaiting(
      bool* out_success);
  void ClaimClients(
      ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg);

 private:
  ServiceWorkerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHostAsyncWaiter);
};


class CORE_EXPORT ServiceWorkerInterceptorForTesting : public ServiceWorker {
  virtual ServiceWorker* GetForwardingInterface() = 0;
  void InitializeGlobalScope(ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr registration_info, FetchHandlerExistence fetch_handler_existence) override;
  void DispatchInstallEvent(DispatchInstallEventCallback callback) override;
  void DispatchActivateEvent(DispatchActivateEventCallback callback) override;
  void DispatchBackgroundFetchAbortEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchAbortEventCallback callback) override;
  void DispatchBackgroundFetchClickEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchClickEventCallback callback) override;
  void DispatchBackgroundFetchFailEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchFailEventCallback callback) override;
  void DispatchBackgroundFetchSuccessEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchSuccessEventCallback callback) override;
  void DispatchCookieChangeEvent(const ::blink::WebCanonicalCookie& cookie, ::network::mojom::blink::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) override;
  void DispatchFetchEvent(::blink::mojom::blink::DispatchFetchEventParamsPtr params, ::blink::mojom::blink::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) override;
  void DispatchNotificationClickEvent(const WTF::String& notification_id, ::blink::mojom::blink::NotificationDataPtr notification_data, int32_t action_index, const WTF::String& reply, DispatchNotificationClickEventCallback callback) override;
  void DispatchNotificationCloseEvent(const WTF::String& notification_id, ::blink::mojom::blink::NotificationDataPtr notification_data, DispatchNotificationCloseEventCallback callback) override;
  void DispatchPushEvent(const WTF::String& payload, DispatchPushEventCallback callback) override;
  void DispatchSyncEvent(const WTF::String& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) override;
  void DispatchAbortPaymentEvent(::payments::mojom::blink::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) override;
  void DispatchCanMakePaymentEvent(::payments::mojom::blink::CanMakePaymentEventDataPtr event_data, ::payments::mojom::blink::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) override;
  void DispatchPaymentRequestEvent(::payments::mojom::blink::PaymentRequestEventDataPtr request_data, ::payments::mojom::blink::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) override;
  void DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) override;
  void DispatchExtendableMessageEventWithCustomTimeout(ExtendableMessageEventPtr event, base::TimeDelta timeout, DispatchExtendableMessageEventWithCustomTimeoutCallback callback) override;
  void Ping(PingCallback callback) override;
  void SetIdleTimerDelayToZero() override;
};
class CORE_EXPORT ServiceWorkerAsyncWaiter {
 public:
  explicit ServiceWorkerAsyncWaiter(ServiceWorker* proxy);
  ~ServiceWorkerAsyncWaiter();
  void DispatchInstallEvent(
      ::blink::mojom::blink::ServiceWorkerEventStatus* out_status, bool* out_has_fetch_handler);
  void DispatchActivateEvent(
      ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchAbortEvent(
      ::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchClickEvent(
      ::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchFailEvent(
      ::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchSuccessEvent(
      ::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchCookieChangeEvent(
      const ::blink::WebCanonicalCookie& cookie, ::network::mojom::blink::CookieChangeCause cause, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchFetchEvent(
      ::blink::mojom::blink::DispatchFetchEventParamsPtr params, ::blink::mojom::blink::ServiceWorkerFetchResponseCallbackPtr response_callback, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchNotificationClickEvent(
      const WTF::String& notification_id, ::blink::mojom::blink::NotificationDataPtr notification_data, int32_t action_index, const WTF::String& reply, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchNotificationCloseEvent(
      const WTF::String& notification_id, ::blink::mojom::blink::NotificationDataPtr notification_data, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchPushEvent(
      const WTF::String& payload, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchSyncEvent(
      const WTF::String& id, bool last_chance, base::TimeDelta timeout, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchAbortPaymentEvent(
      ::payments::mojom::blink::PaymentHandlerResponseCallbackPtr result_of_abort_payment, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchCanMakePaymentEvent(
      ::payments::mojom::blink::CanMakePaymentEventDataPtr event_data, ::payments::mojom::blink::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchPaymentRequestEvent(
      ::payments::mojom::blink::PaymentRequestEventDataPtr request_data, ::payments::mojom::blink::PaymentHandlerResponseCallbackPtr response_callback, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchExtendableMessageEvent(
      ExtendableMessageEventPtr event, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void DispatchExtendableMessageEventWithCustomTimeout(
      ExtendableMessageEventPtr event, base::TimeDelta timeout, ::blink::mojom::blink::ServiceWorkerEventStatus* out_status);
  void Ping(
      );

 private:
  ServiceWorker* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_BLINK_TEST_UTILS_H_