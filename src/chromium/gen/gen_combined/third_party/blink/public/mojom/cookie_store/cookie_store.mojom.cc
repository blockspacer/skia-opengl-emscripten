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

#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom.h"

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

#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-params-data.h"
#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
CookieChangeSubscription::CookieChangeSubscription()
    : url(),
      match_type(),
      name() {}

CookieChangeSubscription::CookieChangeSubscription(
    const GURL& url_in,
    ::network::mojom::CookieMatchType match_type_in,
    const std::string& name_in)
    : url(std::move(url_in)),
      match_type(std::move(match_type_in)),
      name(std::move(name_in)) {}

CookieChangeSubscription::~CookieChangeSubscription() = default;

bool CookieChangeSubscription::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char CookieStore::Name_[] = "blink.mojom.CookieStore";

class CookieStore_AppendSubscriptions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieStore_AppendSubscriptions_ForwardToCallback(
      CookieStore::AppendSubscriptionsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieStore::AppendSubscriptionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieStore_AppendSubscriptions_ForwardToCallback);
};

class CookieStore_GetSubscriptions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieStore_GetSubscriptions_ForwardToCallback(
      CookieStore::GetSubscriptionsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieStore::GetSubscriptionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieStore_GetSubscriptions_ForwardToCallback);
};

CookieStoreProxy::CookieStoreProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CookieStoreProxy::AppendSubscriptions(
    int64_t in_service_worker_registration_id, std::vector<CookieChangeSubscriptionPtr> in_subscriptions, AppendSubscriptionsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieStore::AppendSubscriptions");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieStore_AppendSubscriptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CookieStore_AppendSubscriptions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  typename decltype(params->subscriptions)::BaseType::BufferWriter
      subscriptions_writer;
  const mojo::internal::ContainerValidateParams subscriptions_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::CookieChangeSubscriptionDataView>>(
      in_subscriptions, buffer, &subscriptions_writer, &subscriptions_validate_params,
      &serialization_context);
  params->subscriptions.Set(
      subscriptions_writer.is_null() ? nullptr : subscriptions_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->subscriptions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null subscriptions in CookieStore.AppendSubscriptions request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieStore::Name_);
  message.set_method_name("AppendSubscriptions");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieStore_AppendSubscriptions_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieStoreProxy::GetSubscriptions(
    int64_t in_service_worker_registration_id, GetSubscriptionsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieStore::GetSubscriptions");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieStore_GetSubscriptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CookieStore_GetSubscriptions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieStore::Name_);
  message.set_method_name("GetSubscriptions");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieStore_GetSubscriptions_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CookieStore_AppendSubscriptions_ProxyToResponder {
 public:
  static CookieStore::AppendSubscriptionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieStore_AppendSubscriptions_ProxyToResponder> proxy(
        new CookieStore_AppendSubscriptions_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieStore_AppendSubscriptions_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieStore_AppendSubscriptions_ProxyToResponder() {
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
  CookieStore_AppendSubscriptions_ProxyToResponder(
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
        << "CookieStore::AppendSubscriptionsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieStore_AppendSubscriptions_ProxyToResponder);
};

bool CookieStore_AppendSubscriptions_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CookieStore::AppendSubscriptionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieStore_AppendSubscriptions_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieStore_AppendSubscriptions_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  CookieStore_AppendSubscriptions_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CookieStore::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void CookieStore_AppendSubscriptions_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieStore_AppendSubscriptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CookieStore_AppendSubscriptions_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CookieStore::AppendSubscriptionsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieStore::Name_);
  message.set_method_name("AppendSubscriptions");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieStore_GetSubscriptions_ProxyToResponder {
 public:
  static CookieStore::GetSubscriptionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieStore_GetSubscriptions_ProxyToResponder> proxy(
        new CookieStore_GetSubscriptions_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieStore_GetSubscriptions_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieStore_GetSubscriptions_ProxyToResponder() {
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
  CookieStore_GetSubscriptions_ProxyToResponder(
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
        << "CookieStore::GetSubscriptionsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<CookieChangeSubscriptionPtr> in_subscriptions, bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieStore_GetSubscriptions_ProxyToResponder);
};

bool CookieStore_GetSubscriptions_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CookieStore::GetSubscriptionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieStore_GetSubscriptions_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieStore_GetSubscriptions_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<CookieChangeSubscriptionPtr> p_subscriptions{};
  bool p_success{};
  CookieStore_GetSubscriptions_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSubscriptions(&p_subscriptions))
    success = false;
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CookieStore::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_subscriptions), 
std::move(p_success));
  return true;
}

void CookieStore_GetSubscriptions_ProxyToResponder::Run(
    std::vector<CookieChangeSubscriptionPtr> in_subscriptions, bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieStore_GetSubscriptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CookieStore_GetSubscriptions_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->subscriptions)::BaseType::BufferWriter
      subscriptions_writer;
  const mojo::internal::ContainerValidateParams subscriptions_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::CookieChangeSubscriptionDataView>>(
      in_subscriptions, buffer, &subscriptions_writer, &subscriptions_validate_params,
      &serialization_context);
  params->subscriptions.Set(
      subscriptions_writer.is_null() ? nullptr : subscriptions_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->subscriptions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null subscriptions in ");
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CookieStore::GetSubscriptionsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieStore::Name_);
  message.set_method_name("GetSubscriptions");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CookieStoreStubDispatch::Accept(
    CookieStore* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCookieStore_AppendSubscriptions_Name: {
      break;
    }
    case internal::kCookieStore_GetSubscriptions_Name: {
      break;
    }
  }
  return false;
}

// static
bool CookieStoreStubDispatch::AcceptWithResponder(
    CookieStore* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCookieStore_AppendSubscriptions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieStore::AppendSubscriptions",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieStore_AppendSubscriptions_Params_Data* params =
          reinterpret_cast<
              internal::CookieStore_AppendSubscriptions_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      std::vector<CookieChangeSubscriptionPtr> p_subscriptions{};
      CookieStore_AppendSubscriptions_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!input_data_view.ReadSubscriptions(&p_subscriptions))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieStore::Name_, 0, false);
        return false;
      }
      CookieStore::AppendSubscriptionsCallback callback =
          CookieStore_AppendSubscriptions_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AppendSubscriptions(
std::move(p_service_worker_registration_id), 
std::move(p_subscriptions), std::move(callback));
      return true;
    }
    case internal::kCookieStore_GetSubscriptions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieStore::GetSubscriptions",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieStore_GetSubscriptions_Params_Data* params =
          reinterpret_cast<
              internal::CookieStore_GetSubscriptions_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      CookieStore_GetSubscriptions_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieStore::Name_, 1, false);
        return false;
      }
      CookieStore::GetSubscriptionsCallback callback =
          CookieStore_GetSubscriptions_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetSubscriptions(
std::move(p_service_worker_registration_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool CookieStoreRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CookieStore RequestValidator");

  switch (message->header()->name) {
    case internal::kCookieStore_AppendSubscriptions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieStore_AppendSubscriptions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieStore_GetSubscriptions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieStore_GetSubscriptions_Params_Data>(
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

bool CookieStoreResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CookieStore ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCookieStore_AppendSubscriptions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieStore_AppendSubscriptions_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieStore_GetSubscriptions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieStore_GetSubscriptions_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::CookieChangeSubscription::DataView, ::blink::mojom::CookieChangeSubscriptionPtr>::Read(
    ::blink::mojom::CookieChangeSubscription::DataView input,
    ::blink::mojom::CookieChangeSubscriptionPtr* output) {
  bool success = true;
  ::blink::mojom::CookieChangeSubscriptionPtr result(::blink::mojom::CookieChangeSubscription::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadMatchType(&result->match_type))
        success = false;
      if (!input.ReadName(&result->name))
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