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

#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-blink.h"

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

#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-params-data.h"
#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
DetectionArgs::DetectionArgs()
    : blink_workload_threshold(),
      private_footprint_threshold(),
      swap_threshold(),
      virtual_memory_thresold() {}

DetectionArgs::DetectionArgs(
    uint64_t blink_workload_threshold_in,
    uint64_t private_footprint_threshold_in,
    uint64_t swap_threshold_in,
    uint64_t virtual_memory_thresold_in)
    : blink_workload_threshold(std::move(blink_workload_threshold_in)),
      private_footprint_threshold(std::move(private_footprint_threshold_in)),
      swap_threshold(std::move(swap_threshold_in)),
      virtual_memory_thresold(std::move(virtual_memory_thresold_in)) {}

DetectionArgs::~DetectionArgs() = default;
size_t DetectionArgs::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->blink_workload_threshold);
  seed = mojo::internal::WTFHash(seed, this->private_footprint_threshold);
  seed = mojo::internal::WTFHash(seed, this->swap_threshold);
  seed = mojo::internal::WTFHash(seed, this->virtual_memory_thresold);
  return seed;
}

bool DetectionArgs::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char OomInterventionHost::Name_[] = "blink.mojom.OomInterventionHost";

OomInterventionHostProxy::OomInterventionHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void OomInterventionHostProxy::OnHighMemoryUsage(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::OomInterventionHost::OnHighMemoryUsage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOomInterventionHost_OnHighMemoryUsage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::OomInterventionHost_OnHighMemoryUsage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(OomInterventionHost::Name_);
  message.set_method_name("OnHighMemoryUsage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool OomInterventionHostStubDispatch::Accept(
    OomInterventionHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kOomInterventionHost_OnHighMemoryUsage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::OomInterventionHost::OnHighMemoryUsage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::OomInterventionHost_OnHighMemoryUsage_Params_Data* params =
          reinterpret_cast<internal::OomInterventionHost_OnHighMemoryUsage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      OomInterventionHost_OnHighMemoryUsage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            OomInterventionHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnHighMemoryUsage();
      return true;
    }
  }
  return false;
}

// static
bool OomInterventionHostStubDispatch::AcceptWithResponder(
    OomInterventionHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kOomInterventionHost_OnHighMemoryUsage_Name: {
      break;
    }
  }
  return false;
}

bool OomInterventionHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OomInterventionHost RequestValidator");

  switch (message->header()->name) {
    case internal::kOomInterventionHost_OnHighMemoryUsage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OomInterventionHost_OnHighMemoryUsage_Params_Data>(
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

const char OomIntervention::Name_[] = "blink.mojom.OomIntervention";

OomInterventionProxy::OomInterventionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void OomInterventionProxy::StartDetection(
    OomInterventionHostPtr in_host, DetectionArgsPtr in_detection_args, bool in_renderer_pause_enabled, bool in_navigate_ads_enabled, bool in_purge_v8_memory_enabled) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::OomIntervention::StartDetection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOomIntervention_StartDetection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::OomIntervention_StartDetection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::OomInterventionHostPtrDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host in OomIntervention.StartDetection request");
  typename decltype(params->detection_args)::BaseType::BufferWriter
      detection_args_writer;
  mojo::internal::Serialize<::blink::mojom::DetectionArgsDataView>(
      in_detection_args, buffer, &detection_args_writer, &serialization_context);
  params->detection_args.Set(
      detection_args_writer.is_null() ? nullptr : detection_args_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->detection_args.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null detection_args in OomIntervention.StartDetection request");
  params->renderer_pause_enabled = in_renderer_pause_enabled;
  params->navigate_ads_enabled = in_navigate_ads_enabled;
  params->purge_v8_memory_enabled = in_purge_v8_memory_enabled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(OomIntervention::Name_);
  message.set_method_name("StartDetection");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool OomInterventionStubDispatch::Accept(
    OomIntervention* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kOomIntervention_StartDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::OomIntervention::StartDetection",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::OomIntervention_StartDetection_Params_Data* params =
          reinterpret_cast<internal::OomIntervention_StartDetection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      OomInterventionHostPtr p_host{};
      DetectionArgsPtr p_detection_args{};
      bool p_renderer_pause_enabled{};
      bool p_navigate_ads_enabled{};
      bool p_purge_v8_memory_enabled{};
      OomIntervention_StartDetection_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      if (!input_data_view.ReadDetectionArgs(&p_detection_args))
        success = false;
      p_renderer_pause_enabled = input_data_view.renderer_pause_enabled();
      p_navigate_ads_enabled = input_data_view.navigate_ads_enabled();
      p_purge_v8_memory_enabled = input_data_view.purge_v8_memory_enabled();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            OomIntervention::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartDetection(
std::move(p_host), 
std::move(p_detection_args), 
std::move(p_renderer_pause_enabled), 
std::move(p_navigate_ads_enabled), 
std::move(p_purge_v8_memory_enabled));
      return true;
    }
  }
  return false;
}

// static
bool OomInterventionStubDispatch::AcceptWithResponder(
    OomIntervention* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kOomIntervention_StartDetection_Name: {
      break;
    }
  }
  return false;
}

bool OomInterventionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OomIntervention RequestValidator");

  switch (message->header()->name) {
    case internal::kOomIntervention_StartDetection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OomIntervention_StartDetection_Params_Data>(
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


// static
bool StructTraits<::blink::mojom::blink::DetectionArgs::DataView, ::blink::mojom::blink::DetectionArgsPtr>::Read(
    ::blink::mojom::blink::DetectionArgs::DataView input,
    ::blink::mojom::blink::DetectionArgsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::DetectionArgsPtr result(::blink::mojom::blink::DetectionArgs::New());
  
      result->blink_workload_threshold = input.blink_workload_threshold();
      result->private_footprint_threshold = input.private_footprint_threshold();
      result->swap_threshold = input.swap_threshold();
      result->virtual_memory_thresold = input.virtual_memory_thresold();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif