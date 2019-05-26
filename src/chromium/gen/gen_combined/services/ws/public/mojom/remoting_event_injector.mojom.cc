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

#include "services/ws/public/mojom/remoting_event_injector.mojom.h"

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

#include "services/ws/public/mojom/remoting_event_injector.mojom-params-data.h"
#include "services/ws/public/mojom/remoting_event_injector.mojom-shared-message-ids.h"

#include "services/ws/public/mojom/remoting_event_injector.mojom-import-headers.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_JUMBO_H_
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace ws {
namespace mojom {
const char RemotingEventInjector::Name_[] = "ws.mojom.RemotingEventInjector";

RemotingEventInjectorProxy::RemotingEventInjectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RemotingEventInjectorProxy::MoveCursorToLocationInPixels(
    const gfx::PointF& in_location) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingEventInjector::MoveCursorToLocationInPixels");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingEventInjector_MoveCursorToLocationInPixels_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->location)::BaseType::BufferWriter
      location_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_location, buffer, &location_writer, &serialization_context);
  params->location.Set(
      location_writer.is_null() ? nullptr : location_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->location.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null location in RemotingEventInjector.MoveCursorToLocationInPixels request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingEventInjector::Name_);
  message.set_method_name("MoveCursorToLocationInPixels");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemotingEventInjectorProxy::InjectMousePressOrRelease(
    InjectedMouseButtonType in_button, bool in_down) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingEventInjector::InjectMousePressOrRelease");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingEventInjector_InjectMousePressOrRelease_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::RemotingEventInjector_InjectMousePressOrRelease_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ws::mojom::InjectedMouseButtonType>(
      in_button, &params->button);
  params->down = in_down;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingEventInjector::Name_);
  message.set_method_name("InjectMousePressOrRelease");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemotingEventInjectorProxy::InjectMouseWheelInPixels(
    int32_t in_delta_x, int32_t in_delta_y) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingEventInjector::InjectMouseWheelInPixels");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingEventInjector_InjectMouseWheelInPixels_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::RemotingEventInjector_InjectMouseWheelInPixels_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->delta_x = in_delta_x;
  params->delta_y = in_delta_y;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingEventInjector::Name_);
  message.set_method_name("InjectMouseWheelInPixels");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemotingEventInjectorProxy::InjectKeyEvent(
    int32_t in_native_key_code, bool in_down, bool in_suppress_auto_repeat) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemotingEventInjector::InjectKeyEvent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemotingEventInjector_InjectKeyEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::RemotingEventInjector_InjectKeyEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->native_key_code = in_native_key_code;
  params->down = in_down;
  params->suppress_auto_repeat = in_suppress_auto_repeat;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemotingEventInjector::Name_);
  message.set_method_name("InjectKeyEvent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RemotingEventInjectorStubDispatch::Accept(
    RemotingEventInjector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRemotingEventInjector_MoveCursorToLocationInPixels_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingEventInjector::MoveCursorToLocationInPixels",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data* params =
          reinterpret_cast<internal::RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::PointF p_location{};
      RemotingEventInjector_MoveCursorToLocationInPixels_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocation(&p_location))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingEventInjector::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MoveCursorToLocationInPixels(
std::move(p_location));
      return true;
    }
    case internal::kRemotingEventInjector_InjectMousePressOrRelease_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingEventInjector::InjectMousePressOrRelease",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingEventInjector_InjectMousePressOrRelease_Params_Data* params =
          reinterpret_cast<internal::RemotingEventInjector_InjectMousePressOrRelease_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InjectedMouseButtonType p_button{};
      bool p_down{};
      RemotingEventInjector_InjectMousePressOrRelease_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadButton(&p_button))
        success = false;
      p_down = input_data_view.down();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingEventInjector::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InjectMousePressOrRelease(
std::move(p_button), 
std::move(p_down));
      return true;
    }
    case internal::kRemotingEventInjector_InjectMouseWheelInPixels_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingEventInjector::InjectMouseWheelInPixels",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingEventInjector_InjectMouseWheelInPixels_Params_Data* params =
          reinterpret_cast<internal::RemotingEventInjector_InjectMouseWheelInPixels_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_delta_x{};
      int32_t p_delta_y{};
      RemotingEventInjector_InjectMouseWheelInPixels_ParamsDataView input_data_view(params, &serialization_context);
      
      p_delta_x = input_data_view.delta_x();
      p_delta_y = input_data_view.delta_y();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingEventInjector::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InjectMouseWheelInPixels(
std::move(p_delta_x), 
std::move(p_delta_y));
      return true;
    }
    case internal::kRemotingEventInjector_InjectKeyEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemotingEventInjector::InjectKeyEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemotingEventInjector_InjectKeyEvent_Params_Data* params =
          reinterpret_cast<internal::RemotingEventInjector_InjectKeyEvent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_native_key_code{};
      bool p_down{};
      bool p_suppress_auto_repeat{};
      RemotingEventInjector_InjectKeyEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_native_key_code = input_data_view.native_key_code();
      p_down = input_data_view.down();
      p_suppress_auto_repeat = input_data_view.suppress_auto_repeat();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemotingEventInjector::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InjectKeyEvent(
std::move(p_native_key_code), 
std::move(p_down), 
std::move(p_suppress_auto_repeat));
      return true;
    }
  }
  return false;
}

// static
bool RemotingEventInjectorStubDispatch::AcceptWithResponder(
    RemotingEventInjector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRemotingEventInjector_MoveCursorToLocationInPixels_Name: {
      break;
    }
    case internal::kRemotingEventInjector_InjectMousePressOrRelease_Name: {
      break;
    }
    case internal::kRemotingEventInjector_InjectMouseWheelInPixels_Name: {
      break;
    }
    case internal::kRemotingEventInjector_InjectKeyEvent_Name: {
      break;
    }
  }
  return false;
}

bool RemotingEventInjectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemotingEventInjector RequestValidator");

  switch (message->header()->name) {
    case internal::kRemotingEventInjector_MoveCursorToLocationInPixels_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemotingEventInjector_InjectMousePressOrRelease_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingEventInjector_InjectMousePressOrRelease_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemotingEventInjector_InjectMouseWheelInPixels_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingEventInjector_InjectMouseWheelInPixels_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemotingEventInjector_InjectKeyEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemotingEventInjector_InjectKeyEvent_Params_Data>(
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
}  // namespace ws

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif