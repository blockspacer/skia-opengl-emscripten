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

#include "media/mojo/interfaces/video_decode_perf_history.mojom.h"

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

#include "media/mojo/interfaces/video_decode_perf_history.mojom-params-data.h"
#include "media/mojo/interfaces/video_decode_perf_history.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/video_decode_perf_history.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace media {
namespace mojom {
const char VideoDecodePerfHistory::Name_[] = "media.mojom.VideoDecodePerfHistory";

class VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback(
      VideoDecodePerfHistory::GetPerfInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecodePerfHistory::GetPerfInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback);
};

VideoDecodePerfHistoryProxy::VideoDecodePerfHistoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoDecodePerfHistoryProxy::GetPerfInfo(
    ::media::mojom::PredictionFeaturesPtr in_features, GetPerfInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecodePerfHistory::GetPerfInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodePerfHistory_GetPerfInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data::BufferWriter
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
      "null features in VideoDecodePerfHistory.GetPerfInfo request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecodePerfHistory::Name_);
  message.set_method_name("GetPerfInfo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder {
 public:
  static VideoDecodePerfHistory::GetPerfInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder> proxy(
        new VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder() {
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
  VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder(
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
        << "VideoDecodePerfHistory::GetPerfInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_is_smooth, bool in_is_power_efficient);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder);
};

bool VideoDecodePerfHistory_GetPerfInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VideoDecodePerfHistory::GetPerfInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_is_smooth{};
  bool p_is_power_efficient{};
  VideoDecodePerfHistory_GetPerfInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_is_smooth = input_data_view.is_smooth();
  p_is_power_efficient = input_data_view.is_power_efficient();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoDecodePerfHistory::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_is_smooth), 
std::move(p_is_power_efficient));
  return true;
}

void VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder::Run(
    bool in_is_smooth, bool in_is_power_efficient) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodePerfHistory_GetPerfInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_smooth = in_is_smooth;
  params->is_power_efficient = in_is_power_efficient;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecodePerfHistory::GetPerfInfoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoDecodePerfHistory::Name_);
  message.set_method_name("GetPerfInfo");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VideoDecodePerfHistoryStubDispatch::Accept(
    VideoDecodePerfHistory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoDecodePerfHistory_GetPerfInfo_Name: {
      break;
    }
  }
  return false;
}

// static
bool VideoDecodePerfHistoryStubDispatch::AcceptWithResponder(
    VideoDecodePerfHistory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoDecodePerfHistory_GetPerfInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoDecodePerfHistory::GetPerfInfo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data* params =
          reinterpret_cast<
              internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::PredictionFeaturesPtr p_features{};
      VideoDecodePerfHistory_GetPerfInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFeatures(&p_features))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoDecodePerfHistory::Name_, 0, false);
        return false;
      }
      VideoDecodePerfHistory::GetPerfInfoCallback callback =
          VideoDecodePerfHistory_GetPerfInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPerfInfo(
std::move(p_features), std::move(callback));
      return true;
    }
  }
  return false;
}

bool VideoDecodePerfHistoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoDecodePerfHistory RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoDecodePerfHistory_GetPerfInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data>(
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

bool VideoDecodePerfHistoryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoDecodePerfHistory ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVideoDecodePerfHistory_GetPerfInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data>(
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