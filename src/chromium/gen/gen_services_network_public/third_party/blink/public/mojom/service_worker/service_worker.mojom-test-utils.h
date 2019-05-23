// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ServiceWorkerHostInterceptorForTesting : public ServiceWorkerHost {
  virtual ServiceWorkerHost* GetForwardingInterface() = 0;
  void SetCachedMetadata(const GURL& url, const std::vector<uint8_t>& data) override;
  void ClearCachedMetadata(const GURL& url) override;
  void GetClients(::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) override;
  void GetClient(const std::string& client_uuid, GetClientCallback callback) override;
  void OpenNewTab(const GURL& url, OpenNewTabCallback callback) override;
  void OpenPaymentHandlerWindow(const GURL& url, OpenPaymentHandlerWindowCallback callback) override;
  void PostMessageToClient(const std::string& client_uuid, ::blink::TransferableMessage message) override;
  void FocusClient(const std::string& client_uuid, FocusClientCallback callback) override;
  void NavigateClient(const std::string& client_uuid, const GURL& url, NavigateClientCallback callback) override;
  void SkipWaiting(SkipWaitingCallback callback) override;
  void ClaimClients(ClaimClientsCallback callback) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerHostAsyncWaiter {
 public:
  explicit ServiceWorkerHostAsyncWaiter(ServiceWorkerHost* proxy);
  ~ServiceWorkerHostAsyncWaiter();
  void GetClients(
      ::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, std::vector<::blink::mojom::ServiceWorkerClientInfoPtr>* out_clients);
  void GetClient(
      const std::string& client_uuid, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client);
  void OpenNewTab(
      const GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, base::Optional<std::string>* out_error_msg);
  void OpenPaymentHandlerWindow(
      const GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, base::Optional<std::string>* out_error_msg);
  void FocusClient(
      const std::string& client_uuid, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client);
  void NavigateClient(
      const std::string& client_uuid, const GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, base::Optional<std::string>* out_error_msg);
  void SkipWaiting(
      bool* out_success);
  void ClaimClients(
      ::blink::mojom::ServiceWorkerErrorType* out_error, base::Optional<std::string>* out_error_msg);

 private:
  ServiceWorkerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHostAsyncWaiter);
};


class BLINK_COMMON_EXPORT ServiceWorkerInterceptorForTesting : public ServiceWorker {
  virtual ServiceWorker* GetForwardingInterface() = 0;
  void InitializeGlobalScope(ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration_info, FetchHandlerExistence fetch_handler_existence) override;
  void DispatchInstallEvent(DispatchInstallEventCallback callback) override;
  void DispatchActivateEvent(DispatchActivateEventCallback callback) override;
  void DispatchBackgroundFetchAbortEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchAbortEventCallback callback) override;
  void DispatchBackgroundFetchClickEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchClickEventCallback callback) override;
  void DispatchBackgroundFetchFailEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchFailEventCallback callback) override;
  void DispatchBackgroundFetchSuccessEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchSuccessEventCallback callback) override;
  void DispatchCookieChangeEvent(const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) override;
  void DispatchFetchEvent(::blink::mojom::DispatchFetchEventParamsPtr params, ::blink::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) override;
  void DispatchNotificationClickEvent(const std::string& notification_id, const blink::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, DispatchNotificationClickEventCallback callback) override;
  void DispatchNotificationCloseEvent(const std::string& notification_id, const blink::PlatformNotificationData& notification_data, DispatchNotificationCloseEventCallback callback) override;
  void DispatchPushEvent(const base::Optional<std::string>& payload, DispatchPushEventCallback callback) override;
  void DispatchSyncEvent(const std::string& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) override;
  void DispatchAbortPaymentEvent(::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) override;
  void DispatchCanMakePaymentEvent(::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) override;
  void DispatchPaymentRequestEvent(::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) override;
  void DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) override;
  void DispatchExtendableMessageEventWithCustomTimeout(ExtendableMessageEventPtr event, base::TimeDelta timeout, DispatchExtendableMessageEventWithCustomTimeoutCallback callback) override;
  void Ping(PingCallback callback) override;
  void SetIdleTimerDelayToZero() override;
};
class BLINK_COMMON_EXPORT ServiceWorkerAsyncWaiter {
 public:
  explicit ServiceWorkerAsyncWaiter(ServiceWorker* proxy);
  ~ServiceWorkerAsyncWaiter();
  void DispatchInstallEvent(
      ::blink::mojom::ServiceWorkerEventStatus* out_status, bool* out_has_fetch_handler);
  void DispatchActivateEvent(
      ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchAbortEvent(
      ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchClickEvent(
      ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchFailEvent(
      ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchSuccessEvent(
      ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchCookieChangeEvent(
      const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchFetchEvent(
      ::blink::mojom::DispatchFetchEventParamsPtr params, ::blink::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchNotificationClickEvent(
      const std::string& notification_id, const blink::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchNotificationCloseEvent(
      const std::string& notification_id, const blink::PlatformNotificationData& notification_data, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchPushEvent(
      const base::Optional<std::string>& payload, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchSyncEvent(
      const std::string& id, bool last_chance, base::TimeDelta timeout, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchAbortPaymentEvent(
      ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchCanMakePaymentEvent(
      ::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchPaymentRequestEvent(
      ::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchExtendableMessageEvent(
      ExtendableMessageEventPtr event, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchExtendableMessageEventWithCustomTimeout(
      ExtendableMessageEventPtr event, base::TimeDelta timeout, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void Ping(
      );

 private:
  ServiceWorker* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_TEST_UTILS_H_