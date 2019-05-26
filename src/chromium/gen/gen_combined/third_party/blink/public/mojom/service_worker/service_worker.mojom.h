// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-forward.h"
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
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class ServiceWorkerHostProxy;

template <typename ImplRefTraits>
class ServiceWorkerHostStub;

class ServiceWorkerHostRequestValidator;
class ServiceWorkerHostResponseValidator;


class BLINK_COMMON_EXPORT ServiceWorkerHost
    : public ServiceWorkerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerHostInterfaceBase;
  using Proxy_ = ServiceWorkerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerHostStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerHostRequestValidator;
  using ResponseValidator_ = ServiceWorkerHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetCachedMetadataMinVersion = 0,
    kClearCachedMetadataMinVersion = 0,
    kGetClientsMinVersion = 0,
    kGetClientMinVersion = 0,
    kOpenNewTabMinVersion = 0,
    kOpenPaymentHandlerWindowMinVersion = 0,
    kPostMessageToClientMinVersion = 0,
    kFocusClientMinVersion = 0,
    kNavigateClientMinVersion = 0,
    kSkipWaitingMinVersion = 0,
    kClaimClientsMinVersion = 0,
  };
  virtual ~ServiceWorkerHost() {}

  
  virtual void SetCachedMetadata(const GURL& url, const std::vector<uint8_t>& data) = 0;

  
  virtual void ClearCachedMetadata(const GURL& url) = 0;


  using GetClientsCallback = base::OnceCallback<void(std::vector<::blink::mojom::ServiceWorkerClientInfoPtr>)>;
  
  virtual void GetClients(::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) = 0;


  using GetClientCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerClientInfoPtr)>;
  
  virtual void GetClient(const std::string& client_uuid, GetClientCallback callback) = 0;


  using OpenNewTabCallback = base::OnceCallback<void(bool, ::blink::mojom::ServiceWorkerClientInfoPtr, const base::Optional<std::string>&)>;
  
  virtual void OpenNewTab(const GURL& url, OpenNewTabCallback callback) = 0;


  using OpenPaymentHandlerWindowCallback = base::OnceCallback<void(bool, ::blink::mojom::ServiceWorkerClientInfoPtr, const base::Optional<std::string>&)>;
  
  virtual void OpenPaymentHandlerWindow(const GURL& url, OpenPaymentHandlerWindowCallback callback) = 0;

  
  virtual void PostMessageToClient(const std::string& client_uuid, ::blink::TransferableMessage message) = 0;


  using FocusClientCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerClientInfoPtr)>;
  
  virtual void FocusClient(const std::string& client_uuid, FocusClientCallback callback) = 0;


  using NavigateClientCallback = base::OnceCallback<void(bool, ::blink::mojom::ServiceWorkerClientInfoPtr, const base::Optional<std::string>&)>;
  
  virtual void NavigateClient(const std::string& client_uuid, const GURL& url, NavigateClientCallback callback) = 0;


  using SkipWaitingCallback = base::OnceCallback<void(bool)>;
  
  virtual void SkipWaiting(SkipWaitingCallback callback) = 0;


  using ClaimClientsCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerErrorType, const base::Optional<std::string>&)>;
  
  virtual void ClaimClients(ClaimClientsCallback callback) = 0;
};

class ServiceWorkerProxy;

template <typename ImplRefTraits>
class ServiceWorkerStub;

class ServiceWorkerRequestValidator;
class ServiceWorkerResponseValidator;


class BLINK_COMMON_EXPORT ServiceWorker
    : public ServiceWorkerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerInterfaceBase;
  using Proxy_ = ServiceWorkerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerRequestValidator;
  using ResponseValidator_ = ServiceWorkerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeGlobalScopeMinVersion = 0,
    kDispatchInstallEventMinVersion = 0,
    kDispatchActivateEventMinVersion = 0,
    kDispatchBackgroundFetchAbortEventMinVersion = 0,
    kDispatchBackgroundFetchClickEventMinVersion = 0,
    kDispatchBackgroundFetchFailEventMinVersion = 0,
    kDispatchBackgroundFetchSuccessEventMinVersion = 0,
    kDispatchCookieChangeEventMinVersion = 0,
    kDispatchFetchEventMinVersion = 0,
    kDispatchNotificationClickEventMinVersion = 0,
    kDispatchNotificationCloseEventMinVersion = 0,
    kDispatchPushEventMinVersion = 0,
    kDispatchSyncEventMinVersion = 0,
    kDispatchAbortPaymentEventMinVersion = 0,
    kDispatchCanMakePaymentEventMinVersion = 0,
    kDispatchPaymentRequestEventMinVersion = 0,
    kDispatchExtendableMessageEventMinVersion = 0,
    kDispatchExtendableMessageEventWithCustomTimeoutMinVersion = 0,
    kPingMinVersion = 0,
    kSetIdleTimerDelayToZeroMinVersion = 0,
  };
  virtual ~ServiceWorker() {}

  
  virtual void InitializeGlobalScope(ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration_info, FetchHandlerExistence fetch_handler_existence) = 0;


  using DispatchInstallEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus, bool)>;
  
  virtual void DispatchInstallEvent(DispatchInstallEventCallback callback) = 0;


  using DispatchActivateEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchActivateEvent(DispatchActivateEventCallback callback) = 0;


  using DispatchBackgroundFetchAbortEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchBackgroundFetchAbortEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchAbortEventCallback callback) = 0;


  using DispatchBackgroundFetchClickEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchBackgroundFetchClickEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchClickEventCallback callback) = 0;


  using DispatchBackgroundFetchFailEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchBackgroundFetchFailEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchFailEventCallback callback) = 0;


  using DispatchBackgroundFetchSuccessEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchBackgroundFetchSuccessEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchSuccessEventCallback callback) = 0;


  using DispatchCookieChangeEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchCookieChangeEvent(const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) = 0;


  using DispatchFetchEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchFetchEvent(::blink::mojom::DispatchFetchEventParamsPtr params, ::blink::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) = 0;


  using DispatchNotificationClickEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchNotificationClickEvent(const std::string& notification_id, const blink::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, DispatchNotificationClickEventCallback callback) = 0;


  using DispatchNotificationCloseEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchNotificationCloseEvent(const std::string& notification_id, const blink::PlatformNotificationData& notification_data, DispatchNotificationCloseEventCallback callback) = 0;


  using DispatchPushEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchPushEvent(const base::Optional<std::string>& payload, DispatchPushEventCallback callback) = 0;


  using DispatchSyncEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchSyncEvent(const std::string& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) = 0;


  using DispatchAbortPaymentEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchAbortPaymentEvent(::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) = 0;


  using DispatchCanMakePaymentEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchCanMakePaymentEvent(::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) = 0;


  using DispatchPaymentRequestEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchPaymentRequestEvent(::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) = 0;


  using DispatchExtendableMessageEventCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) = 0;


  using DispatchExtendableMessageEventWithCustomTimeoutCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerEventStatus)>;
  
  virtual void DispatchExtendableMessageEventWithCustomTimeout(ExtendableMessageEventPtr event, base::TimeDelta timeout, DispatchExtendableMessageEventWithCustomTimeoutCallback callback) = 0;


  using PingCallback = base::OnceCallback<void()>;
  
  virtual void Ping(PingCallback callback) = 0;

  
  virtual void SetIdleTimerDelayToZero() = 0;
};

class BLINK_COMMON_EXPORT ServiceWorkerHostProxy
    : public ServiceWorkerHost {
 public:
  using InterfaceType = ServiceWorkerHost;

  explicit ServiceWorkerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetCachedMetadata(const GURL& url, const std::vector<uint8_t>& data) final;
  void ClearCachedMetadata(const GURL& url) final;
  void GetClients(::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) final;
  void GetClient(const std::string& client_uuid, GetClientCallback callback) final;
  void OpenNewTab(const GURL& url, OpenNewTabCallback callback) final;
  void OpenPaymentHandlerWindow(const GURL& url, OpenPaymentHandlerWindowCallback callback) final;
  void PostMessageToClient(const std::string& client_uuid, ::blink::TransferableMessage message) final;
  void FocusClient(const std::string& client_uuid, FocusClientCallback callback) final;
  void NavigateClient(const std::string& client_uuid, const GURL& url, NavigateClientCallback callback) final;
  void SkipWaiting(SkipWaitingCallback callback) final;
  void ClaimClients(ClaimClientsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT ServiceWorkerProxy
    : public ServiceWorker {
 public:
  using InterfaceType = ServiceWorker;

  explicit ServiceWorkerProxy(mojo::MessageReceiverWithResponder* receiver);
  void InitializeGlobalScope(ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration_info, FetchHandlerExistence fetch_handler_existence) final;
  void DispatchInstallEvent(DispatchInstallEventCallback callback) final;
  void DispatchActivateEvent(DispatchActivateEventCallback callback) final;
  void DispatchBackgroundFetchAbortEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchAbortEventCallback callback) final;
  void DispatchBackgroundFetchClickEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchClickEventCallback callback) final;
  void DispatchBackgroundFetchFailEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchFailEventCallback callback) final;
  void DispatchBackgroundFetchSuccessEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchSuccessEventCallback callback) final;
  void DispatchCookieChangeEvent(const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) final;
  void DispatchFetchEvent(::blink::mojom::DispatchFetchEventParamsPtr params, ::blink::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) final;
  void DispatchNotificationClickEvent(const std::string& notification_id, const blink::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, DispatchNotificationClickEventCallback callback) final;
  void DispatchNotificationCloseEvent(const std::string& notification_id, const blink::PlatformNotificationData& notification_data, DispatchNotificationCloseEventCallback callback) final;
  void DispatchPushEvent(const base::Optional<std::string>& payload, DispatchPushEventCallback callback) final;
  void DispatchSyncEvent(const std::string& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) final;
  void DispatchAbortPaymentEvent(::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) final;
  void DispatchCanMakePaymentEvent(::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) final;
  void DispatchPaymentRequestEvent(::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) final;
  void DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) final;
  void DispatchExtendableMessageEventWithCustomTimeout(ExtendableMessageEventPtr event, base::TimeDelta timeout, DispatchExtendableMessageEventWithCustomTimeoutCallback callback) final;
  void Ping(PingCallback callback) final;
  void SetIdleTimerDelayToZero() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT ServiceWorkerHostStubDispatch {
 public:
  static bool Accept(ServiceWorkerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerHost>>
class ServiceWorkerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerHostStub() {}
  ~ServiceWorkerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ServiceWorkerStubDispatch {
 public:
  static bool Accept(ServiceWorker* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorker* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorker>>
class ServiceWorkerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerStub() {}
  ~ServiceWorkerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ServiceWorkerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT ExtendableMessageEvent {
 public:
  using DataView = ExtendableMessageEventDataView;
  using Data_ = internal::ExtendableMessageEvent_Data;

  template <typename... Args>
  static ExtendableMessageEventPtr New(Args&&... args) {
    return ExtendableMessageEventPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ExtendableMessageEventPtr From(const U& u) {
    return mojo::TypeConverter<ExtendableMessageEventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ExtendableMessageEvent>::Convert(*this);
  }


  ExtendableMessageEvent();

  ExtendableMessageEvent(
      ::blink::TransferableMessage message,
      const url::Origin& source_origin,
      ::blink::mojom::ServiceWorkerClientInfoPtr source_info_for_client,
      ::blink::mojom::ServiceWorkerObjectInfoPtr source_info_for_service_worker);

  ~ExtendableMessageEvent();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ExtendableMessageEventPtr>
  ExtendableMessageEventPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ExtendableMessageEvent>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ExtendableMessageEvent::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ExtendableMessageEvent::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ExtendableMessageEvent_UnserializedMessageContext<
            UserType, ExtendableMessageEvent::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ExtendableMessageEvent::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ExtendableMessageEvent::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ExtendableMessageEvent_UnserializedMessageContext<
            UserType, ExtendableMessageEvent::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ExtendableMessageEvent::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::TransferableMessage message;
  
  url::Origin source_origin;
  
  ::blink::mojom::ServiceWorkerClientInfoPtr source_info_for_client;
  
  ::blink::mojom::ServiceWorkerObjectInfoPtr source_info_for_service_worker;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ExtendableMessageEvent);
};

template <typename StructPtrType>
ExtendableMessageEventPtr ExtendableMessageEvent::Clone() const {
  return New(
      mojo::Clone(message),
      mojo::Clone(source_origin),
      mojo::Clone(source_info_for_client),
      mojo::Clone(source_info_for_service_worker)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ExtendableMessageEvent>::value>::type*>
bool ExtendableMessageEvent::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->message, other_struct.message))
    return false;
  if (!mojo::Equals(this->source_origin, other_struct.source_origin))
    return false;
  if (!mojo::Equals(this->source_info_for_client, other_struct.source_info_for_client))
    return false;
  if (!mojo::Equals(this->source_info_for_service_worker, other_struct.source_info_for_service_worker))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ExtendableMessageEvent::DataView,
                                         ::blink::mojom::ExtendableMessageEventPtr> {
  static bool IsNull(const ::blink::mojom::ExtendableMessageEventPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ExtendableMessageEventPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::ExtendableMessageEvent::message)& message(
       ::blink::mojom::ExtendableMessageEventPtr& input) {
    return input->message;
  }

  static const decltype(::blink::mojom::ExtendableMessageEvent::source_origin)& source_origin(
      const ::blink::mojom::ExtendableMessageEventPtr& input) {
    return input->source_origin;
  }

  static const decltype(::blink::mojom::ExtendableMessageEvent::source_info_for_client)& source_info_for_client(
      const ::blink::mojom::ExtendableMessageEventPtr& input) {
    return input->source_info_for_client;
  }

  static  decltype(::blink::mojom::ExtendableMessageEvent::source_info_for_service_worker)& source_info_for_service_worker(
       ::blink::mojom::ExtendableMessageEventPtr& input) {
    return input->source_info_for_service_worker;
  }

  static bool Read(::blink::mojom::ExtendableMessageEvent::DataView input, ::blink::mojom::ExtendableMessageEventPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_H_