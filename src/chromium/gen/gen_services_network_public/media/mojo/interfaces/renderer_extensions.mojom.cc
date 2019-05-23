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

#include "media/mojo/interfaces/renderer_extensions.mojom.h"

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

#include "media/mojo/interfaces/renderer_extensions.mojom-params-data.h"
#include "media/mojo/interfaces/renderer_extensions.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/renderer_extensions.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace media {
namespace mojom {
const char MediaPlayerRendererClientExtension::Name_[] = "media.mojom.MediaPlayerRendererClientExtension";

MediaPlayerRendererClientExtensionProxy::MediaPlayerRendererClientExtensionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaPlayerRendererClientExtensionProxy::OnVideoSizeChange(
    const gfx::Size& in_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaPlayerRendererClientExtension::OnVideoSizeChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaPlayerRendererClientExtension_OnVideoSizeChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->size)::BaseType::BufferWriter
      size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_size, buffer, &size_writer, &serialization_context);
  params->size.Set(
      size_writer.is_null() ? nullptr : size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in MediaPlayerRendererClientExtension.OnVideoSizeChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaPlayerRendererClientExtension::Name_);
  message.set_method_name("OnVideoSizeChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaPlayerRendererClientExtensionProxy::OnDurationChange(
    base::TimeDelta in_duration) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaPlayerRendererClientExtension::OnDurationChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaPlayerRendererClientExtension_OnDurationChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaPlayerRendererClientExtension_OnDurationChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->duration)::BaseType::BufferWriter
      duration_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_duration, buffer, &duration_writer, &serialization_context);
  params->duration.Set(
      duration_writer.is_null() ? nullptr : duration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->duration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null duration in MediaPlayerRendererClientExtension.OnDurationChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaPlayerRendererClientExtension::Name_);
  message.set_method_name("OnDurationChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaPlayerRendererClientExtensionStubDispatch::Accept(
    MediaPlayerRendererClientExtension* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaPlayerRendererClientExtension_OnVideoSizeChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaPlayerRendererClientExtension::OnVideoSizeChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data* params =
          reinterpret_cast<internal::MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Size p_size{};
      MediaPlayerRendererClientExtension_OnVideoSizeChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaPlayerRendererClientExtension::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnVideoSizeChange(
std::move(p_size));
      return true;
    }
    case internal::kMediaPlayerRendererClientExtension_OnDurationChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaPlayerRendererClientExtension::OnDurationChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaPlayerRendererClientExtension_OnDurationChange_Params_Data* params =
          reinterpret_cast<internal::MediaPlayerRendererClientExtension_OnDurationChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_duration{};
      MediaPlayerRendererClientExtension_OnDurationChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDuration(&p_duration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaPlayerRendererClientExtension::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDurationChange(
std::move(p_duration));
      return true;
    }
  }
  return false;
}

// static
bool MediaPlayerRendererClientExtensionStubDispatch::AcceptWithResponder(
    MediaPlayerRendererClientExtension* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaPlayerRendererClientExtension_OnVideoSizeChange_Name: {
      break;
    }
    case internal::kMediaPlayerRendererClientExtension_OnDurationChange_Name: {
      break;
    }
  }
  return false;
}

bool MediaPlayerRendererClientExtensionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaPlayerRendererClientExtension RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaPlayerRendererClientExtension_OnVideoSizeChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaPlayerRendererClientExtension_OnDurationChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaPlayerRendererClientExtension_OnDurationChange_Params_Data>(
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

const char MediaPlayerRendererExtension::Name_[] = "media.mojom.MediaPlayerRendererExtension";

class MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ForwardToCallback(
      MediaPlayerRendererExtension::InitiateScopedSurfaceRequestCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaPlayerRendererExtension::InitiateScopedSurfaceRequestCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ForwardToCallback);
};

MediaPlayerRendererExtensionProxy::MediaPlayerRendererExtensionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaPlayerRendererExtensionProxy::InitiateScopedSurfaceRequest(
    InitiateScopedSurfaceRequestCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaPlayerRendererExtension::InitiateScopedSurfaceRequest");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaPlayerRendererExtension::Name_);
  message.set_method_name("InitiateScopedSurfaceRequest");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ProxyToResponder {
 public:
  static MediaPlayerRendererExtension::InitiateScopedSurfaceRequestCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ProxyToResponder> proxy(
        new MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ProxyToResponder() {
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
  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ProxyToResponder(
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
        << "MediaPlayerRendererExtension::InitiateScopedSurfaceRequestCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_request_token);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ProxyToResponder);
};

bool MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaPlayerRendererExtension::InitiateScopedSurfaceRequestCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_request_token{};
  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRequestToken(&p_request_token))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaPlayerRendererExtension::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_request_token));
  return true;
}

void MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ProxyToResponder::Run(
    const base::UnguessableToken& in_request_token) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_token)::BaseType::BufferWriter
      request_token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_request_token, buffer, &request_token_writer, &serialization_context);
  params->request_token.Set(
      request_token_writer.is_null() ? nullptr : request_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_token in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaPlayerRendererExtension::InitiateScopedSurfaceRequestCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaPlayerRendererExtension::Name_);
  message.set_method_name("InitiateScopedSurfaceRequest");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool MediaPlayerRendererExtensionStubDispatch::Accept(
    MediaPlayerRendererExtension* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Name: {
      break;
    }
  }
  return false;
}

// static
bool MediaPlayerRendererExtensionStubDispatch::AcceptWithResponder(
    MediaPlayerRendererExtension* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaPlayerRendererExtension::InitiateScopedSurfaceRequest",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data* params =
          reinterpret_cast<
              internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaPlayerRendererExtension::Name_, 0, false);
        return false;
      }
      MediaPlayerRendererExtension::InitiateScopedSurfaceRequestCallback callback =
          MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InitiateScopedSurfaceRequest(std::move(callback));
      return true;
    }
  }
  return false;
}

bool MediaPlayerRendererExtensionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaPlayerRendererExtension RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data>(
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

bool MediaPlayerRendererExtensionResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaPlayerRendererExtension ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data>(
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
const char FlingingRendererClientExtension::Name_[] = "media.mojom.FlingingRendererClientExtension";

FlingingRendererClientExtensionProxy::FlingingRendererClientExtensionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FlingingRendererClientExtensionProxy::OnRemotePlayStateChange(
    media::MediaStatus::State in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FlingingRendererClientExtension::OnRemotePlayStateChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFlingingRendererClientExtension_OnRemotePlayStateChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::MediaStatusState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FlingingRendererClientExtension::Name_);
  message.set_method_name("OnRemotePlayStateChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FlingingRendererClientExtensionStubDispatch::Accept(
    FlingingRendererClientExtension* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFlingingRendererClientExtension_OnRemotePlayStateChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FlingingRendererClientExtension::OnRemotePlayStateChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data* params =
          reinterpret_cast<internal::FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::MediaStatus::State p_state{};
      FlingingRendererClientExtension_OnRemotePlayStateChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FlingingRendererClientExtension::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnRemotePlayStateChange(
std::move(p_state));
      return true;
    }
  }
  return false;
}

// static
bool FlingingRendererClientExtensionStubDispatch::AcceptWithResponder(
    FlingingRendererClientExtension* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFlingingRendererClientExtension_OnRemotePlayStateChange_Name: {
      break;
    }
  }
  return false;
}

bool FlingingRendererClientExtensionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FlingingRendererClientExtension RequestValidator");

  switch (message->header()->name) {
    case internal::kFlingingRendererClientExtension_OnRemotePlayStateChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data>(
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