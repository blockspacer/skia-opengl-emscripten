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

#include "third_party/blink/public/mojom/loader/navigation_predictor.mojom.h"

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

#include "third_party/blink/public/mojom/loader/navigation_predictor.mojom-params-data.h"
#include "third_party/blink/public/mojom/loader/navigation_predictor.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/loader/navigation_predictor.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
AnchorElementMetrics::AnchorElementMetrics()
    : ratio_area(),
      ratio_visible_area(),
      ratio_distance_top_to_visible_top(),
      ratio_distance_center_to_visible_top(),
      ratio_distance_root_top(),
      ratio_distance_root_bottom(),
      is_in_iframe(),
      contains_image(),
      is_same_host(),
      is_url_incremented_by_one(),
      source_url(),
      target_url() {}

AnchorElementMetrics::AnchorElementMetrics(
    float ratio_area_in,
    float ratio_visible_area_in,
    float ratio_distance_top_to_visible_top_in,
    float ratio_distance_center_to_visible_top_in,
    float ratio_distance_root_top_in,
    float ratio_distance_root_bottom_in,
    bool is_in_iframe_in,
    bool contains_image_in,
    bool is_same_host_in,
    bool is_url_incremented_by_one_in,
    const GURL& source_url_in,
    const GURL& target_url_in)
    : ratio_area(std::move(ratio_area_in)),
      ratio_visible_area(std::move(ratio_visible_area_in)),
      ratio_distance_top_to_visible_top(std::move(ratio_distance_top_to_visible_top_in)),
      ratio_distance_center_to_visible_top(std::move(ratio_distance_center_to_visible_top_in)),
      ratio_distance_root_top(std::move(ratio_distance_root_top_in)),
      ratio_distance_root_bottom(std::move(ratio_distance_root_bottom_in)),
      is_in_iframe(std::move(is_in_iframe_in)),
      contains_image(std::move(contains_image_in)),
      is_same_host(std::move(is_same_host_in)),
      is_url_incremented_by_one(std::move(is_url_incremented_by_one_in)),
      source_url(std::move(source_url_in)),
      target_url(std::move(target_url_in)) {}

AnchorElementMetrics::~AnchorElementMetrics() = default;

bool AnchorElementMetrics::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char AnchorElementMetricsHost::Name_[] = "blink.mojom.AnchorElementMetricsHost";

AnchorElementMetricsHostProxy::AnchorElementMetricsHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AnchorElementMetricsHostProxy::ReportAnchorElementMetricsOnClick(
    AnchorElementMetricsPtr in_metrics) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AnchorElementMetricsHost::ReportAnchorElementMetricsOnClick");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metrics)::BaseType::BufferWriter
      metrics_writer;
  mojo::internal::Serialize<::blink::mojom::AnchorElementMetricsDataView>(
      in_metrics, buffer, &metrics_writer, &serialization_context);
  params->metrics.Set(
      metrics_writer.is_null() ? nullptr : metrics_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metrics.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metrics in AnchorElementMetricsHost.ReportAnchorElementMetricsOnClick request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AnchorElementMetricsHost::Name_);
  message.set_method_name("ReportAnchorElementMetricsOnClick");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AnchorElementMetricsHostProxy::ReportAnchorElementMetricsOnLoad(
    std::vector<AnchorElementMetricsPtr> in_metrics) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AnchorElementMetricsHost::ReportAnchorElementMetricsOnLoad");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metrics)::BaseType::BufferWriter
      metrics_writer;
  const mojo::internal::ContainerValidateParams metrics_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::AnchorElementMetricsDataView>>(
      in_metrics, buffer, &metrics_writer, &metrics_validate_params,
      &serialization_context);
  params->metrics.Set(
      metrics_writer.is_null() ? nullptr : metrics_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metrics.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metrics in AnchorElementMetricsHost.ReportAnchorElementMetricsOnLoad request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AnchorElementMetricsHost::Name_);
  message.set_method_name("ReportAnchorElementMetricsOnLoad");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AnchorElementMetricsHostStubDispatch::Accept(
    AnchorElementMetricsHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AnchorElementMetricsHost::ReportAnchorElementMetricsOnClick",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data* params =
          reinterpret_cast<internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AnchorElementMetricsPtr p_metrics{};
      AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMetrics(&p_metrics))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AnchorElementMetricsHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReportAnchorElementMetricsOnClick(
std::move(p_metrics));
      return true;
    }
    case internal::kAnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AnchorElementMetricsHost::ReportAnchorElementMetricsOnLoad",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data* params =
          reinterpret_cast<internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<AnchorElementMetricsPtr> p_metrics{};
      AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMetrics(&p_metrics))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AnchorElementMetricsHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReportAnchorElementMetricsOnLoad(
std::move(p_metrics));
      return true;
    }
  }
  return false;
}

// static
bool AnchorElementMetricsHostStubDispatch::AcceptWithResponder(
    AnchorElementMetricsHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Name: {
      break;
    }
    case internal::kAnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Name: {
      break;
    }
  }
  return false;
}

bool AnchorElementMetricsHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AnchorElementMetricsHost RequestValidator");

  switch (message->header()->name) {
    case internal::kAnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data>(
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


// static
bool StructTraits<::blink::mojom::AnchorElementMetrics::DataView, ::blink::mojom::AnchorElementMetricsPtr>::Read(
    ::blink::mojom::AnchorElementMetrics::DataView input,
    ::blink::mojom::AnchorElementMetricsPtr* output) {
  bool success = true;
  ::blink::mojom::AnchorElementMetricsPtr result(::blink::mojom::AnchorElementMetrics::New());
  
      result->ratio_area = input.ratio_area();
      result->ratio_visible_area = input.ratio_visible_area();
      result->ratio_distance_top_to_visible_top = input.ratio_distance_top_to_visible_top();
      result->ratio_distance_center_to_visible_top = input.ratio_distance_center_to_visible_top();
      result->ratio_distance_root_top = input.ratio_distance_root_top();
      result->ratio_distance_root_bottom = input.ratio_distance_root_bottom();
      result->is_in_iframe = input.is_in_iframe();
      result->contains_image = input.contains_image();
      result->is_same_host = input.is_same_host();
      result->is_url_incremented_by_one = input.is_url_incremented_by_one();
      if (!input.ReadSourceUrl(&result->source_url))
        success = false;
      if (!input.ReadTargetUrl(&result->target_url))
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