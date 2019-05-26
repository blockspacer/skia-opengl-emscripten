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

#include "third_party/blink/public/mojom/crash/crash_memory_metrics_reporter.mojom.h"

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

#include "third_party/blink/public/mojom/crash/crash_memory_metrics_reporter.mojom-params-data.h"
#include "third_party/blink/public/mojom/crash/crash_memory_metrics_reporter.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/crash/crash_memory_metrics_reporter.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CRASH_CRASH_MEMORY_METRICS_REPORTER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CRASH_CRASH_MEMORY_METRICS_REPORTER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char CrashMemoryMetricsReporter::Name_[] = "blink.mojom.CrashMemoryMetricsReporter";

CrashMemoryMetricsReporterProxy::CrashMemoryMetricsReporterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CrashMemoryMetricsReporterProxy::SetSharedMemory(
    base::UnsafeSharedMemoryRegion in_shared_metrics_buffer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CrashMemoryMetricsReporter::SetSharedMemory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCrashMemoryMetricsReporter_SetSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CrashMemoryMetricsReporter_SetSharedMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->shared_metrics_buffer)::BaseType::BufferWriter
      shared_metrics_buffer_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
      in_shared_metrics_buffer, buffer, &shared_metrics_buffer_writer, &serialization_context);
  params->shared_metrics_buffer.Set(
      shared_metrics_buffer_writer.is_null() ? nullptr : shared_metrics_buffer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->shared_metrics_buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null shared_metrics_buffer in CrashMemoryMetricsReporter.SetSharedMemory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CrashMemoryMetricsReporter::Name_);
  message.set_method_name("SetSharedMemory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CrashMemoryMetricsReporterStubDispatch::Accept(
    CrashMemoryMetricsReporter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCrashMemoryMetricsReporter_SetSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CrashMemoryMetricsReporter::SetSharedMemory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CrashMemoryMetricsReporter_SetSharedMemory_Params_Data* params =
          reinterpret_cast<internal::CrashMemoryMetricsReporter_SetSharedMemory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnsafeSharedMemoryRegion p_shared_metrics_buffer{};
      CrashMemoryMetricsReporter_SetSharedMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSharedMetricsBuffer(&p_shared_metrics_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CrashMemoryMetricsReporter::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSharedMemory(
std::move(p_shared_metrics_buffer));
      return true;
    }
  }
  return false;
}

// static
bool CrashMemoryMetricsReporterStubDispatch::AcceptWithResponder(
    CrashMemoryMetricsReporter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCrashMemoryMetricsReporter_SetSharedMemory_Name: {
      break;
    }
  }
  return false;
}

bool CrashMemoryMetricsReporterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CrashMemoryMetricsReporter RequestValidator");

  switch (message->header()->name) {
    case internal::kCrashMemoryMetricsReporter_SetSharedMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CrashMemoryMetricsReporter_SetSharedMemory_Params_Data>(
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
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif