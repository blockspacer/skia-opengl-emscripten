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

#include "components/metrics/public/interfaces/single_sample_metrics.mojom.h"

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

#include "components/metrics/public/interfaces/single_sample_metrics.mojom-params-data.h"
#include "components/metrics/public/interfaces/single_sample_metrics.mojom-shared-message-ids.h"

#include "components/metrics/public/interfaces/single_sample_metrics.mojom-import-headers.h"


#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_JUMBO_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_JUMBO_H_
#endif
namespace metrics {
namespace mojom {
const char SingleSampleMetricsProvider::Name_[] = "metrics.mojom.SingleSampleMetricsProvider";

SingleSampleMetricsProviderProxy::SingleSampleMetricsProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SingleSampleMetricsProviderProxy::AcquireSingleSampleMetric(
    const std::string& in_histogram_name, int32_t in_min, int32_t in_max, uint32_t in_bucket_count, int32_t in_flags, SingleSampleMetricRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SingleSampleMetricsProvider::AcquireSingleSampleMetric");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::metrics::mojom::internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->histogram_name)::BaseType::BufferWriter
      histogram_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_histogram_name, buffer, &histogram_name_writer, &serialization_context);
  params->histogram_name.Set(
      histogram_name_writer.is_null() ? nullptr : histogram_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->histogram_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null histogram_name in SingleSampleMetricsProvider.AcquireSingleSampleMetric request");
  params->min = in_min;
  params->max = in_max;
  params->bucket_count = in_bucket_count;
  params->flags = in_flags;
  mojo::internal::Serialize<::metrics::mojom::SingleSampleMetricRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in SingleSampleMetricsProvider.AcquireSingleSampleMetric request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SingleSampleMetricsProvider::Name_);
  message.set_method_name("AcquireSingleSampleMetric");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SingleSampleMetricsProviderStubDispatch::Accept(
    SingleSampleMetricsProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SingleSampleMetricsProvider::AcquireSingleSampleMetric",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data* params =
          reinterpret_cast<internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_histogram_name{};
      int32_t p_min{};
      int32_t p_max{};
      uint32_t p_bucket_count{};
      int32_t p_flags{};
      SingleSampleMetricRequest p_request{};
      SingleSampleMetricsProvider_AcquireSingleSampleMetric_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHistogramName(&p_histogram_name))
        success = false;
      p_min = input_data_view.min();
      p_max = input_data_view.max();
      p_bucket_count = input_data_view.bucket_count();
      p_flags = input_data_view.flags();
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SingleSampleMetricsProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AcquireSingleSampleMetric(
std::move(p_histogram_name), 
std::move(p_min), 
std::move(p_max), 
std::move(p_bucket_count), 
std::move(p_flags), 
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool SingleSampleMetricsProviderStubDispatch::AcceptWithResponder(
    SingleSampleMetricsProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name: {
      break;
    }
  }
  return false;
}

bool SingleSampleMetricsProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SingleSampleMetricsProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data>(
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

const char SingleSampleMetric::Name_[] = "metrics.mojom.SingleSampleMetric";

SingleSampleMetricProxy::SingleSampleMetricProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SingleSampleMetricProxy::SetSample(
    int32_t in_sample) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SingleSampleMetric::SetSample");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSingleSampleMetric_SetSample_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::metrics::mojom::internal::SingleSampleMetric_SetSample_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->sample = in_sample;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SingleSampleMetric::Name_);
  message.set_method_name("SetSample");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SingleSampleMetricStubDispatch::Accept(
    SingleSampleMetric* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSingleSampleMetric_SetSample_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SingleSampleMetric::SetSample",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SingleSampleMetric_SetSample_Params_Data* params =
          reinterpret_cast<internal::SingleSampleMetric_SetSample_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_sample{};
      SingleSampleMetric_SetSample_ParamsDataView input_data_view(params, &serialization_context);
      
      p_sample = input_data_view.sample();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SingleSampleMetric::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSample(
std::move(p_sample));
      return true;
    }
  }
  return false;
}

// static
bool SingleSampleMetricStubDispatch::AcceptWithResponder(
    SingleSampleMetric* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSingleSampleMetric_SetSample_Name: {
      break;
    }
  }
  return false;
}

bool SingleSampleMetricRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SingleSampleMetric RequestValidator");

  switch (message->header()->name) {
    case internal::kSingleSampleMetric_SetSample_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SingleSampleMetric_SetSample_Params_Data>(
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
}  // namespace metrics

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif