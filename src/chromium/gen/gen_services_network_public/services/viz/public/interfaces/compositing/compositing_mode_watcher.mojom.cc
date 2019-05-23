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

#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom.h"

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

#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_JUMBO_H_
#endif
namespace viz {
namespace mojom {
const char CompositingModeWatcher::Name_[] = "viz.mojom.CompositingModeWatcher";

CompositingModeWatcherProxy::CompositingModeWatcherProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CompositingModeWatcherProxy::CompositingModeFallbackToSoftware(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositingModeWatcher::CompositingModeFallbackToSoftware");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositingModeWatcher::Name_);
  message.set_method_name("CompositingModeFallbackToSoftware");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CompositingModeWatcherStubDispatch::Accept(
    CompositingModeWatcher* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositingModeWatcher::CompositingModeFallbackToSoftware",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data* params =
          reinterpret_cast<internal::CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CompositingModeWatcher_CompositingModeFallbackToSoftware_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositingModeWatcher::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CompositingModeFallbackToSoftware();
      return true;
    }
  }
  return false;
}

// static
bool CompositingModeWatcherStubDispatch::AcceptWithResponder(
    CompositingModeWatcher* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name: {
      break;
    }
  }
  return false;
}

bool CompositingModeWatcherRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CompositingModeWatcher RequestValidator");

  switch (message->header()->name) {
    case internal::kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data>(
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

const char CompositingModeReporter::Name_[] = "viz.mojom.CompositingModeReporter";

CompositingModeReporterProxy::CompositingModeReporterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CompositingModeReporterProxy::AddCompositingModeWatcher(
    CompositingModeWatcherPtr in_watcher) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositingModeReporter::AddCompositingModeWatcher");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositingModeReporter_AddCompositingModeWatcher_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositingModeReporter_AddCompositingModeWatcher_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::viz::mojom::CompositingModeWatcherPtrDataView>(
      in_watcher, &params->watcher, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->watcher),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid watcher in CompositingModeReporter.AddCompositingModeWatcher request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositingModeReporter::Name_);
  message.set_method_name("AddCompositingModeWatcher");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CompositingModeReporterStubDispatch::Accept(
    CompositingModeReporter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCompositingModeReporter_AddCompositingModeWatcher_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositingModeReporter::AddCompositingModeWatcher",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositingModeReporter_AddCompositingModeWatcher_Params_Data* params =
          reinterpret_cast<internal::CompositingModeReporter_AddCompositingModeWatcher_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CompositingModeWatcherPtr p_watcher{};
      CompositingModeReporter_AddCompositingModeWatcher_ParamsDataView input_data_view(params, &serialization_context);
      
      p_watcher =
          input_data_view.TakeWatcher<decltype(p_watcher)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositingModeReporter::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddCompositingModeWatcher(
std::move(p_watcher));
      return true;
    }
  }
  return false;
}

// static
bool CompositingModeReporterStubDispatch::AcceptWithResponder(
    CompositingModeReporter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCompositingModeReporter_AddCompositingModeWatcher_Name: {
      break;
    }
  }
  return false;
}

bool CompositingModeReporterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CompositingModeReporter RequestValidator");

  switch (message->header()->name) {
    case internal::kCompositingModeReporter_AddCompositingModeWatcher_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositingModeReporter_AddCompositingModeWatcher_Params_Data>(
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
}  // namespace viz

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif