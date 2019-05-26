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

#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-blink.h"

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

#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace viz {
namespace mojom {
namespace blink {
CopyOutputRequest::CopyOutputRequest()
    : result_format(),
      scale_from(),
      scale_to(),
      source(),
      area(),
      result_selection(),
      result_sender() {}

CopyOutputRequest::CopyOutputRequest(
    ::viz::mojom::blink::CopyOutputResultFormat result_format_in,
    ::gfx::mojom::blink::Vector2dPtr scale_from_in,
    ::gfx::mojom::blink::Vector2dPtr scale_to_in,
    const base::Optional<base::UnguessableToken>& source_in,
    const base::Optional<::blink::WebRect>& area_in,
    const base::Optional<::blink::WebRect>& result_selection_in,
    CopyOutputResultSenderPtrInfo result_sender_in)
    : result_format(std::move(result_format_in)),
      scale_from(std::move(scale_from_in)),
      scale_to(std::move(scale_to_in)),
      source(std::move(source_in)),
      area(std::move(area_in)),
      result_selection(std::move(result_selection_in)),
      result_sender(std::move(result_sender_in)) {}

CopyOutputRequest::~CopyOutputRequest() = default;

bool CopyOutputRequest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char CopyOutputResultSender::Name_[] = "viz.mojom.CopyOutputResultSender";

CopyOutputResultSenderProxy::CopyOutputResultSenderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CopyOutputResultSenderProxy::SendResult(
    ::viz::mojom::blink::CopyOutputResultPtr in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CopyOutputResultSender::SendResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCopyOutputResultSender_SendResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CopyOutputResultSender_SendResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::viz::mojom::CopyOutputResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in CopyOutputResultSender.SendResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CopyOutputResultSender::Name_);
  message.set_method_name("SendResult");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CopyOutputResultSenderStubDispatch::Accept(
    CopyOutputResultSender* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCopyOutputResultSender_SendResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CopyOutputResultSender::SendResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CopyOutputResultSender_SendResult_Params_Data* params =
          reinterpret_cast<internal::CopyOutputResultSender_SendResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::viz::mojom::blink::CopyOutputResultPtr p_result{};
      CopyOutputResultSender_SendResult_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CopyOutputResultSender::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendResult(
std::move(p_result));
      return true;
    }
  }
  return false;
}

// static
bool CopyOutputResultSenderStubDispatch::AcceptWithResponder(
    CopyOutputResultSender* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCopyOutputResultSender_SendResult_Name: {
      break;
    }
  }
  return false;
}

bool CopyOutputResultSenderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CopyOutputResultSender RequestValidator");

  switch (message->header()->name) {
    case internal::kCopyOutputResultSender_SendResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CopyOutputResultSender_SendResult_Params_Data>(
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
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::CopyOutputRequest::DataView, ::viz::mojom::blink::CopyOutputRequestPtr>::Read(
    ::viz::mojom::blink::CopyOutputRequest::DataView input,
    ::viz::mojom::blink::CopyOutputRequestPtr* output) {
  bool success = true;
  ::viz::mojom::blink::CopyOutputRequestPtr result(::viz::mojom::blink::CopyOutputRequest::New());
  
      if (!input.ReadResultFormat(&result->result_format))
        success = false;
      if (!input.ReadScaleFrom(&result->scale_from))
        success = false;
      if (!input.ReadScaleTo(&result->scale_to))
        success = false;
      if (!input.ReadSource(&result->source))
        success = false;
      if (!input.ReadArea(&result->area))
        success = false;
      if (!input.ReadResultSelection(&result->result_selection))
        success = false;
      result->result_sender =
          input.TakeResultSender<decltype(result->result_sender)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif