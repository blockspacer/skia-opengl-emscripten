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

#include "media/capture/mojom/video_capture.mojom-blink.h"

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

#include "media/capture/mojom/video_capture.mojom-params-data.h"
#include "media/capture/mojom/video_capture.mojom-shared-message-ids.h"

#include "media/capture/mojom/video_capture.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_JUMBO_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace media {
namespace mojom {
namespace blink {
const char VideoCaptureObserver::Name_[] = "media.mojom.VideoCaptureObserver";

VideoCaptureObserverProxy::VideoCaptureObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoCaptureObserverProxy::OnStateChanged(
    VideoCaptureState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureObserver::OnStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureObserver_OnStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureObserver_OnStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoCaptureState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureObserver::Name_);
  message.set_method_name("OnStateChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoCaptureObserverProxy::OnNewBuffer(
    int32_t in_buffer_id, ::media::mojom::blink::VideoBufferHandlePtr in_buffer_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureObserver::OnNewBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureObserver_OnNewBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureObserver_OnNewBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  typename decltype(params->buffer_handle)::BufferWriter buffer_handle_writer;
  buffer_handle_writer.AllocateInline(buffer, &params->buffer_handle);
  mojo::internal::Serialize<::media::mojom::VideoBufferHandleDataView>(
      in_buffer_handle, buffer, &buffer_handle_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer_handle.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer_handle in VideoCaptureObserver.OnNewBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureObserver::Name_);
  message.set_method_name("OnNewBuffer");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoCaptureObserverProxy::OnBufferReady(
    int32_t in_buffer_id, ::media::mojom::blink::VideoFrameInfoPtr in_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureObserver::OnBufferReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureObserver_OnBufferReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureObserver_OnBufferReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::media::mojom::VideoFrameInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in VideoCaptureObserver.OnBufferReady request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureObserver::Name_);
  message.set_method_name("OnBufferReady");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoCaptureObserverProxy::OnBufferDestroyed(
    int32_t in_buffer_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureObserver::OnBufferDestroyed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureObserver_OnBufferDestroyed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureObserver_OnBufferDestroyed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureObserver::Name_);
  message.set_method_name("OnBufferDestroyed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoCaptureObserverStubDispatch::Accept(
    VideoCaptureObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoCaptureObserver_OnStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureObserver::OnStateChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureObserver_OnStateChanged_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureObserver_OnStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoCaptureState p_state{};
      VideoCaptureObserver_OnStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStateChanged(
std::move(p_state));
      return true;
    }
    case internal::kVideoCaptureObserver_OnNewBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureObserver::OnNewBuffer",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureObserver_OnNewBuffer_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureObserver_OnNewBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      ::media::mojom::blink::VideoBufferHandlePtr p_buffer_handle{};
      VideoCaptureObserver_OnNewBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      if (!input_data_view.ReadBufferHandle(&p_buffer_handle))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnNewBuffer(
std::move(p_buffer_id), 
std::move(p_buffer_handle));
      return true;
    }
    case internal::kVideoCaptureObserver_OnBufferReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureObserver::OnBufferReady",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureObserver_OnBufferReady_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureObserver_OnBufferReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      ::media::mojom::blink::VideoFrameInfoPtr p_info{};
      VideoCaptureObserver_OnBufferReady_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureObserver::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnBufferReady(
std::move(p_buffer_id), 
std::move(p_info));
      return true;
    }
    case internal::kVideoCaptureObserver_OnBufferDestroyed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureObserver::OnBufferDestroyed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureObserver_OnBufferDestroyed_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureObserver_OnBufferDestroyed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      VideoCaptureObserver_OnBufferDestroyed_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureObserver::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnBufferDestroyed(
std::move(p_buffer_id));
      return true;
    }
  }
  return false;
}

// static
bool VideoCaptureObserverStubDispatch::AcceptWithResponder(
    VideoCaptureObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoCaptureObserver_OnStateChanged_Name: {
      break;
    }
    case internal::kVideoCaptureObserver_OnNewBuffer_Name: {
      break;
    }
    case internal::kVideoCaptureObserver_OnBufferReady_Name: {
      break;
    }
    case internal::kVideoCaptureObserver_OnBufferDestroyed_Name: {
      break;
    }
  }
  return false;
}

bool VideoCaptureObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoCaptureObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoCaptureObserver_OnStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureObserver_OnStateChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureObserver_OnNewBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureObserver_OnNewBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureObserver_OnBufferReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureObserver_OnBufferReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureObserver_OnBufferDestroyed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureObserver_OnBufferDestroyed_Params_Data>(
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

const char VideoCaptureHost::Name_[] = "media.mojom.VideoCaptureHost";

class VideoCaptureHost_GetDeviceSupportedFormats_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoCaptureHost_GetDeviceSupportedFormats_ForwardToCallback(
      VideoCaptureHost::GetDeviceSupportedFormatsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoCaptureHost::GetDeviceSupportedFormatsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoCaptureHost_GetDeviceSupportedFormats_ForwardToCallback);
};

class VideoCaptureHost_GetDeviceFormatsInUse_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoCaptureHost_GetDeviceFormatsInUse_ForwardToCallback(
      VideoCaptureHost::GetDeviceFormatsInUseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoCaptureHost::GetDeviceFormatsInUseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoCaptureHost_GetDeviceFormatsInUse_ForwardToCallback);
};

VideoCaptureHostProxy::VideoCaptureHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoCaptureHostProxy::Start(
    int32_t in_device_id, int32_t in_session_id, ::media::mojom::blink::VideoCaptureParamsPtr in_params, VideoCaptureObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::Start");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_Start_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_Start_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->device_id = in_device_id;
  params->session_id = in_session_id;
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::media::mojom::VideoCaptureParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in VideoCaptureHost.Start request");
  mojo::internal::Serialize<::media::mojom::VideoCaptureObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in VideoCaptureHost.Start request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("Start");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoCaptureHostProxy::Stop(
    int32_t in_device_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::Stop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_Stop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->device_id = in_device_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("Stop");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoCaptureHostProxy::Pause(
    int32_t in_device_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::Pause");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_Pause_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_Pause_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->device_id = in_device_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("Pause");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoCaptureHostProxy::Resume(
    int32_t in_device_id, int32_t in_session_id, ::media::mojom::blink::VideoCaptureParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::Resume");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_Resume_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_Resume_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->device_id = in_device_id;
  params->session_id = in_session_id;
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::media::mojom::VideoCaptureParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in VideoCaptureHost.Resume request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("Resume");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoCaptureHostProxy::RequestRefreshFrame(
    int32_t in_device_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::RequestRefreshFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_RequestRefreshFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_RequestRefreshFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->device_id = in_device_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("RequestRefreshFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoCaptureHostProxy::ReleaseBuffer(
    int32_t in_device_id, int32_t in_buffer_id, double in_consumer_resource_utilization) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::ReleaseBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_ReleaseBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_ReleaseBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->device_id = in_device_id;
  params->buffer_id = in_buffer_id;
  params->consumer_resource_utilization = in_consumer_resource_utilization;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("ReleaseBuffer");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoCaptureHostProxy::GetDeviceSupportedFormats(
    int32_t in_device_id, int32_t in_session_id, GetDeviceSupportedFormatsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::GetDeviceSupportedFormats");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_GetDeviceSupportedFormats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_GetDeviceSupportedFormats_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->device_id = in_device_id;
  params->session_id = in_session_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("GetDeviceSupportedFormats");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoCaptureHost_GetDeviceSupportedFormats_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoCaptureHostProxy::GetDeviceFormatsInUse(
    int32_t in_device_id, int32_t in_session_id, GetDeviceFormatsInUseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::GetDeviceFormatsInUse");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_GetDeviceFormatsInUse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_GetDeviceFormatsInUse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->device_id = in_device_id;
  params->session_id = in_session_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("GetDeviceFormatsInUse");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoCaptureHost_GetDeviceFormatsInUse_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoCaptureHostProxy::OnFrameDropped(
    int32_t in_device_id, ::media::mojom::blink::VideoCaptureFrameDropReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::OnFrameDropped");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_OnFrameDropped_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_OnFrameDropped_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->device_id = in_device_id;
  mojo::internal::Serialize<::media::mojom::VideoCaptureFrameDropReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("OnFrameDropped");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoCaptureHostProxy::OnLog(
    int32_t in_device_id, const WTF::String& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::OnLog");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_OnLog_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_OnLog_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->device_id = in_device_id;
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in VideoCaptureHost.OnLog request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("OnLog");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VideoCaptureHost_GetDeviceSupportedFormats_ProxyToResponder {
 public:
  static VideoCaptureHost::GetDeviceSupportedFormatsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoCaptureHost_GetDeviceSupportedFormats_ProxyToResponder> proxy(
        new VideoCaptureHost_GetDeviceSupportedFormats_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoCaptureHost_GetDeviceSupportedFormats_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoCaptureHost_GetDeviceSupportedFormats_ProxyToResponder() {
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
  VideoCaptureHost_GetDeviceSupportedFormats_ProxyToResponder(
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
        << "VideoCaptureHost::GetDeviceSupportedFormatsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr> in_formats_supported);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoCaptureHost_GetDeviceSupportedFormats_ProxyToResponder);
};

bool VideoCaptureHost_GetDeviceSupportedFormats_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::GetDeviceSupportedFormatsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr> p_formats_supported{};
  VideoCaptureHost_GetDeviceSupportedFormats_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFormatsSupported(&p_formats_supported))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoCaptureHost::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_formats_supported));
  return true;
}

void VideoCaptureHost_GetDeviceSupportedFormats_ProxyToResponder::Run(
    WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr> in_formats_supported) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_GetDeviceSupportedFormats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->formats_supported)::BaseType::BufferWriter
      formats_supported_writer;
  const mojo::internal::ContainerValidateParams formats_supported_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
      in_formats_supported, buffer, &formats_supported_writer, &formats_supported_validate_params,
      &serialization_context);
  params->formats_supported.Set(
      formats_supported_writer.is_null() ? nullptr : formats_supported_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->formats_supported.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null formats_supported in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::GetDeviceSupportedFormatsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("GetDeviceSupportedFormats");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VideoCaptureHost_GetDeviceFormatsInUse_ProxyToResponder {
 public:
  static VideoCaptureHost::GetDeviceFormatsInUseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoCaptureHost_GetDeviceFormatsInUse_ProxyToResponder> proxy(
        new VideoCaptureHost_GetDeviceFormatsInUse_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoCaptureHost_GetDeviceFormatsInUse_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoCaptureHost_GetDeviceFormatsInUse_ProxyToResponder() {
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
  VideoCaptureHost_GetDeviceFormatsInUse_ProxyToResponder(
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
        << "VideoCaptureHost::GetDeviceFormatsInUseCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr> in_formats_in_use);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoCaptureHost_GetDeviceFormatsInUse_ProxyToResponder);
};

bool VideoCaptureHost_GetDeviceFormatsInUse_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VideoCaptureHost::GetDeviceFormatsInUseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr> p_formats_in_use{};
  VideoCaptureHost_GetDeviceFormatsInUse_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFormatsInUse(&p_formats_in_use))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VideoCaptureHost::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_formats_in_use));
  return true;
}

void VideoCaptureHost_GetDeviceFormatsInUse_ProxyToResponder::Run(
    WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr> in_formats_in_use) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoCaptureHost_GetDeviceFormatsInUse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->formats_in_use)::BaseType::BufferWriter
      formats_in_use_writer;
  const mojo::internal::ContainerValidateParams formats_in_use_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
      in_formats_in_use, buffer, &formats_in_use_writer, &formats_in_use_validate_params,
      &serialization_context);
  params->formats_in_use.Set(
      formats_in_use_writer.is_null() ? nullptr : formats_in_use_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->formats_in_use.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null formats_in_use in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::GetDeviceFormatsInUseCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VideoCaptureHost::Name_);
  message.set_method_name("GetDeviceFormatsInUse");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VideoCaptureHostStubDispatch::Accept(
    VideoCaptureHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoCaptureHost_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::Start",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureHost_Start_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureHost_Start_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_device_id{};
      int32_t p_session_id{};
      ::media::mojom::blink::VideoCaptureParamsPtr p_params{};
      VideoCaptureObserverPtr p_observer{};
      VideoCaptureHost_Start_ParamsDataView input_data_view(params, &serialization_context);
      
      p_device_id = input_data_view.device_id();
      p_session_id = input_data_view.session_id();
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Start(
std::move(p_device_id), 
std::move(p_session_id), 
std::move(p_params), 
std::move(p_observer));
      return true;
    }
    case internal::kVideoCaptureHost_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::Stop",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureHost_Stop_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureHost_Stop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_device_id{};
      VideoCaptureHost_Stop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_device_id = input_data_view.device_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Stop(
std::move(p_device_id));
      return true;
    }
    case internal::kVideoCaptureHost_Pause_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::Pause",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureHost_Pause_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureHost_Pause_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_device_id{};
      VideoCaptureHost_Pause_ParamsDataView input_data_view(params, &serialization_context);
      
      p_device_id = input_data_view.device_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureHost::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Pause(
std::move(p_device_id));
      return true;
    }
    case internal::kVideoCaptureHost_Resume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::Resume",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureHost_Resume_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureHost_Resume_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_device_id{};
      int32_t p_session_id{};
      ::media::mojom::blink::VideoCaptureParamsPtr p_params{};
      VideoCaptureHost_Resume_ParamsDataView input_data_view(params, &serialization_context);
      
      p_device_id = input_data_view.device_id();
      p_session_id = input_data_view.session_id();
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureHost::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Resume(
std::move(p_device_id), 
std::move(p_session_id), 
std::move(p_params));
      return true;
    }
    case internal::kVideoCaptureHost_RequestRefreshFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::RequestRefreshFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureHost_RequestRefreshFrame_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureHost_RequestRefreshFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_device_id{};
      VideoCaptureHost_RequestRefreshFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      p_device_id = input_data_view.device_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureHost::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestRefreshFrame(
std::move(p_device_id));
      return true;
    }
    case internal::kVideoCaptureHost_ReleaseBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::ReleaseBuffer",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureHost_ReleaseBuffer_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureHost_ReleaseBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_device_id{};
      int32_t p_buffer_id{};
      double p_consumer_resource_utilization{};
      VideoCaptureHost_ReleaseBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_device_id = input_data_view.device_id();
      p_buffer_id = input_data_view.buffer_id();
      p_consumer_resource_utilization = input_data_view.consumer_resource_utilization();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureHost::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReleaseBuffer(
std::move(p_device_id), 
std::move(p_buffer_id), 
std::move(p_consumer_resource_utilization));
      return true;
    }
    case internal::kVideoCaptureHost_GetDeviceSupportedFormats_Name: {
      break;
    }
    case internal::kVideoCaptureHost_GetDeviceFormatsInUse_Name: {
      break;
    }
    case internal::kVideoCaptureHost_OnFrameDropped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::OnFrameDropped",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureHost_OnFrameDropped_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureHost_OnFrameDropped_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_device_id{};
      ::media::mojom::blink::VideoCaptureFrameDropReason p_reason{};
      VideoCaptureHost_OnFrameDropped_ParamsDataView input_data_view(params, &serialization_context);
      
      p_device_id = input_data_view.device_id();
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureHost::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFrameDropped(
std::move(p_device_id), 
std::move(p_reason));
      return true;
    }
    case internal::kVideoCaptureHost_OnLog_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::OnLog",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoCaptureHost_OnLog_Params_Data* params =
          reinterpret_cast<internal::VideoCaptureHost_OnLog_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_device_id{};
      WTF::String p_message{};
      VideoCaptureHost_OnLog_ParamsDataView input_data_view(params, &serialization_context);
      
      p_device_id = input_data_view.device_id();
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureHost::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnLog(
std::move(p_device_id), 
std::move(p_message));
      return true;
    }
  }
  return false;
}

// static
bool VideoCaptureHostStubDispatch::AcceptWithResponder(
    VideoCaptureHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoCaptureHost_Start_Name: {
      break;
    }
    case internal::kVideoCaptureHost_Stop_Name: {
      break;
    }
    case internal::kVideoCaptureHost_Pause_Name: {
      break;
    }
    case internal::kVideoCaptureHost_Resume_Name: {
      break;
    }
    case internal::kVideoCaptureHost_RequestRefreshFrame_Name: {
      break;
    }
    case internal::kVideoCaptureHost_ReleaseBuffer_Name: {
      break;
    }
    case internal::kVideoCaptureHost_GetDeviceSupportedFormats_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::GetDeviceSupportedFormats",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoCaptureHost_GetDeviceSupportedFormats_Params_Data* params =
          reinterpret_cast<
              internal::VideoCaptureHost_GetDeviceSupportedFormats_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_device_id{};
      int32_t p_session_id{};
      VideoCaptureHost_GetDeviceSupportedFormats_ParamsDataView input_data_view(params, &serialization_context);
      
      p_device_id = input_data_view.device_id();
      p_session_id = input_data_view.session_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureHost::Name_, 6, false);
        return false;
      }
      VideoCaptureHost::GetDeviceSupportedFormatsCallback callback =
          VideoCaptureHost_GetDeviceSupportedFormats_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDeviceSupportedFormats(
std::move(p_device_id), 
std::move(p_session_id), std::move(callback));
      return true;
    }
    case internal::kVideoCaptureHost_GetDeviceFormatsInUse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VideoCaptureHost::GetDeviceFormatsInUse",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoCaptureHost_GetDeviceFormatsInUse_Params_Data* params =
          reinterpret_cast<
              internal::VideoCaptureHost_GetDeviceFormatsInUse_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_device_id{};
      int32_t p_session_id{};
      VideoCaptureHost_GetDeviceFormatsInUse_ParamsDataView input_data_view(params, &serialization_context);
      
      p_device_id = input_data_view.device_id();
      p_session_id = input_data_view.session_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VideoCaptureHost::Name_, 7, false);
        return false;
      }
      VideoCaptureHost::GetDeviceFormatsInUseCallback callback =
          VideoCaptureHost_GetDeviceFormatsInUse_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDeviceFormatsInUse(
std::move(p_device_id), 
std::move(p_session_id), std::move(callback));
      return true;
    }
    case internal::kVideoCaptureHost_OnFrameDropped_Name: {
      break;
    }
    case internal::kVideoCaptureHost_OnLog_Name: {
      break;
    }
  }
  return false;
}

bool VideoCaptureHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoCaptureHost RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoCaptureHost_Start_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_Start_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureHost_Stop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_Stop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureHost_Pause_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_Pause_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureHost_Resume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_Resume_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureHost_RequestRefreshFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_RequestRefreshFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureHost_ReleaseBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_ReleaseBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureHost_GetDeviceSupportedFormats_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_GetDeviceSupportedFormats_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureHost_GetDeviceFormatsInUse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_GetDeviceFormatsInUse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureHost_OnFrameDropped_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_OnFrameDropped_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureHost_OnLog_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_OnLog_Params_Data>(
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

bool VideoCaptureHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoCaptureHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVideoCaptureHost_GetDeviceSupportedFormats_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoCaptureHost_GetDeviceFormatsInUse_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data>(
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