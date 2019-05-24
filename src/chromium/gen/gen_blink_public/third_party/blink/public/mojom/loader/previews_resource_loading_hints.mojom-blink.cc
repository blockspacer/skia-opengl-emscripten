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

#include "third_party/blink/public/mojom/loader/previews_resource_loading_hints.mojom-blink.h"

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

#include "third_party/blink/public/mojom/loader/previews_resource_loading_hints.mojom-params-data.h"
#include "third_party/blink/public/mojom/loader/previews_resource_loading_hints.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/loader/previews_resource_loading_hints.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
PreviewsResourceLoadingHints::PreviewsResourceLoadingHints()
    : ukm_source_id(),
      subresources_to_block() {}

PreviewsResourceLoadingHints::PreviewsResourceLoadingHints(
    int64_t ukm_source_id_in,
    const WTF::Vector<WTF::String>& subresources_to_block_in)
    : ukm_source_id(std::move(ukm_source_id_in)),
      subresources_to_block(std::move(subresources_to_block_in)) {}

PreviewsResourceLoadingHints::~PreviewsResourceLoadingHints() = default;

bool PreviewsResourceLoadingHints::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PreviewsResourceLoadingHintsReceiver::Name_[] = "blink.mojom.PreviewsResourceLoadingHintsReceiver";

PreviewsResourceLoadingHintsReceiverProxy::PreviewsResourceLoadingHintsReceiverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PreviewsResourceLoadingHintsReceiverProxy::SetResourceLoadingHints(
    PreviewsResourceLoadingHintsPtr in_previews_resource_loading_hints) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PreviewsResourceLoadingHintsReceiver::SetResourceLoadingHints");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPreviewsResourceLoadingHintsReceiver_SetResourceLoadingHints_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PreviewsResourceLoadingHintsReceiver_SetResourceLoadingHints_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->previews_resource_loading_hints)::BaseType::BufferWriter
      previews_resource_loading_hints_writer;
  mojo::internal::Serialize<::blink::mojom::PreviewsResourceLoadingHintsDataView>(
      in_previews_resource_loading_hints, buffer, &previews_resource_loading_hints_writer, &serialization_context);
  params->previews_resource_loading_hints.Set(
      previews_resource_loading_hints_writer.is_null() ? nullptr : previews_resource_loading_hints_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->previews_resource_loading_hints.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null previews_resource_loading_hints in PreviewsResourceLoadingHintsReceiver.SetResourceLoadingHints request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PreviewsResourceLoadingHintsReceiver::Name_);
  message.set_method_name("SetResourceLoadingHints");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PreviewsResourceLoadingHintsReceiverStubDispatch::Accept(
    PreviewsResourceLoadingHintsReceiver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPreviewsResourceLoadingHintsReceiver_SetResourceLoadingHints_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PreviewsResourceLoadingHintsReceiver::SetResourceLoadingHints",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PreviewsResourceLoadingHintsReceiver_SetResourceLoadingHints_Params_Data* params =
          reinterpret_cast<internal::PreviewsResourceLoadingHintsReceiver_SetResourceLoadingHints_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PreviewsResourceLoadingHintsPtr p_previews_resource_loading_hints{};
      PreviewsResourceLoadingHintsReceiver_SetResourceLoadingHints_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPreviewsResourceLoadingHints(&p_previews_resource_loading_hints))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PreviewsResourceLoadingHintsReceiver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetResourceLoadingHints(
std::move(p_previews_resource_loading_hints));
      return true;
    }
  }
  return false;
}

// static
bool PreviewsResourceLoadingHintsReceiverStubDispatch::AcceptWithResponder(
    PreviewsResourceLoadingHintsReceiver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPreviewsResourceLoadingHintsReceiver_SetResourceLoadingHints_Name: {
      break;
    }
  }
  return false;
}

bool PreviewsResourceLoadingHintsReceiverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PreviewsResourceLoadingHintsReceiver RequestValidator");

  switch (message->header()->name) {
    case internal::kPreviewsResourceLoadingHintsReceiver_SetResourceLoadingHints_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PreviewsResourceLoadingHintsReceiver_SetResourceLoadingHints_Params_Data>(
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
bool StructTraits<::blink::mojom::blink::PreviewsResourceLoadingHints::DataView, ::blink::mojom::blink::PreviewsResourceLoadingHintsPtr>::Read(
    ::blink::mojom::blink::PreviewsResourceLoadingHints::DataView input,
    ::blink::mojom::blink::PreviewsResourceLoadingHintsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PreviewsResourceLoadingHintsPtr result(::blink::mojom::blink::PreviewsResourceLoadingHints::New());
  
      result->ukm_source_id = input.ukm_source_id();
      if (!input.ReadSubresourcesToBlock(&result->subresources_to_block))
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