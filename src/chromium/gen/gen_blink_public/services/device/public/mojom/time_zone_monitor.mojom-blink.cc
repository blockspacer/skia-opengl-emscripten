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

#include "services/device/public/mojom/time_zone_monitor.mojom-blink.h"

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

#include "services/device/public/mojom/time_zone_monitor.mojom-params-data.h"
#include "services/device/public/mojom/time_zone_monitor.mojom-shared-message-ids.h"

#include "services/device/public/mojom/time_zone_monitor.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_BLINK_JUMBO_H_
#endif
namespace device {
namespace mojom {
namespace blink {
const char TimeZoneMonitor::Name_[] = "device.mojom.TimeZoneMonitor";

TimeZoneMonitorProxy::TimeZoneMonitorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TimeZoneMonitorProxy::AddClient(
    TimeZoneMonitorClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TimeZoneMonitor::AddClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTimeZoneMonitor_AddClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::TimeZoneMonitor_AddClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::TimeZoneMonitorClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in TimeZoneMonitor.AddClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TimeZoneMonitor::Name_);
  message.set_method_name("AddClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TimeZoneMonitorStubDispatch::Accept(
    TimeZoneMonitor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTimeZoneMonitor_AddClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TimeZoneMonitor::AddClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TimeZoneMonitor_AddClient_Params_Data* params =
          reinterpret_cast<internal::TimeZoneMonitor_AddClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TimeZoneMonitorClientPtr p_client{};
      TimeZoneMonitor_AddClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TimeZoneMonitor::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddClient(
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool TimeZoneMonitorStubDispatch::AcceptWithResponder(
    TimeZoneMonitor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTimeZoneMonitor_AddClient_Name: {
      break;
    }
  }
  return false;
}

bool TimeZoneMonitorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TimeZoneMonitor RequestValidator");

  switch (message->header()->name) {
    case internal::kTimeZoneMonitor_AddClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TimeZoneMonitor_AddClient_Params_Data>(
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

const char TimeZoneMonitorClient::Name_[] = "device.mojom.TimeZoneMonitorClient";

TimeZoneMonitorClientProxy::TimeZoneMonitorClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TimeZoneMonitorClientProxy::OnTimeZoneChange(
    const WTF::String& in_tz_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TimeZoneMonitorClient::OnTimeZoneChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTimeZoneMonitorClient_OnTimeZoneChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::TimeZoneMonitorClient_OnTimeZoneChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->tz_info)::BaseType::BufferWriter
      tz_info_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_tz_info, buffer, &tz_info_writer, &serialization_context);
  params->tz_info.Set(
      tz_info_writer.is_null() ? nullptr : tz_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->tz_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null tz_info in TimeZoneMonitorClient.OnTimeZoneChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TimeZoneMonitorClient::Name_);
  message.set_method_name("OnTimeZoneChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TimeZoneMonitorClientStubDispatch::Accept(
    TimeZoneMonitorClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTimeZoneMonitorClient_OnTimeZoneChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TimeZoneMonitorClient::OnTimeZoneChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TimeZoneMonitorClient_OnTimeZoneChange_Params_Data* params =
          reinterpret_cast<internal::TimeZoneMonitorClient_OnTimeZoneChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_tz_info{};
      TimeZoneMonitorClient_OnTimeZoneChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTzInfo(&p_tz_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TimeZoneMonitorClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTimeZoneChange(
std::move(p_tz_info));
      return true;
    }
  }
  return false;
}

// static
bool TimeZoneMonitorClientStubDispatch::AcceptWithResponder(
    TimeZoneMonitorClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTimeZoneMonitorClient_OnTimeZoneChange_Name: {
      break;
    }
  }
  return false;
}

bool TimeZoneMonitorClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TimeZoneMonitorClient RequestValidator");

  switch (message->header()->name) {
    case internal::kTimeZoneMonitorClient_OnTimeZoneChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TimeZoneMonitorClient_OnTimeZoneChange_Params_Data>(
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
}  // namespace device

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif