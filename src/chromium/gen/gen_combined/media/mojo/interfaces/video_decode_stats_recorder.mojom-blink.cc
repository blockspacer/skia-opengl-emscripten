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

#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-blink.h"

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

#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-params-data.h"
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace media {
namespace mojom {
namespace blink {
const char VideoDecodeStatsRecorder::Name_[] = "media.mojom.VideoDecodeStatsRecorder";

VideoDecodeStatsRecorderProxy::VideoDecodeStatsRecorderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoDecodeStatsRecorderProxy::StartNewRecord(
    ::media::mojom::blink::PredictionFeaturesPtr in_features) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecodeStatsRecorder::StartNewRecord");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeStatsRecorder_StartNewRecord_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecodeStatsRecorder_StartNewRecord_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->features)::BaseType::BufferWriter
      features_writer;
  mojo::internal::Serialize<::media::mojom::PredictionFeaturesDataView>(
      in_features, buffer, &features_writer, &serialization_context);
  params->features.Set(
      features_writer.is_null() ? nullptr : features_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->features.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null features in VideoDecodeStatsRecorder.StartNewRecord request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecodeStatsRecorder::Name_);
  message.set_method_name("StartNewRecord");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoDecodeStatsRecorderProxy::UpdateRecord(
    ::media::mojom::blink::PredictionTargetsPtr in_targets) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecodeStatsRecorder::UpdateRecord");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeStatsRecorder_UpdateRecord_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecodeStatsRecorder_UpdateRecord_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->targets)::BaseType::BufferWriter
      targets_writer;
  mojo::internal::Serialize<::media::mojom::PredictionTargetsDataView>(
      in_targets, buffer, &targets_writer, &serialization_context);
  params->targets.Set(
      targets_writer.is_null() ? nullptr : targets_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->targets.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null targets in VideoDecodeStatsRecorder.UpdateRecord request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecodeStatsRecorder::Name_);
  message.set_method_name("UpdateRecord");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoDecodeStatsRecorderStubDispatch::Accept(
    VideoDecodeStatsRecorder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoDecodeStatsRecorder_StartNewRecord_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecodeStatsRecorder::StartNewRecord",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecodeStatsRecorder_StartNewRecord_Params_Data* params =
          reinterpret_cast<internal::VideoDecodeStatsRecorder_StartNewRecord_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::PredictionFeaturesPtr p_features{};
      VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFeatures(&p_features))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecodeStatsRecorder::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartNewRecord(
std::move(p_features));
      return true;
    }
    case internal::kVideoDecodeStatsRecorder_UpdateRecord_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecodeStatsRecorder::UpdateRecord",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecodeStatsRecorder_UpdateRecord_Params_Data* params =
          reinterpret_cast<internal::VideoDecodeStatsRecorder_UpdateRecord_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::PredictionTargetsPtr p_targets{};
      VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTargets(&p_targets))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecodeStatsRecorder::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateRecord(
std::move(p_targets));
      return true;
    }
  }
  return false;
}

// static
bool VideoDecodeStatsRecorderStubDispatch::AcceptWithResponder(
    VideoDecodeStatsRecorder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoDecodeStatsRecorder_StartNewRecord_Name: {
      break;
    }
    case internal::kVideoDecodeStatsRecorder_UpdateRecord_Name: {
      break;
    }
  }
  return false;
}

bool VideoDecodeStatsRecorderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoDecodeStatsRecorder RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoDecodeStatsRecorder_StartNewRecord_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeStatsRecorder_StartNewRecord_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeStatsRecorder_UpdateRecord_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeStatsRecorder_UpdateRecord_Params_Data>(
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