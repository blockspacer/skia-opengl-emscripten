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

#include "services/ws/public/mojom/ime/ime.mojom.h"

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

#include "services/ws/public/mojom/ime/ime.mojom-params-data.h"
#include "services/ws/public/mojom/ime/ime.mojom-shared-message-ids.h"

#include "services/ws/public/mojom/ime/ime.mojom-import-headers.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/text_direction_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/base/ime/mojo/ime_types_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/range/mojo/range_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
#endif
namespace ws {
namespace mojom {
CandidateWindowProperties::CandidateWindowProperties()
    : page_size(),
      vertical(),
      auxiliary_text(),
      auxiliary_text_visible(),
      cursor_position(),
      cursor_visible(),
      window_position() {}

CandidateWindowProperties::CandidateWindowProperties(
    int32_t page_size_in,
    bool vertical_in,
    const std::string& auxiliary_text_in,
    bool auxiliary_text_visible_in,
    int32_t cursor_position_in,
    bool cursor_visible_in,
    CandidateWindowPosition window_position_in)
    : page_size(std::move(page_size_in)),
      vertical(std::move(vertical_in)),
      auxiliary_text(std::move(auxiliary_text_in)),
      auxiliary_text_visible(std::move(auxiliary_text_visible_in)),
      cursor_position(std::move(cursor_position_in)),
      cursor_visible(std::move(cursor_visible_in)),
      window_position(std::move(window_position_in)) {}

CandidateWindowProperties::~CandidateWindowProperties() = default;

bool CandidateWindowProperties::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CandidateWindowEntry::CandidateWindowEntry()
    : value(),
      label(),
      annotation(),
      description_title(),
      description_body() {}

CandidateWindowEntry::CandidateWindowEntry(
    const base::string16& value_in,
    const base::string16& label_in,
    const base::string16& annotation_in,
    const base::string16& description_title_in,
    const base::string16& description_body_in)
    : value(std::move(value_in)),
      label(std::move(label_in)),
      annotation(std::move(annotation_in)),
      description_title(std::move(description_title_in)),
      description_body(std::move(description_body_in)) {}

CandidateWindowEntry::~CandidateWindowEntry() = default;

bool CandidateWindowEntry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TextInputState::TextInputState()
    : text_input_type(),
      text_input_mode(),
      text_direction(),
      text_input_flags() {}

TextInputState::TextInputState(
    ui::TextInputType text_input_type_in,
    ui::TextInputMode text_input_mode_in,
    base::i18n::TextDirection text_direction_in,
    int32_t text_input_flags_in)
    : text_input_type(std::move(text_input_type_in)),
      text_input_mode(std::move(text_input_mode_in)),
      text_direction(std::move(text_direction_in)),
      text_input_flags(std::move(text_input_flags_in)) {}

TextInputState::~TextInputState() = default;

bool TextInputState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TextInputClientData::TextInputClientData()
    : text_range(),
      text(),
      has_composition_text(),
      composition_text_range(),
      editable_selection_range(),
      edit_command_enabled() {}

TextInputClientData::TextInputClientData(
    const base::Optional<gfx::Range>& text_range_in,
    const base::Optional<base::string16>& text_in,
    bool has_composition_text_in,
    const base::Optional<gfx::Range>& composition_text_range_in,
    const base::Optional<gfx::Range>& editable_selection_range_in,
    const base::Optional<std::vector<bool>>& edit_command_enabled_in)
    : text_range(std::move(text_range_in)),
      text(std::move(text_in)),
      has_composition_text(std::move(has_composition_text_in)),
      composition_text_range(std::move(composition_text_range_in)),
      editable_selection_range(std::move(editable_selection_range_in)),
      edit_command_enabled(std::move(edit_command_enabled_in)) {}

TextInputClientData::~TextInputClientData() = default;

bool TextInputClientData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SessionDetails::SessionDetails()
    : state(),
      caret_bounds(),
      data(),
      focus_reason(),
      client_source_for_metrics(),
      should_do_learning() {}

SessionDetails::SessionDetails(
    TextInputStatePtr state_in,
    const gfx::Rect& caret_bounds_in,
    TextInputClientDataPtr data_in,
    ui::TextInputClient::FocusReason focus_reason_in,
    int64_t client_source_for_metrics_in,
    bool should_do_learning_in)
    : state(std::move(state_in)),
      caret_bounds(std::move(caret_bounds_in)),
      data(std::move(data_in)),
      focus_reason(std::move(focus_reason_in)),
      client_source_for_metrics(std::move(client_source_for_metrics_in)),
      should_do_learning(std::move(should_do_learning_in)) {}

SessionDetails::~SessionDetails() = default;

bool SessionDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char IMEDriver::Name_[] = "ws.mojom.IMEDriver";

IMEDriverProxy::IMEDriverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IMEDriverProxy::StartSession(
    InputMethodRequest in_input_method_request, TextInputClientPtr in_client, SessionDetailsPtr in_details) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IMEDriver::StartSession");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIMEDriver_StartSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::IMEDriver_StartSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ws::mojom::InputMethodRequestDataView>(
      in_input_method_request, &params->input_method_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->input_method_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid input_method_request in IMEDriver.StartSession request");
  mojo::internal::Serialize<::ws::mojom::TextInputClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in IMEDriver.StartSession request");
  typename decltype(params->details)::BaseType::BufferWriter
      details_writer;
  mojo::internal::Serialize<::ws::mojom::SessionDetailsDataView>(
      in_details, buffer, &details_writer, &serialization_context);
  params->details.Set(
      details_writer.is_null() ? nullptr : details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in IMEDriver.StartSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IMEDriver::Name_);
  message.set_method_name("StartSession");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IMEDriverStubDispatch::Accept(
    IMEDriver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIMEDriver_StartSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IMEDriver::StartSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IMEDriver_StartSession_Params_Data* params =
          reinterpret_cast<internal::IMEDriver_StartSession_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InputMethodRequest p_input_method_request{};
      TextInputClientPtr p_client{};
      SessionDetailsPtr p_details{};
      IMEDriver_StartSession_ParamsDataView input_data_view(params, &serialization_context);
      
      p_input_method_request =
          input_data_view.TakeInputMethodRequest<decltype(p_input_method_request)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IMEDriver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartSession(
std::move(p_input_method_request), 
std::move(p_client), 
std::move(p_details));
      return true;
    }
  }
  return false;
}

// static
bool IMEDriverStubDispatch::AcceptWithResponder(
    IMEDriver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIMEDriver_StartSession_Name: {
      break;
    }
  }
  return false;
}

bool IMEDriverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IMEDriver RequestValidator");

  switch (message->header()->name) {
    case internal::kIMEDriver_StartSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IMEDriver_StartSession_Params_Data>(
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

const char IMERegistrar::Name_[] = "ws.mojom.IMERegistrar";

IMERegistrarProxy::IMERegistrarProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IMERegistrarProxy::RegisterDriver(
    IMEDriverPtr in_driver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IMERegistrar::RegisterDriver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIMERegistrar_RegisterDriver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::IMERegistrar_RegisterDriver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ws::mojom::IMEDriverPtrDataView>(
      in_driver, &params->driver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->driver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid driver in IMERegistrar.RegisterDriver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IMERegistrar::Name_);
  message.set_method_name("RegisterDriver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IMERegistrarStubDispatch::Accept(
    IMERegistrar* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIMERegistrar_RegisterDriver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IMERegistrar::RegisterDriver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IMERegistrar_RegisterDriver_Params_Data* params =
          reinterpret_cast<internal::IMERegistrar_RegisterDriver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IMEDriverPtr p_driver{};
      IMERegistrar_RegisterDriver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_driver =
          input_data_view.TakeDriver<decltype(p_driver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IMERegistrar::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterDriver(
std::move(p_driver));
      return true;
    }
  }
  return false;
}

// static
bool IMERegistrarStubDispatch::AcceptWithResponder(
    IMERegistrar* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIMERegistrar_RegisterDriver_Name: {
      break;
    }
  }
  return false;
}

bool IMERegistrarRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IMERegistrar RequestValidator");

  switch (message->header()->name) {
    case internal::kIMERegistrar_RegisterDriver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IMERegistrar_RegisterDriver_Params_Data>(
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

const char InputMethod::Name_[] = "ws.mojom.InputMethod";

class InputMethod_ProcessKeyEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InputMethod_ProcessKeyEvent_ForwardToCallback(
      InputMethod::ProcessKeyEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InputMethod::ProcessKeyEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InputMethod_ProcessKeyEvent_ForwardToCallback);
};

InputMethodProxy::InputMethodProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InputMethodProxy::OnTextInputStateChanged(
    TextInputStatePtr in_text_input_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InputMethod::OnTextInputStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_OnTextInputStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::InputMethod_OnTextInputStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->text_input_state)::BaseType::BufferWriter
      text_input_state_writer;
  mojo::internal::Serialize<::ws::mojom::TextInputStateDataView>(
      in_text_input_state, buffer, &text_input_state_writer, &serialization_context);
  params->text_input_state.Set(
      text_input_state_writer.is_null() ? nullptr : text_input_state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text_input_state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text_input_state in InputMethod.OnTextInputStateChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputMethod::Name_);
  message.set_method_name("OnTextInputStateChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputMethodProxy::OnCaretBoundsChanged(
    const gfx::Rect& in_caret_bounds) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InputMethod::OnCaretBoundsChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_OnCaretBoundsChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::InputMethod_OnCaretBoundsChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->caret_bounds)::BaseType::BufferWriter
      caret_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_caret_bounds, buffer, &caret_bounds_writer, &serialization_context);
  params->caret_bounds.Set(
      caret_bounds_writer.is_null() ? nullptr : caret_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->caret_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null caret_bounds in InputMethod.OnCaretBoundsChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputMethod::Name_);
  message.set_method_name("OnCaretBoundsChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputMethodProxy::OnTextInputClientDataChanged(
    TextInputClientDataPtr in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InputMethod::OnTextInputClientDataChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_OnTextInputClientDataChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::InputMethod_OnTextInputClientDataChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::ws::mojom::TextInputClientDataDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in InputMethod.OnTextInputClientDataChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputMethod::Name_);
  message.set_method_name("OnTextInputClientDataChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputMethodProxy::ProcessKeyEvent(
    std::unique_ptr<ui::Event> in_key_event, ProcessKeyEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InputMethod::ProcessKeyEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_ProcessKeyEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::InputMethod_ProcessKeyEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_event)::BaseType::BufferWriter
      key_event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_key_event, buffer, &key_event_writer, &serialization_context);
  params->key_event.Set(
      key_event_writer.is_null() ? nullptr : key_event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_event in InputMethod.ProcessKeyEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputMethod::Name_);
  message.set_method_name("ProcessKeyEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InputMethod_ProcessKeyEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void InputMethodProxy::CancelComposition(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InputMethod::CancelComposition");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_CancelComposition_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::InputMethod_CancelComposition_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputMethod::Name_);
  message.set_method_name("CancelComposition");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InputMethodProxy::ShowVirtualKeyboardIfEnabled(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InputMethod::ShowVirtualKeyboardIfEnabled");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_ShowVirtualKeyboardIfEnabled_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputMethod::Name_);
  message.set_method_name("ShowVirtualKeyboardIfEnabled");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class InputMethod_ProcessKeyEvent_ProxyToResponder {
 public:
  static InputMethod::ProcessKeyEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InputMethod_ProcessKeyEvent_ProxyToResponder> proxy(
        new InputMethod_ProcessKeyEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InputMethod_ProcessKeyEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InputMethod_ProcessKeyEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  InputMethod_ProcessKeyEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "InputMethod::ProcessKeyEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_handled);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InputMethod_ProcessKeyEvent_ProxyToResponder);
};

bool InputMethod_ProcessKeyEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::InputMethod::ProcessKeyEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InputMethod_ProcessKeyEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InputMethod_ProcessKeyEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_handled{};
  InputMethod_ProcessKeyEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_handled = input_data_view.handled();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        InputMethod::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_handled));
  return true;
}

void InputMethod_ProcessKeyEvent_ProxyToResponder::Run(
    bool in_handled) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInputMethod_ProcessKeyEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::InputMethod_ProcessKeyEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->handled = in_handled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::InputMethod::ProcessKeyEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InputMethod::Name_);
  message.set_method_name("ProcessKeyEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool InputMethodStubDispatch::Accept(
    InputMethod* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInputMethod_OnTextInputStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InputMethod::OnTextInputStateChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputMethod_OnTextInputStateChanged_Params_Data* params =
          reinterpret_cast<internal::InputMethod_OnTextInputStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TextInputStatePtr p_text_input_state{};
      InputMethod_OnTextInputStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTextInputState(&p_text_input_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InputMethod::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTextInputStateChanged(
std::move(p_text_input_state));
      return true;
    }
    case internal::kInputMethod_OnCaretBoundsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InputMethod::OnCaretBoundsChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputMethod_OnCaretBoundsChanged_Params_Data* params =
          reinterpret_cast<internal::InputMethod_OnCaretBoundsChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Rect p_caret_bounds{};
      InputMethod_OnCaretBoundsChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCaretBounds(&p_caret_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InputMethod::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCaretBoundsChanged(
std::move(p_caret_bounds));
      return true;
    }
    case internal::kInputMethod_OnTextInputClientDataChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InputMethod::OnTextInputClientDataChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputMethod_OnTextInputClientDataChanged_Params_Data* params =
          reinterpret_cast<internal::InputMethod_OnTextInputClientDataChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TextInputClientDataPtr p_data{};
      InputMethod_OnTextInputClientDataChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InputMethod::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTextInputClientDataChanged(
std::move(p_data));
      return true;
    }
    case internal::kInputMethod_ProcessKeyEvent_Name: {
      break;
    }
    case internal::kInputMethod_CancelComposition_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InputMethod::CancelComposition",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputMethod_CancelComposition_Params_Data* params =
          reinterpret_cast<internal::InputMethod_CancelComposition_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InputMethod_CancelComposition_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InputMethod::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelComposition();
      return true;
    }
    case internal::kInputMethod_ShowVirtualKeyboardIfEnabled_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InputMethod::ShowVirtualKeyboardIfEnabled",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data* params =
          reinterpret_cast<internal::InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InputMethod_ShowVirtualKeyboardIfEnabled_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InputMethod::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ShowVirtualKeyboardIfEnabled();
      return true;
    }
  }
  return false;
}

// static
bool InputMethodStubDispatch::AcceptWithResponder(
    InputMethod* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInputMethod_OnTextInputStateChanged_Name: {
      break;
    }
    case internal::kInputMethod_OnCaretBoundsChanged_Name: {
      break;
    }
    case internal::kInputMethod_OnTextInputClientDataChanged_Name: {
      break;
    }
    case internal::kInputMethod_ProcessKeyEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InputMethod::ProcessKeyEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::InputMethod_ProcessKeyEvent_Params_Data* params =
          reinterpret_cast<
              internal::InputMethod_ProcessKeyEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<ui::Event> p_key_event{};
      InputMethod_ProcessKeyEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeyEvent(&p_key_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InputMethod::Name_, 3, false);
        return false;
      }
      InputMethod::ProcessKeyEventCallback callback =
          InputMethod_ProcessKeyEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ProcessKeyEvent(
std::move(p_key_event), std::move(callback));
      return true;
    }
    case internal::kInputMethod_CancelComposition_Name: {
      break;
    }
    case internal::kInputMethod_ShowVirtualKeyboardIfEnabled_Name: {
      break;
    }
  }
  return false;
}

bool InputMethodRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputMethod RequestValidator");

  switch (message->header()->name) {
    case internal::kInputMethod_OnTextInputStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_OnTextInputStateChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputMethod_OnCaretBoundsChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_OnCaretBoundsChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputMethod_OnTextInputClientDataChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_OnTextInputClientDataChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputMethod_ProcessKeyEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_ProcessKeyEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputMethod_CancelComposition_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_CancelComposition_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInputMethod_ShowVirtualKeyboardIfEnabled_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_ShowVirtualKeyboardIfEnabled_Params_Data>(
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

bool InputMethodResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InputMethod ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kInputMethod_ProcessKeyEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InputMethod_ProcessKeyEvent_ResponseParams_Data>(
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
const char TextInputClient::Name_[] = "ws.mojom.TextInputClient";

class TextInputClient_DispatchKeyEventPostIME_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TextInputClient_DispatchKeyEventPostIME_ForwardToCallback(
      TextInputClient::DispatchKeyEventPostIMECallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TextInputClient::DispatchKeyEventPostIMECallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TextInputClient_DispatchKeyEventPostIME_ForwardToCallback);
};

TextInputClientProxy::TextInputClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TextInputClientProxy::SetCompositionText(
    const ui::CompositionText& in_composition) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::SetCompositionText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_SetCompositionText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_SetCompositionText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->composition)::BaseType::BufferWriter
      composition_writer;
  mojo::internal::Serialize<::ui::mojom::CompositionTextDataView>(
      in_composition, buffer, &composition_writer, &serialization_context);
  params->composition.Set(
      composition_writer.is_null() ? nullptr : composition_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->composition.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null composition in TextInputClient.SetCompositionText request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("SetCompositionText");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::ConfirmCompositionText(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::ConfirmCompositionText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_ConfirmCompositionText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_ConfirmCompositionText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("ConfirmCompositionText");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::ClearCompositionText(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::ClearCompositionText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_ClearCompositionText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_ClearCompositionText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("ClearCompositionText");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::InsertText(
    const base::string16& in_text) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::InsertText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_InsertText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_InsertText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->text)::BaseType::BufferWriter
      text_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_text, buffer, &text_writer, &serialization_context);
  params->text.Set(
      text_writer.is_null() ? nullptr : text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in TextInputClient.InsertText request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("InsertText");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::InsertChar(
    std::unique_ptr<ui::Event> in_event) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::InsertChar");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_InsertChar_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_InsertChar_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in TextInputClient.InsertChar request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("InsertChar");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::DispatchKeyEventPostIME(
    std::unique_ptr<ui::Event> in_event, DispatchKeyEventPostIMECallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::DispatchKeyEventPostIME");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_DispatchKeyEventPostIME_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_DispatchKeyEventPostIME_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in TextInputClient.DispatchKeyEventPostIME request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("DispatchKeyEventPostIME");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TextInputClient_DispatchKeyEventPostIME_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TextInputClientProxy::EnsureCaretNotInRect(
    const gfx::Rect& in_rect) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::EnsureCaretNotInRect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_EnsureCaretNotInRect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_EnsureCaretNotInRect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->rect)::BaseType::BufferWriter
      rect_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_rect, buffer, &rect_writer, &serialization_context);
  params->rect.Set(
      rect_writer.is_null() ? nullptr : rect_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rect.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rect in TextInputClient.EnsureCaretNotInRect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("EnsureCaretNotInRect");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::SetEditableSelectionRange(
    const gfx::Range& in_range) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::SetEditableSelectionRange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_SetEditableSelectionRange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_SetEditableSelectionRange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->range)::BaseType::BufferWriter
      range_writer;
  mojo::internal::Serialize<::gfx::mojom::RangeDataView>(
      in_range, buffer, &range_writer, &serialization_context);
  params->range.Set(
      range_writer.is_null() ? nullptr : range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null range in TextInputClient.SetEditableSelectionRange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("SetEditableSelectionRange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::DeleteRange(
    const gfx::Range& in_range) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::DeleteRange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_DeleteRange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_DeleteRange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->range)::BaseType::BufferWriter
      range_writer;
  mojo::internal::Serialize<::gfx::mojom::RangeDataView>(
      in_range, buffer, &range_writer, &serialization_context);
  params->range.Set(
      range_writer.is_null() ? nullptr : range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null range in TextInputClient.DeleteRange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("DeleteRange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::OnInputMethodChanged(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::OnInputMethodChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_OnInputMethodChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_OnInputMethodChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("OnInputMethodChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::ChangeTextDirectionAndLayoutAlignment(
    base::i18n::TextDirection in_direction) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::ChangeTextDirectionAndLayoutAlignment");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_ChangeTextDirectionAndLayoutAlignment_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::TextDirection>(
      in_direction, &params->direction);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("ChangeTextDirectionAndLayoutAlignment");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TextInputClientProxy::ExtendSelectionAndDelete(
    uint32_t in_before, uint32_t in_after) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::ExtendSelectionAndDelete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_ExtendSelectionAndDelete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_ExtendSelectionAndDelete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->before = in_before;
  params->after = in_after;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("ExtendSelectionAndDelete");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class TextInputClient_DispatchKeyEventPostIME_ProxyToResponder {
 public:
  static TextInputClient::DispatchKeyEventPostIMECallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TextInputClient_DispatchKeyEventPostIME_ProxyToResponder> proxy(
        new TextInputClient_DispatchKeyEventPostIME_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TextInputClient_DispatchKeyEventPostIME_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TextInputClient_DispatchKeyEventPostIME_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  TextInputClient_DispatchKeyEventPostIME_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "TextInputClient::DispatchKeyEventPostIMECallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_handled, bool in_stopped_propagation);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TextInputClient_DispatchKeyEventPostIME_ProxyToResponder);
};

bool TextInputClient_DispatchKeyEventPostIME_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TextInputClient::DispatchKeyEventPostIMECallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_handled{};
  bool p_stopped_propagation{};
  TextInputClient_DispatchKeyEventPostIME_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_handled = input_data_view.handled();
  p_stopped_propagation = input_data_view.stopped_propagation();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TextInputClient::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_handled), 
std::move(p_stopped_propagation));
  return true;
}

void TextInputClient_DispatchKeyEventPostIME_ProxyToResponder::Run(
    bool in_handled, bool in_stopped_propagation) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextInputClient_DispatchKeyEventPostIME_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->handled = in_handled;
  params->stopped_propagation = in_stopped_propagation;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::DispatchKeyEventPostIMECallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextInputClient::Name_);
  message.set_method_name("DispatchKeyEventPostIME");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool TextInputClientStubDispatch::Accept(
    TextInputClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTextInputClient_SetCompositionText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::SetCompositionText",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_SetCompositionText_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_SetCompositionText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::CompositionText p_composition{};
      TextInputClient_SetCompositionText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadComposition(&p_composition))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCompositionText(
std::move(p_composition));
      return true;
    }
    case internal::kTextInputClient_ConfirmCompositionText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::ConfirmCompositionText",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_ConfirmCompositionText_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_ConfirmCompositionText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TextInputClient_ConfirmCompositionText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ConfirmCompositionText();
      return true;
    }
    case internal::kTextInputClient_ClearCompositionText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::ClearCompositionText",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_ClearCompositionText_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_ClearCompositionText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TextInputClient_ClearCompositionText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearCompositionText();
      return true;
    }
    case internal::kTextInputClient_InsertText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::InsertText",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_InsertText_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_InsertText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_text{};
      TextInputClient_InsertText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadText(&p_text))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InsertText(
std::move(p_text));
      return true;
    }
    case internal::kTextInputClient_InsertChar_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::InsertChar",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_InsertChar_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_InsertChar_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<ui::Event> p_event{};
      TextInputClient_InsertChar_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InsertChar(
std::move(p_event));
      return true;
    }
    case internal::kTextInputClient_DispatchKeyEventPostIME_Name: {
      break;
    }
    case internal::kTextInputClient_EnsureCaretNotInRect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::EnsureCaretNotInRect",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_EnsureCaretNotInRect_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_EnsureCaretNotInRect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Rect p_rect{};
      TextInputClient_EnsureCaretNotInRect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRect(&p_rect))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnsureCaretNotInRect(
std::move(p_rect));
      return true;
    }
    case internal::kTextInputClient_SetEditableSelectionRange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::SetEditableSelectionRange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_SetEditableSelectionRange_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_SetEditableSelectionRange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Range p_range{};
      TextInputClient_SetEditableSelectionRange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRange(&p_range))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetEditableSelectionRange(
std::move(p_range));
      return true;
    }
    case internal::kTextInputClient_DeleteRange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::DeleteRange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_DeleteRange_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_DeleteRange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Range p_range{};
      TextInputClient_DeleteRange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRange(&p_range))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteRange(
std::move(p_range));
      return true;
    }
    case internal::kTextInputClient_OnInputMethodChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::OnInputMethodChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_OnInputMethodChanged_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_OnInputMethodChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TextInputClient_OnInputMethodChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnInputMethodChanged();
      return true;
    }
    case internal::kTextInputClient_ChangeTextDirectionAndLayoutAlignment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::ChangeTextDirectionAndLayoutAlignment",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::i18n::TextDirection p_direction{};
      TextInputClient_ChangeTextDirectionAndLayoutAlignment_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDirection(&p_direction))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ChangeTextDirectionAndLayoutAlignment(
std::move(p_direction));
      return true;
    }
    case internal::kTextInputClient_ExtendSelectionAndDelete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::ExtendSelectionAndDelete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextInputClient_ExtendSelectionAndDelete_Params_Data* params =
          reinterpret_cast<internal::TextInputClient_ExtendSelectionAndDelete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_before{};
      uint32_t p_after{};
      TextInputClient_ExtendSelectionAndDelete_ParamsDataView input_data_view(params, &serialization_context);
      
      p_before = input_data_view.before();
      p_after = input_data_view.after();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 11, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ExtendSelectionAndDelete(
std::move(p_before), 
std::move(p_after));
      return true;
    }
  }
  return false;
}

// static
bool TextInputClientStubDispatch::AcceptWithResponder(
    TextInputClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTextInputClient_SetCompositionText_Name: {
      break;
    }
    case internal::kTextInputClient_ConfirmCompositionText_Name: {
      break;
    }
    case internal::kTextInputClient_ClearCompositionText_Name: {
      break;
    }
    case internal::kTextInputClient_InsertText_Name: {
      break;
    }
    case internal::kTextInputClient_InsertChar_Name: {
      break;
    }
    case internal::kTextInputClient_DispatchKeyEventPostIME_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextInputClient::DispatchKeyEventPostIME",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TextInputClient_DispatchKeyEventPostIME_Params_Data* params =
          reinterpret_cast<
              internal::TextInputClient_DispatchKeyEventPostIME_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<ui::Event> p_event{};
      TextInputClient_DispatchKeyEventPostIME_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextInputClient::Name_, 5, false);
        return false;
      }
      TextInputClient::DispatchKeyEventPostIMECallback callback =
          TextInputClient_DispatchKeyEventPostIME_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchKeyEventPostIME(
std::move(p_event), std::move(callback));
      return true;
    }
    case internal::kTextInputClient_EnsureCaretNotInRect_Name: {
      break;
    }
    case internal::kTextInputClient_SetEditableSelectionRange_Name: {
      break;
    }
    case internal::kTextInputClient_DeleteRange_Name: {
      break;
    }
    case internal::kTextInputClient_OnInputMethodChanged_Name: {
      break;
    }
    case internal::kTextInputClient_ChangeTextDirectionAndLayoutAlignment_Name: {
      break;
    }
    case internal::kTextInputClient_ExtendSelectionAndDelete_Name: {
      break;
    }
  }
  return false;
}

bool TextInputClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TextInputClient RequestValidator");

  switch (message->header()->name) {
    case internal::kTextInputClient_SetCompositionText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_SetCompositionText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_ConfirmCompositionText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_ConfirmCompositionText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_ClearCompositionText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_ClearCompositionText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_InsertText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_InsertText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_InsertChar_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_InsertChar_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_DispatchKeyEventPostIME_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_DispatchKeyEventPostIME_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_EnsureCaretNotInRect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_EnsureCaretNotInRect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_SetEditableSelectionRange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_SetEditableSelectionRange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_DeleteRange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_DeleteRange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_OnInputMethodChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_OnInputMethodChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_ChangeTextDirectionAndLayoutAlignment_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_ChangeTextDirectionAndLayoutAlignment_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTextInputClient_ExtendSelectionAndDelete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_ExtendSelectionAndDelete_Params_Data>(
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

bool TextInputClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TextInputClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTextInputClient_DispatchKeyEventPostIME_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextInputClient_DispatchKeyEventPostIME_ResponseParams_Data>(
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


// static
bool StructTraits<::ws::mojom::CandidateWindowProperties::DataView, ::ws::mojom::CandidateWindowPropertiesPtr>::Read(
    ::ws::mojom::CandidateWindowProperties::DataView input,
    ::ws::mojom::CandidateWindowPropertiesPtr* output) {
  bool success = true;
  ::ws::mojom::CandidateWindowPropertiesPtr result(::ws::mojom::CandidateWindowProperties::New());
  
      result->page_size = input.page_size();
      result->vertical = input.vertical();
      if (!input.ReadAuxiliaryText(&result->auxiliary_text))
        success = false;
      result->auxiliary_text_visible = input.auxiliary_text_visible();
      result->cursor_position = input.cursor_position();
      result->cursor_visible = input.cursor_visible();
      if (!input.ReadWindowPosition(&result->window_position))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ws::mojom::CandidateWindowEntry::DataView, ::ws::mojom::CandidateWindowEntryPtr>::Read(
    ::ws::mojom::CandidateWindowEntry::DataView input,
    ::ws::mojom::CandidateWindowEntryPtr* output) {
  bool success = true;
  ::ws::mojom::CandidateWindowEntryPtr result(::ws::mojom::CandidateWindowEntry::New());
  
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadLabel(&result->label))
        success = false;
      if (!input.ReadAnnotation(&result->annotation))
        success = false;
      if (!input.ReadDescriptionTitle(&result->description_title))
        success = false;
      if (!input.ReadDescriptionBody(&result->description_body))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ws::mojom::TextInputState::DataView, ::ws::mojom::TextInputStatePtr>::Read(
    ::ws::mojom::TextInputState::DataView input,
    ::ws::mojom::TextInputStatePtr* output) {
  bool success = true;
  ::ws::mojom::TextInputStatePtr result(::ws::mojom::TextInputState::New());
  
      if (!input.ReadTextInputType(&result->text_input_type))
        success = false;
      if (!input.ReadTextInputMode(&result->text_input_mode))
        success = false;
      if (!input.ReadTextDirection(&result->text_direction))
        success = false;
      result->text_input_flags = input.text_input_flags();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ws::mojom::TextInputClientData::DataView, ::ws::mojom::TextInputClientDataPtr>::Read(
    ::ws::mojom::TextInputClientData::DataView input,
    ::ws::mojom::TextInputClientDataPtr* output) {
  bool success = true;
  ::ws::mojom::TextInputClientDataPtr result(::ws::mojom::TextInputClientData::New());
  
      if (!input.ReadTextRange(&result->text_range))
        success = false;
      if (!input.ReadText(&result->text))
        success = false;
      result->has_composition_text = input.has_composition_text();
      if (!input.ReadCompositionTextRange(&result->composition_text_range))
        success = false;
      if (!input.ReadEditableSelectionRange(&result->editable_selection_range))
        success = false;
      if (!input.ReadEditCommandEnabled(&result->edit_command_enabled))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ws::mojom::SessionDetails::DataView, ::ws::mojom::SessionDetailsPtr>::Read(
    ::ws::mojom::SessionDetails::DataView input,
    ::ws::mojom::SessionDetailsPtr* output) {
  bool success = true;
  ::ws::mojom::SessionDetailsPtr result(::ws::mojom::SessionDetails::New());
  
      if (!input.ReadState(&result->state))
        success = false;
      if (!input.ReadCaretBounds(&result->caret_bounds))
        success = false;
      if (!input.ReadData(&result->data))
        success = false;
      if (!input.ReadFocusReason(&result->focus_reason))
        success = false;
      result->client_source_for_metrics = input.client_source_for_metrics();
      result->should_do_learning = input.should_do_learning();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif