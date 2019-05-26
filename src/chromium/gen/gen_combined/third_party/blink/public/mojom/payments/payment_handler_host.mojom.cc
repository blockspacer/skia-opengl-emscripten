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

#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom.h"

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

#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-params-data.h"
#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_JUMBO_H_
#endif
namespace payments {
namespace mojom {
PaymentHandlerMethodData::PaymentHandlerMethodData()
    : method_name(),
      stringified_data() {}

PaymentHandlerMethodData::PaymentHandlerMethodData(
    const std::string& method_name_in,
    const std::string& stringified_data_in)
    : method_name(std::move(method_name_in)),
      stringified_data(std::move(stringified_data_in)) {}

PaymentHandlerMethodData::~PaymentHandlerMethodData() = default;
size_t PaymentHandlerMethodData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->method_name);
  seed = mojo::internal::Hash(seed, this->stringified_data);
  return seed;
}

bool PaymentHandlerMethodData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentHandlerModifier::PaymentHandlerModifier()
    : total(),
      method_data() {}

PaymentHandlerModifier::PaymentHandlerModifier(
    ::payments::mojom::PaymentCurrencyAmountPtr total_in,
    PaymentHandlerMethodDataPtr method_data_in)
    : total(std::move(total_in)),
      method_data(std::move(method_data_in)) {}

PaymentHandlerModifier::~PaymentHandlerModifier() = default;

bool PaymentHandlerModifier::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentMethodChangeResponse::PaymentMethodChangeResponse()
    : total(),
      modifiers(),
      error(""),
      stringified_payment_method_errors() {}

PaymentMethodChangeResponse::PaymentMethodChangeResponse(
    ::payments::mojom::PaymentCurrencyAmountPtr total_in,
    base::Optional<std::vector<PaymentHandlerModifierPtr>> modifiers_in,
    const std::string& error_in,
    const base::Optional<std::string>& stringified_payment_method_errors_in)
    : total(std::move(total_in)),
      modifiers(std::move(modifiers_in)),
      error(std::move(error_in)),
      stringified_payment_method_errors(std::move(stringified_payment_method_errors_in)) {}

PaymentMethodChangeResponse::~PaymentMethodChangeResponse() = default;

bool PaymentMethodChangeResponse::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PaymentHandlerHost::Name_[] = "payments.mojom.PaymentHandlerHost";

class PaymentHandlerHost_ChangePaymentMethod_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PaymentHandlerHost_ChangePaymentMethod_ForwardToCallback(
      PaymentHandlerHost::ChangePaymentMethodCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PaymentHandlerHost::ChangePaymentMethodCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PaymentHandlerHost_ChangePaymentMethod_ForwardToCallback);
};

