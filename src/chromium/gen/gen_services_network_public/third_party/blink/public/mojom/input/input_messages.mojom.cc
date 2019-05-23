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

#include "third_party/blink/public/mojom/input/input_messages.mojom.h"

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

#include "third_party/blink/public/mojom/input/input_messages.mojom-params-data.h"
#include "third_party/blink/public/mojom/input/input_messages.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/input/input_messages.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_JUMBO_H_
#endif
namespace blink {
namespace mojom {
const char TextSuggestionBackend::Name_[] = "blink.mojom.TextSuggestionBackend";

TextSuggestionBackendProxy::TextSuggestionBackendProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TextSuggestionBackendProxy::ApplySpellCheckSuggestion(
    const std::string& in_suggestion) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::ApplySpellCheckSuggestion");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextSuggestionBackend_ApplySpellCheckSuggestion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->suggestion)::BaseType::BufferWriter
      suggestion_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_suggestion, buffer, &suggestion_writer, &serialization_context);
  params->suggestion.Set(
      suggestion_writer.is_null() ? nullptr : suggestion_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->suggestion.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null suggestion in TextSuggestionBackend.ApplySpellCheckSuggestion request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextSuggestionBackend::Name_);
  message.set_method_name("ApplySpellCheckSuggestion");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextSuggestionBackendProxy::ApplyTextSuggestion(
    int32_t in_marker_tag, int32_t in_suggestion_index) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::ApplyTextSuggestion");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextSuggestionBackend_ApplyTextSuggestion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::TextSuggestionBackend_ApplyTextSuggestion_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->marker_tag = in_marker_tag;
  params->suggestion_index = in_suggestion_index;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextSuggestionBackend::Name_);
  message.set_method_name("ApplyTextSuggestion");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextSuggestionBackendProxy::DeleteActiveSuggestionRange(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::DeleteActiveSuggestionRange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextSuggestionBackend_DeleteActiveSuggestionRange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextSuggestionBackend::Name_);
  message.set_method_name("DeleteActiveSuggestionRange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextSuggestionBackendProxy::OnNewWordAddedToDictionary(
    const std::string& in_suggestion) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::OnNewWordAddedToDictionary");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextSuggestionBackend_OnNewWordAddedToDictionary_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->suggestion)::BaseType::BufferWriter
      suggestion_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_suggestion, buffer, &suggestion_writer, &serialization_context);
  params->suggestion.Set(
      suggestion_writer.is_null() ? nullptr : suggestion_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->suggestion.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null suggestion in TextSuggestionBackend.OnNewWordAddedToDictionary request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextSuggestionBackend::Name_);
  message.set_method_name("OnNewWordAddedToDictionary");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextSuggestionBackendProxy::OnSuggestionMenuClosed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::OnSuggestionMenuClosed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextSuggestionBackend_OnSuggestionMenuClosed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextSuggestionBackend::Name_);
  message.set_method_name("OnSuggestionMenuClosed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextSuggestionBackendProxy::SuggestionMenuTimeoutCallback(
    int32_t in_max_number_of_suggestions) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::SuggestionMenuTimeoutCallback");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextSuggestionBackend_SuggestionMenuTimeoutCallback_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->max_number_of_suggestions = in_max_number_of_suggestions;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextSuggestionBackend::Name_);
  message.set_method_name("SuggestionMenuTimeoutCallback");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TextSuggestionBackendStubDispatch::Accept(
    TextSuggestionBackend* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTextSuggestionBackend_ApplySpellCheckSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::ApplySpellCheckSuggestion",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data* params =
          reinterpret_cast<internal::TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_suggestion{};
      TextSuggestionBackend_ApplySpellCheckSuggestion_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSuggestion(&p_suggestion))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextSuggestionBackend::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ApplySpellCheckSuggestion(
std::move(p_suggestion));
      return true;
    }
    case internal::kTextSuggestionBackend_ApplyTextSuggestion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::ApplyTextSuggestion",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextSuggestionBackend_ApplyTextSuggestion_Params_Data* params =
          reinterpret_cast<internal::TextSuggestionBackend_ApplyTextSuggestion_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_marker_tag{};
      int32_t p_suggestion_index{};
      TextSuggestionBackend_ApplyTextSuggestion_ParamsDataView input_data_view(params, &serialization_context);
      
      p_marker_tag = input_data_view.marker_tag();
      p_suggestion_index = input_data_view.suggestion_index();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextSuggestionBackend::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ApplyTextSuggestion(
std::move(p_marker_tag), 
std::move(p_suggestion_index));
      return true;
    }
    case internal::kTextSuggestionBackend_DeleteActiveSuggestionRange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::DeleteActiveSuggestionRange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data* params =
          reinterpret_cast<internal::TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TextSuggestionBackend_DeleteActiveSuggestionRange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextSuggestionBackend::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteActiveSuggestionRange();
      return true;
    }
    case internal::kTextSuggestionBackend_OnNewWordAddedToDictionary_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::OnNewWordAddedToDictionary",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data* params =
          reinterpret_cast<internal::TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_suggestion{};
      TextSuggestionBackend_OnNewWordAddedToDictionary_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSuggestion(&p_suggestion))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextSuggestionBackend::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnNewWordAddedToDictionary(
std::move(p_suggestion));
      return true;
    }
    case internal::kTextSuggestionBackend_OnSuggestionMenuClosed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::OnSuggestionMenuClosed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data* params =
          reinterpret_cast<internal::TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TextSuggestionBackend_OnSuggestionMenuClosed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextSuggestionBackend::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSuggestionMenuClosed();
      return true;
    }
    case internal::kTextSuggestionBackend_SuggestionMenuTimeoutCallback_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextSuggestionBackend::SuggestionMenuTimeoutCallback",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data* params =
          reinterpret_cast<internal::TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_max_number_of_suggestions{};
      TextSuggestionBackend_SuggestionMenuTimeoutCallback_ParamsDataView input_data_view(params, &serialization_context);
      
      p_max_number_of_suggestions = input_data_view.max_number_of_suggestions();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextSuggestionBackend::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuggestionMenuTimeoutCallback(
std::move(p_max_number_of_suggestions));
      return true;
    }
  }
  return false;
}

// static
bool TextSuggestionBackendStubDispatch::AcceptWithResponder(
    TextSuggestionBackend* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTextSuggestionBackend_ApplySpellCheckSuggestion_Name: {
      break;
    }
    case internal::kTextSuggestionBackend_ApplyTextSuggestion_Name: {
      break;
    }
    case internal::kTextSuggestionBackend_DeleteActiveSuggestionRange_Name: {
      break;
    }
    case internal::kTextSuggestionBackend_OnNewWordAddedToDictionary_Name: {
      break;
    }
    case internal::kTextSuggestionBackend_OnSuggestionMenuClosed_Name: {
      break;
    }
    case internal::kTextSuggestionBackend_SuggestionMenuTimeoutCallback_Name: {
      break;
    }
  }
  return false;
}

bool TextSuggestionBackendRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TextSuggestionBackend RequestValidator");

  switch (message->header()->name) {
    case internal::kTextSuggestionBackend_ApplySpellCheckSuggestion_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextSuggestionBackend_ApplyTextSuggestion_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextSuggestionBackend_ApplyTextSuggestion_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextSuggestionBackend_DeleteActiveSuggestionRange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextSuggestionBackend_OnNewWordAddedToDictionary_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextSuggestionBackend_OnSuggestionMenuClosed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextSuggestionBackend_SuggestionMenuTimeoutCallback_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data>(
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif