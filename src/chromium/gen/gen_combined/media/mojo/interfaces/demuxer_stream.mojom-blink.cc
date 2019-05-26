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

#include "media/mojo/interfaces/demuxer_stream.mojom-blink.h"

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

#include "media/mojo/interfaces/demuxer_stream.mojom-params-data.h"
#include "media/mojo/interfaces/demuxer_stream.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/demuxer_stream.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace media {
namespace mojom {
namespace blink {
const char DemuxerStream::Name_[] = "media.mojom.DemuxerStream";

class DemuxerStream_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DemuxerStream_Initialize_ForwardToCallback(
      DemuxerStream::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DemuxerStream::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DemuxerStream_Initialize_ForwardToCallback);
};

class DemuxerStream_Read_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DemuxerStream_Read_ForwardToCallback(
      DemuxerStream::ReadCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DemuxerStream::ReadCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DemuxerStream_Read_ForwardToCallback);
};

DemuxerStreamProxy::DemuxerStreamProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DemuxerStreamProxy::Initialize(
    InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DemuxerStream::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDemuxerStream_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::DemuxerStream_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DemuxerStream::Name_);
  message.set_method_name("Initialize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DemuxerStream_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DemuxerStreamProxy::Read(
    ReadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DemuxerStream::Read");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDemuxerStream_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::DemuxerStream_Read_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DemuxerStream::Name_);
  message.set_method_name("Read");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DemuxerStream_Read_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DemuxerStreamProxy::EnableBitstreamConverter(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DemuxerStream::EnableBitstreamConverter");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDemuxerStream_EnableBitstreamConverter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::DemuxerStream_EnableBitstreamConverter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DemuxerStream::Name_);
  message.set_method_name("EnableBitstreamConverter");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class DemuxerStream_Initialize_ProxyToResponder {
 public:
  static DemuxerStream::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DemuxerStream_Initialize_ProxyToResponder> proxy(
        new DemuxerStream_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DemuxerStream_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DemuxerStream_Initialize_ProxyToResponder() {
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
  DemuxerStream_Initialize_ProxyToResponder(
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
        << "DemuxerStream::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DemuxerStream::Type in_type, mojo::ScopedDataPipeConsumerHandle in_pipe, ::media::mojom::blink::AudioDecoderConfigPtr in_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr in_video_config);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DemuxerStream_Initialize_ProxyToResponder);
};

bool DemuxerStream_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::DemuxerStream::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DemuxerStream_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DemuxerStream_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DemuxerStream::Type p_type{};
  mojo::ScopedDataPipeConsumerHandle p_pipe{};
  ::media::mojom::blink::AudioDecoderConfigPtr p_audio_config{};
  ::media::mojom::blink::VideoDecoderConfigPtr p_video_config{};
  DemuxerStream_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadType(&p_type))
    success = false;
  p_pipe = input_data_view.TakePipe();
  if (!input_data_view.ReadAudioConfig(&p_audio_config))
    success = false;
  if (!input_data_view.ReadVideoConfig(&p_video_config))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        DemuxerStream::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_type), 
std::move(p_pipe), 
std::move(p_audio_config), 
std::move(p_video_config));
  return true;
}

void DemuxerStream_Initialize_ProxyToResponder::Run(
    DemuxerStream::Type in_type, mojo::ScopedDataPipeConsumerHandle in_pipe, ::media::mojom::blink::AudioDecoderConfigPtr in_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr in_video_config) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDemuxerStream_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::DemuxerStream_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::DemuxerStream_Type>(
      in_type, &params->type);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_pipe, &params->pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pipe in ");
  typename decltype(params->audio_config)::BaseType::BufferWriter
      audio_config_writer;
  mojo::internal::Serialize<::media::mojom::AudioDecoderConfigDataView>(
      in_audio_config, buffer, &audio_config_writer, &serialization_context);
  params->audio_config.Set(
      audio_config_writer.is_null() ? nullptr : audio_config_writer.data());
  typename decltype(params->video_config)::BaseType::BufferWriter
      video_config_writer;
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigDataView>(
      in_video_config, buffer, &video_config_writer, &serialization_context);
  params->video_config.Set(
      video_config_writer.is_null() ? nullptr : video_config_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::DemuxerStream::InitializeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DemuxerStream::Name_);
  message.set_method_name("Initialize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class DemuxerStream_Read_ProxyToResponder {
 public:
  static DemuxerStream::ReadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DemuxerStream_Read_ProxyToResponder> proxy(
        new DemuxerStream_Read_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DemuxerStream_Read_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DemuxerStream_Read_ProxyToResponder() {
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
  DemuxerStream_Read_ProxyToResponder(
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
        << "DemuxerStream::ReadCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DemuxerStream::Status in_status, ::media::mojom::blink::DecoderBufferPtr in_buffer, ::media::mojom::blink::AudioDecoderConfigPtr in_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr in_video_config);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DemuxerStream_Read_ProxyToResponder);
};

bool DemuxerStream_Read_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::DemuxerStream::ReadCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DemuxerStream_Read_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DemuxerStream_Read_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DemuxerStream::Status p_status{};
  ::media::mojom::blink::DecoderBufferPtr p_buffer{};
  ::media::mojom::blink::AudioDecoderConfigPtr p_audio_config{};
  ::media::mojom::blink::VideoDecoderConfigPtr p_video_config{};
  DemuxerStream_Read_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadBuffer(&p_buffer))
    success = false;
  if (!input_data_view.ReadAudioConfig(&p_audio_config))
    success = false;
  if (!input_data_view.ReadVideoConfig(&p_video_config))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        DemuxerStream::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_buffer), 
std::move(p_audio_config), 
std::move(p_video_config));
  return true;
}

void DemuxerStream_Read_ProxyToResponder::Run(
    DemuxerStream::Status in_status, ::media::mojom::blink::DecoderBufferPtr in_buffer, ::media::mojom::blink::AudioDecoderConfigPtr in_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr in_video_config) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDemuxerStream_Read_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::DemuxerStream_Read_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::DemuxerStream_Status>(
      in_status, &params->status);
  typename decltype(params->buffer)::BaseType::BufferWriter
      buffer_writer;
  mojo::internal::Serialize<::media::mojom::DecoderBufferDataView>(
      in_buffer, buffer, &buffer_writer, &serialization_context);
  params->buffer.Set(
      buffer_writer.is_null() ? nullptr : buffer_writer.data());
  typename decltype(params->audio_config)::BaseType::BufferWriter
      audio_config_writer;
  mojo::internal::Serialize<::media::mojom::AudioDecoderConfigDataView>(
      in_audio_config, buffer, &audio_config_writer, &serialization_context);
  params->audio_config.Set(
      audio_config_writer.is_null() ? nullptr : audio_config_writer.data());
  typename decltype(params->video_config)::BaseType::BufferWriter
      video_config_writer;
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigDataView>(
      in_video_config, buffer, &video_config_writer, &serialization_context);
  params->video_config.Set(
      video_config_writer.is_null() ? nullptr : video_config_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::DemuxerStream::ReadCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DemuxerStream::Name_);
  message.set_method_name("Read");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool DemuxerStreamStubDispatch::Accept(
    DemuxerStream* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDemuxerStream_Initialize_Name: {
      break;
    }
    case internal::kDemuxerStream_Read_Name: {
      break;
    }
    case internal::kDemuxerStream_EnableBitstreamConverter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DemuxerStream::EnableBitstreamConverter",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DemuxerStream_EnableBitstreamConverter_Params_Data* params =
          reinterpret_cast<internal::DemuxerStream_EnableBitstreamConverter_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DemuxerStream_EnableBitstreamConverter_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DemuxerStream::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnableBitstreamConverter();
      return true;
    }
  }
  return false;
}

// static
bool DemuxerStreamStubDispatch::AcceptWithResponder(
    DemuxerStream* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDemuxerStream_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DemuxerStream::Initialize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::DemuxerStream_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::DemuxerStream_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DemuxerStream_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DemuxerStream::Name_, 0, false);
        return false;
      }
      DemuxerStream::InitializeCallback callback =
          DemuxerStream_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Initialize(std::move(callback));
      return true;
    }
    case internal::kDemuxerStream_Read_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DemuxerStream::Read",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::DemuxerStream_Read_Params_Data* params =
          reinterpret_cast<
              internal::DemuxerStream_Read_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DemuxerStream_Read_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DemuxerStream::Name_, 1, false);
        return false;
      }
      DemuxerStream::ReadCallback callback =
          DemuxerStream_Read_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Read(std::move(callback));
      return true;
    }
    case internal::kDemuxerStream_EnableBitstreamConverter_Name: {
      break;
    }
  }
  return false;
}

bool DemuxerStreamRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DemuxerStream RequestValidator");

  switch (message->header()->name) {
    case internal::kDemuxerStream_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DemuxerStream_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDemuxerStream_Read_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DemuxerStream_Read_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDemuxerStream_EnableBitstreamConverter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DemuxerStream_EnableBitstreamConverter_Params_Data>(
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

bool DemuxerStreamResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DemuxerStream ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDemuxerStream_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DemuxerStream_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDemuxerStream_Read_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DemuxerStream_Read_ResponseParams_Data>(
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
}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif