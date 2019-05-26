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

#include "third_party/blink/public/mojom/speech/speech_recognizer.mojom.h"

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

#include "third_party/blink/public/mojom/speech/speech_recognizer.mojom-params-data.h"
#include "third_party/blink/public/mojom/speech/speech_recognizer.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/speech/speech_recognizer.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
StartSpeechRecognitionRequestParams::StartSpeechRecognitionRequestParams()
    : session_request(),
      client(),
      language(),
      grammars(),
      origin(),
      max_hypotheses(),
      continuous(),
      interim_results() {}

StartSpeechRecognitionRequestParams::StartSpeechRecognitionRequestParams(
    SpeechRecognitionSessionRequest session_request_in,
    SpeechRecognitionSessionClientPtrInfo client_in,
    const std::string& language_in,
    std::vector<::blink::mojom::SpeechRecognitionGrammarPtr> grammars_in,
    const url::Origin& origin_in,
    uint32_t max_hypotheses_in,
    bool continuous_in,
    bool interim_results_in)
    : session_request(std::move(session_request_in)),
      client(std::move(client_in)),
      language(std::move(language_in)),
      grammars(std::move(grammars_in)),
      origin(std::move(origin_in)),
      max_hypotheses(std::move(max_hypotheses_in)),
      continuous(std::move(continuous_in)),
      interim_results(std::move(interim_results_in)) {}

StartSpeechRecognitionRequestParams::~StartSpeechRecognitionRequestParams() = default;

bool StartSpeechRecognitionRequestParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SpeechRecognizer::Name_[] = "blink.mojom.SpeechRecognizer";

SpeechRecognizerProxy::SpeechRecognizerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SpeechRecognizerProxy::Start(
    StartSpeechRecognitionRequestParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognizer::Start");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognizer_Start_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognizer_Start_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::blink::mojom::StartSpeechRecognitionRequestParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in SpeechRecognizer.Start request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognizer::Name_);
  message.set_method_name("Start");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SpeechRecognizerStubDispatch::Accept(
    SpeechRecognizer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSpeechRecognizer_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognizer::Start",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognizer_Start_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognizer_Start_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      StartSpeechRecognitionRequestParamsPtr p_params{};
      SpeechRecognizer_Start_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognizer::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Start(
std::move(p_params));
      return true;
    }
  }
  return false;
}

// static
bool SpeechRecognizerStubDispatch::AcceptWithResponder(
    SpeechRecognizer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSpeechRecognizer_Start_Name: {
      break;
    }
  }
  return false;
}

bool SpeechRecognizerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SpeechRecognizer RequestValidator");

  switch (message->header()->name) {
    case internal::kSpeechRecognizer_Start_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognizer_Start_Params_Data>(
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

const char SpeechRecognitionSession::Name_[] = "blink.mojom.SpeechRecognitionSession";

SpeechRecognitionSessionProxy::SpeechRecognitionSessionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SpeechRecognitionSessionProxy::Abort(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognitionSession::Abort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognitionSession_Abort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognitionSession_Abort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognitionSession::Name_);
  message.set_method_name("Abort");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpeechRecognitionSessionProxy::StopCapture(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognitionSession::StopCapture");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognitionSession_StopCapture_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognitionSession_StopCapture_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognitionSession::Name_);
  message.set_method_name("StopCapture");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SpeechRecognitionSessionStubDispatch::Accept(
    SpeechRecognitionSession* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSpeechRecognitionSession_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognitionSession::Abort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognitionSession_Abort_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognitionSession_Abort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SpeechRecognitionSession_Abort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognitionSession::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Abort();
      return true;
    }
    case internal::kSpeechRecognitionSession_StopCapture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognitionSession::StopCapture",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognitionSession_StopCapture_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognitionSession_StopCapture_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SpeechRecognitionSession_StopCapture_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognitionSession::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopCapture();
      return true;
    }
  }
  return false;
}

// static
bool SpeechRecognitionSessionStubDispatch::AcceptWithResponder(
    SpeechRecognitionSession* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSpeechRecognitionSession_Abort_Name: {
      break;
    }
    case internal::kSpeechRecognitionSession_StopCapture_Name: {
      break;
    }
  }
  return false;
}

bool SpeechRecognitionSessionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SpeechRecognitionSession RequestValidator");

  switch (message->header()->name) {
    case internal::kSpeechRecognitionSession_Abort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognitionSession_Abort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpeechRecognitionSession_StopCapture_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognitionSession_StopCapture_Params_Data>(
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

const char SpeechRecognitionSessionClient::Name_[] = "blink.mojom.SpeechRecognitionSessionClient";

SpeechRecognitionSessionClientProxy::SpeechRecognitionSessionClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SpeechRecognitionSessionClientProxy::ResultRetrieved(
    std::vector<::blink::mojom::SpeechRecognitionResultPtr> in_results) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::ResultRetrieved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognitionSessionClient_ResultRetrieved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognitionSessionClient_ResultRetrieved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SpeechRecognitionResultDataView>>(
      in_results, buffer, &results_writer, &results_validate_params,
      &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in SpeechRecognitionSessionClient.ResultRetrieved request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognitionSessionClient::Name_);
  message.set_method_name("ResultRetrieved");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpeechRecognitionSessionClientProxy::ErrorOccurred(
    ::blink::mojom::SpeechRecognitionErrorPtr in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::ErrorOccurred");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognitionSessionClient_ErrorOccurred_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognitionSessionClient_ErrorOccurred_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::blink::mojom::SpeechRecognitionErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in SpeechRecognitionSessionClient.ErrorOccurred request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognitionSessionClient::Name_);
  message.set_method_name("ErrorOccurred");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpeechRecognitionSessionClientProxy::Started(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::Started");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognitionSessionClient_Started_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognitionSessionClient_Started_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognitionSessionClient::Name_);
  message.set_method_name("Started");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpeechRecognitionSessionClientProxy::AudioStarted(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::AudioStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognitionSessionClient_AudioStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognitionSessionClient_AudioStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognitionSessionClient::Name_);
  message.set_method_name("AudioStarted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpeechRecognitionSessionClientProxy::SoundStarted(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::SoundStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognitionSessionClient_SoundStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognitionSessionClient_SoundStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognitionSessionClient::Name_);
  message.set_method_name("SoundStarted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpeechRecognitionSessionClientProxy::SoundEnded(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::SoundEnded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognitionSessionClient_SoundEnded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognitionSessionClient_SoundEnded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognitionSessionClient::Name_);
  message.set_method_name("SoundEnded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpeechRecognitionSessionClientProxy::AudioEnded(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::AudioEnded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognitionSessionClient_AudioEnded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognitionSessionClient_AudioEnded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognitionSessionClient::Name_);
  message.set_method_name("AudioEnded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SpeechRecognitionSessionClientProxy::Ended(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::Ended");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpeechRecognitionSessionClient_Ended_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpeechRecognitionSessionClient_Ended_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpeechRecognitionSessionClient::Name_);
  message.set_method_name("Ended");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SpeechRecognitionSessionClientStubDispatch::Accept(
    SpeechRecognitionSessionClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSpeechRecognitionSessionClient_ResultRetrieved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::ResultRetrieved",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognitionSessionClient_ResultRetrieved_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognitionSessionClient_ResultRetrieved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::blink::mojom::SpeechRecognitionResultPtr> p_results{};
      SpeechRecognitionSessionClient_ResultRetrieved_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResults(&p_results))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognitionSessionClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResultRetrieved(
std::move(p_results));
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_ErrorOccurred_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::ErrorOccurred",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognitionSessionClient_ErrorOccurred_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognitionSessionClient_ErrorOccurred_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::SpeechRecognitionErrorPtr p_error{};
      SpeechRecognitionSessionClient_ErrorOccurred_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognitionSessionClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ErrorOccurred(
std::move(p_error));
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_Started_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::Started",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognitionSessionClient_Started_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognitionSessionClient_Started_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SpeechRecognitionSessionClient_Started_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognitionSessionClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Started();
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_AudioStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::AudioStarted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognitionSessionClient_AudioStarted_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognitionSessionClient_AudioStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SpeechRecognitionSessionClient_AudioStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognitionSessionClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AudioStarted();
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_SoundStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::SoundStarted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognitionSessionClient_SoundStarted_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognitionSessionClient_SoundStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SpeechRecognitionSessionClient_SoundStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognitionSessionClient::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SoundStarted();
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_SoundEnded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::SoundEnded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognitionSessionClient_SoundEnded_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognitionSessionClient_SoundEnded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SpeechRecognitionSessionClient_SoundEnded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognitionSessionClient::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SoundEnded();
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_AudioEnded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::AudioEnded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognitionSessionClient_AudioEnded_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognitionSessionClient_AudioEnded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SpeechRecognitionSessionClient_AudioEnded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognitionSessionClient::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AudioEnded();
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_Ended_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpeechRecognitionSessionClient::Ended",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpeechRecognitionSessionClient_Ended_Params_Data* params =
          reinterpret_cast<internal::SpeechRecognitionSessionClient_Ended_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SpeechRecognitionSessionClient_Ended_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpeechRecognitionSessionClient::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Ended();
      return true;
    }
  }
  return false;
}

// static
bool SpeechRecognitionSessionClientStubDispatch::AcceptWithResponder(
    SpeechRecognitionSessionClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSpeechRecognitionSessionClient_ResultRetrieved_Name: {
      break;
    }
    case internal::kSpeechRecognitionSessionClient_ErrorOccurred_Name: {
      break;
    }
    case internal::kSpeechRecognitionSessionClient_Started_Name: {
      break;
    }
    case internal::kSpeechRecognitionSessionClient_AudioStarted_Name: {
      break;
    }
    case internal::kSpeechRecognitionSessionClient_SoundStarted_Name: {
      break;
    }
    case internal::kSpeechRecognitionSessionClient_SoundEnded_Name: {
      break;
    }
    case internal::kSpeechRecognitionSessionClient_AudioEnded_Name: {
      break;
    }
    case internal::kSpeechRecognitionSessionClient_Ended_Name: {
      break;
    }
  }
  return false;
}

bool SpeechRecognitionSessionClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SpeechRecognitionSessionClient RequestValidator");

  switch (message->header()->name) {
    case internal::kSpeechRecognitionSessionClient_ResultRetrieved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognitionSessionClient_ResultRetrieved_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_ErrorOccurred_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognitionSessionClient_ErrorOccurred_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_Started_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognitionSessionClient_Started_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_AudioStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognitionSessionClient_AudioStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_SoundStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognitionSessionClient_SoundStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_SoundEnded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognitionSessionClient_SoundEnded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_AudioEnded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognitionSessionClient_AudioEnded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSpeechRecognitionSessionClient_Ended_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpeechRecognitionSessionClient_Ended_Params_Data>(
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
bool StructTraits<::blink::mojom::StartSpeechRecognitionRequestParams::DataView, ::blink::mojom::StartSpeechRecognitionRequestParamsPtr>::Read(
    ::blink::mojom::StartSpeechRecognitionRequestParams::DataView input,
    ::blink::mojom::StartSpeechRecognitionRequestParamsPtr* output) {
  bool success = true;
  ::blink::mojom::StartSpeechRecognitionRequestParamsPtr result(::blink::mojom::StartSpeechRecognitionRequestParams::New());
  
      result->session_request =
          input.TakeSessionRequest<decltype(result->session_request)>();
      result->client =
          input.TakeClient<decltype(result->client)>();
      if (!input.ReadLanguage(&result->language))
        success = false;
      if (!input.ReadGrammars(&result->grammars))
        success = false;
      if (!input.ReadOrigin(&result->origin))
        success = false;
      result->max_hypotheses = input.max_hypotheses();
      result->continuous = input.continuous();
      result->interim_results = input.interim_results();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif