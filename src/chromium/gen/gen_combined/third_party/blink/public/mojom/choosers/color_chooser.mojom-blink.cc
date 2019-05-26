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

#include "third_party/blink/public/mojom/choosers/color_chooser.mojom-blink.h"

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

#include "third_party/blink/public/mojom/choosers/color_chooser.mojom-params-data.h"
#include "third_party/blink/public/mojom/choosers/color_chooser.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/choosers/color_chooser.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
ColorSuggestion::ColorSuggestion()
    : color(),
      label() {}

ColorSuggestion::ColorSuggestion(
    uint32_t color_in,
    const WTF::String& label_in)
    : color(std::move(color_in)),
      label(std::move(label_in)) {}

ColorSuggestion::~ColorSuggestion() = default;
size_t ColorSuggestion::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->color);
  seed = mojo::internal::WTFHash(seed, this->label);
  return seed;
}

bool ColorSuggestion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ColorChooserFactory::Name_[] = "blink.mojom.ColorChooserFactory";

ColorChooserFactoryProxy::ColorChooserFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ColorChooserFactoryProxy::OpenColorChooser(
    ColorChooserRequest in_chooser, ColorChooserClientPtr in_client, uint32_t in_color, WTF::Vector<ColorSuggestionPtr> in_suggestions) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ColorChooserFactory::OpenColorChooser");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kColorChooserFactory_OpenColorChooser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ColorChooserFactory_OpenColorChooser_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ColorChooserRequestDataView>(
      in_chooser, &params->chooser, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->chooser),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid chooser in ColorChooserFactory.OpenColorChooser request");
  mojo::internal::Serialize<::blink::mojom::ColorChooserClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ColorChooserFactory.OpenColorChooser request");
  params->color = in_color;
  typename decltype(params->suggestions)::BaseType::BufferWriter
      suggestions_writer;
  const mojo::internal::ContainerValidateParams suggestions_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ColorSuggestionDataView>>(
      in_suggestions, buffer, &suggestions_writer, &suggestions_validate_params,
      &serialization_context);
  params->suggestions.Set(
      suggestions_writer.is_null() ? nullptr : suggestions_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->suggestions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null suggestions in ColorChooserFactory.OpenColorChooser request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ColorChooserFactory::Name_);
  message.set_method_name("OpenColorChooser");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ColorChooserFactoryStubDispatch::Accept(
    ColorChooserFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kColorChooserFactory_OpenColorChooser_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ColorChooserFactory::OpenColorChooser",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ColorChooserFactory_OpenColorChooser_Params_Data* params =
          reinterpret_cast<internal::ColorChooserFactory_OpenColorChooser_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ColorChooserRequest p_chooser{};
      ColorChooserClientPtr p_client{};
      uint32_t p_color{};
      WTF::Vector<ColorSuggestionPtr> p_suggestions{};
      ColorChooserFactory_OpenColorChooser_ParamsDataView input_data_view(params, &serialization_context);
      
      p_chooser =
          input_data_view.TakeChooser<decltype(p_chooser)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_color = input_data_view.color();
      if (!input_data_view.ReadSuggestions(&p_suggestions))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ColorChooserFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenColorChooser(
std::move(p_chooser), 
std::move(p_client), 
std::move(p_color), 
std::move(p_suggestions));
      return true;
    }
  }
  return false;
}

// static
bool ColorChooserFactoryStubDispatch::AcceptWithResponder(
    ColorChooserFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kColorChooserFactory_OpenColorChooser_Name: {
      break;
    }
  }
  return false;
}

bool ColorChooserFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ColorChooserFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kColorChooserFactory_OpenColorChooser_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ColorChooserFactory_OpenColorChooser_Params_Data>(
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

const char ColorChooser::Name_[] = "blink.mojom.ColorChooser";

ColorChooserProxy::ColorChooserProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ColorChooserProxy::SetSelectedColor(
    uint32_t in_color) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ColorChooser::SetSelectedColor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kColorChooser_SetSelectedColor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ColorChooser_SetSelectedColor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->color = in_color;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ColorChooser::Name_);
  message.set_method_name("SetSelectedColor");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ColorChooserStubDispatch::Accept(
    ColorChooser* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kColorChooser_SetSelectedColor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ColorChooser::SetSelectedColor",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ColorChooser_SetSelectedColor_Params_Data* params =
          reinterpret_cast<internal::ColorChooser_SetSelectedColor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_color{};
      ColorChooser_SetSelectedColor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_color = input_data_view.color();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ColorChooser::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSelectedColor(
std::move(p_color));
      return true;
    }
  }
  return false;
}

// static
bool ColorChooserStubDispatch::AcceptWithResponder(
    ColorChooser* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kColorChooser_SetSelectedColor_Name: {
      break;
    }
  }
  return false;
}

bool ColorChooserRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ColorChooser RequestValidator");

  switch (message->header()->name) {
    case internal::kColorChooser_SetSelectedColor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ColorChooser_SetSelectedColor_Params_Data>(
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

const char ColorChooserClient::Name_[] = "blink.mojom.ColorChooserClient";

ColorChooserClientProxy::ColorChooserClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ColorChooserClientProxy::DidChooseColor(
    uint32_t in_color) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ColorChooserClient::DidChooseColor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kColorChooserClient_DidChooseColor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ColorChooserClient_DidChooseColor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->color = in_color;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ColorChooserClient::Name_);
  message.set_method_name("DidChooseColor");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ColorChooserClientStubDispatch::Accept(
    ColorChooserClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kColorChooserClient_DidChooseColor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ColorChooserClient::DidChooseColor",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ColorChooserClient_DidChooseColor_Params_Data* params =
          reinterpret_cast<internal::ColorChooserClient_DidChooseColor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_color{};
      ColorChooserClient_DidChooseColor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_color = input_data_view.color();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ColorChooserClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidChooseColor(
std::move(p_color));
      return true;
    }
  }
  return false;
}

// static
bool ColorChooserClientStubDispatch::AcceptWithResponder(
    ColorChooserClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kColorChooserClient_DidChooseColor_Name: {
      break;
    }
  }
  return false;
}

bool ColorChooserClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ColorChooserClient RequestValidator");

  switch (message->header()->name) {
    case internal::kColorChooserClient_DidChooseColor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ColorChooserClient_DidChooseColor_Params_Data>(
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
bool StructTraits<::blink::mojom::blink::ColorSuggestion::DataView, ::blink::mojom::blink::ColorSuggestionPtr>::Read(
    ::blink::mojom::blink::ColorSuggestion::DataView input,
    ::blink::mojom::blink::ColorSuggestionPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ColorSuggestionPtr result(::blink::mojom::blink::ColorSuggestion::New());
  
      result->color = input.color();
      if (!input.ReadLabel(&result->label))
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