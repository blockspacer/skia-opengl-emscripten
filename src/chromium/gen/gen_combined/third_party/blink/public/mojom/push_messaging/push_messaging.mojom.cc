// Copyright 2013 The Chromium Authors. All rights reserved.
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

#include "third_party/blink/public/mojom/push_messaging/push_messaging.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/push_messaging/push_messaging.mojom-params-data.h"
#include "third_party/blink/public/mojom/push_messaging/push_messaging.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/push_messaging/push_messaging.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_JUMBO_H_
#include "third_party/blink/public/common/push_messaging/push_messaging_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
PushSubscriptionOptions::PushSubscriptionOptions()
    : user_visible_only(),
      application_server_key() {}

PushSubscriptionOptions::PushSubscriptionOptions(
    bool user_visible_only_in,
    const std::string& application_server_key_in)
    : user_visible_only(std::move(user_visible_only_in)),
      application_server_key(std::move(application_server_key_in)) {}

PushSubscriptionOptions::~PushSubscriptionOptions() = default;

bool PushSubscriptionOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PushMessaging::Name_[] = "blink.mojom.PushMessaging";

class PushMessaging_Subscribe_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PushMessaging_Subscribe_ForwardToCallback(
      PushMessaging::SubscribeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PushMessaging::SubscribeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PushMessaging_Subscribe_ForwardToCallback);
};

class PushMessaging_Unsubscribe_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PushMessaging_Unsubscribe_ForwardToCallback(
      PushMessaging::UnsubscribeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PushMessaging::UnsubscribeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PushMessaging_Unsubscribe_ForwardToCallback);
};

class PushMessaging_GetSubscription_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PushMessaging_GetSubscription_ForwardToCallback(
      PushMessaging::GetSubscriptionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PushMessaging::GetSubscriptionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PushMessaging_GetSubscription_ForwardToCallback);
};

PushMessagingProxy::PushMessagingProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PushMessagingProxy::Subscribe(
    int32_t in_render_frame_id, int64_t in_service_worker_registration_id, const blink::WebPushSubscriptionOptions& in_options, bool in_user_gesture, SubscribeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PushMessaging::Subscribe");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPushMessaging_Subscribe_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PushMessaging_Subscribe_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->render_frame_id = in_render_frame_id;
  params->service_worker_registration_id = in_service_worker_registration_id;
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::PushSubscriptionOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in PushMessaging.Subscribe request");
  params->user_gesture = in_user_gesture;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PushMessaging::Name_);
  message.set_method_name("Subscribe");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PushMessaging_Subscribe_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PushMessagingProxy::Unsubscribe(
    int64_t in_service_worker_registration_id, UnsubscribeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PushMessaging::Unsubscribe");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPushMessaging_Unsubscribe_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PushMessaging_Unsubscribe_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PushMessaging::Name_);
  message.set_method_name("Unsubscribe");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PushMessaging_Unsubscribe_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PushMessagingProxy::GetSubscription(
    int64_t in_service_worker_registration_id, GetSubscriptionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PushMessaging::GetSubscription");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPushMessaging_GetSubscription_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PushMessaging_GetSubscription_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PushMessaging::Name_);
  message.set_method_name("GetSubscription");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PushMessaging_GetSubscription_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class PushMessaging_Subscribe_ProxyToResponder {
 public:
  static PushMessaging::SubscribeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PushMessaging_Subscribe_ProxyToResponder> proxy(
        new PushMessaging_Subscribe_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PushMessaging_Subscribe_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PushMessaging_Subscribe_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PushMessaging_Subscribe_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PushMessaging::SubscribeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::PushRegistrationStatus in_status, const base::Optional<GURL>& in_endpoint, const base::Optional<blink::WebPushSubscriptionOptions>& in_options, const base::Optional<std::vector<uint8_t>>& in_p256dh, const base::Optional<std::vector<uint8_t>>& in_auth);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PushMessaging_Subscribe_ProxyToResponder);
};

bool PushMessaging_Subscribe_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PushMessaging::SubscribeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PushMessaging_Subscribe_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PushMessaging_Subscribe_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::PushRegistrationStatus p_status{};
  base::Optional<GURL> p_endpoint{};
  base::Optional<blink::WebPushSubscriptionOptions> p_options{};
  base::Optional<std::vector<uint8_t>> p_p256dh{};
  base::Optional<std::vector<uint8_t>> p_auth{};
  PushMessaging_Subscribe_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadEndpoint(&p_endpoint))
    success = false;
  if (!input_data_view.ReadOptions(&p_options))
    success = false;
  if (!input_data_view.ReadP256dh(&p_p256dh))
    success = false;
  if (!input_data_view.ReadAuth(&p_auth))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PushMessaging::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_endpoint), 
std::move(p_options), 
std::move(p_p256dh), 
std::move(p_auth));
  return true;
}

void PushMessaging_Subscribe_ProxyToResponder::Run(
    ::blink::mojom::PushRegistrationStatus in_status, const base::Optional<GURL>& in_endpoint, const base::Optional<blink::WebPushSubscriptionOptions>& in_options, const base::Optional<std::vector<uint8_t>>& in_p256dh, const base::Optional<std::vector<uint8_t>>& in_auth) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPushMessaging_Subscribe_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PushMessaging_Subscribe_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PushRegistrationStatus>(
      in_status, &params->status);
  typename decltype(params->endpoint)::BaseType::BufferWriter
      endpoint_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_endpoint, buffer, &endpoint_writer, &serialization_context);
  params->endpoint.Set(
      endpoint_writer.is_null() ? nullptr : endpoint_writer.data());
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::PushSubscriptionOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  typename decltype(params->p256dh)::BaseType::BufferWriter
      p256dh_writer;
  const mojo::internal::ContainerValidateParams p256dh_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_p256dh, buffer, &p256dh_writer, &p256dh_validate_params,
      &serialization_context);
  params->p256dh.Set(
      p256dh_writer.is_null() ? nullptr : p256dh_writer.data());
  typename decltype(params->auth)::BaseType::BufferWriter
      auth_writer;
  const mojo::internal::ContainerValidateParams auth_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_auth, buffer, &auth_writer, &auth_validate_params,
      &serialization_context);
  params->auth.Set(
      auth_writer.is_null() ? nullptr : auth_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PushMessaging::SubscribeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PushMessaging::Name_);
  message.set_method_name("Subscribe");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PushMessaging_Unsubscribe_ProxyToResponder {
 public:
  static PushMessaging::UnsubscribeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PushMessaging_Unsubscribe_ProxyToResponder> proxy(
        new PushMessaging_Unsubscribe_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PushMessaging_Unsubscribe_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PushMessaging_Unsubscribe_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PushMessaging_Unsubscribe_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PushMessaging::UnsubscribeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      blink::WebPushError::ErrorType in_error_type, bool in_did_unsubscribe, const base::Optional<std::string>& in_error_message);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PushMessaging_Unsubscribe_ProxyToResponder);
};

bool PushMessaging_Unsubscribe_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PushMessaging::UnsubscribeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PushMessaging_Unsubscribe_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PushMessaging_Unsubscribe_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  blink::WebPushError::ErrorType p_error_type{};
  bool p_did_unsubscribe{};
  base::Optional<std::string> p_error_message{};
  PushMessaging_Unsubscribe_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorType(&p_error_type))
    success = false;
  p_did_unsubscribe = input_data_view.did_unsubscribe();
  if (!input_data_view.ReadErrorMessage(&p_error_message))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PushMessaging::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_type), 
std::move(p_did_unsubscribe), 
std::move(p_error_message));
  return true;
}

void PushMessaging_Unsubscribe_ProxyToResponder::Run(
    blink::WebPushError::ErrorType in_error_type, bool in_did_unsubscribe, const base::Optional<std::string>& in_error_message) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPushMessaging_Unsubscribe_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PushMessaging_Unsubscribe_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PushErrorType>(
      in_error_type, &params->error_type);
  params->did_unsubscribe = in_did_unsubscribe;
  typename decltype(params->error_message)::BaseType::BufferWriter
      error_message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_message, buffer, &error_message_writer, &serialization_context);
  params->error_message.Set(
      error_message_writer.is_null() ? nullptr : error_message_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PushMessaging::UnsubscribeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PushMessaging::Name_);
  message.set_method_name("Unsubscribe");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PushMessaging_GetSubscription_ProxyToResponder {
 public:
  static PushMessaging::GetSubscriptionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PushMessaging_GetSubscription_ProxyToResponder> proxy(
        new PushMessaging_GetSubscription_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PushMessaging_GetSubscription_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PushMessaging_GetSubscription_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PushMessaging_GetSubscription_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PushMessaging::GetSubscriptionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::PushGetRegistrationStatus in_status, const base::Optional<GURL>& in_endpoint, const base::Optional<blink::WebPushSubscriptionOptions>& in_options, const base::Optional<std::vector<uint8_t>>& in_p256dh, const base::Optional<std::vector<uint8_t>>& in_auth);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PushMessaging_GetSubscription_ProxyToResponder);
};

bool PushMessaging_GetSubscription_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PushMessaging::GetSubscriptionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PushMessaging_GetSubscription_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PushMessaging_GetSubscription_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::PushGetRegistrationStatus p_status{};
  base::Optional<GURL> p_endpoint{};
  base::Optional<blink::WebPushSubscriptionOptions> p_options{};
  base::Optional<std::vector<uint8_t>> p_p256dh{};
  base::Optional<std::vector<uint8_t>> p_auth{};
  PushMessaging_GetSubscription_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadEndpoint(&p_endpoint))
    success = false;
  if (!input_data_view.ReadOptions(&p_options))
    success = false;
  if (!input_data_view.ReadP256dh(&p_p256dh))
    success = false;
  if (!input_data_view.ReadAuth(&p_auth))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PushMessaging::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_endpoint), 
std::move(p_options), 
std::move(p_p256dh), 
std::move(p_auth));
  return true;
}

void PushMessaging_GetSubscription_ProxyToResponder::Run(
    ::blink::mojom::PushGetRegistrationStatus in_status, const base::Optional<GURL>& in_endpoint, const base::Optional<blink::WebPushSubscriptionOptions>& in_options, const base::Optional<std::vector<uint8_t>>& in_p256dh, const base::Optional<std::vector<uint8_t>>& in_auth) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPushMessaging_GetSubscription_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PushMessaging_GetSubscription_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PushGetRegistrationStatus>(
      in_status, &params->status);
  typename decltype(params->endpoint)::BaseType::BufferWriter
      endpoint_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_endpoint, buffer, &endpoint_writer, &serialization_context);
  params->endpoint.Set(
      endpoint_writer.is_null() ? nullptr : endpoint_writer.data());
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::PushSubscriptionOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  typename decltype(params->p256dh)::BaseType::BufferWriter
      p256dh_writer;
  const mojo::internal::ContainerValidateParams p256dh_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_p256dh, buffer, &p256dh_writer, &p256dh_validate_params,
      &serialization_context);
  params->p256dh.Set(
      p256dh_writer.is_null() ? nullptr : p256dh_writer.data());
  typename decltype(params->auth)::BaseType::BufferWriter
      auth_writer;
  const mojo::internal::ContainerValidateParams auth_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_auth, buffer, &auth_writer, &auth_validate_params,
      &serialization_context);
  params->auth.Set(
      auth_writer.is_null() ? nullptr : auth_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PushMessaging::GetSubscriptionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PushMessaging::Name_);
  message.set_method_name("GetSubscription");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PushMessagingStubDispatch::Accept(
    PushMessaging* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPushMessaging_Subscribe_Name: {
      break;
    }
    case internal::kPushMessaging_Unsubscribe_Name: {
      break;
    }
    case internal::kPushMessaging_GetSubscription_Name: {
      break;
    }
  }
  return false;
}

// static
bool PushMessagingStubDispatch::AcceptWithResponder(
    PushMessaging* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPushMessaging_Subscribe_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PushMessaging::Subscribe",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PushMessaging_Subscribe_Params_Data* params =
          reinterpret_cast<
              internal::PushMessaging_Subscribe_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_render_frame_id{};
      int64_t p_service_worker_registration_id{};
      blink::WebPushSubscriptionOptions p_options{};
      bool p_user_gesture{};
      PushMessaging_Subscribe_ParamsDataView input_data_view(params, &serialization_context);
      
      p_render_frame_id = input_data_view.render_frame_id();
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      p_user_gesture = input_data_view.user_gesture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PushMessaging::Name_, 0, false);
        return false;
      }
      PushMessaging::SubscribeCallback callback =
          PushMessaging_Subscribe_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Subscribe(
std::move(p_render_frame_id), 
std::move(p_service_worker_registration_id), 
std::move(p_options), 
std::move(p_user_gesture), std::move(callback));
      return true;
    }
    case internal::kPushMessaging_Unsubscribe_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PushMessaging::Unsubscribe",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PushMessaging_Unsubscribe_Params_Data* params =
          reinterpret_cast<
              internal::PushMessaging_Unsubscribe_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      PushMessaging_Unsubscribe_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PushMessaging::Name_, 1, false);
        return false;
      }
      PushMessaging::UnsubscribeCallback callback =
          PushMessaging_Unsubscribe_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Unsubscribe(
std::move(p_service_worker_registration_id), std::move(callback));
      return true;
    }
    case internal::kPushMessaging_GetSubscription_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PushMessaging::GetSubscription",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PushMessaging_GetSubscription_Params_Data* params =
          reinterpret_cast<
              internal::PushMessaging_GetSubscription_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      PushMessaging_GetSubscription_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PushMessaging::Name_, 2, false);
        return false;
      }
      PushMessaging::GetSubscriptionCallback callback =
          PushMessaging_GetSubscription_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetSubscription(
std::move(p_service_worker_registration_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool PushMessagingRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PushMessaging RequestValidator");

  switch (message->header()->name) {
    case internal::kPushMessaging_Subscribe_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PushMessaging_Subscribe_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPushMessaging_Unsubscribe_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PushMessaging_Unsubscribe_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPushMessaging_GetSubscription_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PushMessaging_GetSubscription_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool PushMessagingResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PushMessaging ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPushMessaging_Subscribe_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PushMessaging_Subscribe_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPushMessaging_Unsubscribe_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PushMessaging_Unsubscribe_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPushMessaging_GetSubscription_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PushMessaging_GetSubscription_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::PushSubscriptionOptions::DataView, ::blink::mojom::PushSubscriptionOptionsPtr>::Read(
    ::blink::mojom::PushSubscriptionOptions::DataView input,
    ::blink::mojom::PushSubscriptionOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::PushSubscriptionOptionsPtr result(::blink::mojom::PushSubscriptionOptions::New());
  
      result->user_visible_only = input.user_visible_only();
      if (!input.ReadApplicationServerKey(&result->application_server_key))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif