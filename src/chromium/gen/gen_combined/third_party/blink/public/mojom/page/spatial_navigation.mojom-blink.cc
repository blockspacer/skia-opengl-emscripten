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

#include "third_party/blink/public/mojom/page/spatial_navigation.mojom-blink.h"

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

#include "third_party/blink/public/mojom/page/spatial_navigation.mojom-params-data.h"
#include "third_party/blink/public/mojom/page/spatial_navigation.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/page/spatial_navigation.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
SpatialNavigationState::SpatialNavigationState()
    : can_exit_focus(),
      can_select_element(),
      has_next_form_element(),
      has_default_video_controls() {}

SpatialNavigationState::SpatialNavigationState(
    bool can_exit_focus_in,
    bool can_select_element_in,
    bool has_next_form_element_in,
    bool has_default_video_controls_in)
    : can_exit_focus(std::move(can_exit_focus_in)),
      can_select_element(std::move(can_select_element_in)),
      has_next_form_element(std::move(has_next_form_element_in)),
      has_default_video_controls(std::move(has_default_video_controls_in)) {}

SpatialNavigationState::~SpatialNavigationState() = default;
size_t SpatialNavigationState::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->can_exit_focus);
  seed = mojo::internal::WTFHash(seed, this->can_select_element);
  seed = mojo::internal::WTFHash(seed, this->has_next_form_element);
  seed = mojo::internal::WTFHash(seed, this->has_default_video_controls);
  return seed;
}

bool SpatialNavigationState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SpatialNavigationHost::Name_[] = "blink.mojom.SpatialNavigationHost";

SpatialNavigationHostProxy::SpatialNavigationHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SpatialNavigationHostProxy::SpatialNavigationStateChanged(
    SpatialNavigationStatePtr in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SpatialNavigationHost::SpatialNavigationStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSpatialNavigationHost_SpatialNavigationStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SpatialNavigationHost_SpatialNavigationStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::blink::mojom::SpatialNavigationStateDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SpatialNavigationHost::Name_);
  message.set_method_name("SpatialNavigationStateChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SpatialNavigationHostStubDispatch::Accept(
    SpatialNavigationHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSpatialNavigationHost_SpatialNavigationStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SpatialNavigationHost::SpatialNavigationStateChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SpatialNavigationHost_SpatialNavigationStateChanged_Params_Data* params =
          reinterpret_cast<internal::SpatialNavigationHost_SpatialNavigationStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SpatialNavigationStatePtr p_state{};
      SpatialNavigationHost_SpatialNavigationStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SpatialNavigationHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SpatialNavigationStateChanged(
std::move(p_state));
      return true;
    }
  }
  return false;
}

// static
bool SpatialNavigationHostStubDispatch::AcceptWithResponder(
    SpatialNavigationHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSpatialNavigationHost_SpatialNavigationStateChanged_Name: {
      break;
    }
  }
  return false;
}

bool SpatialNavigationHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SpatialNavigationHost RequestValidator");

  switch (message->header()->name) {
    case internal::kSpatialNavigationHost_SpatialNavigationStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SpatialNavigationHost_SpatialNavigationStateChanged_Params_Data>(
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
bool StructTraits<::blink::mojom::blink::SpatialNavigationState::DataView, ::blink::mojom::blink::SpatialNavigationStatePtr>::Read(
    ::blink::mojom::blink::SpatialNavigationState::DataView input,
    ::blink::mojom::blink::SpatialNavigationStatePtr* output) {
  bool success = true;
  ::blink::mojom::blink::SpatialNavigationStatePtr result(::blink::mojom::blink::SpatialNavigationState::New());
  
      result->can_exit_focus = input.can_exit_focus();
      result->can_select_element = input.can_select_element();
      result->has_next_form_element = input.has_next_form_element();
      result->has_default_video_controls = input.has_default_video_controls();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif