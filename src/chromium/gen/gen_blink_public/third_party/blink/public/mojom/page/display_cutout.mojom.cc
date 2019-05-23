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

#include "third_party/blink/public/mojom/page/display_cutout.mojom.h"

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

#include "third_party/blink/public/mojom/page/display_cutout.mojom-params-data.h"
#include "third_party/blink/public/mojom/page/display_cutout.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/page/display_cutout.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_JUMBO_H_
#endif
namespace blink {
namespace mojom {
DisplayCutoutSafeArea::DisplayCutoutSafeArea()
    : top(),
      left(),
      bottom(),
      right() {}

DisplayCutoutSafeArea::DisplayCutoutSafeArea(
    int32_t top_in,
    int32_t left_in,
    int32_t bottom_in,
    int32_t right_in)
    : top(std::move(top_in)),
      left(std::move(left_in)),
      bottom(std::move(bottom_in)),
      right(std::move(right_in)) {}

DisplayCutoutSafeArea::~DisplayCutoutSafeArea() = default;
size_t DisplayCutoutSafeArea::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->top);
  seed = mojo::internal::Hash(seed, this->left);
  seed = mojo::internal::Hash(seed, this->bottom);
  seed = mojo::internal::Hash(seed, this->right);
  return seed;
}

bool DisplayCutoutSafeArea::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char DisplayCutoutHost::Name_[] = "blink.mojom.DisplayCutoutHost";

DisplayCutoutHostProxy::DisplayCutoutHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DisplayCutoutHostProxy::NotifyViewportFitChanged(
    ViewportFit in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DisplayCutoutHost::NotifyViewportFitChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayCutoutHost_NotifyViewportFitChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DisplayCutoutHost_NotifyViewportFitChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ViewportFit>(
      in_value, &params->value);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DisplayCutoutHost::Name_);
  message.set_method_name("NotifyViewportFitChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DisplayCutoutHostStubDispatch::Accept(
    DisplayCutoutHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDisplayCutoutHost_NotifyViewportFitChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DisplayCutoutHost::NotifyViewportFitChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayCutoutHost_NotifyViewportFitChanged_Params_Data* params =
          reinterpret_cast<internal::DisplayCutoutHost_NotifyViewportFitChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ViewportFit p_value{};
      DisplayCutoutHost_NotifyViewportFitChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DisplayCutoutHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NotifyViewportFitChanged(
std::move(p_value));
      return true;
    }
  }
  return false;
}

// static
bool DisplayCutoutHostStubDispatch::AcceptWithResponder(
    DisplayCutoutHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDisplayCutoutHost_NotifyViewportFitChanged_Name: {
      break;
    }
  }
  return false;
}

bool DisplayCutoutHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DisplayCutoutHost RequestValidator");

  switch (message->header()->name) {
    case internal::kDisplayCutoutHost_NotifyViewportFitChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayCutoutHost_NotifyViewportFitChanged_Params_Data>(
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

const char DisplayCutoutClient::Name_[] = "blink.mojom.DisplayCutoutClient";

DisplayCutoutClientProxy::DisplayCutoutClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DisplayCutoutClientProxy::SetSafeArea(
    DisplayCutoutSafeAreaPtr in_safe_area) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DisplayCutoutClient::SetSafeArea");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDisplayCutoutClient_SetSafeArea_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DisplayCutoutClient_SetSafeArea_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->safe_area)::BaseType::BufferWriter
      safe_area_writer;
  mojo::internal::Serialize<::blink::mojom::DisplayCutoutSafeAreaDataView>(
      in_safe_area, buffer, &safe_area_writer, &serialization_context);
  params->safe_area.Set(
      safe_area_writer.is_null() ? nullptr : safe_area_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->safe_area.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null safe_area in DisplayCutoutClient.SetSafeArea request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DisplayCutoutClient::Name_);
  message.set_method_name("SetSafeArea");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DisplayCutoutClientStubDispatch::Accept(
    DisplayCutoutClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDisplayCutoutClient_SetSafeArea_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DisplayCutoutClient::SetSafeArea",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DisplayCutoutClient_SetSafeArea_Params_Data* params =
          reinterpret_cast<internal::DisplayCutoutClient_SetSafeArea_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DisplayCutoutSafeAreaPtr p_safe_area{};
      DisplayCutoutClient_SetSafeArea_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSafeArea(&p_safe_area))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DisplayCutoutClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSafeArea(
std::move(p_safe_area));
      return true;
    }
  }
  return false;
}

// static
bool DisplayCutoutClientStubDispatch::AcceptWithResponder(
    DisplayCutoutClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDisplayCutoutClient_SetSafeArea_Name: {
      break;
    }
  }
  return false;
}

bool DisplayCutoutClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DisplayCutoutClient RequestValidator");

  switch (message->header()->name) {
    case internal::kDisplayCutoutClient_SetSafeArea_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DisplayCutoutClient_SetSafeArea_Params_Data>(
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
bool StructTraits<::blink::mojom::DisplayCutoutSafeArea::DataView, ::blink::mojom::DisplayCutoutSafeAreaPtr>::Read(
    ::blink::mojom::DisplayCutoutSafeArea::DataView input,
    ::blink::mojom::DisplayCutoutSafeAreaPtr* output) {
  bool success = true;
  ::blink::mojom::DisplayCutoutSafeAreaPtr result(::blink::mojom::DisplayCutoutSafeArea::New());
  
      result->top = input.top();
      result->left = input.left();
      result->bottom = input.bottom();
      result->right = input.right();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif