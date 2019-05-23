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

#include "media/mojo/interfaces/audio_output_stream.mojom.h"

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

#include "media/mojo/interfaces/audio_output_stream.mojom-params-data.h"
#include "media/mojo/interfaces/audio_output_stream.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/audio_output_stream.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif
namespace media {
namespace mojom {
const char AudioOutputStream::Name_[] = "media.mojom.AudioOutputStream";

AudioOutputStreamProxy::AudioOutputStreamProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioOutputStreamProxy::Play(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioOutputStream::Play");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStream_Play_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStream_Play_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioOutputStream::Name_);
  message.set_method_name("Play");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioOutputStreamProxy::Pause(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioOutputStream::Pause");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStream_Pause_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStream_Pause_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioOutputStream::Name_);
  message.set_method_name("Pause");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioOutputStreamProxy::SetVolume(
    double in_volume) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioOutputStream::SetVolume");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStream_SetVolume_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStream_SetVolume_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->volume = in_volume;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioOutputStream::Name_);
  message.set_method_name("SetVolume");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AudioOutputStreamStubDispatch::Accept(
    AudioOutputStream* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioOutputStream_Play_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioOutputStream::Play",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStream_Play_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStream_Play_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioOutputStream_Play_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioOutputStream::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Play();
      return true;
    }
    case internal::kAudioOutputStream_Pause_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioOutputStream::Pause",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStream_Pause_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStream_Pause_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioOutputStream_Pause_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioOutputStream::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Pause();
      return true;
    }
    case internal::kAudioOutputStream_SetVolume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioOutputStream::SetVolume",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStream_SetVolume_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStream_SetVolume_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      double p_volume{};
      AudioOutputStream_SetVolume_ParamsDataView input_data_view(params, &serialization_context);
      
      p_volume = input_data_view.volume();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioOutputStream::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetVolume(
std::move(p_volume));
      return true;
    }
  }
  return false;
}

// static
bool AudioOutputStreamStubDispatch::AcceptWithResponder(
    AudioOutputStream* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioOutputStream_Play_Name: {
      break;
    }
    case internal::kAudioOutputStream_Pause_Name: {
      break;
    }
    case internal::kAudioOutputStream_SetVolume_Name: {
      break;
    }
  }
  return false;
}

bool AudioOutputStreamRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioOutputStream RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioOutputStream_Play_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStream_Play_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioOutputStream_Pause_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStream_Pause_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioOutputStream_SetVolume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStream_SetVolume_Params_Data>(
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

const char AudioOutputStreamObserver::Name_[] = "media.mojom.AudioOutputStreamObserver";

AudioOutputStreamObserverProxy::AudioOutputStreamObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioOutputStreamObserverProxy::DidStartPlaying(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioOutputStreamObserver::DidStartPlaying");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStreamObserver_DidStartPlaying_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioOutputStreamObserver::Name_);
  message.set_method_name("DidStartPlaying");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioOutputStreamObserverProxy::DidStopPlaying(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioOutputStreamObserver::DidStopPlaying");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStreamObserver_DidStopPlaying_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioOutputStreamObserver::Name_);
  message.set_method_name("DidStopPlaying");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioOutputStreamObserverProxy::DidChangeAudibleState(
    bool in_is_audible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioOutputStreamObserver::DidChangeAudibleState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStreamObserver_DidChangeAudibleState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_audible = in_is_audible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioOutputStreamObserver::Name_);
  message.set_method_name("DidChangeAudibleState");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AudioOutputStreamObserverStubDispatch::Accept(
    AudioOutputStreamObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamObserver_DidStartPlaying_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioOutputStreamObserver::DidStartPlaying",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioOutputStreamObserver_DidStartPlaying_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioOutputStreamObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidStartPlaying();
      return true;
    }
    case internal::kAudioOutputStreamObserver_DidStopPlaying_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioOutputStreamObserver::DidStopPlaying",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioOutputStreamObserver_DidStopPlaying_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioOutputStreamObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidStopPlaying();
      return true;
    }
    case internal::kAudioOutputStreamObserver_DidChangeAudibleState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioOutputStreamObserver::DidChangeAudibleState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_is_audible{};
      AudioOutputStreamObserver_DidChangeAudibleState_ParamsDataView input_data_view(params, &serialization_context);
      
      p_is_audible = input_data_view.is_audible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioOutputStreamObserver::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidChangeAudibleState(
std::move(p_is_audible));
      return true;
    }
  }
  return false;
}

// static
bool AudioOutputStreamObserverStubDispatch::AcceptWithResponder(
    AudioOutputStreamObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamObserver_DidStartPlaying_Name: {
      break;
    }
    case internal::kAudioOutputStreamObserver_DidStopPlaying_Name: {
      break;
    }
    case internal::kAudioOutputStreamObserver_DidChangeAudibleState_Name: {
      break;
    }
  }
  return false;
}

bool AudioOutputStreamObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioOutputStreamObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioOutputStreamObserver_DidStartPlaying_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioOutputStreamObserver_DidStopPlaying_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioOutputStreamObserver_DidChangeAudibleState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data>(
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

const char AudioOutputStreamProvider::Name_[] = "media.mojom.AudioOutputStreamProvider";

AudioOutputStreamProviderProxy::AudioOutputStreamProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioOutputStreamProviderProxy::Acquire(
    const media::AudioParameters& in_params, AudioOutputStreamProviderClientPtr in_client, const base::Optional<base::UnguessableToken>& in_processing_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioOutputStreamProvider::Acquire");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStreamProvider_Acquire_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStreamProvider_Acquire_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in AudioOutputStreamProvider.Acquire request");
  mojo::internal::Serialize<::media::mojom::AudioOutputStreamProviderClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in AudioOutputStreamProvider.Acquire request");
  typename decltype(params->processing_id)::BaseType::BufferWriter
      processing_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_processing_id, buffer, &processing_id_writer, &serialization_context);
  params->processing_id.Set(
      processing_id_writer.is_null() ? nullptr : processing_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioOutputStreamProvider::Name_);
  message.set_method_name("Acquire");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AudioOutputStreamProviderStubDispatch::Accept(
    AudioOutputStreamProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamProvider_Acquire_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioOutputStreamProvider::Acquire",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStreamProvider_Acquire_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStreamProvider_Acquire_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::AudioParameters p_params{};
      AudioOutputStreamProviderClientPtr p_client{};
      base::Optional<base::UnguessableToken> p_processing_id{};
      AudioOutputStreamProvider_Acquire_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadProcessingId(&p_processing_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioOutputStreamProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Acquire(
std::move(p_params), 
std::move(p_client), 
std::move(p_processing_id));
      return true;
    }
  }
  return false;
}

// static
bool AudioOutputStreamProviderStubDispatch::AcceptWithResponder(
    AudioOutputStreamProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamProvider_Acquire_Name: {
      break;
    }
  }
  return false;
}

bool AudioOutputStreamProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioOutputStreamProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioOutputStreamProvider_Acquire_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStreamProvider_Acquire_Params_Data>(
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

const char AudioOutputStreamProviderClient::Name_[] = "media.mojom.AudioOutputStreamProviderClient";

AudioOutputStreamProviderClientProxy::AudioOutputStreamProviderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioOutputStreamProviderClientProxy::Created(
    AudioOutputStreamPtr in_stream, ::media::mojom::ReadWriteAudioDataPipePtr in_data_pipe) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioOutputStreamProviderClient::Created");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStreamProviderClient_Created_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStreamProviderClient_Created_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::AudioOutputStreamPtrDataView>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in AudioOutputStreamProviderClient.Created request");
  typename decltype(params->data_pipe)::BaseType::BufferWriter
      data_pipe_writer;
  mojo::internal::Serialize<::media::mojom::ReadWriteAudioDataPipeDataView>(
      in_data_pipe, buffer, &data_pipe_writer, &serialization_context);
  params->data_pipe.Set(
      data_pipe_writer.is_null() ? nullptr : data_pipe_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_pipe.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_pipe in AudioOutputStreamProviderClient.Created request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioOutputStreamProviderClient::Name_);
  message.set_method_name("Created");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AudioOutputStreamProviderClientStubDispatch::Accept(
    AudioOutputStreamProviderClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamProviderClient_Created_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioOutputStreamProviderClient::Created",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStreamProviderClient_Created_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStreamProviderClient_Created_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioOutputStreamPtr p_stream{};
      ::media::mojom::ReadWriteAudioDataPipePtr p_data_pipe{};
      AudioOutputStreamProviderClient_Created_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stream =
          input_data_view.TakeStream<decltype(p_stream)>();
      if (!input_data_view.ReadDataPipe(&p_data_pipe))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioOutputStreamProviderClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Created(
std::move(p_stream), 
std::move(p_data_pipe));
      return true;
    }
  }
  return false;
}

// static
bool AudioOutputStreamProviderClientStubDispatch::AcceptWithResponder(
    AudioOutputStreamProviderClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamProviderClient_Created_Name: {
      break;
    }
  }
  return false;
}

bool AudioOutputStreamProviderClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioOutputStreamProviderClient RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioOutputStreamProviderClient_Created_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStreamProviderClient_Created_Params_Data>(
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
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif