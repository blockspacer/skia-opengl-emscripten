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

#include "third_party/blink/public/mojom/sms/sms_manager.mojom.h"

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

#include "third_party/blink/public/mojom/sms/sms_manager.mojom-params-data.h"
#include "third_party/blink/public/mojom/sms/sms_manager.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/sms/sms_manager.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
SmsMessage::SmsMessage()
    : status(),
      content() {}

SmsMessage::SmsMessage(
    SmsStatus status_in,
    const base::Optional<std::string>& content_in)
    : status(std::move(status_in)),
      content(std::move(content_in)) {}

SmsMessage::~SmsMessage() = default;

bool SmsMessage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SmsManager::Name_[] = "blink.mojom.SmsManager";

class SmsManager_GetNextMessage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SmsManager_GetNextMessage_ForwardToCallback(
      SmsManager::GetNextMessageCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SmsManager::GetNextMessageCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SmsManager_GetNextMessage_ForwardToCallback);
};

SmsManagerProxy::SmsManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SmsManagerProxy::GetNextMessage(
    base::TimeDelta in_timeout, GetNextMessageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SmsManager::GetNextMessage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSmsManager_GetNextMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SmsManager_GetNextMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->timeout)::BaseType::BufferWriter
      timeout_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_timeout, buffer, &timeout_writer, &serialization_context);
  params->timeout.Set(
      timeout_writer.is_null() ? nullptr : timeout_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timeout.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timeout in SmsManager.GetNextMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SmsManager::Name_);
  message.set_method_name("GetNextMessage");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SmsManager_GetNextMessage_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SmsManager_GetNextMessage_ProxyToResponder {
 public:
  static SmsManager::GetNextMessageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SmsManager_GetNextMessage_ProxyToResponder> proxy(
        new SmsManager_GetNextMessage_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SmsManager_GetNextMessage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SmsManager_GetNextMessage_ProxyToResponder() {
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
  SmsManager_GetNextMessage_ProxyToResponder(
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
        << "SmsManager::GetNextMessageCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      SmsMessagePtr in_sms);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SmsManager_GetNextMessage_ProxyToResponder);
};

bool SmsManager_GetNextMessage_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SmsManager::GetNextMessageCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SmsManager_GetNextMessage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SmsManager_GetNextMessage_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SmsMessagePtr p_sms{};
  SmsManager_GetNextMessage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSms(&p_sms))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SmsManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_sms));
  return true;
}

void SmsManager_GetNextMessage_ProxyToResponder::Run(
    SmsMessagePtr in_sms) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSmsManager_GetNextMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SmsManager_GetNextMessage_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->sms)::BaseType::BufferWriter
      sms_writer;
  mojo::internal::Serialize<::blink::mojom::SmsMessageDataView>(
      in_sms, buffer, &sms_writer, &serialization_context);
  params->sms.Set(
      sms_writer.is_null() ? nullptr : sms_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sms.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sms in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SmsManager::GetNextMessageCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SmsManager::Name_);
  message.set_method_name("GetNextMessage");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool SmsManagerStubDispatch::Accept(
    SmsManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSmsManager_GetNextMessage_Name: {
      break;
    }
  }
  return false;
}

// static
bool SmsManagerStubDispatch::AcceptWithResponder(
    SmsManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSmsManager_GetNextMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SmsManager::GetNextMessage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SmsManager_GetNextMessage_Params_Data* params =
          reinterpret_cast<
              internal::SmsManager_GetNextMessage_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_timeout{};
      SmsManager_GetNextMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTimeout(&p_timeout))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SmsManager::Name_, 0, false);
        return false;
      }
      SmsManager::GetNextMessageCallback callback =
          SmsManager_GetNextMessage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetNextMessage(
std::move(p_timeout), std::move(callback));
      return true;
    }
  }
  return false;
}

bool SmsManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SmsManager RequestValidator");

  switch (message->header()->name) {
    case internal::kSmsManager_GetNextMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SmsManager_GetNextMessage_Params_Data>(
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

bool SmsManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SmsManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSmsManager_GetNextMessage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SmsManager_GetNextMessage_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::SmsMessage::DataView, ::blink::mojom::SmsMessagePtr>::Read(
    ::blink::mojom::SmsMessage::DataView input,
    ::blink::mojom::SmsMessagePtr* output) {
  bool success = true;
  ::blink::mojom::SmsMessagePtr result(::blink::mojom::SmsMessage::New());
  
      if (!input.ReadStatus(&result->status))
        success = false;
      if (!input.ReadContent(&result->content))
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