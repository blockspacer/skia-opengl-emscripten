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

#include "third_party/blink/public/mojom/choosers/date_time_chooser.mojom-blink.h"

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

#include "third_party/blink/public/mojom/choosers/date_time_chooser.mojom-params-data.h"
#include "third_party/blink/public/mojom/choosers/date_time_chooser.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/choosers/date_time_chooser.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
DateTimeSuggestion::DateTimeSuggestion()
    : value(),
      localized_value(),
      label() {}

DateTimeSuggestion::DateTimeSuggestion(
    double value_in,
    const WTF::String& localized_value_in,
    const WTF::String& label_in)
    : value(std::move(value_in)),
      localized_value(std::move(localized_value_in)),
      label(std::move(label_in)) {}

DateTimeSuggestion::~DateTimeSuggestion() = default;

bool DateTimeSuggestion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DateTimeDialogValue::DateTimeDialogValue()
    : dialog_type(),
      dialog_value(),
      minimum(),
      maximum(),
      step(),
      suggestions() {}

DateTimeDialogValue::DateTimeDialogValue(
    ::ui::mojom::blink::TextInputType dialog_type_in,
    double dialog_value_in,
    double minimum_in,
    double maximum_in,
    double step_in,
    WTF::Vector<DateTimeSuggestionPtr> suggestions_in)
    : dialog_type(std::move(dialog_type_in)),
      dialog_value(std::move(dialog_value_in)),
      minimum(std::move(minimum_in)),
      maximum(std::move(maximum_in)),
      step(std::move(step_in)),
      suggestions(std::move(suggestions_in)) {}

DateTimeDialogValue::~DateTimeDialogValue() = default;

bool DateTimeDialogValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char DateTimeChooser::Name_[] = "blink.mojom.DateTimeChooser";

class DateTimeChooser_OpenDateTimeDialog_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DateTimeChooser_OpenDateTimeDialog_ForwardToCallback(
      DateTimeChooser::OpenDateTimeDialogCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DateTimeChooser::OpenDateTimeDialogCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DateTimeChooser_OpenDateTimeDialog_ForwardToCallback);
};

DateTimeChooserProxy::DateTimeChooserProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DateTimeChooserProxy::OpenDateTimeDialog(
    DateTimeDialogValuePtr in_value, OpenDateTimeDialogCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DateTimeChooser::OpenDateTimeDialog");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDateTimeChooser_OpenDateTimeDialog_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DateTimeChooser_OpenDateTimeDialog_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::blink::mojom::DateTimeDialogValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in DateTimeChooser.OpenDateTimeDialog request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DateTimeChooser::Name_);
  message.set_method_name("OpenDateTimeDialog");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DateTimeChooser_OpenDateTimeDialog_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class DateTimeChooser_OpenDateTimeDialog_ProxyToResponder {
 public:
  static DateTimeChooser::OpenDateTimeDialogCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DateTimeChooser_OpenDateTimeDialog_ProxyToResponder> proxy(
        new DateTimeChooser_OpenDateTimeDialog_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DateTimeChooser_OpenDateTimeDialog_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DateTimeChooser_OpenDateTimeDialog_ProxyToResponder() {
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
  DateTimeChooser_OpenDateTimeDialog_ProxyToResponder(
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
        << "DateTimeChooser::OpenDateTimeDialogCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, double in_dialog_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DateTimeChooser_OpenDateTimeDialog_ProxyToResponder);
};

bool DateTimeChooser_OpenDateTimeDialog_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::DateTimeChooser::OpenDateTimeDialogCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  double p_dialog_value{};
  DateTimeChooser_OpenDateTimeDialog_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  p_dialog_value = input_data_view.dialog_value();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        DateTimeChooser::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_dialog_value));
  return true;
}

void DateTimeChooser_OpenDateTimeDialog_ProxyToResponder::Run(
    bool in_success, double in_dialog_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDateTimeChooser_OpenDateTimeDialog_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  params->dialog_value = in_dialog_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::DateTimeChooser::OpenDateTimeDialogCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DateTimeChooser::Name_);
  message.set_method_name("OpenDateTimeDialog");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool DateTimeChooserStubDispatch::Accept(
    DateTimeChooser* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDateTimeChooser_OpenDateTimeDialog_Name: {
      break;
    }
  }
  return false;
}

// static
bool DateTimeChooserStubDispatch::AcceptWithResponder(
    DateTimeChooser* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDateTimeChooser_OpenDateTimeDialog_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DateTimeChooser::OpenDateTimeDialog",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::DateTimeChooser_OpenDateTimeDialog_Params_Data* params =
          reinterpret_cast<
              internal::DateTimeChooser_OpenDateTimeDialog_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DateTimeDialogValuePtr p_value{};
      DateTimeChooser_OpenDateTimeDialog_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DateTimeChooser::Name_, 0, false);
        return false;
      }
      DateTimeChooser::OpenDateTimeDialogCallback callback =
          DateTimeChooser_OpenDateTimeDialog_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenDateTimeDialog(
std::move(p_value), std::move(callback));
      return true;
    }
  }
  return false;
}

bool DateTimeChooserRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DateTimeChooser RequestValidator");

  switch (message->header()->name) {
    case internal::kDateTimeChooser_OpenDateTimeDialog_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DateTimeChooser_OpenDateTimeDialog_Params_Data>(
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

bool DateTimeChooserResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DateTimeChooser ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDateTimeChooser_OpenDateTimeDialog_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::blink::DateTimeSuggestion::DataView, ::blink::mojom::blink::DateTimeSuggestionPtr>::Read(
    ::blink::mojom::blink::DateTimeSuggestion::DataView input,
    ::blink::mojom::blink::DateTimeSuggestionPtr* output) {
  bool success = true;
  ::blink::mojom::blink::DateTimeSuggestionPtr result(::blink::mojom::blink::DateTimeSuggestion::New());
  
      result->value = input.value();
      if (!input.ReadLocalizedValue(&result->localized_value))
        success = false;
      if (!input.ReadLabel(&result->label))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::DateTimeDialogValue::DataView, ::blink::mojom::blink::DateTimeDialogValuePtr>::Read(
    ::blink::mojom::blink::DateTimeDialogValue::DataView input,
    ::blink::mojom::blink::DateTimeDialogValuePtr* output) {
  bool success = true;
  ::blink::mojom::blink::DateTimeDialogValuePtr result(::blink::mojom::blink::DateTimeDialogValue::New());
  
      if (!input.ReadDialogType(&result->dialog_type))
        success = false;
      result->dialog_value = input.dialog_value();
      result->minimum = input.minimum();
      result->maximum = input.maximum();
      result->step = input.step();
      if (!input.ReadSuggestions(&result->suggestions))
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