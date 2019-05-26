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

#include "third_party/blink/public/mojom/presentation/presentation.mojom.h"

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

#include "third_party/blink/public/mojom/presentation/presentation.mojom-params-data.h"
#include "third_party/blink/public/mojom/presentation/presentation.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/presentation/presentation.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
PresentationInfo::PresentationInfo()
    : url(),
      id() {}

PresentationInfo::PresentationInfo(
    const GURL& url_in,
    const std::string& id_in)
    : url(std::move(url_in)),
      id(std::move(id_in)) {}

PresentationInfo::~PresentationInfo() = default;

bool PresentationInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PresentationError::PresentationError()
    : error_type(),
      message() {}

PresentationError::PresentationError(
    PresentationErrorType error_type_in,
    const std::string& message_in)
    : error_type(std::move(error_type_in)),
      message(std::move(message_in)) {}

PresentationError::~PresentationError() = default;
size_t PresentationError::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->error_type);
  seed = mojo::internal::Hash(seed, this->message);
  return seed;
}

bool PresentationError::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PresentationConnectionResult::PresentationConnectionResult()
    : presentation_info(),
      connection_ptr(),
      connection_request() {}

PresentationConnectionResult::PresentationConnectionResult(
    PresentationInfoPtr presentation_info_in,
    PresentationConnectionPtrInfo connection_ptr_in,
    PresentationConnectionRequest connection_request_in)
    : presentation_info(std::move(presentation_info_in)),
      connection_ptr(std::move(connection_ptr_in)),
      connection_request(std::move(connection_request_in)) {}

PresentationConnectionResult::~PresentationConnectionResult() = default;

bool PresentationConnectionResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PresentationConnectionMessage::PresentationConnectionMessage() : tag_(Tag::MESSAGE) {
  data_.message = new std::string;
}

PresentationConnectionMessage::~PresentationConnectionMessage() {
  DestroyActive();
}


void PresentationConnectionMessage::set_message(
    const std::string& message) {
  if (tag_ == Tag::MESSAGE) {
    *(data_.message) = std::move(message);
  } else {
    DestroyActive();
    tag_ = Tag::MESSAGE;
    data_.message = new std::string(
        std::move(message));
  }
}
void PresentationConnectionMessage::set_data(
    const std::vector<uint8_t>& data) {
  if (tag_ == Tag::DATA) {
    *(data_.data) = std::move(data);
  } else {
    DestroyActive();
    tag_ = Tag::DATA;
    data_.data = new std::vector<uint8_t>(
        std::move(data));
  }
}

void PresentationConnectionMessage::DestroyActive() {
  switch (tag_) {

    case Tag::MESSAGE:

      delete data_.message;
      break;
    case Tag::DATA:

      delete data_.data;
      break;
  }
}

bool PresentationConnectionMessage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char PresentationConnection::Name_[] = "blink.mojom.PresentationConnection";

PresentationConnectionProxy::PresentationConnectionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PresentationConnectionProxy::OnMessage(
    PresentationConnectionMessagePtr in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationConnection::OnMessage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationConnection_OnMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationConnection_OnMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BufferWriter message_writer;
  message_writer.AllocateInline(buffer, &params->message);
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionMessageDataView>(
      in_message, buffer, &message_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in PresentationConnection.OnMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationConnection::Name_);
  message.set_method_name("OnMessage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationConnectionProxy::DidChangeState(
    PresentationConnectionState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationConnection::DidChangeState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationConnection_DidChangeState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationConnection_DidChangeState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationConnection::Name_);
  message.set_method_name("DidChangeState");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationConnectionProxy::DidClose(
    PresentationConnectionCloseReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationConnection::DidClose");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationConnection_DidClose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationConnection_DidClose_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionCloseReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationConnection::Name_);
  message.set_method_name("DidClose");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PresentationConnectionStubDispatch::Accept(
    PresentationConnection* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPresentationConnection_OnMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationConnection::OnMessage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationConnection_OnMessage_Params_Data* params =
          reinterpret_cast<internal::PresentationConnection_OnMessage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PresentationConnectionMessagePtr p_message{};
      PresentationConnection_OnMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationConnection::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnMessage(
std::move(p_message));
      return true;
    }
    case internal::kPresentationConnection_DidChangeState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationConnection::DidChangeState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationConnection_DidChangeState_Params_Data* params =
          reinterpret_cast<internal::PresentationConnection_DidChangeState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PresentationConnectionState p_state{};
      PresentationConnection_DidChangeState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationConnection::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidChangeState(
std::move(p_state));
      return true;
    }
    case internal::kPresentationConnection_DidClose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationConnection::DidClose",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationConnection_DidClose_Params_Data* params =
          reinterpret_cast<internal::PresentationConnection_DidClose_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PresentationConnectionCloseReason p_reason{};
      PresentationConnection_DidClose_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationConnection::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidClose(
std::move(p_reason));
      return true;
    }
  }
  return false;
}

// static
bool PresentationConnectionStubDispatch::AcceptWithResponder(
    PresentationConnection* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPresentationConnection_OnMessage_Name: {
      break;
    }
    case internal::kPresentationConnection_DidChangeState_Name: {
      break;
    }
    case internal::kPresentationConnection_DidClose_Name: {
      break;
    }
  }
  return false;
}

bool PresentationConnectionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PresentationConnection RequestValidator");

  switch (message->header()->name) {
    case internal::kPresentationConnection_OnMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationConnection_OnMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationConnection_DidChangeState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationConnection_DidChangeState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationConnection_DidClose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationConnection_DidClose_Params_Data>(
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

const char PresentationService::Name_[] = "blink.mojom.PresentationService";

class PresentationService_StartPresentation_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PresentationService_StartPresentation_ForwardToCallback(
      PresentationService::StartPresentationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PresentationService::StartPresentationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PresentationService_StartPresentation_ForwardToCallback);
};

class PresentationService_ReconnectPresentation_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PresentationService_ReconnectPresentation_ForwardToCallback(
      PresentationService::ReconnectPresentationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PresentationService::ReconnectPresentationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PresentationService_ReconnectPresentation_ForwardToCallback);
};

PresentationServiceProxy::PresentationServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PresentationServiceProxy::SetController(
    PresentationControllerPtr in_controller) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::SetController");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_SetController_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_SetController_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PresentationControllerPtrDataView>(
      in_controller, &params->controller, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->controller),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid controller in PresentationService.SetController request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("SetController");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationServiceProxy::SetReceiver(
    PresentationReceiverPtr in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::SetReceiver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_SetReceiver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_SetReceiver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PresentationReceiverPtrDataView>(
      in_receiver, &params->receiver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in PresentationService.SetReceiver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("SetReceiver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationServiceProxy::SetDefaultPresentationUrls(
    const std::vector<GURL>& in_presentation_urls) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::SetDefaultPresentationUrls");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_SetDefaultPresentationUrls_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_SetDefaultPresentationUrls_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->presentation_urls)::BaseType::BufferWriter
      presentation_urls_writer;
  const mojo::internal::ContainerValidateParams presentation_urls_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
      in_presentation_urls, buffer, &presentation_urls_writer, &presentation_urls_validate_params,
      &serialization_context);
  params->presentation_urls.Set(
      presentation_urls_writer.is_null() ? nullptr : presentation_urls_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_urls.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_urls in PresentationService.SetDefaultPresentationUrls request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("SetDefaultPresentationUrls");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationServiceProxy::ListenForScreenAvailability(
    const GURL& in_availability_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::ListenForScreenAvailability");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_ListenForScreenAvailability_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_ListenForScreenAvailability_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->availability_url)::BaseType::BufferWriter
      availability_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_availability_url, buffer, &availability_url_writer, &serialization_context);
  params->availability_url.Set(
      availability_url_writer.is_null() ? nullptr : availability_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->availability_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null availability_url in PresentationService.ListenForScreenAvailability request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("ListenForScreenAvailability");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationServiceProxy::StopListeningForScreenAvailability(
    const GURL& in_availability_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::StopListeningForScreenAvailability");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_StopListeningForScreenAvailability_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_StopListeningForScreenAvailability_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->availability_url)::BaseType::BufferWriter
      availability_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_availability_url, buffer, &availability_url_writer, &serialization_context);
  params->availability_url.Set(
      availability_url_writer.is_null() ? nullptr : availability_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->availability_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null availability_url in PresentationService.StopListeningForScreenAvailability request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("StopListeningForScreenAvailability");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationServiceProxy::StartPresentation(
    const std::vector<GURL>& in_presentation_urls, StartPresentationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::StartPresentation");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_StartPresentation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_StartPresentation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->presentation_urls)::BaseType::BufferWriter
      presentation_urls_writer;
  const mojo::internal::ContainerValidateParams presentation_urls_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
      in_presentation_urls, buffer, &presentation_urls_writer, &presentation_urls_validate_params,
      &serialization_context);
  params->presentation_urls.Set(
      presentation_urls_writer.is_null() ? nullptr : presentation_urls_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_urls.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_urls in PresentationService.StartPresentation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("StartPresentation");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PresentationService_StartPresentation_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PresentationServiceProxy::ReconnectPresentation(
    const std::vector<GURL>& in_presentation_urls, const std::string& in_presentation_id, ReconnectPresentationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::ReconnectPresentation");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_ReconnectPresentation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_ReconnectPresentation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->presentation_urls)::BaseType::BufferWriter
      presentation_urls_writer;
  const mojo::internal::ContainerValidateParams presentation_urls_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
      in_presentation_urls, buffer, &presentation_urls_writer, &presentation_urls_validate_params,
      &serialization_context);
  params->presentation_urls.Set(
      presentation_urls_writer.is_null() ? nullptr : presentation_urls_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_urls.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_urls in PresentationService.ReconnectPresentation request");
  typename decltype(params->presentation_id)::BaseType::BufferWriter
      presentation_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_presentation_id, buffer, &presentation_id_writer, &serialization_context);
  params->presentation_id.Set(
      presentation_id_writer.is_null() ? nullptr : presentation_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in PresentationService.ReconnectPresentation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("ReconnectPresentation");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PresentationService_ReconnectPresentation_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PresentationServiceProxy::CloseConnection(
    const GURL& in_presentation_url, const std::string& in_presentation_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::CloseConnection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_CloseConnection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_CloseConnection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->presentation_url)::BaseType::BufferWriter
      presentation_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_presentation_url, buffer, &presentation_url_writer, &serialization_context);
  params->presentation_url.Set(
      presentation_url_writer.is_null() ? nullptr : presentation_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_url in PresentationService.CloseConnection request");
  typename decltype(params->presentation_id)::BaseType::BufferWriter
      presentation_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_presentation_id, buffer, &presentation_id_writer, &serialization_context);
  params->presentation_id.Set(
      presentation_id_writer.is_null() ? nullptr : presentation_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in PresentationService.CloseConnection request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("CloseConnection");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationServiceProxy::Terminate(
    const GURL& in_presentation_url, const std::string& in_presentation_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::Terminate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_Terminate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_Terminate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->presentation_url)::BaseType::BufferWriter
      presentation_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_presentation_url, buffer, &presentation_url_writer, &serialization_context);
  params->presentation_url.Set(
      presentation_url_writer.is_null() ? nullptr : presentation_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_url in PresentationService.Terminate request");
  typename decltype(params->presentation_id)::BaseType::BufferWriter
      presentation_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_presentation_id, buffer, &presentation_id_writer, &serialization_context);
  params->presentation_id.Set(
      presentation_id_writer.is_null() ? nullptr : presentation_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in PresentationService.Terminate request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("Terminate");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class PresentationService_StartPresentation_ProxyToResponder {
 public:
  static PresentationService::StartPresentationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PresentationService_StartPresentation_ProxyToResponder> proxy(
        new PresentationService_StartPresentation_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PresentationService_StartPresentation_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PresentationService_StartPresentation_ProxyToResponder() {
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
  PresentationService_StartPresentation_ProxyToResponder(
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
        << "PresentationService::StartPresentationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PresentationConnectionResultPtr in_result, PresentationErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PresentationService_StartPresentation_ProxyToResponder);
};

bool PresentationService_StartPresentation_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::StartPresentationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PresentationService_StartPresentation_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PresentationService_StartPresentation_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PresentationConnectionResultPtr p_result{};
  PresentationErrorPtr p_error{};
  PresentationService_StartPresentation_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PresentationService::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_error));
  return true;
}

void PresentationService_StartPresentation_ProxyToResponder::Run(
    PresentationConnectionResultPtr in_result, PresentationErrorPtr in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_StartPresentation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_StartPresentation_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::blink::mojom::PresentationErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::StartPresentationCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("StartPresentation");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PresentationService_ReconnectPresentation_ProxyToResponder {
 public:
  static PresentationService::ReconnectPresentationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PresentationService_ReconnectPresentation_ProxyToResponder> proxy(
        new PresentationService_ReconnectPresentation_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PresentationService_ReconnectPresentation_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PresentationService_ReconnectPresentation_ProxyToResponder() {
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
  PresentationService_ReconnectPresentation_ProxyToResponder(
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
        << "PresentationService::ReconnectPresentationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PresentationConnectionResultPtr in_result, PresentationErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PresentationService_ReconnectPresentation_ProxyToResponder);
};

bool PresentationService_ReconnectPresentation_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PresentationService::ReconnectPresentationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PresentationService_ReconnectPresentation_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PresentationService_ReconnectPresentation_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PresentationConnectionResultPtr p_result{};
  PresentationErrorPtr p_error{};
  PresentationService_ReconnectPresentation_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PresentationService::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_error));
  return true;
}

void PresentationService_ReconnectPresentation_ProxyToResponder::Run(
    PresentationConnectionResultPtr in_result, PresentationErrorPtr in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationService_ReconnectPresentation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationService_ReconnectPresentation_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::blink::mojom::PresentationErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::ReconnectPresentationCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationService::Name_);
  message.set_method_name("ReconnectPresentation");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PresentationServiceStubDispatch::Accept(
    PresentationService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPresentationService_SetController_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::SetController",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationService_SetController_Params_Data* params =
          reinterpret_cast<internal::PresentationService_SetController_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PresentationControllerPtr p_controller{};
      PresentationService_SetController_ParamsDataView input_data_view(params, &serialization_context);
      
      p_controller =
          input_data_view.TakeController<decltype(p_controller)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetController(
std::move(p_controller));
      return true;
    }
    case internal::kPresentationService_SetReceiver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::SetReceiver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationService_SetReceiver_Params_Data* params =
          reinterpret_cast<internal::PresentationService_SetReceiver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PresentationReceiverPtr p_receiver{};
      PresentationService_SetReceiver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_receiver =
          input_data_view.TakeReceiver<decltype(p_receiver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationService::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetReceiver(
std::move(p_receiver));
      return true;
    }
    case internal::kPresentationService_SetDefaultPresentationUrls_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::SetDefaultPresentationUrls",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationService_SetDefaultPresentationUrls_Params_Data* params =
          reinterpret_cast<internal::PresentationService_SetDefaultPresentationUrls_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<GURL> p_presentation_urls{};
      PresentationService_SetDefaultPresentationUrls_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPresentationUrls(&p_presentation_urls))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationService::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetDefaultPresentationUrls(
std::move(p_presentation_urls));
      return true;
    }
    case internal::kPresentationService_ListenForScreenAvailability_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::ListenForScreenAvailability",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationService_ListenForScreenAvailability_Params_Data* params =
          reinterpret_cast<internal::PresentationService_ListenForScreenAvailability_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_availability_url{};
      PresentationService_ListenForScreenAvailability_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAvailabilityUrl(&p_availability_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationService::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ListenForScreenAvailability(
std::move(p_availability_url));
      return true;
    }
    case internal::kPresentationService_StopListeningForScreenAvailability_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::StopListeningForScreenAvailability",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationService_StopListeningForScreenAvailability_Params_Data* params =
          reinterpret_cast<internal::PresentationService_StopListeningForScreenAvailability_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_availability_url{};
      PresentationService_StopListeningForScreenAvailability_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAvailabilityUrl(&p_availability_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationService::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopListeningForScreenAvailability(
std::move(p_availability_url));
      return true;
    }
    case internal::kPresentationService_StartPresentation_Name: {
      break;
    }
    case internal::kPresentationService_ReconnectPresentation_Name: {
      break;
    }
    case internal::kPresentationService_CloseConnection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::CloseConnection",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationService_CloseConnection_Params_Data* params =
          reinterpret_cast<internal::PresentationService_CloseConnection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_presentation_url{};
      std::string p_presentation_id{};
      PresentationService_CloseConnection_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPresentationUrl(&p_presentation_url))
        success = false;
      if (!input_data_view.ReadPresentationId(&p_presentation_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationService::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CloseConnection(
std::move(p_presentation_url), 
std::move(p_presentation_id));
      return true;
    }
    case internal::kPresentationService_Terminate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::Terminate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationService_Terminate_Params_Data* params =
          reinterpret_cast<internal::PresentationService_Terminate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_presentation_url{};
      std::string p_presentation_id{};
      PresentationService_Terminate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPresentationUrl(&p_presentation_url))
        success = false;
      if (!input_data_view.ReadPresentationId(&p_presentation_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationService::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Terminate(
std::move(p_presentation_url), 
std::move(p_presentation_id));
      return true;
    }
  }
  return false;
}

// static
bool PresentationServiceStubDispatch::AcceptWithResponder(
    PresentationService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPresentationService_SetController_Name: {
      break;
    }
    case internal::kPresentationService_SetReceiver_Name: {
      break;
    }
    case internal::kPresentationService_SetDefaultPresentationUrls_Name: {
      break;
    }
    case internal::kPresentationService_ListenForScreenAvailability_Name: {
      break;
    }
    case internal::kPresentationService_StopListeningForScreenAvailability_Name: {
      break;
    }
    case internal::kPresentationService_StartPresentation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::StartPresentation",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PresentationService_StartPresentation_Params_Data* params =
          reinterpret_cast<
              internal::PresentationService_StartPresentation_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<GURL> p_presentation_urls{};
      PresentationService_StartPresentation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPresentationUrls(&p_presentation_urls))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationService::Name_, 5, false);
        return false;
      }
      PresentationService::StartPresentationCallback callback =
          PresentationService_StartPresentation_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartPresentation(
std::move(p_presentation_urls), std::move(callback));
      return true;
    }
    case internal::kPresentationService_ReconnectPresentation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationService::ReconnectPresentation",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PresentationService_ReconnectPresentation_Params_Data* params =
          reinterpret_cast<
              internal::PresentationService_ReconnectPresentation_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<GURL> p_presentation_urls{};
      std::string p_presentation_id{};
      PresentationService_ReconnectPresentation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPresentationUrls(&p_presentation_urls))
        success = false;
      if (!input_data_view.ReadPresentationId(&p_presentation_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationService::Name_, 6, false);
        return false;
      }
      PresentationService::ReconnectPresentationCallback callback =
          PresentationService_ReconnectPresentation_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReconnectPresentation(
std::move(p_presentation_urls), 
std::move(p_presentation_id), std::move(callback));
      return true;
    }
    case internal::kPresentationService_CloseConnection_Name: {
      break;
    }
    case internal::kPresentationService_Terminate_Name: {
      break;
    }
  }
  return false;
}

bool PresentationServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PresentationService RequestValidator");

  switch (message->header()->name) {
    case internal::kPresentationService_SetController_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SetController_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationService_SetReceiver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SetReceiver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationService_SetDefaultPresentationUrls_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SetDefaultPresentationUrls_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationService_ListenForScreenAvailability_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_ListenForScreenAvailability_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationService_StopListeningForScreenAvailability_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_StopListeningForScreenAvailability_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationService_StartPresentation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_StartPresentation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationService_ReconnectPresentation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_ReconnectPresentation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationService_CloseConnection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_CloseConnection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationService_Terminate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_Terminate_Params_Data>(
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

bool PresentationServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PresentationService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPresentationService_StartPresentation_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_StartPresentation_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationService_ReconnectPresentation_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_ReconnectPresentation_ResponseParams_Data>(
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
const char PresentationController::Name_[] = "blink.mojom.PresentationController";

PresentationControllerProxy::PresentationControllerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PresentationControllerProxy::OnScreenAvailabilityUpdated(
    const GURL& in_url, ScreenAvailability in_availability) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationController::OnScreenAvailabilityUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationController_OnScreenAvailabilityUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationController_OnScreenAvailabilityUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationController.OnScreenAvailabilityUpdated request");
  mojo::internal::Serialize<::blink::mojom::ScreenAvailability>(
      in_availability, &params->availability);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationController::Name_);
  message.set_method_name("OnScreenAvailabilityUpdated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationControllerProxy::OnDefaultPresentationStarted(
    PresentationConnectionResultPtr in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationController::OnDefaultPresentationStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationController_OnDefaultPresentationStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationController_OnDefaultPresentationStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in PresentationController.OnDefaultPresentationStarted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationController::Name_);
  message.set_method_name("OnDefaultPresentationStarted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationControllerProxy::OnConnectionStateChanged(
    PresentationInfoPtr in_presentation_info, PresentationConnectionState in_newState) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationController::OnConnectionStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationController_OnConnectionStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationController_OnConnectionStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->presentation_info)::BaseType::BufferWriter
      presentation_info_writer;
  mojo::internal::Serialize<::blink::mojom::PresentationInfoDataView>(
      in_presentation_info, buffer, &presentation_info_writer, &serialization_context);
  params->presentation_info.Set(
      presentation_info_writer.is_null() ? nullptr : presentation_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_info in PresentationController.OnConnectionStateChanged request");
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionState>(
      in_newState, &params->newState);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationController::Name_);
  message.set_method_name("OnConnectionStateChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PresentationControllerProxy::OnConnectionClosed(
    PresentationInfoPtr in_presentation_info, PresentationConnectionCloseReason in_reason, const std::string& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationController::OnConnectionClosed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationController_OnConnectionClosed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationController_OnConnectionClosed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->presentation_info)::BaseType::BufferWriter
      presentation_info_writer;
  mojo::internal::Serialize<::blink::mojom::PresentationInfoDataView>(
      in_presentation_info, buffer, &presentation_info_writer, &serialization_context);
  params->presentation_info.Set(
      presentation_info_writer.is_null() ? nullptr : presentation_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentation_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_info in PresentationController.OnConnectionClosed request");
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionCloseReason>(
      in_reason, &params->reason);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in PresentationController.OnConnectionClosed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationController::Name_);
  message.set_method_name("OnConnectionClosed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PresentationControllerStubDispatch::Accept(
    PresentationController* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPresentationController_OnScreenAvailabilityUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationController::OnScreenAvailabilityUpdated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationController_OnScreenAvailabilityUpdated_Params_Data* params =
          reinterpret_cast<internal::PresentationController_OnScreenAvailabilityUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      ScreenAvailability p_availability{};
      PresentationController_OnScreenAvailabilityUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadAvailability(&p_availability))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationController::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnScreenAvailabilityUpdated(
std::move(p_url), 
std::move(p_availability));
      return true;
    }
    case internal::kPresentationController_OnDefaultPresentationStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationController::OnDefaultPresentationStarted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationController_OnDefaultPresentationStarted_Params_Data* params =
          reinterpret_cast<internal::PresentationController_OnDefaultPresentationStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PresentationConnectionResultPtr p_result{};
      PresentationController_OnDefaultPresentationStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationController::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDefaultPresentationStarted(
std::move(p_result));
      return true;
    }
    case internal::kPresentationController_OnConnectionStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationController::OnConnectionStateChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationController_OnConnectionStateChanged_Params_Data* params =
          reinterpret_cast<internal::PresentationController_OnConnectionStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PresentationInfoPtr p_presentation_info{};
      PresentationConnectionState p_newState{};
      PresentationController_OnConnectionStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPresentationInfo(&p_presentation_info))
        success = false;
      if (!input_data_view.ReadNewState(&p_newState))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationController::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnConnectionStateChanged(
std::move(p_presentation_info), 
std::move(p_newState));
      return true;
    }
    case internal::kPresentationController_OnConnectionClosed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationController::OnConnectionClosed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationController_OnConnectionClosed_Params_Data* params =
          reinterpret_cast<internal::PresentationController_OnConnectionClosed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PresentationInfoPtr p_presentation_info{};
      PresentationConnectionCloseReason p_reason{};
      std::string p_message{};
      PresentationController_OnConnectionClosed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPresentationInfo(&p_presentation_info))
        success = false;
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationController::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnConnectionClosed(
std::move(p_presentation_info), 
std::move(p_reason), 
std::move(p_message));
      return true;
    }
  }
  return false;
}

// static
bool PresentationControllerStubDispatch::AcceptWithResponder(
    PresentationController* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPresentationController_OnScreenAvailabilityUpdated_Name: {
      break;
    }
    case internal::kPresentationController_OnDefaultPresentationStarted_Name: {
      break;
    }
    case internal::kPresentationController_OnConnectionStateChanged_Name: {
      break;
    }
    case internal::kPresentationController_OnConnectionClosed_Name: {
      break;
    }
  }
  return false;
}

bool PresentationControllerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PresentationController RequestValidator");

  switch (message->header()->name) {
    case internal::kPresentationController_OnScreenAvailabilityUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationController_OnScreenAvailabilityUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationController_OnDefaultPresentationStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationController_OnDefaultPresentationStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationController_OnConnectionStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationController_OnConnectionStateChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPresentationController_OnConnectionClosed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationController_OnConnectionClosed_Params_Data>(
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

const char PresentationReceiver::Name_[] = "blink.mojom.PresentationReceiver";

PresentationReceiverProxy::PresentationReceiverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PresentationReceiverProxy::OnReceiverConnectionAvailable(
    PresentationInfoPtr in_info, PresentationConnectionPtr in_controller_connection, PresentationConnectionRequest in_receiver_connection_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PresentationReceiver::OnReceiverConnectionAvailable");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPresentationReceiver_OnReceiverConnectionAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PresentationReceiver_OnReceiverConnectionAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::blink::mojom::PresentationInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in PresentationReceiver.OnReceiverConnectionAvailable request");
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionPtrDataView>(
      in_controller_connection, &params->controller_connection, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->controller_connection),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid controller_connection in PresentationReceiver.OnReceiverConnectionAvailable request");
  mojo::internal::Serialize<::blink::mojom::PresentationConnectionRequestDataView>(
      in_receiver_connection_request, &params->receiver_connection_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver_connection_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver_connection_request in PresentationReceiver.OnReceiverConnectionAvailable request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PresentationReceiver::Name_);
  message.set_method_name("OnReceiverConnectionAvailable");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PresentationReceiverStubDispatch::Accept(
    PresentationReceiver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPresentationReceiver_OnReceiverConnectionAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PresentationReceiver::OnReceiverConnectionAvailable",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PresentationReceiver_OnReceiverConnectionAvailable_Params_Data* params =
          reinterpret_cast<internal::PresentationReceiver_OnReceiverConnectionAvailable_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PresentationInfoPtr p_info{};
      PresentationConnectionPtr p_controller_connection{};
      PresentationConnectionRequest p_receiver_connection_request{};
      PresentationReceiver_OnReceiverConnectionAvailable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      p_controller_connection =
          input_data_view.TakeControllerConnection<decltype(p_controller_connection)>();
      p_receiver_connection_request =
          input_data_view.TakeReceiverConnectionRequest<decltype(p_receiver_connection_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PresentationReceiver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnReceiverConnectionAvailable(
std::move(p_info), 
std::move(p_controller_connection), 
std::move(p_receiver_connection_request));
      return true;
    }
  }
  return false;
}

// static
bool PresentationReceiverStubDispatch::AcceptWithResponder(
    PresentationReceiver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPresentationReceiver_OnReceiverConnectionAvailable_Name: {
      break;
    }
  }
  return false;
}

bool PresentationReceiverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PresentationReceiver RequestValidator");

  switch (message->header()->name) {
    case internal::kPresentationReceiver_OnReceiverConnectionAvailable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationReceiver_OnReceiverConnectionAvailable_Params_Data>(
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
bool StructTraits<::blink::mojom::PresentationInfo::DataView, ::blink::mojom::PresentationInfoPtr>::Read(
    ::blink::mojom::PresentationInfo::DataView input,
    ::blink::mojom::PresentationInfoPtr* output) {
  bool success = true;
  ::blink::mojom::PresentationInfoPtr result(::blink::mojom::PresentationInfo::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::PresentationError::DataView, ::blink::mojom::PresentationErrorPtr>::Read(
    ::blink::mojom::PresentationError::DataView input,
    ::blink::mojom::PresentationErrorPtr* output) {
  bool success = true;
  ::blink::mojom::PresentationErrorPtr result(::blink::mojom::PresentationError::New());
  
      if (!input.ReadErrorType(&result->error_type))
        success = false;
      if (!input.ReadMessage(&result->message))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::PresentationConnectionResult::DataView, ::blink::mojom::PresentationConnectionResultPtr>::Read(
    ::blink::mojom::PresentationConnectionResult::DataView input,
    ::blink::mojom::PresentationConnectionResultPtr* output) {
  bool success = true;
  ::blink::mojom::PresentationConnectionResultPtr result(::blink::mojom::PresentationConnectionResult::New());
  
      if (!input.ReadPresentationInfo(&result->presentation_info))
        success = false;
      result->connection_ptr =
          input.TakeConnectionPtr<decltype(result->connection_ptr)>();
      result->connection_request =
          input.TakeConnectionRequest<decltype(result->connection_request)>();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::PresentationConnectionMessage::DataView, ::blink::mojom::PresentationConnectionMessagePtr>::Read(
    ::blink::mojom::PresentationConnectionMessage::DataView input,
    ::blink::mojom::PresentationConnectionMessagePtr* output) {
  using UnionType = ::blink::mojom::PresentationConnectionMessage;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::MESSAGE: {
      std::string result_message;
      if (!input.ReadMessage(&result_message))
        return false;

      *output = UnionType::NewMessage(
          std::move(result_message));
      break;
    }
    case Tag::DATA: {
      std::vector<uint8_t> result_data;
      if (!input.ReadData(&result_data))
        return false;

      *output = UnionType::NewData(
          std::move(result_data));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif