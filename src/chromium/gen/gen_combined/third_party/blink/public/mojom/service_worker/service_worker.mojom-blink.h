// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-blink-forward.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/cookie_manager.mojom-blink.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-blink.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-blink.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-blink.h"
#include "third_party/blink/public/mojom/notifications/notification.mojom-blink.h"
#include "third_party/blink/public/mojom/payments/payment_app.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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
#include "third_party/blink/renderer/core/core_export.h"




namespace WTF {
struct blink_mojom_internal_FetchHandlerExistence_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::FetchHandlerExistence& value) {
    using utype = std::underlying_type<::blink::mojom::FetchHandlerExistence>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::FetchHandlerExistence& left, const ::blink::mojom::FetchHandlerExistence& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::FetchHandlerExistence>
    : public GenericHashTraits<::blink::mojom::FetchHandlerExistence> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::FetchHandlerExistence& value) {
    return value == static_cast<::blink::mojom::FetchHandlerExistence>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::FetchHandlerExistence& slot, bool) {
    slot = static_cast<::blink::mojom::FetchHandlerExistence>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::FetchHandlerExistence& value) {
    return value == static_cast<::blink::mojom::FetchHandlerExistence>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class ServiceWorkerHostProxy;

template <typename ImplRefTraits>
class ServiceWorkerHostStub;

class ServiceWorkerHostRequestValidator;
class ServiceWorkerHostResponseValidator;


class CORE_EXPORT ServiceWorkerHost
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

  
  virtual void SetCachedMetadata(const ::blink::KURL& url, const WTF::Vector<uint8_t>& data) = 0;

  
  virtual void ClearCachedMetadata(const ::blink::KURL& url) = 0;


  using GetClientsCallback = base::OnceCallback<void(WTF::Vector<::blink::mojom::blink::ServiceWorkerClientInfoPtr>)>;
  
  virtual void GetClients(::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) = 0;


  using GetClientCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerClientInfoPtr)>;
  
  virtual void GetClient(const WTF::String& client_uuid, GetClientCallback callback) = 0;


  using OpenNewTabCallback = base::OnceCallback<void(bool, ::blink::mojom::blink::ServiceWorkerClientInfoPtr, const WTF::String&)>;
  
  virtual void OpenNewTab(const ::blink::KURL& url, OpenNewTabCallback callback) = 0;


  using OpenPaymentHandlerWindowCallback = base::OnceCallback<void(bool, ::blink::mojom::blink::ServiceWorkerClientInfoPtr, const WTF::String&)>;
  
  virtual void OpenPaymentHandlerWindow(const ::blink::KURL& url, OpenPaymentHandlerWindowCallback callback) = 0;

  
  virtual void PostMessageToClient(const WTF::String& client_uuid, ::blink::BlinkTransferableMessage message) = 0;


  using FocusClientCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerClientInfoPtr)>;
  
  virtual void FocusClient(const WTF::String& client_uuid, FocusClientCallback callback) = 0;


  using NavigateClientCallback = base::OnceCallback<void(bool, ::blink::mojom::blink::ServiceWorkerClientInfoPtr, const WTF::String&)>;
  
  virtual void NavigateClient(const WTF::String& client_uuid, const ::blink::KURL& url, NavigateClientCallback callback) = 0;


  using SkipWaitingCallback = base::OnceCallback<void(bool)>;
  
  virtual void SkipWaiting(SkipWaitingCallback callback) = 0;


  using ClaimClientsCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerErrorType, const WTF::String&)>;
  
  virtual void ClaimClients(ClaimClientsCallback callback) = 0;
};

class ServiceWorkerProxy;

template <typename ImplRefTraits>
class ServiceWorkerStub;

class ServiceWorkerRequestValidator;
class ServiceWorkerResponseValidator;


class CORE_EXPORT ServiceWorker
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

  
  virtual void InitializeGlobalScope(ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr registration_info, FetchHandlerExistence fetch_handler_existence) = 0;


  using DispatchInstallEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus, bool)>;
  
  virtual void DispatchInstallEvent(DispatchInstallEventCallback callback) = 0;


  using DispatchActivateEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchActivateEvent(DispatchActivateEventCallback callback) = 0;


  using DispatchBackgroundFetchAbortEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchBackgroundFetchAbortEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchAbortEventCallback callback) = 0;


  using DispatchBackgroundFetchClickEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchBackgroundFetchClickEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchClickEventCallback callback) = 0;


  using DispatchBackgroundFetchFailEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchBackgroundFetchFailEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchFailEventCallback callback) = 0;


  using DispatchBackgroundFetchSuccessEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchBackgroundFetchSuccessEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchSuccessEventCallback callback) = 0;


  using DispatchCookieChangeEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchCookieChangeEvent(const ::blink::WebCanonicalCookie& cookie, ::network::mojom::blink::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) = 0;


  using DispatchFetchEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchFetchEvent(::blink::mojom::blink::DispatchFetchEventParamsPtr params, ::blink::mojom::blink::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) = 0;


  using DispatchNotificationClickEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchNotificationClickEvent(const WTF::String& notification_id, ::blink::mojom::blink::NotificationDataPtr notification_data, int32_t action_index, const WTF::String& reply, DispatchNotificationClickEventCallback callback) = 0;


  using DispatchNotificationCloseEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchNotificationCloseEvent(const WTF::String& notification_id, ::blink::mojom::blink::NotificationDataPtr notification_data, DispatchNotificationCloseEventCallback callback) = 0;


  using DispatchPushEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchPushEvent(const WTF::String& payload, DispatchPushEventCallback callback) = 0;


  using DispatchSyncEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchSyncEvent(const WTF::String& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) = 0;


  using DispatchAbortPaymentEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchAbortPaymentEvent(::payments::mojom::blink::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) = 0;


  using DispatchCanMakePaymentEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchCanMakePaymentEvent(::payments::mojom::blink::CanMakePaymentEventDataPtr event_data, ::payments::mojom::blink::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) = 0;


  using DispatchPaymentRequestEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchPaymentRequestEvent(::payments::mojom::blink::PaymentRequestEventDataPtr request_data, ::payments::mojom::blink::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) = 0;


  using DispatchExtendableMessageEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) = 0;


  using DispatchExtendableMessageEventWithCustomTimeoutCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchExtendableMessageEventWithCustomTimeout(ExtendableMessageEventPtr event, base::TimeDelta timeout, DispatchExtendableMessageEventWithCustomTimeoutCallback callback) = 0;


  using PingCallback = base::OnceCallback<void()>;
  
  virtual void Ping(PingCallback callback) = 0;

  
  virtual void SetIdleTimerDelayToZero() = 0;
};

class CORE_EXPORT ServiceWorkerHostProxy
    : public ServiceWorkerHost {
 public:
  using InterfaceType = ServiceWorkerHost;

  explicit ServiceWorkerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetCachedMetadata(const ::blink::KURL& url, const WTF::Vector<uint8_t>& data) final;
  void ClearCachedMetadata(const ::blink::KURL& url) final;
  void GetClients(::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) final;
  void GetClient(const WTF::String& client_uuid, GetClientCallback callback) final;
  void OpenNewTab(const ::blink::KURL& url, OpenNewTabCallback callback) final;
  void OpenPaymentHandlerWindow(const ::blink::KURL& url, OpenPaymentHandlerWindowCallback callback) final;
  void PostMessageToClient(const WTF::String& client_uuid, ::blink::BlinkTransferableMessage message) final;
  void FocusClient(const WTF::String& client_uuid, FocusClientCallback callback) final;
  void NavigateClient(const WTF::String& client_uuid, const ::blink::KURL& url, NavigateClientCallback callback) final;
  void SkipWaiting(SkipWaitingCallback callback) final;
  void ClaimClients(ClaimClientsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CORE_EXPORT ServiceWorkerProxy
    : public ServiceWorker {
 public:
  using InterfaceType = ServiceWorker;

  explicit ServiceWorkerProxy(mojo::MessageReceiverWithResponder* receiver);
  void InitializeGlobalScope(ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr registration_info, FetchHandlerExistence fetch_handler_existence) final;
  void DispatchInstallEvent(DispatchInstallEventCallback callback) final;
  void DispatchActivateEvent(DispatchActivateEventCallback callback) final;
  void DispatchBackgroundFetchAbortEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchAbortEventCallback callback) final;
  void DispatchBackgroundFetchClickEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchClickEventCallback callback) final;
  void DispatchBackgroundFetchFailEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchFailEventCallback callback) final;
  void DispatchBackgroundFetchSuccessEvent(::blink::mojom::blink::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchSuccessEventCallback callback) final;
  void DispatchCookieChangeEvent(const ::blink::WebCanonicalCookie& cookie, ::network::mojom::blink::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) final;
  void DispatchFetchEvent(::blink::mojom::blink::DispatchFetchEventParamsPtr params, ::blink::mojom::blink::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) final;
  void DispatchNotificationClickEvent(const WTF::String& notification_id, ::blink::mojom::blink::NotificationDataPtr notification_data, int32_t action_index, const WTF::String& reply, DispatchNotificationClickEventCallback callback) final;
  void DispatchNotificationCloseEvent(const WTF::String& notification_id, ::blink::mojom::blink::NotificationDataPtr notification_data, DispatchNotificationCloseEventCallback callback) final;
  void DispatchPushEvent(const WTF::String& payload, DispatchPushEventCallback callback) final;
  void DispatchSyncEvent(const WTF::String& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) final;
  void DispatchAbortPaymentEvent(::payments::mojom::blink::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) final;
  void DispatchCanMakePaymentEvent(::payments::mojom::blink::CanMakePaymentEventDataPtr event_data, ::payments::mojom::blink::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) final;
  void DispatchPaymentRequestEvent(::payments::mojom::blink::PaymentRequestEventDataPtr request_data, ::payments::mojom::blink::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) final;
  void DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) final;
  void DispatchExtendableMessageEventWithCustomTimeout(ExtendableMessageEventPtr event, base::TimeDelta timeout, DispatchExtendableMessageEventWithCustomTimeoutCallback callback) final;
  void Ping(PingCallback callback) final;
  void SetIdleTimerDelayToZero() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CORE_EXPORT ServiceWorkerHostStubDispatch {
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
class CORE_EXPORT ServiceWorkerStubDispatch {
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
class CORE_EXPORT ServiceWorkerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT ServiceWorkerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT ServiceWorkerHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT ServiceWorkerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class CORE_EXPORT ExtendableMessageEvent {
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
      ::blink::BlinkTransferableMessage message,
      const scoped_refptr<const ::blink::SecurityOrigin>& source_origin,
      ::blink::mojom::blink::ServiceWorkerClientInfoPtr source_info_for_client,
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr source_info_for_service_worker);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ExtendableMessageEvent::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  ::blink::BlinkTransferableMessage message;
  
  scoped_refptr<const ::blink::SecurityOrigin> source_origin;
  
  ::blink::mojom::blink::ServiceWorkerClientInfoPtr source_info_for_client;
  
  ::blink::mojom::blink::ServiceWorkerObjectInfoPtr source_info_for_service_worker;

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


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::ExtendableMessageEvent::DataView,
                                         ::blink::mojom::blink::ExtendableMessageEventPtr> {
  static bool IsNull(const ::blink::mojom::blink::ExtendableMessageEventPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ExtendableMessageEventPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::blink::ExtendableMessageEvent::message)& message(
       ::blink::mojom::blink::ExtendableMessageEventPtr& input) {
    return input->message;
  }

  static const decltype(::blink::mojom::blink::ExtendableMessageEvent::source_origin)& source_origin(
      const ::blink::mojom::blink::ExtendableMessageEventPtr& input) {
    return input->source_origin;
  }

  static const decltype(::blink::mojom::blink::ExtendableMessageEvent::source_info_for_client)& source_info_for_client(
      const ::blink::mojom::blink::ExtendableMessageEventPtr& input) {
    return input->source_info_for_client;
  }

  static  decltype(::blink::mojom::blink::ExtendableMessageEvent::source_info_for_service_worker)& source_info_for_service_worker(
       ::blink::mojom::blink::ExtendableMessageEventPtr& input) {
    return input->source_info_for_service_worker;
  }

  static bool Read(::blink::mojom::blink::ExtendableMessageEvent::DataView input, ::blink::mojom::blink::ExtendableMessageEventPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_BLINK_H_
