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

#include "services/ws/public/mojom/screen_provider_observer.mojom.h"

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

#include "services/ws/public/mojom/screen_provider_observer.mojom-params-data.h"
#include "services/ws/public/mojom/screen_provider_observer.mojom-shared-message-ids.h"

#include "services/ws/public/mojom/screen_provider_observer.mojom-import-headers.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_JUMBO_H_
#include "ui/display/mojo/display_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace ws {
namespace mojom {
const char ScreenProviderObserver::Name_[] = "ws.mojom.ScreenProviderObserver";

ScreenProviderObserverProxy::ScreenProviderObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ScreenProviderObserverProxy::OnDisplaysChanged(
    std::vector<::ws::mojom::WsDisplayPtr> in_displays, int64_t in_primary_display_id, int64_t in_internal_display_id, int64_t in_display_id_for_new_windows) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ScreenProviderObserver::OnDisplaysChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kScreenProviderObserver_OnDisplaysChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->displays)::BaseType::BufferWriter
      displays_writer;
  const mojo::internal::ContainerValidateParams displays_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ws::mojom::WsDisplayDataView>>(
      in_displays, buffer, &displays_writer, &displays_validate_params,
      &serialization_context);
  params->displays.Set(
      displays_writer.is_null() ? nullptr : displays_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->displays.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null displays in ScreenProviderObserver.OnDisplaysChanged request");
  params->primary_display_id = in_primary_display_id;
  params->internal_display_id = in_internal_display_id;
  params->display_id_for_new_windows = in_display_id_for_new_windows;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ScreenProviderObserver::Name_);
  message.set_method_name("OnDisplaysChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ScreenProviderObserverStubDispatch::Accept(
    ScreenProviderObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kScreenProviderObserver_OnDisplaysChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ScreenProviderObserver::OnDisplaysChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data* params =
          reinterpret_cast<internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::ws::mojom::WsDisplayPtr> p_displays{};
      int64_t p_primary_display_id{};
      int64_t p_internal_display_id{};
      int64_t p_display_id_for_new_windows{};
      ScreenProviderObserver_OnDisplaysChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDisplays(&p_displays))
        success = false;
      p_primary_display_id = input_data_view.primary_display_id();
      p_internal_display_id = input_data_view.internal_display_id();
      p_display_id_for_new_windows = input_data_view.display_id_for_new_windows();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ScreenProviderObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDisplaysChanged(
std::move(p_displays), 
std::move(p_primary_display_id), 
std::move(p_internal_display_id), 
std::move(p_display_id_for_new_windows));
      return true;
    }
  }
  return false;
}

// static
bool ScreenProviderObserverStubDispatch::AcceptWithResponder(
    ScreenProviderObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kScreenProviderObserver_OnDisplaysChanged_Name: {
      break;
    }
  }
  return false;
}

bool ScreenProviderObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ScreenProviderObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kScreenProviderObserver_OnDisplaysChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data>(
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
}  // namespace ws

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif