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

#include "services/ws/public/mojom/user_activity_monitor.mojom.h"

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

#include "services/ws/public/mojom/user_activity_monitor.mojom-params-data.h"
#include "services/ws/public/mojom/user_activity_monitor.mojom-shared-message-ids.h"

#include "services/ws/public/mojom/user_activity_monitor.mojom-import-headers.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_JUMBO_H_
#endif
namespace ws {
namespace mojom {
const char UserActivityObserver::Name_[] = "ws.mojom.UserActivityObserver";

UserActivityObserverProxy::UserActivityObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UserActivityObserverProxy::OnUserActivity(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UserActivityObserver::OnUserActivity");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUserActivityObserver_OnUserActivity_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::UserActivityObserver_OnUserActivity_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UserActivityObserver::Name_);
  message.set_method_name("OnUserActivity");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool UserActivityObserverStubDispatch::Accept(
    UserActivityObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUserActivityObserver_OnUserActivity_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UserActivityObserver::OnUserActivity",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UserActivityObserver_OnUserActivity_Params_Data* params =
          reinterpret_cast<internal::UserActivityObserver_OnUserActivity_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UserActivityObserver_OnUserActivity_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UserActivityObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnUserActivity();
      return true;
    }
  }
  return false;
}

// static
bool UserActivityObserverStubDispatch::AcceptWithResponder(
    UserActivityObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUserActivityObserver_OnUserActivity_Name: {
      break;
    }
  }
  return false;
}

bool UserActivityObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UserActivityObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kUserActivityObserver_OnUserActivity_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UserActivityObserver_OnUserActivity_Params_Data>(
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

const char UserIdleObserver::Name_[] = "ws.mojom.UserIdleObserver";

UserIdleObserverProxy::UserIdleObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UserIdleObserverProxy::OnUserIdleStateChanged(
    UserIdleObserver::IdleState in_new_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UserIdleObserver::OnUserIdleStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUserIdleObserver_OnUserIdleStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ws::mojom::UserIdleObserver_IdleState>(
      in_new_state, &params->new_state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UserIdleObserver::Name_);
  message.set_method_name("OnUserIdleStateChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool UserIdleObserverStubDispatch::Accept(
    UserIdleObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUserIdleObserver_OnUserIdleStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UserIdleObserver::OnUserIdleStateChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data* params =
          reinterpret_cast<internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UserIdleObserver::IdleState p_new_state{};
      UserIdleObserver_OnUserIdleStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNewState(&p_new_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UserIdleObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnUserIdleStateChanged(
std::move(p_new_state));
      return true;
    }
  }
  return false;
}

// static
bool UserIdleObserverStubDispatch::AcceptWithResponder(
    UserIdleObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUserIdleObserver_OnUserIdleStateChanged_Name: {
      break;
    }
  }
  return false;
}

bool UserIdleObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UserIdleObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kUserIdleObserver_OnUserIdleStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UserIdleObserver_OnUserIdleStateChanged_Params_Data>(
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

const char UserActivityMonitor::Name_[] = "ws.mojom.UserActivityMonitor";

UserActivityMonitorProxy::UserActivityMonitorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UserActivityMonitorProxy::AddUserActivityObserver(
    uint32_t in_delay_between_notify_secs, UserActivityObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UserActivityMonitor::AddUserActivityObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUserActivityMonitor_AddUserActivityObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::UserActivityMonitor_AddUserActivityObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->delay_between_notify_secs = in_delay_between_notify_secs;
  mojo::internal::Serialize<::ws::mojom::UserActivityObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in UserActivityMonitor.AddUserActivityObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UserActivityMonitor::Name_);
  message.set_method_name("AddUserActivityObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void UserActivityMonitorProxy::AddUserIdleObserver(
    uint32_t in_idle_time_in_minutes, UserIdleObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UserActivityMonitor::AddUserIdleObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUserActivityMonitor_AddUserIdleObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::UserActivityMonitor_AddUserIdleObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->idle_time_in_minutes = in_idle_time_in_minutes;
  mojo::internal::Serialize<::ws::mojom::UserIdleObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in UserActivityMonitor.AddUserIdleObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UserActivityMonitor::Name_);
  message.set_method_name("AddUserIdleObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool UserActivityMonitorStubDispatch::Accept(
    UserActivityMonitor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUserActivityMonitor_AddUserActivityObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UserActivityMonitor::AddUserActivityObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UserActivityMonitor_AddUserActivityObserver_Params_Data* params =
          reinterpret_cast<internal::UserActivityMonitor_AddUserActivityObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_delay_between_notify_secs{};
      UserActivityObserverPtr p_observer{};
      UserActivityMonitor_AddUserActivityObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_delay_between_notify_secs = input_data_view.delay_between_notify_secs();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UserActivityMonitor::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddUserActivityObserver(
std::move(p_delay_between_notify_secs), 
std::move(p_observer));
      return true;
    }
    case internal::kUserActivityMonitor_AddUserIdleObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UserActivityMonitor::AddUserIdleObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UserActivityMonitor_AddUserIdleObserver_Params_Data* params =
          reinterpret_cast<internal::UserActivityMonitor_AddUserIdleObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_idle_time_in_minutes{};
      UserIdleObserverPtr p_observer{};
      UserActivityMonitor_AddUserIdleObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_idle_time_in_minutes = input_data_view.idle_time_in_minutes();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UserActivityMonitor::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddUserIdleObserver(
std::move(p_idle_time_in_minutes), 
std::move(p_observer));
      return true;
    }
  }
  return false;
}

// static
bool UserActivityMonitorStubDispatch::AcceptWithResponder(
    UserActivityMonitor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUserActivityMonitor_AddUserActivityObserver_Name: {
      break;
    }
    case internal::kUserActivityMonitor_AddUserIdleObserver_Name: {
      break;
    }
  }
  return false;
}

bool UserActivityMonitorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UserActivityMonitor RequestValidator");

  switch (message->header()->name) {
    case internal::kUserActivityMonitor_AddUserActivityObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UserActivityMonitor_AddUserActivityObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUserActivityMonitor_AddUserIdleObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UserActivityMonitor_AddUserIdleObserver_Params_Data>(
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