PaymentHandlerHostProxy::PaymentHandlerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PaymentHandlerHostProxy::ChangePaymentMethod(
    PaymentHandlerMethodDataPtr in_method_data, ChangePaymentMethodCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentHandlerHost::ChangePaymentMethod");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentHandlerHost_ChangePaymentMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentHandlerHost_ChangePaymentMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->method_data)::BaseType::BufferWriter
      method_data_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerMethodDataDataView>(
      in_method_data, buffer, &method_data_writer, &serialization_context);
  params->method_data.Set(
      method_data_writer.is_null() ? nullptr : method_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->method_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null method_data in PaymentHandlerHost.ChangePaymentMethod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentHandlerHost::Name_);
  message.set_method_name("ChangePaymentMethod");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PaymentHandlerHost_ChangePaymentMethod_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class PaymentHandlerHost_ChangePaymentMethod_ProxyToResponder {
 public:
  static PaymentHandlerHost::ChangePaymentMethodCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PaymentHandlerHost_ChangePaymentMethod_ProxyToResponder> proxy(
        new PaymentHandlerHost_ChangePaymentMethod_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PaymentHandlerHost_ChangePaymentMethod_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PaymentHandlerHost_ChangePaymentMethod_ProxyToResponder() {
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
  PaymentHandlerHost_ChangePaymentMethod_ProxyToResponder(
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
        << "PaymentHandlerHost::ChangePaymentMethodCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PaymentMethodChangeResponsePtr in_response_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PaymentHandlerHost_ChangePaymentMethod_ProxyToResponder);
};

bool PaymentHandlerHost_ChangePaymentMethod_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PaymentHandlerHost::ChangePaymentMethodCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PaymentMethodChangeResponsePtr p_response_data{};
  PaymentHandlerHost_ChangePaymentMethod_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResponseData(&p_response_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PaymentHandlerHost::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_response_data));
  return true;
}

void PaymentHandlerHost_ChangePaymentMethod_ProxyToResponder::Run(
    PaymentMethodChangeResponsePtr in_response_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentHandlerHost_ChangePaymentMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response_data)::BaseType::BufferWriter
      response_data_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentMethodChangeResponseDataView>(
      in_response_data, buffer, &response_data_writer, &serialization_context);
  params->response_data.Set(
      response_data_writer.is_null() ? nullptr : response_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response_data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PaymentHandlerHost::ChangePaymentMethodCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentHandlerHost::Name_);
  message.set_method_name("ChangePaymentMethod");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PaymentHandlerHostStubDispatch::Accept(
    PaymentHandlerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPaymentHandlerHost_ChangePaymentMethod_Name: {
      break;
    }
  }
  return false;
}

// static
bool PaymentHandlerHostStubDispatch::AcceptWithResponder(
    PaymentHandlerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPaymentHandlerHost_ChangePaymentMethod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentHandlerHost::ChangePaymentMethod",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PaymentHandlerHost_ChangePaymentMethod_Params_Data* params =
          reinterpret_cast<
              internal::PaymentHandlerHost_ChangePaymentMethod_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentHandlerMethodDataPtr p_method_data{};
      PaymentHandlerHost_ChangePaymentMethod_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMethodData(&p_method_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentHandlerHost::Name_, 0, false);
        return false;
      }
      PaymentHandlerHost::ChangePaymentMethodCallback callback =
          PaymentHandlerHost_ChangePaymentMethod_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ChangePaymentMethod(
std::move(p_method_data), std::move(callback));
      return true;
    }
  }
  return false;
}

bool PaymentHandlerHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PaymentHandlerHost RequestValidator");

  switch (message->header()->name) {
    case internal::kPaymentHandlerHost_ChangePaymentMethod_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentHandlerHost_ChangePaymentMethod_Params_Data>(
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

bool PaymentHandlerHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PaymentHandlerHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPaymentHandlerHost_ChangePaymentMethod_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data>(
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
}  // namespace payments

namespace mojo {


// static
bool StructTraits<::payments::mojom::PaymentHandlerMethodData::DataView, ::payments::mojom::PaymentHandlerMethodDataPtr>::Read(
    ::payments::mojom::PaymentHandlerMethodData::DataView input,
    ::payments::mojom::PaymentHandlerMethodDataPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentHandlerMethodDataPtr result(::payments::mojom::PaymentHandlerMethodData::New());
  
      if (!input.ReadMethodName(&result->method_name))
        success = false;
      if (!input.ReadStringifiedData(&result->stringified_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentHandlerModifier::DataView, ::payments::mojom::PaymentHandlerModifierPtr>::Read(
    ::payments::mojom::PaymentHandlerModifier::DataView input,
    ::payments::mojom::PaymentHandlerModifierPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentHandlerModifierPtr result(::payments::mojom::PaymentHandlerModifier::New());
  
      if (!input.ReadTotal(&result->total))
        success = false;
      if (!input.ReadMethodData(&result->method_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentMethodChangeResponse::DataView, ::payments::mojom::PaymentMethodChangeResponsePtr>::Read(
    ::payments::mojom::PaymentMethodChangeResponse::DataView input,
    ::payments::mojom::PaymentMethodChangeResponsePtr* output) {
  bool success = true;
  ::payments::mojom::PaymentMethodChangeResponsePtr result(::payments::mojom::PaymentMethodChangeResponse::New());
  
      if (!input.ReadTotal(&result->total))
        success = false;
      if (!input.ReadModifiers(&result->modifiers))
        success = false;
      if (!input.ReadError(&result->error))
        success = false;
      if (!input.ReadStringifiedPaymentMethodErrors(&result->stringified_payment_method_errors))
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