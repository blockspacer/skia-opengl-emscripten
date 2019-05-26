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

#include "media/mojo/interfaces/video_encode_accelerator.mojom-blink.h"

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

#include "media/mojo/interfaces/video_encode_accelerator.mojom-params-data.h"
#include "media/mojo/interfaces/video_encode_accelerator.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/video_encode_accelerator.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace media {
namespace mojom {
namespace blink {
VideoBitrateAllocation::VideoBitrateAllocation()
    : bitrates() {}

VideoBitrateAllocation::VideoBitrateAllocation(
    const WTF::Vector<int32_t>& bitrates_in)
    : bitrates(std::move(bitrates_in)) {}

VideoBitrateAllocation::~VideoBitrateAllocation() = default;

bool VideoBitrateAllocation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoEncodeAcceleratorConfig::VideoEncodeAcceleratorConfig()
    : input_format(),
      input_visible_size(),
      output_profile(),
      initial_bitrate(),
      initial_framerate(),
      has_initial_framerate(),
      gop_length(),
      has_gop_length(),
      h264_output_level(),
      has_h264_output_level(),
      content_type() {}

VideoEncodeAcceleratorConfig::VideoEncodeAcceleratorConfig(
    ::media::mojom::blink::VideoPixelFormat input_format_in,
    const ::blink::WebSize& input_visible_size_in,
    ::media::mojom::blink::VideoCodecProfile output_profile_in,
    uint32_t initial_bitrate_in,
    uint32_t initial_framerate_in,
    bool has_initial_framerate_in,
    uint32_t gop_length_in,
    bool has_gop_length_in,
    uint8_t h264_output_level_in,
    bool has_h264_output_level_in,
    VideoEncodeAcceleratorConfig::ContentType content_type_in)
    : input_format(std::move(input_format_in)),
      input_visible_size(std::move(input_visible_size_in)),
      output_profile(std::move(output_profile_in)),
      initial_bitrate(std::move(initial_bitrate_in)),
      initial_framerate(std::move(initial_framerate_in)),
      has_initial_framerate(std::move(has_initial_framerate_in)),
      gop_length(std::move(gop_length_in)),
      has_gop_length(std::move(has_gop_length_in)),
      h264_output_level(std::move(h264_output_level_in)),
      has_h264_output_level(std::move(has_h264_output_level_in)),
      content_type(std::move(content_type_in)) {}

VideoEncodeAcceleratorConfig::~VideoEncodeAcceleratorConfig() = default;

bool VideoEncodeAcceleratorConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Vp8Metadata::Vp8Metadata()
    : non_reference(),
      temporal_idx(),
      layer_sync() {}

Vp8Metadata::Vp8Metadata(
    bool non_reference_in,
    uint8_t temporal_idx_in,
    bool layer_sync_in)
    : non_reference(std::move(non_reference_in)),
      temporal_idx(std::move(temporal_idx_in)),
      layer_sync(std::move(layer_sync_in)) {}

Vp8Metadata::~Vp8Metadata() = default;
size_t Vp8Metadata::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->non_reference);
  seed = mojo::internal::WTFHash(seed, this->temporal_idx);
  seed = mojo::internal::WTFHash(seed, this->layer_sync);
  return seed;
}

bool Vp8Metadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BitstreamBufferMetadata::BitstreamBufferMetadata()
    : payload_size_bytes(),
      key_frame(),
      timestamp(),
      vp8() {}

BitstreamBufferMetadata::BitstreamBufferMetadata(
    uint32_t payload_size_bytes_in,
    bool key_frame_in,
    base::TimeDelta timestamp_in,
    Vp8MetadataPtr vp8_in)
    : payload_size_bytes(std::move(payload_size_bytes_in)),
      key_frame(std::move(key_frame_in)),
      timestamp(std::move(timestamp_in)),
      vp8(std::move(vp8_in)) {}

BitstreamBufferMetadata::~BitstreamBufferMetadata() = default;

bool BitstreamBufferMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char VideoEncodeAcceleratorProvider::Name_[] = "media.mojom.VideoEncodeAcceleratorProvider";

VideoEncodeAcceleratorProviderProxy::VideoEncodeAcceleratorProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoEncodeAcceleratorProviderProxy::CreateVideoEncodeAccelerator(
    VideoEncodeAcceleratorRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAcceleratorProvider::CreateVideoEncodeAccelerator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in VideoEncodeAcceleratorProvider.CreateVideoEncodeAccelerator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAcceleratorProvider::Name_);
  message.set_method_name("CreateVideoEncodeAccelerator");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoEncodeAcceleratorProviderStubDispatch::Accept(
    VideoEncodeAcceleratorProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoEncodeAcceleratorProvider::CreateVideoEncodeAccelerator",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoEncodeAcceleratorRequest p_request{};
      VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoEncodeAcceleratorProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateVideoEncodeAccelerator(
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool VideoEncodeAcceleratorProviderStubDispatch::AcceptWithResponder(
    VideoEncodeAcceleratorProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name: {
      break;
    }
  }
  return false;
}

bool VideoEncodeAcceleratorProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoEncodeAcceleratorProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data>(
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

const char VideoEncodeAccelerator::Name_[] = "media.mojom.VideoEncodeAccelerator";
bool VideoEncodeAccelerator::Initialize(VideoEncodeAcceleratorConfigPtr config, VideoEncodeAcceleratorClientPtr client, bool* out_result) {
  NOTREACHED();
  return false;
}
class VideoEncodeAccelerator_Initialize_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  VideoEncodeAccelerator_Initialize_HandleSyncResponse(
      bool* result, bool* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_result_;DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Initialize_HandleSyncResponse);
};

class VideoEncodeAccelerator_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoEncodeAccelerator_Initialize_ForwardToCallback(
      VideoEncodeAccelerator::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoEncodeAccelerator::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Initialize_ForwardToCallback);
};

class VideoEncodeAccelerator_Encode_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoEncodeAccelerator_Encode_ForwardToCallback(
      VideoEncodeAccelerator::EncodeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoEncodeAccelerator::EncodeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Encode_ForwardToCallback);
};

VideoEncodeAcceleratorProxy::VideoEncodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool VideoEncodeAcceleratorProxy::Initialize(
    VideoEncodeAcceleratorConfigPtr param_config, VideoEncodeAcceleratorClientPtr param_client, bool* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorConfigDataView>(
      param_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in VideoEncodeAccelerator.Initialize request");
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorClientPtrDataView>(
      param_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in VideoEncodeAccelerator.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAccelerator::Name_);
  message.set_method_name("Initialize");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoEncodeAccelerator_Initialize_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void VideoEncodeAcceleratorProxy::Initialize(
    VideoEncodeAcceleratorConfigPtr in_config, VideoEncodeAcceleratorClientPtr in_client, InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in VideoEncodeAccelerator.Initialize request");
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in VideoEncodeAccelerator.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAccelerator::Name_);
  message.set_method_name("Initialize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoEncodeAccelerator_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoEncodeAcceleratorProxy::Encode(
    ::media::mojom::blink::VideoFramePtr in_frame, bool in_force_keyframe, EncodeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::Encode");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Encode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_Encode_Params_Data::BufferWriter
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
      "null frame in VideoEncodeAccelerator.Encode request");
  params->force_keyframe = in_force_keyframe;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAccelerator::Name_);
  message.set_method_name("Encode");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoEncodeAccelerator_Encode_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoEncodeAcceleratorProxy::UseOutputBitstreamBuffer(
    int32_t in_bitstream_buffer_id, mojo::ScopedSharedBufferHandle in_buffer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::UseOutputBitstreamBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->bitstream_buffer_id = in_bitstream_buffer_id;
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_buffer, &params->buffer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->buffer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid buffer in VideoEncodeAccelerator.UseOutputBitstreamBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAccelerator::Name_);
  message.set_method_name("UseOutputBitstreamBuffer");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoEncodeAcceleratorProxy::RequestEncodingParametersChange(
    VideoBitrateAllocationPtr in_bitrate_allocation, uint32_t in_framerate) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::RequestEncodingParametersChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bitrate_allocation)::BaseType::BufferWriter
      bitrate_allocation_writer;
  mojo::internal::Serialize<::media::mojom::VideoBitrateAllocationDataView>(
      in_bitrate_allocation, buffer, &bitrate_allocation_writer, &serialization_context);
  params->bitrate_allocation.Set(
      bitrate_allocation_writer.is_null() ? nullptr : bitrate_allocation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bitrate_allocation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bitrate_allocation in VideoEncodeAccelerator.RequestEncodingParametersChange request");
  params->framerate = in_framerate;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAccelerator::Name_);
  message.set_method_name("RequestEncodingParametersChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VideoEncodeAccelerator_Initialize_ProxyToResponder {
 public:
  static VideoEncodeAccelerator::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoEncodeAccelerator_Initialize_ProxyToResponder> proxy(
        new VideoEncodeAccelerator_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoEncodeAccelerator_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoEncodeAccelerator_Initialize_ProxyToResponder() {
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
  VideoEncodeAccelerator_Initialize_ProxyToResponder(
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
        << "VideoEncodeAccelerator::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Initialize_ProxyToResponder);
};

bool VideoEncodeAccelerator_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  VideoEncodeAccelerator_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoEncodeAccelerator::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void VideoEncodeAccelerator_Initialize_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::InitializeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAccelerator::Name_);
  message.set_method_name("Initialize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool VideoEncodeAccelerator_Initialize_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data* params =
      reinterpret_cast<internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  VideoEncodeAccelerator_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoEncodeAccelerator::Name_, 0, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class VideoEncodeAccelerator_Encode_ProxyToResponder {
 public:
  static VideoEncodeAccelerator::EncodeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoEncodeAccelerator_Encode_ProxyToResponder> proxy(
        new VideoEncodeAccelerator_Encode_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoEncodeAccelerator_Encode_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoEncodeAccelerator_Encode_ProxyToResponder() {
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
  VideoEncodeAccelerator_Encode_ProxyToResponder(
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
        << "VideoEncodeAccelerator::EncodeCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Encode_ProxyToResponder);
};

bool VideoEncodeAccelerator_Encode_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::EncodeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoEncodeAccelerator_Encode_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoEncodeAccelerator_Encode_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VideoEncodeAccelerator_Encode_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoEncodeAccelerator::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void VideoEncodeAccelerator_Encode_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Encode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_Encode_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::EncodeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAccelerator::Name_);
  message.set_method_name("Encode");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VideoEncodeAcceleratorStubDispatch::Accept(
    VideoEncodeAccelerator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAccelerator_Initialize_Name: {
      break;
    }
    case internal::kVideoEncodeAccelerator_Encode_Name: {
      break;
    }
    case internal::kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::UseOutputBitstreamBuffer",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_bitstream_buffer_id{};
      mojo::ScopedSharedBufferHandle p_buffer{};
      VideoEncodeAccelerator_UseOutputBitstreamBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_bitstream_buffer_id = input_data_view.bitstream_buffer_id();
      p_buffer = input_data_view.TakeBuffer();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoEncodeAccelerator::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UseOutputBitstreamBuffer(
std::move(p_bitstream_buffer_id), 
std::move(p_buffer));
      return true;
    }
    case internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::RequestEncodingParametersChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoBitrateAllocationPtr p_bitrate_allocation{};
      uint32_t p_framerate{};
      VideoEncodeAccelerator_RequestEncodingParametersChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBitrateAllocation(&p_bitrate_allocation))
        success = false;
      p_framerate = input_data_view.framerate();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoEncodeAccelerator::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestEncodingParametersChange(
std::move(p_bitrate_allocation), 
std::move(p_framerate));
      return true;
    }
  }
  return false;
}

// static
bool VideoEncodeAcceleratorStubDispatch::AcceptWithResponder(
    VideoEncodeAccelerator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::Initialize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoEncodeAccelerator_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::VideoEncodeAccelerator_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoEncodeAcceleratorConfigPtr p_config{};
      VideoEncodeAcceleratorClientPtr p_client{};
      VideoEncodeAccelerator_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoEncodeAccelerator::Name_, 0, false);
        return false;
      }
      VideoEncodeAccelerator::InitializeCallback callback =
          VideoEncodeAccelerator_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Initialize(
std::move(p_config), 
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kVideoEncodeAccelerator_Encode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoEncodeAccelerator::Encode",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoEncodeAccelerator_Encode_Params_Data* params =
          reinterpret_cast<
              internal::VideoEncodeAccelerator_Encode_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::VideoFramePtr p_frame{};
      bool p_force_keyframe{};
      VideoEncodeAccelerator_Encode_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrame(&p_frame))
        success = false;
      p_force_keyframe = input_data_view.force_keyframe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoEncodeAccelerator::Name_, 1, false);
        return false;
      }
      VideoEncodeAccelerator::EncodeCallback callback =
          VideoEncodeAccelerator_Encode_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Encode(
std::move(p_frame), 
std::move(p_force_keyframe), std::move(callback));
      return true;
    }
    case internal::kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name: {
      break;
    }
    case internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name: {
      break;
    }
  }
  return false;
}

bool VideoEncodeAcceleratorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoEncodeAccelerator RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoEncodeAccelerator_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAccelerator_Encode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_Encode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data>(
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

bool VideoEncodeAcceleratorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoEncodeAccelerator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVideoEncodeAccelerator_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAccelerator_Encode_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_Encode_ResponseParams_Data>(
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
const char VideoEncodeAcceleratorClient::Name_[] = "media.mojom.VideoEncodeAcceleratorClient";

VideoEncodeAcceleratorClientProxy::VideoEncodeAcceleratorClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoEncodeAcceleratorClientProxy::RequireBitstreamBuffers(
    uint32_t in_input_count, const ::blink::WebSize& in_input_coded_size, uint32_t in_output_buffer_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAcceleratorClient::RequireBitstreamBuffers");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->input_count = in_input_count;
  typename decltype(params->input_coded_size)::BaseType::BufferWriter
      input_coded_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_input_coded_size, buffer, &input_coded_size_writer, &serialization_context);
  params->input_coded_size.Set(
      input_coded_size_writer.is_null() ? nullptr : input_coded_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_coded_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_coded_size in VideoEncodeAcceleratorClient.RequireBitstreamBuffers request");
  params->output_buffer_size = in_output_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAcceleratorClient::Name_);
  message.set_method_name("RequireBitstreamBuffers");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoEncodeAcceleratorClientProxy::BitstreamBufferReady(
    int32_t in_bitstream_buffer_id, BitstreamBufferMetadataPtr in_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAcceleratorClient::BitstreamBufferReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->bitstream_buffer_id = in_bitstream_buffer_id;
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::media::mojom::BitstreamBufferMetadataDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metadata in VideoEncodeAcceleratorClient.BitstreamBufferReady request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAcceleratorClient::Name_);
  message.set_method_name("BitstreamBufferReady");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoEncodeAcceleratorClientProxy::NotifyError(
    VideoEncodeAccelerator::Error in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoEncodeAcceleratorClient::NotifyError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAcceleratorClient_NotifyError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoEncodeAccelerator_Error>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoEncodeAcceleratorClient::Name_);
  message.set_method_name("NotifyError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoEncodeAcceleratorClientStubDispatch::Accept(
    VideoEncodeAcceleratorClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoEncodeAcceleratorClient::RequireBitstreamBuffers",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_input_count{};
      ::blink::WebSize p_input_coded_size{};
      uint32_t p_output_buffer_size{};
      VideoEncodeAcceleratorClient_RequireBitstreamBuffers_ParamsDataView input_data_view(params, &serialization_context);
      
      p_input_count = input_data_view.input_count();
      if (!input_data_view.ReadInputCodedSize(&p_input_coded_size))
        success = false;
      p_output_buffer_size = input_data_view.output_buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoEncodeAcceleratorClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequireBitstreamBuffers(
std::move(p_input_count), 
std::move(p_input_coded_size), 
std::move(p_output_buffer_size));
      return true;
    }
    case internal::kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoEncodeAcceleratorClient::BitstreamBufferReady",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_bitstream_buffer_id{};
      BitstreamBufferMetadataPtr p_metadata{};
      VideoEncodeAcceleratorClient_BitstreamBufferReady_ParamsDataView input_data_view(params, &serialization_context);
      
      p_bitstream_buffer_id = input_data_view.bitstream_buffer_id();
      if (!input_data_view.ReadMetadata(&p_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoEncodeAcceleratorClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BitstreamBufferReady(
std::move(p_bitstream_buffer_id), 
std::move(p_metadata));
      return true;
    }
    case internal::kVideoEncodeAcceleratorClient_NotifyError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoEncodeAcceleratorClient::NotifyError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoEncodeAccelerator::Error p_error{};
      VideoEncodeAcceleratorClient_NotifyError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoEncodeAcceleratorClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NotifyError(
std::move(p_error));
      return true;
    }
  }
  return false;
}

// static
bool VideoEncodeAcceleratorClientStubDispatch::AcceptWithResponder(
    VideoEncodeAcceleratorClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name: {
      break;
    }
    case internal::kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name: {
      break;
    }
    case internal::kVideoEncodeAcceleratorClient_NotifyError_Name: {
      break;
    }
  }
  return false;
}

bool VideoEncodeAcceleratorClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoEncodeAcceleratorClient RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAcceleratorClient_NotifyError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data>(
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


// static
bool StructTraits<::media::mojom::blink::VideoBitrateAllocation::DataView, ::media::mojom::blink::VideoBitrateAllocationPtr>::Read(
    ::media::mojom::blink::VideoBitrateAllocation::DataView input,
    ::media::mojom::blink::VideoBitrateAllocationPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoBitrateAllocationPtr result(::media::mojom::blink::VideoBitrateAllocation::New());
  
      if (!input.ReadBitrates(&result->bitrates))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoEncodeAcceleratorConfig::DataView, ::media::mojom::blink::VideoEncodeAcceleratorConfigPtr>::Read(
    ::media::mojom::blink::VideoEncodeAcceleratorConfig::DataView input,
    ::media::mojom::blink::VideoEncodeAcceleratorConfigPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoEncodeAcceleratorConfigPtr result(::media::mojom::blink::VideoEncodeAcceleratorConfig::New());
  
      if (!input.ReadInputFormat(&result->input_format))
        success = false;
      if (!input.ReadInputVisibleSize(&result->input_visible_size))
        success = false;
      if (!input.ReadOutputProfile(&result->output_profile))
        success = false;
      result->initial_bitrate = input.initial_bitrate();
      result->initial_framerate = input.initial_framerate();
      result->has_initial_framerate = input.has_initial_framerate();
      result->gop_length = input.gop_length();
      result->has_gop_length = input.has_gop_length();
      result->h264_output_level = input.h264_output_level();
      result->has_h264_output_level = input.has_h264_output_level();
      if (!input.ReadContentType(&result->content_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::Vp8Metadata::DataView, ::media::mojom::blink::Vp8MetadataPtr>::Read(
    ::media::mojom::blink::Vp8Metadata::DataView input,
    ::media::mojom::blink::Vp8MetadataPtr* output) {
  bool success = true;
  ::media::mojom::blink::Vp8MetadataPtr result(::media::mojom::blink::Vp8Metadata::New());
  
      result->non_reference = input.non_reference();
      result->temporal_idx = input.temporal_idx();
      result->layer_sync = input.layer_sync();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::BitstreamBufferMetadata::DataView, ::media::mojom::blink::BitstreamBufferMetadataPtr>::Read(
    ::media::mojom::blink::BitstreamBufferMetadata::DataView input,
    ::media::mojom::blink::BitstreamBufferMetadataPtr* output) {
  bool success = true;
  ::media::mojom::blink::BitstreamBufferMetadataPtr result(::media::mojom::blink::BitstreamBufferMetadata::New());
  
      result->payload_size_bytes = input.payload_size_bytes();
      result->key_frame = input.key_frame();
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadVp8(&result->vp8))
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