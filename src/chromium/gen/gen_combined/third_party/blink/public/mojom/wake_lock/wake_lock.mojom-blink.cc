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

#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-blink.h"

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

#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-params-data.h"
#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
const char WakeLockService::Name_[] = "blink.mojom.WakeLockService";

WakeLockServiceProxy::WakeLockServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WakeLockServiceProxy::GetWakeLock(
    ::device::mojom::blink::WakeLockType in_type, ::device::mojom::blink::WakeLockReason in_reason, const WTF::String& in_description, ::device::mojom::blink::WakeLockRequest in_wake_lock) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WakeLockService::GetWakeLock");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWakeLockService_GetWakeLock_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WakeLockService_GetWakeLock_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::WakeLockType>(
      in_type, &params->type);
  mojo::internal::Serialize<::device::mojom::WakeLockReason>(
      in_reason, &params->reason);
  typename decltype(params->description)::BaseType::BufferWriter
      description_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_description, buffer, &description_writer, &serialization_context);
  params->description.Set(
      description_writer.is_null() ? nullptr : description_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->description.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null description in WakeLockService.GetWakeLock request");
  mojo::internal::Serialize<::device::mojom::WakeLockRequestDataView>(
      in_wake_lock, &params->wake_lock, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->wake_lock),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid wake_lock in WakeLockService.GetWakeLock request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLockService::Name_);
  message.set_method_name("GetWakeLock");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WakeLockServiceStubDispatch::Accept(
    WakeLockService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWakeLockService_GetWakeLock_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WakeLockService::GetWakeLock",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WakeLockService_GetWakeLock_Params_Data* params =
          reinterpret_cast<internal::WakeLockService_GetWakeLock_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::blink::WakeLockType p_type{};
      ::device::mojom::blink::WakeLockReason p_reason{};
      WTF::String p_description{};
      ::device::mojom::blink::WakeLockRequest p_wake_lock{};
      WakeLockService_GetWakeLock_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!input_data_view.ReadDescription(&p_description))
        success = false;
      p_wake_lock =
          input_data_view.TakeWakeLock<decltype(p_wake_lock)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLockService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetWakeLock(
std::move(p_type), 
std::move(p_reason), 
std::move(p_description), 
std::move(p_wake_lock));
      return true;
    }
  }
  return false;
}

// static
bool WakeLockServiceStubDispatch::AcceptWithResponder(
    WakeLockService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWakeLockService_GetWakeLock_Name: {
      break;
    }
  }
  return false;
}

bool WakeLockServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WakeLockService RequestValidator");

  switch (message->header()->name) {
    case internal::kWakeLockService_GetWakeLock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockService_GetWakeLock_Params_Data>(
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
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif