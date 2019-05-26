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

#include "services/metrics/public/mojom/ukm_interface.mojom.h"

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

#include "services/metrics/public/mojom/ukm_interface.mojom-params-data.h"
#include "services/metrics/public/mojom/ukm_interface.mojom-shared-message-ids.h"

#include "services/metrics/public/mojom/ukm_interface.mojom-import-headers.h"


#ifndef SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_JUMBO_H_
#define SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_JUMBO_H_
#endif
namespace ukm {
namespace mojom {
UkmEntry::UkmEntry()
    : source_id(),
      event_hash(),
      metrics() {}

UkmEntry::UkmEntry(
    int64_t source_id_in,
    uint64_t event_hash_in,
    const base::flat_map<uint64_t, int64_t>& metrics_in)
    : source_id(std::move(source_id_in)),
      event_hash(std::move(event_hash_in)),
      metrics(std::move(metrics_in)) {}

UkmEntry::~UkmEntry() = default;

bool UkmEntry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char UkmRecorderInterface::Name_[] = "ukm.mojom.UkmRecorderInterface";

UkmRecorderInterfaceProxy::UkmRecorderInterfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UkmRecorderInterfaceProxy::AddEntry(
    UkmEntryPtr in_entry) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UkmRecorderInterface::AddEntry");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUkmRecorderInterface_AddEntry_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ukm::mojom::internal::UkmRecorderInterface_AddEntry_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->entry)::BaseType::BufferWriter
      entry_writer;
  mojo::internal::Serialize<::ukm::mojom::UkmEntryDataView>(
      in_entry, buffer, &entry_writer, &serialization_context);
  params->entry.Set(
      entry_writer.is_null() ? nullptr : entry_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->entry.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null entry in UkmRecorderInterface.AddEntry request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UkmRecorderInterface::Name_);
  message.set_method_name("AddEntry");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void UkmRecorderInterfaceProxy::UpdateSourceURL(
    int64_t in_source_id, const std::string& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UkmRecorderInterface::UpdateSourceURL");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUkmRecorderInterface_UpdateSourceURL_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ukm::mojom::internal::UkmRecorderInterface_UpdateSourceURL_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->source_id = in_source_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in UkmRecorderInterface.UpdateSourceURL request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UkmRecorderInterface::Name_);
  message.set_method_name("UpdateSourceURL");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool UkmRecorderInterfaceStubDispatch::Accept(
    UkmRecorderInterface* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUkmRecorderInterface_AddEntry_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UkmRecorderInterface::AddEntry",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UkmRecorderInterface_AddEntry_Params_Data* params =
          reinterpret_cast<internal::UkmRecorderInterface_AddEntry_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UkmEntryPtr p_entry{};
      UkmRecorderInterface_AddEntry_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEntry(&p_entry))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UkmRecorderInterface::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddEntry(
std::move(p_entry));
      return true;
    }
    case internal::kUkmRecorderInterface_UpdateSourceURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UkmRecorderInterface::UpdateSourceURL",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UkmRecorderInterface_UpdateSourceURL_Params_Data* params =
          reinterpret_cast<internal::UkmRecorderInterface_UpdateSourceURL_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_source_id{};
      std::string p_url{};
      UkmRecorderInterface_UpdateSourceURL_ParamsDataView input_data_view(params, &serialization_context);
      
      p_source_id = input_data_view.source_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UkmRecorderInterface::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateSourceURL(
std::move(p_source_id), 
std::move(p_url));
      return true;
    }
  }
  return false;
}

// static
bool UkmRecorderInterfaceStubDispatch::AcceptWithResponder(
    UkmRecorderInterface* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUkmRecorderInterface_AddEntry_Name: {
      break;
    }
    case internal::kUkmRecorderInterface_UpdateSourceURL_Name: {
      break;
    }
  }
  return false;
}

bool UkmRecorderInterfaceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UkmRecorderInterface RequestValidator");

  switch (message->header()->name) {
    case internal::kUkmRecorderInterface_AddEntry_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UkmRecorderInterface_AddEntry_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUkmRecorderInterface_UpdateSourceURL_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UkmRecorderInterface_UpdateSourceURL_Params_Data>(
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
}  // namespace ukm

namespace mojo {


// static
bool StructTraits<::ukm::mojom::UkmEntry::DataView, ::ukm::mojom::UkmEntryPtr>::Read(
    ::ukm::mojom::UkmEntry::DataView input,
    ::ukm::mojom::UkmEntryPtr* output) {
  bool success = true;
  ::ukm::mojom::UkmEntryPtr result(::ukm::mojom::UkmEntry::New());
  
      result->source_id = input.source_id();
      result->event_hash = input.event_hash();
      if (!input.ReadMetrics(&result->metrics))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif