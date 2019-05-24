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

#include "services/media_session/public/mojom/media_controller.mojom-blink.h"

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

#include "services/media_session/public/mojom/media_controller.mojom-params-data.h"
#include "services/media_session/public/mojom/media_controller.mojom-shared-message-ids.h"

#include "services/media_session/public/mojom/media_controller.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace media_session {
namespace mojom {
namespace blink {
const char MediaControllerManager::Name_[] = "media_session.mojom.MediaControllerManager";

MediaControllerManagerProxy::MediaControllerManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaControllerManagerProxy::CreateMediaControllerForSession(
    MediaControllerRequest in_request, const base::UnguessableToken& in_request_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaControllerManager::CreateMediaControllerForSession");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaControllerManager_CreateMediaControllerForSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaControllerManager_CreateMediaControllerForSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::MediaControllerRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in MediaControllerManager.CreateMediaControllerForSession request");
  typename decltype(params->request_id)::BaseType::BufferWriter
      request_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_request_id, buffer, &request_id_writer, &serialization_context);
  params->request_id.Set(
      request_id_writer.is_null() ? nullptr : request_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_id in MediaControllerManager.CreateMediaControllerForSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaControllerManager::Name_);
  message.set_method_name("CreateMediaControllerForSession");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerManagerProxy::CreateActiveMediaController(
    MediaControllerRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaControllerManager::CreateActiveMediaController");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaControllerManager_CreateActiveMediaController_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaControllerManager_CreateActiveMediaController_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::MediaControllerRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in MediaControllerManager.CreateActiveMediaController request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaControllerManager::Name_);
  message.set_method_name("CreateActiveMediaController");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerManagerProxy::SuspendAllSessions(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaControllerManager::SuspendAllSessions");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaControllerManager_SuspendAllSessions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaControllerManager_SuspendAllSessions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaControllerManager::Name_);
  message.set_method_name("SuspendAllSessions");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaControllerManagerStubDispatch::Accept(
    MediaControllerManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaControllerManager_CreateMediaControllerForSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaControllerManager::CreateMediaControllerForSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaControllerManager_CreateMediaControllerForSession_Params_Data* params =
          reinterpret_cast<internal::MediaControllerManager_CreateMediaControllerForSession_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaControllerRequest p_request{};
      base::UnguessableToken p_request_id{};
      MediaControllerManager_CreateMediaControllerForSession_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!input_data_view.ReadRequestId(&p_request_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaControllerManager::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateMediaControllerForSession(
std::move(p_request), 
std::move(p_request_id));
      return true;
    }
    case internal::kMediaControllerManager_CreateActiveMediaController_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaControllerManager::CreateActiveMediaController",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaControllerManager_CreateActiveMediaController_Params_Data* params =
          reinterpret_cast<internal::MediaControllerManager_CreateActiveMediaController_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaControllerRequest p_request{};
      MediaControllerManager_CreateActiveMediaController_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaControllerManager::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateActiveMediaController(
std::move(p_request));
      return true;
    }
    case internal::kMediaControllerManager_SuspendAllSessions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaControllerManager::SuspendAllSessions",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaControllerManager_SuspendAllSessions_Params_Data* params =
          reinterpret_cast<internal::MediaControllerManager_SuspendAllSessions_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaControllerManager_SuspendAllSessions_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaControllerManager::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuspendAllSessions();
      return true;
    }
  }
  return false;
}

// static
bool MediaControllerManagerStubDispatch::AcceptWithResponder(
    MediaControllerManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaControllerManager_CreateMediaControllerForSession_Name: {
      break;
    }
    case internal::kMediaControllerManager_CreateActiveMediaController_Name: {
      break;
    }
    case internal::kMediaControllerManager_SuspendAllSessions_Name: {
      break;
    }
  }
  return false;
}

bool MediaControllerManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaControllerManager RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaControllerManager_CreateMediaControllerForSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaControllerManager_CreateMediaControllerForSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaControllerManager_CreateActiveMediaController_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaControllerManager_CreateActiveMediaController_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaControllerManager_SuspendAllSessions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaControllerManager_SuspendAllSessions_Params_Data>(
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

const char MediaController::Name_[] = "media_session.mojom.MediaController";

MediaControllerProxy::MediaControllerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaControllerProxy::Suspend(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaController::Suspend");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_Suspend_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaController_Suspend_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaController::Name_);
  message.set_method_name("Suspend");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::Resume(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaController::Resume");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_Resume_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaController_Resume_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaController::Name_);
  message.set_method_name("Resume");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::Stop(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaController::Stop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaController_Stop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaController::Name_);
  message.set_method_name("Stop");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::ToggleSuspendResume(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaController::ToggleSuspendResume");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_ToggleSuspendResume_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaController_ToggleSuspendResume_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaController::Name_);
  message.set_method_name("ToggleSuspendResume");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::AddObserver(
    MediaControllerObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaController::AddObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_AddObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaController_AddObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::MediaControllerObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in MediaController.AddObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaController::Name_);
  message.set_method_name("AddObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::PreviousTrack(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaController::PreviousTrack");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_PreviousTrack_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaController_PreviousTrack_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaController::Name_);
  message.set_method_name("PreviousTrack");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::NextTrack(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaController::NextTrack");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_NextTrack_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaController_NextTrack_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaController::Name_);
  message.set_method_name("NextTrack");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::Seek(
    base::TimeDelta in_seek_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaController::Seek");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_Seek_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaController_Seek_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->seek_time)::BaseType::BufferWriter
      seek_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_seek_time, buffer, &seek_time_writer, &serialization_context);
  params->seek_time.Set(
      seek_time_writer.is_null() ? nullptr : seek_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->seek_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null seek_time in MediaController.Seek request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaController::Name_);
  message.set_method_name("Seek");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::ObserveImages(
    ::media_session::mojom::blink::MediaSessionImageType in_type, int32_t in_minimum_size_px, int32_t in_desired_size_px, MediaControllerImageObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaController::ObserveImages");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_ObserveImages_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaController_ObserveImages_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::MediaSessionImageType>(
      in_type, &params->type);
  params->minimum_size_px = in_minimum_size_px;
  params->desired_size_px = in_desired_size_px;
  mojo::internal::Serialize<::media_session::mojom::MediaControllerImageObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in MediaController.ObserveImages request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaController::Name_);
  message.set_method_name("ObserveImages");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaControllerStubDispatch::Accept(
    MediaController* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaController_Suspend_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaController::Suspend",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_Suspend_Params_Data* params =
          reinterpret_cast<internal::MediaController_Suspend_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaController_Suspend_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaController::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Suspend();
      return true;
    }
    case internal::kMediaController_Resume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaController::Resume",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_Resume_Params_Data* params =
          reinterpret_cast<internal::MediaController_Resume_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaController_Resume_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaController::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Resume();
      return true;
    }
    case internal::kMediaController_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaController::Stop",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_Stop_Params_Data* params =
          reinterpret_cast<internal::MediaController_Stop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaController_Stop_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaController::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Stop();
      return true;
    }
    case internal::kMediaController_ToggleSuspendResume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaController::ToggleSuspendResume",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_ToggleSuspendResume_Params_Data* params =
          reinterpret_cast<internal::MediaController_ToggleSuspendResume_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaController_ToggleSuspendResume_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaController::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ToggleSuspendResume();
      return true;
    }
    case internal::kMediaController_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaController::AddObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_AddObserver_Params_Data* params =
          reinterpret_cast<internal::MediaController_AddObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaControllerObserverPtr p_observer{};
      MediaController_AddObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaController::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddObserver(
std::move(p_observer));
      return true;
    }
    case internal::kMediaController_PreviousTrack_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaController::PreviousTrack",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_PreviousTrack_Params_Data* params =
          reinterpret_cast<internal::MediaController_PreviousTrack_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaController_PreviousTrack_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaController::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PreviousTrack();
      return true;
    }
    case internal::kMediaController_NextTrack_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaController::NextTrack",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_NextTrack_Params_Data* params =
          reinterpret_cast<internal::MediaController_NextTrack_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaController_NextTrack_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaController::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NextTrack();
      return true;
    }
    case internal::kMediaController_Seek_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaController::Seek",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_Seek_Params_Data* params =
          reinterpret_cast<internal::MediaController_Seek_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_seek_time{};
      MediaController_Seek_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSeekTime(&p_seek_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaController::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Seek(
std::move(p_seek_time));
      return true;
    }
    case internal::kMediaController_ObserveImages_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaController::ObserveImages",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_ObserveImages_Params_Data* params =
          reinterpret_cast<internal::MediaController_ObserveImages_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media_session::mojom::blink::MediaSessionImageType p_type{};
      int32_t p_minimum_size_px{};
      int32_t p_desired_size_px{};
      MediaControllerImageObserverPtr p_observer{};
      MediaController_ObserveImages_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      p_minimum_size_px = input_data_view.minimum_size_px();
      p_desired_size_px = input_data_view.desired_size_px();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaController::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ObserveImages(
std::move(p_type), 
std::move(p_minimum_size_px), 
std::move(p_desired_size_px), 
std::move(p_observer));
      return true;
    }
  }
  return false;
}

