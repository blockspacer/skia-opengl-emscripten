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

#include "media/mojo/interfaces/video_decoder.mojom.h"

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

#include "media/mojo/interfaces/video_decoder.mojom-params-data.h"
#include "media/mojo/interfaces/video_decoder.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/video_decoder.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/encryption_scheme_struct_traits.h"
#include "media/mojo/interfaces/hdr_metadata_struct_traits.h"
#include "media/mojo/interfaces/supported_video_decoder_config_struct_traits.h"
#include "media/mojo/interfaces/video_color_space_struct_traits.h"
#include "media/mojo/interfaces/video_decoder_config_struct_traits.h"
#include "media/mojo/interfaces/video_frame_struct_traits.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/color_space_mojom_traits.h"
#endif
namespace media {
namespace mojom {
SupportedVideoDecoderConfig::SupportedVideoDecoderConfig()
    : profile_min(),
      profile_max(),
      coded_size_min(),
      coded_size_max(),
      allow_encrypted(),
      require_encrypted() {}

SupportedVideoDecoderConfig::SupportedVideoDecoderConfig(
    media::VideoCodecProfile profile_min_in,
    media::VideoCodecProfile profile_max_in,
    const gfx::Size& coded_size_min_in,
    const gfx::Size& coded_size_max_in,
    bool allow_encrypted_in,
    bool require_encrypted_in)
    : profile_min(std::move(profile_min_in)),
      profile_max(std::move(profile_max_in)),
      coded_size_min(std::move(coded_size_min_in)),
      coded_size_max(std::move(coded_size_max_in)),
      allow_encrypted(std::move(allow_encrypted_in)),
      require_encrypted(std::move(require_encrypted_in)) {}

SupportedVideoDecoderConfig::~SupportedVideoDecoderConfig() = default;

bool SupportedVideoDecoderConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CommandBufferId::CommandBufferId()
    : channel_token(),
      route_id() {}

CommandBufferId::CommandBufferId(
    const base::UnguessableToken& channel_token_in,
    int32_t route_id_in)
    : channel_token(std::move(channel_token_in)),
      route_id(std::move(route_id_in)) {}

CommandBufferId::~CommandBufferId() = default;

bool CommandBufferId::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char VideoFrameHandleReleaser::Name_[] = "media.mojom.VideoFrameHandleReleaser";

VideoFrameHandleReleaserProxy::VideoFrameHandleReleaserProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoFrameHandleReleaserProxy::ReleaseVideoFrame(
    const base::UnguessableToken& in_release_token, const ::gpu::SyncToken& in_release_sync_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoFrameHandleReleaser::ReleaseVideoFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoFrameHandleReleaser_ReleaseVideoFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->release_token)::BaseType::BufferWriter
      release_token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_release_token, buffer, &release_token_writer, &serialization_context);
  params->release_token.Set(
      release_token_writer.is_null() ? nullptr : release_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->release_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null release_token in VideoFrameHandleReleaser.ReleaseVideoFrame request");
  typename decltype(params->release_sync_token)::BaseType::BufferWriter
      release_sync_token_writer;
  mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
      in_release_sync_token, buffer, &release_sync_token_writer, &serialization_context);
  params->release_sync_token.Set(
      release_sync_token_writer.is_null() ? nullptr : release_sync_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->release_sync_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null release_sync_token in VideoFrameHandleReleaser.ReleaseVideoFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoFrameHandleReleaser::Name_);
  message.set_method_name("ReleaseVideoFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoFrameHandleReleaserStubDispatch::Accept(
    VideoFrameHandleReleaser* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoFrameHandleReleaser_ReleaseVideoFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoFrameHandleReleaser::ReleaseVideoFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data* params =
          reinterpret_cast<internal::VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_release_token{};
      ::gpu::SyncToken p_release_sync_token{};
      VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReleaseToken(&p_release_token))
        success = false;
      if (!input_data_view.ReadReleaseSyncToken(&p_release_sync_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoFrameHandleReleaser::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReleaseVideoFrame(
std::move(p_release_token), 
std::move(p_release_sync_token));
      return true;
    }
  }
  return false;
}

// static
bool VideoFrameHandleReleaserStubDispatch::AcceptWithResponder(
    VideoFrameHandleReleaser* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoFrameHandleReleaser_ReleaseVideoFrame_Name: {
      break;
    }
  }
  return false;
}

bool VideoFrameHandleReleaserRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoFrameHandleReleaser RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoFrameHandleReleaser_ReleaseVideoFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data>(
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

const char VideoDecoder::Name_[] = "media.mojom.VideoDecoder";

class VideoDecoder_GetSupportedConfigs_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecoder_GetSupportedConfigs_ForwardToCallback(
      VideoDecoder::GetSupportedConfigsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecoder::GetSupportedConfigsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_GetSupportedConfigs_ForwardToCallback);
};

class VideoDecoder_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecoder_Initialize_ForwardToCallback(
      VideoDecoder::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecoder::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Initialize_ForwardToCallback);
};

class VideoDecoder_Decode_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecoder_Decode_ForwardToCallback(
      VideoDecoder::DecodeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecoder::DecodeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Decode_ForwardToCallback);
};

class VideoDecoder_Reset_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecoder_Reset_ForwardToCallback(
      VideoDecoder::ResetCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecoder::ResetCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Reset_ForwardToCallback);
};

VideoDecoderProxy::VideoDecoderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoDecoderProxy::GetSupportedConfigs(
    GetSupportedConfigsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoder::GetSupportedConfigs");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoder_GetSupportedConfigs_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoder_GetSupportedConfigs_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoder::Name_);
  message.set_method_name("GetSupportedConfigs");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoDecoder_GetSupportedConfigs_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoDecoderProxy::Construct(
    VideoDecoderClientAssociatedPtrInfo in_client, ::media::mojom::MediaLogAssociatedPtrInfo in_media_log, VideoFrameHandleReleaserRequest in_video_frame_handle_releaser, mojo::ScopedDataPipeConsumerHandle in_decoder_buffer_pipe, CommandBufferIdPtr in_command_buffer_id, media::VideoDecoderImplementation in_implementation, const gfx::ColorSpace& in_target_color_space) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoder::Construct");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoder_Construct_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoder_Construct_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoDecoderClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in VideoDecoder.Construct request");
  mojo::internal::Serialize<::media::mojom::MediaLogAssociatedPtrInfoDataView>(
      in_media_log, &params->media_log, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->media_log),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid media_log in VideoDecoder.Construct request");
  mojo::internal::Serialize<::media::mojom::VideoFrameHandleReleaserRequestDataView>(
      in_video_frame_handle_releaser, &params->video_frame_handle_releaser, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->video_frame_handle_releaser),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid video_frame_handle_releaser in VideoDecoder.Construct request");
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_decoder_buffer_pipe, &params->decoder_buffer_pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->decoder_buffer_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid decoder_buffer_pipe in VideoDecoder.Construct request");
  typename decltype(params->command_buffer_id)::BaseType::BufferWriter
      command_buffer_id_writer;
  mojo::internal::Serialize<::media::mojom::CommandBufferIdDataView>(
      in_command_buffer_id, buffer, &command_buffer_id_writer, &serialization_context);
  params->command_buffer_id.Set(
      command_buffer_id_writer.is_null() ? nullptr : command_buffer_id_writer.data());
  mojo::internal::Serialize<::media::mojom::VideoDecoderImplementation>(
      in_implementation, &params->implementation);
  typename decltype(params->target_color_space)::BaseType::BufferWriter
      target_color_space_writer;
  mojo::internal::Serialize<::gfx::mojom::ColorSpaceDataView>(
      in_target_color_space, buffer, &target_color_space_writer, &serialization_context);
  params->target_color_space.Set(
      target_color_space_writer.is_null() ? nullptr : target_color_space_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target_color_space.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target_color_space in VideoDecoder.Construct request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoder::Name_);
  message.set_method_name("Construct");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoDecoderProxy::Initialize(
    const media::VideoDecoderConfig& in_config, bool in_low_delay, int32_t in_cdm_id, InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoder::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoder_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoder_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in VideoDecoder.Initialize request");
  params->low_delay = in_low_delay;
  params->cdm_id = in_cdm_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoder::Name_);
  message.set_method_name("Initialize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoDecoder_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoDecoderProxy::Decode(
    ::media::mojom::DecoderBufferPtr in_buffer, DecodeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoder::Decode");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoder_Decode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoder_Decode_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->buffer)::BaseType::BufferWriter
      buffer_writer;
  mojo::internal::Serialize<::media::mojom::DecoderBufferDataView>(
      in_buffer, buffer, &buffer_writer, &serialization_context);
  params->buffer.Set(
      buffer_writer.is_null() ? nullptr : buffer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer in VideoDecoder.Decode request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoder::Name_);
  message.set_method_name("Decode");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoDecoder_Decode_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoDecoderProxy::Reset(
    ResetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoder::Reset");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoder_Reset_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoder_Reset_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoder::Name_);
  message.set_method_name("Reset");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoDecoder_Reset_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoDecoderProxy::OnOverlayInfoChanged(
    const media::OverlayInfo& in_overlay_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoder::OnOverlayInfoChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoder_OnOverlayInfoChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoder_OnOverlayInfoChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->overlay_info)::BaseType::BufferWriter
      overlay_info_writer;
  mojo::internal::Serialize<::media::mojom::OverlayInfoDataView>(
      in_overlay_info, buffer, &overlay_info_writer, &serialization_context);
  params->overlay_info.Set(
      overlay_info_writer.is_null() ? nullptr : overlay_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->overlay_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null overlay_info in VideoDecoder.OnOverlayInfoChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoder::Name_);
  message.set_method_name("OnOverlayInfoChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VideoDecoder_GetSupportedConfigs_ProxyToResponder {
 public:
  static VideoDecoder::GetSupportedConfigsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoDecoder_GetSupportedConfigs_ProxyToResponder> proxy(
        new VideoDecoder_GetSupportedConfigs_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoDecoder_GetSupportedConfigs_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoDecoder_GetSupportedConfigs_ProxyToResponder() {
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
  VideoDecoder_GetSupportedConfigs_ProxyToResponder(
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
        << "VideoDecoder::GetSupportedConfigsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::flat_map<media::VideoDecoderImplementation, std::vector<media::SupportedVideoDecoderConfig>>& in_supported_configs);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_GetSupportedConfigs_ProxyToResponder);
};

bool VideoDecoder_GetSupportedConfigs_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoder::GetSupportedConfigsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoDecoder_GetSupportedConfigs_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoDecoder_GetSupportedConfigs_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::flat_map<media::VideoDecoderImplementation, std::vector<media::SupportedVideoDecoderConfig>> p_supported_configs{};
  VideoDecoder_GetSupportedConfigs_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSupportedConfigs(&p_supported_configs))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoDecoder::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_supported_configs));
  return true;
}

void VideoDecoder_GetSupportedConfigs_ProxyToResponder::Run(
    const base::flat_map<media::VideoDecoderImplementation, std::vector<media::SupportedVideoDecoderConfig>>& in_supported_configs) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoder_GetSupportedConfigs_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoder_GetSupportedConfigs_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->supported_configs)::BaseType::BufferWriter
      supported_configs_writer;
  const mojo::internal::ContainerValidateParams supported_configs_validate_params(
      new mojo::internal::ContainerValidateParams(0, ::media::mojom::internal::VideoDecoderImplementation_Data::Validate), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<::media::mojom::VideoDecoderImplementation, mojo::ArrayDataView<::media::mojom::SupportedVideoDecoderConfigDataView>>>(
      in_supported_configs, buffer, &supported_configs_writer, &supported_configs_validate_params,
      &serialization_context);
  params->supported_configs.Set(
      supported_configs_writer.is_null() ? nullptr : supported_configs_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->supported_configs.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null supported_configs in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoder::GetSupportedConfigsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoder::Name_);
  message.set_method_name("GetSupportedConfigs");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VideoDecoder_Initialize_ProxyToResponder {
 public:
  static VideoDecoder::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoDecoder_Initialize_ProxyToResponder> proxy(
        new VideoDecoder_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoDecoder_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoDecoder_Initialize_ProxyToResponder() {
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
  VideoDecoder_Initialize_ProxyToResponder(
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
        << "VideoDecoder::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, bool in_needs_bitstream_conversion, int32_t in_max_decode_requests);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Initialize_ProxyToResponder);
};

bool VideoDecoder_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoder::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoDecoder_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoDecoder_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  bool p_needs_bitstream_conversion{};
  int32_t p_max_decode_requests{};
  VideoDecoder_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  p_needs_bitstream_conversion = input_data_view.needs_bitstream_conversion();
  p_max_decode_requests = input_data_view.max_decode_requests();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoDecoder::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_needs_bitstream_conversion), 
std::move(p_max_decode_requests));
  return true;
}

void VideoDecoder_Initialize_ProxyToResponder::Run(
    bool in_success, bool in_needs_bitstream_conversion, int32_t in_max_decode_requests) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoder_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoder_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  params->needs_bitstream_conversion = in_needs_bitstream_conversion;
  params->max_decode_requests = in_max_decode_requests;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoder::InitializeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoder::Name_);
  message.set_method_name("Initialize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VideoDecoder_Decode_ProxyToResponder {
 public:
  static VideoDecoder::DecodeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoDecoder_Decode_ProxyToResponder> proxy(
        new VideoDecoder_Decode_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoDecoder_Decode_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoDecoder_Decode_ProxyToResponder() {
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
  VideoDecoder_Decode_ProxyToResponder(
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
        << "VideoDecoder::DecodeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      media::DecodeStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Decode_ProxyToResponder);
};

bool VideoDecoder_Decode_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoder::DecodeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoDecoder_Decode_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoDecoder_Decode_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  media::DecodeStatus p_status{};
  VideoDecoder_Decode_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoDecoder::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void VideoDecoder_Decode_ProxyToResponder::Run(
    media::DecodeStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoder_Decode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoder_Decode_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::DecodeStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoder::DecodeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoder::Name_);
  message.set_method_name("Decode");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VideoDecoder_Reset_ProxyToResponder {
 public:
  static VideoDecoder::ResetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoDecoder_Reset_ProxyToResponder> proxy(
        new VideoDecoder_Reset_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoDecoder_Reset_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoDecoder_Reset_ProxyToResponder() {
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
  VideoDecoder_Reset_ProxyToResponder(
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
        << "VideoDecoder::ResetCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Reset_ProxyToResponder);
};

bool VideoDecoder_Reset_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoder::ResetCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoDecoder_Reset_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoDecoder_Reset_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VideoDecoder_Reset_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoDecoder::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void VideoDecoder_Reset_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoder_Reset_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoder_Reset_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoder::ResetCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoder::Name_);
  message.set_method_name("Reset");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VideoDecoderStubDispatch::Accept(
    VideoDecoder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoDecoder_GetSupportedConfigs_Name: {
      break;
    }
    case internal::kVideoDecoder_Construct_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoder::Construct",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecoder_Construct_Params_Data* params =
          reinterpret_cast<internal::VideoDecoder_Construct_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoDecoderClientAssociatedPtrInfo p_client{};
      ::media::mojom::MediaLogAssociatedPtrInfo p_media_log{};
      VideoFrameHandleReleaserRequest p_video_frame_handle_releaser{};
      mojo::ScopedDataPipeConsumerHandle p_decoder_buffer_pipe{};
      CommandBufferIdPtr p_command_buffer_id{};
      media::VideoDecoderImplementation p_implementation{};
      gfx::ColorSpace p_target_color_space{};
      VideoDecoder_Construct_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_media_log =
          input_data_view.TakeMediaLog<decltype(p_media_log)>();
      p_video_frame_handle_releaser =
          input_data_view.TakeVideoFrameHandleReleaser<decltype(p_video_frame_handle_releaser)>();
      p_decoder_buffer_pipe = input_data_view.TakeDecoderBufferPipe();
      if (!input_data_view.ReadCommandBufferId(&p_command_buffer_id))
        success = false;
      if (!input_data_view.ReadImplementation(&p_implementation))
        success = false;
      if (!input_data_view.ReadTargetColorSpace(&p_target_color_space))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecoder::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Construct(
std::move(p_client), 
std::move(p_media_log), 
std::move(p_video_frame_handle_releaser), 
std::move(p_decoder_buffer_pipe), 
std::move(p_command_buffer_id), 
std::move(p_implementation), 
std::move(p_target_color_space));
      return true;
    }
    case internal::kVideoDecoder_Initialize_Name: {
      break;
    }
    case internal::kVideoDecoder_Decode_Name: {
      break;
    }
    case internal::kVideoDecoder_Reset_Name: {
      break;
    }
    case internal::kVideoDecoder_OnOverlayInfoChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoder::OnOverlayInfoChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecoder_OnOverlayInfoChanged_Params_Data* params =
          reinterpret_cast<internal::VideoDecoder_OnOverlayInfoChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::OverlayInfo p_overlay_info{};
      VideoDecoder_OnOverlayInfoChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOverlayInfo(&p_overlay_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecoder::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnOverlayInfoChanged(
std::move(p_overlay_info));
      return true;
    }
  }
  return false;
}

// static
bool VideoDecoderStubDispatch::AcceptWithResponder(
    VideoDecoder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoDecoder_GetSupportedConfigs_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoder::GetSupportedConfigs",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoDecoder_GetSupportedConfigs_Params_Data* params =
          reinterpret_cast<
              internal::VideoDecoder_GetSupportedConfigs_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoDecoder_GetSupportedConfigs_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecoder::Name_, 0, false);
        return false;
      }
      VideoDecoder::GetSupportedConfigsCallback callback =
          VideoDecoder_GetSupportedConfigs_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetSupportedConfigs(std::move(callback));
      return true;
    }
    case internal::kVideoDecoder_Construct_Name: {
      break;
    }
    case internal::kVideoDecoder_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoder::Initialize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoDecoder_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::VideoDecoder_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::VideoDecoderConfig p_config{};
      bool p_low_delay{};
      int32_t p_cdm_id{};
      VideoDecoder_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      p_low_delay = input_data_view.low_delay();
      p_cdm_id = input_data_view.cdm_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecoder::Name_, 2, false);
        return false;
      }
      VideoDecoder::InitializeCallback callback =
          VideoDecoder_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Initialize(
std::move(p_config), 
std::move(p_low_delay), 
std::move(p_cdm_id), std::move(callback));
      return true;
    }
    case internal::kVideoDecoder_Decode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoder::Decode",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoDecoder_Decode_Params_Data* params =
          reinterpret_cast<
              internal::VideoDecoder_Decode_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::DecoderBufferPtr p_buffer{};
      VideoDecoder_Decode_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecoder::Name_, 3, false);
        return false;
      }
      VideoDecoder::DecodeCallback callback =
          VideoDecoder_Decode_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Decode(
std::move(p_buffer), std::move(callback));
      return true;
    }
    case internal::kVideoDecoder_Reset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoder::Reset",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoDecoder_Reset_Params_Data* params =
          reinterpret_cast<
              internal::VideoDecoder_Reset_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoDecoder_Reset_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecoder::Name_, 4, false);
        return false;
      }
      VideoDecoder::ResetCallback callback =
          VideoDecoder_Reset_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Reset(std::move(callback));
      return true;
    }
    case internal::kVideoDecoder_OnOverlayInfoChanged_Name: {
      break;
    }
  }
  return false;
}

bool VideoDecoderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoDecoder RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoDecoder_GetSupportedConfigs_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_GetSupportedConfigs_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecoder_Construct_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Construct_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecoder_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecoder_Decode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Decode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecoder_Reset_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Reset_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecoder_OnOverlayInfoChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_OnOverlayInfoChanged_Params_Data>(
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

bool VideoDecoderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoDecoder ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVideoDecoder_GetSupportedConfigs_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_GetSupportedConfigs_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecoder_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecoder_Decode_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Decode_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecoder_Reset_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Reset_ResponseParams_Data>(
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
const char VideoDecoderClient::Name_[] = "media.mojom.VideoDecoderClient";

VideoDecoderClientProxy::VideoDecoderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoDecoderClientProxy::OnVideoFrameDecoded(
    const scoped_refptr<media::VideoFrame>& in_frame, bool in_can_read_without_stalling, const base::Optional<base::UnguessableToken>& in_release_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoderClient::OnVideoFrameDecoded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoderClient_OnVideoFrameDecoded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame)::BaseType::BufferWriter
      frame_writer;
  mojo::internal::Serialize<::media::mojom::VideoFrameDataView>(
      in_frame, buffer, &frame_writer, &serialization_context);
  params->frame.Set(
      frame_writer.is_null() ? nullptr : frame_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame in VideoDecoderClient.OnVideoFrameDecoded request");
  params->can_read_without_stalling = in_can_read_without_stalling;
  typename decltype(params->release_token)::BaseType::BufferWriter
      release_token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_release_token, buffer, &release_token_writer, &serialization_context);
  params->release_token.Set(
      release_token_writer.is_null() ? nullptr : release_token_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoderClient::Name_);
  message.set_method_name("OnVideoFrameDecoded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoDecoderClientProxy::OnWaiting(
    media::WaitingReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoderClient::OnWaiting");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoderClient_OnWaiting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoderClient_OnWaiting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::WaitingReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoderClient::Name_);
  message.set_method_name("OnWaiting");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoDecoderClientProxy::RequestOverlayInfo(
    bool in_restart_for_transitions) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecoderClient::RequestOverlayInfo");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecoderClient_RequestOverlayInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecoderClient_RequestOverlayInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->restart_for_transitions = in_restart_for_transitions;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecoderClient::Name_);
  message.set_method_name("RequestOverlayInfo");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoDecoderClientStubDispatch::Accept(
    VideoDecoderClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoDecoderClient_OnVideoFrameDecoded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoderClient::OnVideoFrameDecoded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data* params =
          reinterpret_cast<internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      scoped_refptr<media::VideoFrame> p_frame{};
      bool p_can_read_without_stalling{};
      base::Optional<base::UnguessableToken> p_release_token{};
      VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrame(&p_frame))
        success = false;
      p_can_read_without_stalling = input_data_view.can_read_without_stalling();
      if (!input_data_view.ReadReleaseToken(&p_release_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecoderClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnVideoFrameDecoded(
std::move(p_frame), 
std::move(p_can_read_without_stalling), 
std::move(p_release_token));
      return true;
    }
    case internal::kVideoDecoderClient_OnWaiting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoderClient::OnWaiting",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecoderClient_OnWaiting_Params_Data* params =
          reinterpret_cast<internal::VideoDecoderClient_OnWaiting_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::WaitingReason p_reason{};
      VideoDecoderClient_OnWaiting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecoderClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWaiting(
std::move(p_reason));
      return true;
    }
    case internal::kVideoDecoderClient_RequestOverlayInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecoderClient::RequestOverlayInfo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecoderClient_RequestOverlayInfo_Params_Data* params =
          reinterpret_cast<internal::VideoDecoderClient_RequestOverlayInfo_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_restart_for_transitions{};
      VideoDecoderClient_RequestOverlayInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      p_restart_for_transitions = input_data_view.restart_for_transitions();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecoderClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestOverlayInfo(
std::move(p_restart_for_transitions));
      return true;
    }
  }
  return false;
}

// static
bool VideoDecoderClientStubDispatch::AcceptWithResponder(
    VideoDecoderClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoDecoderClient_OnVideoFrameDecoded_Name: {
      break;
    }
    case internal::kVideoDecoderClient_OnWaiting_Name: {
      break;
    }
    case internal::kVideoDecoderClient_RequestOverlayInfo_Name: {
      break;
    }
  }
  return false;
}

bool VideoDecoderClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoDecoderClient RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoDecoderClient_OnVideoFrameDecoded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecoderClient_OnWaiting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoderClient_OnWaiting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecoderClient_RequestOverlayInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoderClient_RequestOverlayInfo_Params_Data>(
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


// static
bool StructTraits<::media::mojom::SupportedVideoDecoderConfig::DataView, ::media::mojom::SupportedVideoDecoderConfigPtr>::Read(
    ::media::mojom::SupportedVideoDecoderConfig::DataView input,
    ::media::mojom::SupportedVideoDecoderConfigPtr* output) {
  bool success = true;
  ::media::mojom::SupportedVideoDecoderConfigPtr result(::media::mojom::SupportedVideoDecoderConfig::New());
  
      if (!input.ReadProfileMin(&result->profile_min))
        success = false;
      if (!input.ReadProfileMax(&result->profile_max))
        success = false;
      if (!input.ReadCodedSizeMin(&result->coded_size_min))
        success = false;
      if (!input.ReadCodedSizeMax(&result->coded_size_max))
        success = false;
      result->allow_encrypted = input.allow_encrypted();
      result->require_encrypted = input.require_encrypted();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::CommandBufferId::DataView, ::media::mojom::CommandBufferIdPtr>::Read(
    ::media::mojom::CommandBufferId::DataView input,
    ::media::mojom::CommandBufferIdPtr* output) {
  bool success = true;
  ::media::mojom::CommandBufferIdPtr result(::media::mojom::CommandBufferId::New());
  
      if (!input.ReadChannelToken(&result->channel_token))
        success = false;
      result->route_id = input.route_id();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif