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

#include "services/media_session/public/mojom/audio_focus.mojom.h"

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

#include "services/media_session/public/mojom/audio_focus.mojom-params-data.h"
#include "services/media_session/public/mojom/audio_focus.mojom-shared-message-ids.h"

#include "services/media_session/public/mojom/audio_focus.mojom-import-headers.h"


#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_JUMBO_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif
namespace media_session {
namespace mojom {
AudioFocusRequestState::AudioFocusRequestState()
    : session_info(),
      audio_focus_type(),
      source_name(),
      request_id() {}

AudioFocusRequestState::AudioFocusRequestState(
    ::media_session::mojom::MediaSessionInfoPtr session_info_in,
    AudioFocusType audio_focus_type_in)
    : session_info(std::move(session_info_in)),
      audio_focus_type(std::move(audio_focus_type_in)),
      source_name(),
      request_id() {}

AudioFocusRequestState::AudioFocusRequestState(
    ::media_session::mojom::MediaSessionInfoPtr session_info_in,
    AudioFocusType audio_focus_type_in,
    const base::Optional<std::string>& source_name_in)
    : session_info(std::move(session_info_in)),
      audio_focus_type(std::move(audio_focus_type_in)),
      source_name(std::move(source_name_in)),
      request_id() {}

AudioFocusRequestState::AudioFocusRequestState(
    ::media_session::mojom::MediaSessionInfoPtr session_info_in,
    AudioFocusType audio_focus_type_in,
    const base::Optional<std::string>& source_name_in,
    const base::Optional<base::UnguessableToken>& request_id_in)
    : session_info(std::move(session_info_in)),
      audio_focus_type(std::move(audio_focus_type_in)),
      source_name(std::move(source_name_in)),
      request_id(std::move(request_id_in)) {}

AudioFocusRequestState::~AudioFocusRequestState() = default;

bool AudioFocusRequestState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char AudioFocusObserver::Name_[] = "media_session.mojom.AudioFocusObserver";

AudioFocusObserverProxy::AudioFocusObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioFocusObserverProxy::OnFocusGained(
    AudioFocusRequestStatePtr in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusObserver::OnFocusGained");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusObserver_OnFocusGained_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusObserver_OnFocusGained_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::media_session::mojom::AudioFocusRequestStateDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null state in AudioFocusObserver.OnFocusGained request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusObserver::Name_);
  message.set_method_name("OnFocusGained");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioFocusObserverProxy::OnFocusLost(
    AudioFocusRequestStatePtr in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusObserver::OnFocusLost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusObserver_OnFocusLost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusObserver_OnFocusLost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::media_session::mojom::AudioFocusRequestStateDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null state in AudioFocusObserver.OnFocusLost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusObserver::Name_);
  message.set_method_name("OnFocusLost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AudioFocusObserverStubDispatch::Accept(
    AudioFocusObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioFocusObserver_OnFocusGained_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusObserver::OnFocusGained",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioFocusObserver_OnFocusGained_Params_Data* params =
          reinterpret_cast<internal::AudioFocusObserver_OnFocusGained_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioFocusRequestStatePtr p_state{};
      AudioFocusObserver_OnFocusGained_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFocusGained(
std::move(p_state));
      return true;
    }
    case internal::kAudioFocusObserver_OnFocusLost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusObserver::OnFocusLost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioFocusObserver_OnFocusLost_Params_Data* params =
          reinterpret_cast<internal::AudioFocusObserver_OnFocusLost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioFocusRequestStatePtr p_state{};
      AudioFocusObserver_OnFocusLost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFocusLost(
std::move(p_state));
      return true;
    }
  }
  return false;
}

// static
bool AudioFocusObserverStubDispatch::AcceptWithResponder(
    AudioFocusObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioFocusObserver_OnFocusGained_Name: {
      break;
    }
    case internal::kAudioFocusObserver_OnFocusLost_Name: {
      break;
    }
  }
  return false;
}

bool AudioFocusObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioFocusObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioFocusObserver_OnFocusGained_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusObserver_OnFocusGained_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioFocusObserver_OnFocusLost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusObserver_OnFocusLost_Params_Data>(
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

const char AudioFocusRequestClient::Name_[] = "media_session.mojom.AudioFocusRequestClient";

class AudioFocusRequestClient_RequestAudioFocus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AudioFocusRequestClient_RequestAudioFocus_ForwardToCallback(
      AudioFocusRequestClient::RequestAudioFocusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AudioFocusRequestClient::RequestAudioFocusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AudioFocusRequestClient_RequestAudioFocus_ForwardToCallback);
};

AudioFocusRequestClientProxy::AudioFocusRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioFocusRequestClientProxy::RequestAudioFocus(
    ::media_session::mojom::MediaSessionInfoPtr in_session_info, AudioFocusType in_type, RequestAudioFocusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusRequestClient::RequestAudioFocus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusRequestClient_RequestAudioFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusRequestClient_RequestAudioFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_info)::BaseType::BufferWriter
      session_info_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaSessionInfoDataView>(
      in_session_info, buffer, &session_info_writer, &serialization_context);
  params->session_info.Set(
      session_info_writer.is_null() ? nullptr : session_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_info in AudioFocusRequestClient.RequestAudioFocus request");
  mojo::internal::Serialize<::media_session::mojom::AudioFocusType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusRequestClient::Name_);
  message.set_method_name("RequestAudioFocus");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AudioFocusRequestClient_RequestAudioFocus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AudioFocusRequestClientProxy::AbandonAudioFocus(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusRequestClient::AbandonAudioFocus");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusRequestClient_AbandonAudioFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusRequestClient_AbandonAudioFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusRequestClient::Name_);
  message.set_method_name("AbandonAudioFocus");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioFocusRequestClientProxy::MediaSessionInfoChanged(
    ::media_session::mojom::MediaSessionInfoPtr in_session_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusRequestClient::MediaSessionInfoChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusRequestClient_MediaSessionInfoChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_info)::BaseType::BufferWriter
      session_info_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaSessionInfoDataView>(
      in_session_info, buffer, &session_info_writer, &serialization_context);
  params->session_info.Set(
      session_info_writer.is_null() ? nullptr : session_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_info in AudioFocusRequestClient.MediaSessionInfoChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusRequestClient::Name_);
  message.set_method_name("MediaSessionInfoChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class AudioFocusRequestClient_RequestAudioFocus_ProxyToResponder {
 public:
  static AudioFocusRequestClient::RequestAudioFocusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AudioFocusRequestClient_RequestAudioFocus_ProxyToResponder> proxy(
        new AudioFocusRequestClient_RequestAudioFocus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AudioFocusRequestClient_RequestAudioFocus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AudioFocusRequestClient_RequestAudioFocus_ProxyToResponder() {
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
  AudioFocusRequestClient_RequestAudioFocus_ProxyToResponder(
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
        << "AudioFocusRequestClient::RequestAudioFocusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AudioFocusRequestClient_RequestAudioFocus_ProxyToResponder);
};

bool AudioFocusRequestClient_RequestAudioFocus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusRequestClient::RequestAudioFocusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  AudioFocusRequestClient_RequestAudioFocus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AudioFocusRequestClient::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void AudioFocusRequestClient_RequestAudioFocus_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusRequestClient_RequestAudioFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusRequestClient::RequestAudioFocusCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusRequestClient::Name_);
  message.set_method_name("RequestAudioFocus");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool AudioFocusRequestClientStubDispatch::Accept(
    AudioFocusRequestClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioFocusRequestClient_RequestAudioFocus_Name: {
      break;
    }
    case internal::kAudioFocusRequestClient_AbandonAudioFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusRequestClient::AbandonAudioFocus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioFocusRequestClient_AbandonAudioFocus_Params_Data* params =
          reinterpret_cast<internal::AudioFocusRequestClient_AbandonAudioFocus_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioFocusRequestClient_AbandonAudioFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusRequestClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AbandonAudioFocus();
      return true;
    }
    case internal::kAudioFocusRequestClient_MediaSessionInfoChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusRequestClient::MediaSessionInfoChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data* params =
          reinterpret_cast<internal::AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media_session::mojom::MediaSessionInfoPtr p_session_info{};
      AudioFocusRequestClient_MediaSessionInfoChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionInfo(&p_session_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusRequestClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MediaSessionInfoChanged(
std::move(p_session_info));
      return true;
    }
  }
  return false;
}

// static
bool AudioFocusRequestClientStubDispatch::AcceptWithResponder(
    AudioFocusRequestClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioFocusRequestClient_RequestAudioFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusRequestClient::RequestAudioFocus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::AudioFocusRequestClient_RequestAudioFocus_Params_Data* params =
          reinterpret_cast<
              internal::AudioFocusRequestClient_RequestAudioFocus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media_session::mojom::MediaSessionInfoPtr p_session_info{};
      AudioFocusType p_type{};
      AudioFocusRequestClient_RequestAudioFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionInfo(&p_session_info))
        success = false;
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusRequestClient::Name_, 0, false);
        return false;
      }
      AudioFocusRequestClient::RequestAudioFocusCallback callback =
          AudioFocusRequestClient_RequestAudioFocus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestAudioFocus(
std::move(p_session_info), 
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kAudioFocusRequestClient_AbandonAudioFocus_Name: {
      break;
    }
    case internal::kAudioFocusRequestClient_MediaSessionInfoChanged_Name: {
      break;
    }
  }
  return false;
}

bool AudioFocusRequestClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioFocusRequestClient RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioFocusRequestClient_RequestAudioFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusRequestClient_RequestAudioFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioFocusRequestClient_AbandonAudioFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusRequestClient_AbandonAudioFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioFocusRequestClient_MediaSessionInfoChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data>(
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

bool AudioFocusRequestClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioFocusRequestClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAudioFocusRequestClient_RequestAudioFocus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data>(
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
const char AudioFocusManager::Name_[] = "media_session.mojom.AudioFocusManager";

class AudioFocusManager_RequestAudioFocus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AudioFocusManager_RequestAudioFocus_ForwardToCallback(
      AudioFocusManager::RequestAudioFocusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AudioFocusManager::RequestAudioFocusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AudioFocusManager_RequestAudioFocus_ForwardToCallback);
};

class AudioFocusManager_RequestGroupedAudioFocus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AudioFocusManager_RequestGroupedAudioFocus_ForwardToCallback(
      AudioFocusManager::RequestGroupedAudioFocusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AudioFocusManager::RequestGroupedAudioFocusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AudioFocusManager_RequestGroupedAudioFocus_ForwardToCallback);
};

class AudioFocusManager_GetFocusRequests_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AudioFocusManager_GetFocusRequests_ForwardToCallback(
      AudioFocusManager::GetFocusRequestsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AudioFocusManager::GetFocusRequestsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AudioFocusManager_GetFocusRequests_ForwardToCallback);
};

AudioFocusManagerProxy::AudioFocusManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioFocusManagerProxy::RequestAudioFocus(
    AudioFocusRequestClientRequest in_client, ::media_session::mojom::MediaSessionPtr in_media_session, ::media_session::mojom::MediaSessionInfoPtr in_session_info, AudioFocusType in_type, RequestAudioFocusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManager::RequestAudioFocus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManager_RequestAudioFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManager_RequestAudioFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::AudioFocusRequestClientRequestDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in AudioFocusManager.RequestAudioFocus request");
  mojo::internal::Serialize<::media_session::mojom::MediaSessionPtrDataView>(
      in_media_session, &params->media_session, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->media_session),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid media_session in AudioFocusManager.RequestAudioFocus request");
  typename decltype(params->session_info)::BaseType::BufferWriter
      session_info_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaSessionInfoDataView>(
      in_session_info, buffer, &session_info_writer, &serialization_context);
  params->session_info.Set(
      session_info_writer.is_null() ? nullptr : session_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_info in AudioFocusManager.RequestAudioFocus request");
  mojo::internal::Serialize<::media_session::mojom::AudioFocusType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManager::Name_);
  message.set_method_name("RequestAudioFocus");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AudioFocusManager_RequestAudioFocus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AudioFocusManagerProxy::RequestGroupedAudioFocus(
    AudioFocusRequestClientRequest in_client, ::media_session::mojom::MediaSessionPtr in_media_session, ::media_session::mojom::MediaSessionInfoPtr in_session_info, AudioFocusType in_type, const base::UnguessableToken& in_group_id, RequestGroupedAudioFocusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManager::RequestGroupedAudioFocus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManager_RequestGroupedAudioFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManager_RequestGroupedAudioFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::AudioFocusRequestClientRequestDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in AudioFocusManager.RequestGroupedAudioFocus request");
  mojo::internal::Serialize<::media_session::mojom::MediaSessionPtrDataView>(
      in_media_session, &params->media_session, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->media_session),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid media_session in AudioFocusManager.RequestGroupedAudioFocus request");
  typename decltype(params->session_info)::BaseType::BufferWriter
      session_info_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaSessionInfoDataView>(
      in_session_info, buffer, &session_info_writer, &serialization_context);
  params->session_info.Set(
      session_info_writer.is_null() ? nullptr : session_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_info in AudioFocusManager.RequestGroupedAudioFocus request");
  mojo::internal::Serialize<::media_session::mojom::AudioFocusType>(
      in_type, &params->type);
  typename decltype(params->group_id)::BaseType::BufferWriter
      group_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_group_id, buffer, &group_id_writer, &serialization_context);
  params->group_id.Set(
      group_id_writer.is_null() ? nullptr : group_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_id in AudioFocusManager.RequestGroupedAudioFocus request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManager::Name_);
  message.set_method_name("RequestGroupedAudioFocus");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AudioFocusManager_RequestGroupedAudioFocus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AudioFocusManagerProxy::GetFocusRequests(
    GetFocusRequestsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManager::GetFocusRequests");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManager_GetFocusRequests_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManager_GetFocusRequests_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManager::Name_);
  message.set_method_name("GetFocusRequests");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AudioFocusManager_GetFocusRequests_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AudioFocusManagerProxy::AddObserver(
    AudioFocusObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManager::AddObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManager_AddObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManager_AddObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::AudioFocusObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in AudioFocusManager.AddObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManager::Name_);
  message.set_method_name("AddObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioFocusManagerProxy::SetSourceName(
    const std::string& in_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManager::SetSourceName");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManager_SetSourceName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManager_SetSourceName_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in AudioFocusManager.SetSourceName request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManager::Name_);
  message.set_method_name("SetSourceName");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioFocusManagerProxy::SetEnforcementMode(
    EnforcementMode in_mode) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManager::SetEnforcementMode");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManager_SetEnforcementMode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManager_SetEnforcementMode_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::EnforcementMode>(
      in_mode, &params->mode);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManager::Name_);
  message.set_method_name("SetEnforcementMode");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class AudioFocusManager_RequestAudioFocus_ProxyToResponder {
 public:
  static AudioFocusManager::RequestAudioFocusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AudioFocusManager_RequestAudioFocus_ProxyToResponder> proxy(
        new AudioFocusManager_RequestAudioFocus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AudioFocusManager_RequestAudioFocus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AudioFocusManager_RequestAudioFocus_ProxyToResponder() {
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
  AudioFocusManager_RequestAudioFocus_ProxyToResponder(
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
        << "AudioFocusManager::RequestAudioFocusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_request_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AudioFocusManager_RequestAudioFocus_ProxyToResponder);
};

bool AudioFocusManager_RequestAudioFocus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManager::RequestAudioFocusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AudioFocusManager_RequestAudioFocus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AudioFocusManager_RequestAudioFocus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_request_id{};
  AudioFocusManager_RequestAudioFocus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRequestId(&p_request_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AudioFocusManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_request_id));
  return true;
}

void AudioFocusManager_RequestAudioFocus_ProxyToResponder::Run(
    const base::UnguessableToken& in_request_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManager_RequestAudioFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManager_RequestAudioFocus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_id)::BaseType::BufferWriter
      request_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_request_id, buffer, &request_id_writer, &serialization_context);
  params->request_id.Set(
      request_id_writer.is_null() ? nullptr : request_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManager::RequestAudioFocusCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManager::Name_);
  message.set_method_name("RequestAudioFocus");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class AudioFocusManager_RequestGroupedAudioFocus_ProxyToResponder {
 public:
  static AudioFocusManager::RequestGroupedAudioFocusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AudioFocusManager_RequestGroupedAudioFocus_ProxyToResponder> proxy(
        new AudioFocusManager_RequestGroupedAudioFocus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AudioFocusManager_RequestGroupedAudioFocus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AudioFocusManager_RequestGroupedAudioFocus_ProxyToResponder() {
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
  AudioFocusManager_RequestGroupedAudioFocus_ProxyToResponder(
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
        << "AudioFocusManager::RequestGroupedAudioFocusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_request_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AudioFocusManager_RequestGroupedAudioFocus_ProxyToResponder);
};

bool AudioFocusManager_RequestGroupedAudioFocus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManager::RequestGroupedAudioFocusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_request_id{};
  AudioFocusManager_RequestGroupedAudioFocus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRequestId(&p_request_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AudioFocusManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_request_id));
  return true;
}

void AudioFocusManager_RequestGroupedAudioFocus_ProxyToResponder::Run(
    const base::UnguessableToken& in_request_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManager_RequestGroupedAudioFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_id)::BaseType::BufferWriter
      request_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_request_id, buffer, &request_id_writer, &serialization_context);
  params->request_id.Set(
      request_id_writer.is_null() ? nullptr : request_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManager::RequestGroupedAudioFocusCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManager::Name_);
  message.set_method_name("RequestGroupedAudioFocus");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class AudioFocusManager_GetFocusRequests_ProxyToResponder {
 public:
  static AudioFocusManager::GetFocusRequestsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AudioFocusManager_GetFocusRequests_ProxyToResponder> proxy(
        new AudioFocusManager_GetFocusRequests_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AudioFocusManager_GetFocusRequests_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AudioFocusManager_GetFocusRequests_ProxyToResponder() {
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
  AudioFocusManager_GetFocusRequests_ProxyToResponder(
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
        << "AudioFocusManager::GetFocusRequestsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<AudioFocusRequestStatePtr> in_requests);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AudioFocusManager_GetFocusRequests_ProxyToResponder);
};

bool AudioFocusManager_GetFocusRequests_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManager::GetFocusRequestsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AudioFocusManager_GetFocusRequests_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AudioFocusManager_GetFocusRequests_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<AudioFocusRequestStatePtr> p_requests{};
  AudioFocusManager_GetFocusRequests_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRequests(&p_requests))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AudioFocusManager::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_requests));
  return true;
}

void AudioFocusManager_GetFocusRequests_ProxyToResponder::Run(
    std::vector<AudioFocusRequestStatePtr> in_requests) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManager_GetFocusRequests_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManager_GetFocusRequests_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->requests)::BaseType::BufferWriter
      requests_writer;
  const mojo::internal::ContainerValidateParams requests_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media_session::mojom::AudioFocusRequestStateDataView>>(
      in_requests, buffer, &requests_writer, &requests_validate_params,
      &serialization_context);
  params->requests.Set(
      requests_writer.is_null() ? nullptr : requests_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->requests.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null requests in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManager::GetFocusRequestsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManager::Name_);
  message.set_method_name("GetFocusRequests");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool AudioFocusManagerStubDispatch::Accept(
    AudioFocusManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioFocusManager_RequestAudioFocus_Name: {
      break;
    }
    case internal::kAudioFocusManager_RequestGroupedAudioFocus_Name: {
      break;
    }
    case internal::kAudioFocusManager_GetFocusRequests_Name: {
      break;
    }
    case internal::kAudioFocusManager_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManager::AddObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioFocusManager_AddObserver_Params_Data* params =
          reinterpret_cast<internal::AudioFocusManager_AddObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioFocusObserverPtr p_observer{};
      AudioFocusManager_AddObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusManager::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddObserver(
std::move(p_observer));
      return true;
    }
    case internal::kAudioFocusManager_SetSourceName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManager::SetSourceName",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioFocusManager_SetSourceName_Params_Data* params =
          reinterpret_cast<internal::AudioFocusManager_SetSourceName_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      AudioFocusManager_SetSourceName_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusManager::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSourceName(
std::move(p_name));
      return true;
    }
    case internal::kAudioFocusManager_SetEnforcementMode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManager::SetEnforcementMode",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioFocusManager_SetEnforcementMode_Params_Data* params =
          reinterpret_cast<internal::AudioFocusManager_SetEnforcementMode_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EnforcementMode p_mode{};
      AudioFocusManager_SetEnforcementMode_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMode(&p_mode))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusManager::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetEnforcementMode(
std::move(p_mode));
      return true;
    }
  }
  return false;
}

// static
bool AudioFocusManagerStubDispatch::AcceptWithResponder(
    AudioFocusManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioFocusManager_RequestAudioFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManager::RequestAudioFocus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::AudioFocusManager_RequestAudioFocus_Params_Data* params =
          reinterpret_cast<
              internal::AudioFocusManager_RequestAudioFocus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioFocusRequestClientRequest p_client{};
      ::media_session::mojom::MediaSessionPtr p_media_session{};
      ::media_session::mojom::MediaSessionInfoPtr p_session_info{};
      AudioFocusType p_type{};
      AudioFocusManager_RequestAudioFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_media_session =
          input_data_view.TakeMediaSession<decltype(p_media_session)>();
      if (!input_data_view.ReadSessionInfo(&p_session_info))
        success = false;
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusManager::Name_, 0, false);
        return false;
      }
      AudioFocusManager::RequestAudioFocusCallback callback =
          AudioFocusManager_RequestAudioFocus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestAudioFocus(
std::move(p_client), 
std::move(p_media_session), 
std::move(p_session_info), 
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kAudioFocusManager_RequestGroupedAudioFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManager::RequestGroupedAudioFocus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::AudioFocusManager_RequestGroupedAudioFocus_Params_Data* params =
          reinterpret_cast<
              internal::AudioFocusManager_RequestGroupedAudioFocus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioFocusRequestClientRequest p_client{};
      ::media_session::mojom::MediaSessionPtr p_media_session{};
      ::media_session::mojom::MediaSessionInfoPtr p_session_info{};
      AudioFocusType p_type{};
      base::UnguessableToken p_group_id{};
      AudioFocusManager_RequestGroupedAudioFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_media_session =
          input_data_view.TakeMediaSession<decltype(p_media_session)>();
      if (!input_data_view.ReadSessionInfo(&p_session_info))
        success = false;
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadGroupId(&p_group_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusManager::Name_, 1, false);
        return false;
      }
      AudioFocusManager::RequestGroupedAudioFocusCallback callback =
          AudioFocusManager_RequestGroupedAudioFocus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestGroupedAudioFocus(
std::move(p_client), 
std::move(p_media_session), 
std::move(p_session_info), 
std::move(p_type), 
std::move(p_group_id), std::move(callback));
      return true;
    }
    case internal::kAudioFocusManager_GetFocusRequests_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManager::GetFocusRequests",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::AudioFocusManager_GetFocusRequests_Params_Data* params =
          reinterpret_cast<
              internal::AudioFocusManager_GetFocusRequests_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioFocusManager_GetFocusRequests_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusManager::Name_, 5, false);
        return false;
      }
      AudioFocusManager::GetFocusRequestsCallback callback =
          AudioFocusManager_GetFocusRequests_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetFocusRequests(std::move(callback));
      return true;
    }
    case internal::kAudioFocusManager_AddObserver_Name: {
      break;
    }
    case internal::kAudioFocusManager_SetSourceName_Name: {
      break;
    }
    case internal::kAudioFocusManager_SetEnforcementMode_Name: {
      break;
    }
  }
  return false;
}

bool AudioFocusManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioFocusManager RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioFocusManager_RequestAudioFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManager_RequestAudioFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioFocusManager_RequestGroupedAudioFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManager_RequestGroupedAudioFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioFocusManager_GetFocusRequests_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManager_GetFocusRequests_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioFocusManager_AddObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManager_AddObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioFocusManager_SetSourceName_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManager_SetSourceName_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioFocusManager_SetEnforcementMode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManager_SetEnforcementMode_Params_Data>(
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

bool AudioFocusManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioFocusManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAudioFocusManager_RequestAudioFocus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManager_RequestAudioFocus_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioFocusManager_RequestGroupedAudioFocus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioFocusManager_GetFocusRequests_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManager_GetFocusRequests_ResponseParams_Data>(
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
const char AudioFocusManagerDebug::Name_[] = "media_session.mojom.AudioFocusManagerDebug";

class AudioFocusManagerDebug_GetDebugInfoForRequest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AudioFocusManagerDebug_GetDebugInfoForRequest_ForwardToCallback(
      AudioFocusManagerDebug::GetDebugInfoForRequestCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AudioFocusManagerDebug::GetDebugInfoForRequestCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AudioFocusManagerDebug_GetDebugInfoForRequest_ForwardToCallback);
};

AudioFocusManagerDebugProxy::AudioFocusManagerDebugProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioFocusManagerDebugProxy::GetDebugInfoForRequest(
    const base::UnguessableToken& in_request_id, GetDebugInfoForRequestCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManagerDebug::GetDebugInfoForRequest");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManagerDebug_GetDebugInfoForRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_id)::BaseType::BufferWriter
      request_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_request_id, buffer, &request_id_writer, &serialization_context);
  params->request_id.Set(
      request_id_writer.is_null() ? nullptr : request_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_id in AudioFocusManagerDebug.GetDebugInfoForRequest request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManagerDebug::Name_);
  message.set_method_name("GetDebugInfoForRequest");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AudioFocusManagerDebug_GetDebugInfoForRequest_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class AudioFocusManagerDebug_GetDebugInfoForRequest_ProxyToResponder {
 public:
  static AudioFocusManagerDebug::GetDebugInfoForRequestCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AudioFocusManagerDebug_GetDebugInfoForRequest_ProxyToResponder> proxy(
        new AudioFocusManagerDebug_GetDebugInfoForRequest_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AudioFocusManagerDebug_GetDebugInfoForRequest_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AudioFocusManagerDebug_GetDebugInfoForRequest_ProxyToResponder() {
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
  AudioFocusManagerDebug_GetDebugInfoForRequest_ProxyToResponder(
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
        << "AudioFocusManagerDebug::GetDebugInfoForRequestCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::media_session::mojom::MediaSessionDebugInfoPtr in_debug_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AudioFocusManagerDebug_GetDebugInfoForRequest_ProxyToResponder);
};

bool AudioFocusManagerDebug_GetDebugInfoForRequest_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::AudioFocusManagerDebug::GetDebugInfoForRequestCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::media_session::mojom::MediaSessionDebugInfoPtr p_debug_info{};
  AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDebugInfo(&p_debug_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AudioFocusManagerDebug::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_debug_info));
  return true;
}

void AudioFocusManagerDebug_GetDebugInfoForRequest_ProxyToResponder::Run(
    ::media_session::mojom::MediaSessionDebugInfoPtr in_debug_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioFocusManagerDebug_GetDebugInfoForRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->debug_info)::BaseType::BufferWriter
      debug_info_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaSessionDebugInfoDataView>(
      in_debug_info, buffer, &debug_info_writer, &serialization_context);
  params->debug_info.Set(
      debug_info_writer.is_null() ? nullptr : debug_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->debug_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null debug_info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManagerDebug::GetDebugInfoForRequestCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AudioFocusManagerDebug::Name_);
  message.set_method_name("GetDebugInfoForRequest");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool AudioFocusManagerDebugStubDispatch::Accept(
    AudioFocusManagerDebug* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioFocusManagerDebug_GetDebugInfoForRequest_Name: {
      break;
    }
  }
  return false;
}

// static
bool AudioFocusManagerDebugStubDispatch::AcceptWithResponder(
    AudioFocusManagerDebug* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioFocusManagerDebug_GetDebugInfoForRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AudioFocusManagerDebug::GetDebugInfoForRequest",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data* params =
          reinterpret_cast<
              internal::AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_request_id{};
      AudioFocusManagerDebug_GetDebugInfoForRequest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequestId(&p_request_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AudioFocusManagerDebug::Name_, 0, false);
        return false;
      }
      AudioFocusManagerDebug::GetDebugInfoForRequestCallback callback =
          AudioFocusManagerDebug_GetDebugInfoForRequest_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDebugInfoForRequest(
std::move(p_request_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool AudioFocusManagerDebugRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioFocusManagerDebug RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioFocusManagerDebug_GetDebugInfoForRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data>(
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

bool AudioFocusManagerDebugResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioFocusManagerDebug ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAudioFocusManagerDebug_GetDebugInfoForRequest_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data>(
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
}  // namespace media_session

namespace mojo {


// static
bool StructTraits<::media_session::mojom::AudioFocusRequestState::DataView, ::media_session::mojom::AudioFocusRequestStatePtr>::Read(
    ::media_session::mojom::AudioFocusRequestState::DataView input,
    ::media_session::mojom::AudioFocusRequestStatePtr* output) {
  bool success = true;
  ::media_session::mojom::AudioFocusRequestStatePtr result(::media_session::mojom::AudioFocusRequestState::New());
  
      if (!input.ReadSessionInfo(&result->session_info))
        success = false;
      if (!input.ReadAudioFocusType(&result->audio_focus_type))
        success = false;
      if (!input.ReadSourceName(&result->source_name))
        success = false;
      if (!input.ReadRequestId(&result->request_id))
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