// static
bool MediaControllerStubDispatch::AcceptWithResponder(
    MediaController* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaController_Suspend_Name: {
      break;
    }
    case internal::kMediaController_Resume_Name: {
      break;
    }
    case internal::kMediaController_Stop_Name: {
      break;
    }
    case internal::kMediaController_ToggleSuspendResume_Name: {
      break;
    }
    case internal::kMediaController_AddObserver_Name: {
      break;
    }
    case internal::kMediaController_PreviousTrack_Name: {
      break;
    }
    case internal::kMediaController_NextTrack_Name: {
      break;
    }
    case internal::kMediaController_Seek_Name: {
      break;
    }
    case internal::kMediaController_ObserveImages_Name: {
      break;
    }
  }
  return false;
}

bool MediaControllerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaController RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaController_Suspend_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_Suspend_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_Resume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_Resume_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_Stop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_Stop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_ToggleSuspendResume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_ToggleSuspendResume_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_AddObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_AddObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_PreviousTrack_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_PreviousTrack_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_NextTrack_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_NextTrack_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_Seek_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_Seek_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_ObserveImages_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_ObserveImages_Params_Data>(
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

const char MediaControllerObserver::Name_[] = "media_session.mojom.MediaControllerObserver";

MediaControllerObserverProxy::MediaControllerObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaControllerObserverProxy::MediaSessionInfoChanged(
    ::media_session::mojom::blink::MediaSessionInfoPtr in_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaControllerObserver::MediaSessionInfoChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaControllerObserver_MediaSessionInfoChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaControllerObserver_MediaSessionInfoChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaSessionInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaControllerObserver::Name_);
  message.set_method_name("MediaSessionInfoChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerObserverProxy::MediaSessionMetadataChanged(
    ::media_session::mojom::blink::MediaMetadataPtr in_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaControllerObserver::MediaSessionMetadataChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaControllerObserver_MediaSessionMetadataChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaControllerObserver_MediaSessionMetadataChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaMetadataDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaControllerObserver::Name_);
  message.set_method_name("MediaSessionMetadataChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerObserverProxy::MediaSessionActionsChanged(
    const WTF::Vector<::media_session::mojom::blink::MediaSessionAction>& in_action) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaControllerObserver::MediaSessionActionsChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaControllerObserver_MediaSessionActionsChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaControllerObserver_MediaSessionActionsChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->action)::BaseType::BufferWriter
      action_writer;
  const mojo::internal::ContainerValidateParams action_validate_params(
      0, ::media_session::mojom::internal::MediaSessionAction_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::media_session::mojom::MediaSessionAction>>(
      in_action, buffer, &action_writer, &action_validate_params,
      &serialization_context);
  params->action.Set(
      action_writer.is_null() ? nullptr : action_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->action.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null action in MediaControllerObserver.MediaSessionActionsChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaControllerObserver::Name_);
  message.set_method_name("MediaSessionActionsChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerObserverProxy::MediaSessionChanged(
    const base::Optional<base::UnguessableToken>& in_request_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaControllerObserver::MediaSessionChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaControllerObserver_MediaSessionChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaControllerObserver_MediaSessionChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_id)::BaseType::BufferWriter
      request_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_request_id, buffer, &request_id_writer, &serialization_context);
  params->request_id.Set(
      request_id_writer.is_null() ? nullptr : request_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaControllerObserver::Name_);
  message.set_method_name("MediaSessionChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaControllerObserverStubDispatch::Accept(
    MediaControllerObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaControllerObserver_MediaSessionInfoChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaControllerObserver::MediaSessionInfoChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaControllerObserver_MediaSessionInfoChanged_Params_Data* params =
          reinterpret_cast<internal::MediaControllerObserver_MediaSessionInfoChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media_session::mojom::blink::MediaSessionInfoPtr p_info{};
      MediaControllerObserver_MediaSessionInfoChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaControllerObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MediaSessionInfoChanged(
std::move(p_info));
      return true;
    }
    case internal::kMediaControllerObserver_MediaSessionMetadataChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaControllerObserver::MediaSessionMetadataChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaControllerObserver_MediaSessionMetadataChanged_Params_Data* params =
          reinterpret_cast<internal::MediaControllerObserver_MediaSessionMetadataChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media_session::mojom::blink::MediaMetadataPtr p_metadata{};
      MediaControllerObserver_MediaSessionMetadataChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMetadata(&p_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaControllerObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MediaSessionMetadataChanged(
std::move(p_metadata));
      return true;
    }
    case internal::kMediaControllerObserver_MediaSessionActionsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaControllerObserver::MediaSessionActionsChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaControllerObserver_MediaSessionActionsChanged_Params_Data* params =
          reinterpret_cast<internal::MediaControllerObserver_MediaSessionActionsChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<::media_session::mojom::blink::MediaSessionAction> p_action{};
      MediaControllerObserver_MediaSessionActionsChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAction(&p_action))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaControllerObserver::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MediaSessionActionsChanged(
std::move(p_action));
      return true;
    }
    case internal::kMediaControllerObserver_MediaSessionChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaControllerObserver::MediaSessionChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaControllerObserver_MediaSessionChanged_Params_Data* params =
          reinterpret_cast<internal::MediaControllerObserver_MediaSessionChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<base::UnguessableToken> p_request_id{};
      MediaControllerObserver_MediaSessionChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequestId(&p_request_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaControllerObserver::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MediaSessionChanged(
std::move(p_request_id));
      return true;
    }
  }
  return false;
}

// static
bool MediaControllerObserverStubDispatch::AcceptWithResponder(
    MediaControllerObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaControllerObserver_MediaSessionInfoChanged_Name: {
      break;
    }
    case internal::kMediaControllerObserver_MediaSessionMetadataChanged_Name: {
      break;
    }
    case internal::kMediaControllerObserver_MediaSessionActionsChanged_Name: {
      break;
    }
    case internal::kMediaControllerObserver_MediaSessionChanged_Name: {
      break;
    }
  }
  return false;
}

bool MediaControllerObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaControllerObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaControllerObserver_MediaSessionInfoChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaControllerObserver_MediaSessionInfoChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaControllerObserver_MediaSessionMetadataChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaControllerObserver_MediaSessionMetadataChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaControllerObserver_MediaSessionActionsChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaControllerObserver_MediaSessionActionsChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaControllerObserver_MediaSessionChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaControllerObserver_MediaSessionChanged_Params_Data>(
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

const char MediaControllerImageObserver::Name_[] = "media_session.mojom.MediaControllerImageObserver";

MediaControllerImageObserverProxy::MediaControllerImageObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaControllerImageObserverProxy::MediaControllerImageChanged(
    ::media_session::mojom::blink::MediaSessionImageType in_type, ::media_session::mojom::blink::MediaImageBitmapPtr in_bitmap) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaControllerImageObserver::MediaControllerImageChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaControllerImageObserver_MediaControllerImageChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaControllerImageObserver_MediaControllerImageChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::MediaSessionImageType>(
      in_type, &params->type);
  typename decltype(params->bitmap)::BaseType::BufferWriter
      bitmap_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaImageBitmapDataView>(
      in_bitmap, buffer, &bitmap_writer, &serialization_context);
  params->bitmap.Set(
      bitmap_writer.is_null() ? nullptr : bitmap_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaControllerImageObserver::Name_);
  message.set_method_name("MediaControllerImageChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaControllerImageObserverStubDispatch::Accept(
    MediaControllerImageObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaControllerImageObserver_MediaControllerImageChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaControllerImageObserver::MediaControllerImageChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaControllerImageObserver_MediaControllerImageChanged_Params_Data* params =
          reinterpret_cast<internal::MediaControllerImageObserver_MediaControllerImageChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media_session::mojom::blink::MediaSessionImageType p_type{};
      ::media_session::mojom::blink::MediaImageBitmapPtr p_bitmap{};
      MediaControllerImageObserver_MediaControllerImageChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadBitmap(&p_bitmap))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaControllerImageObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MediaControllerImageChanged(
std::move(p_type), 
std::move(p_bitmap));
      return true;
    }
  }
  return false;
}

// static
bool MediaControllerImageObserverStubDispatch::AcceptWithResponder(
    MediaControllerImageObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaControllerImageObserver_MediaControllerImageChanged_Name: {
      break;
    }
  }
  return false;
}

bool MediaControllerImageObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaControllerImageObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaControllerImageObserver_MediaControllerImageChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaControllerImageObserver_MediaControllerImageChanged_Params_Data>(
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
}  // namespace media_session

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif