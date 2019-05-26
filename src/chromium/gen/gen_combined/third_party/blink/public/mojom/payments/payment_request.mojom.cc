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

#include "third_party/blink/public/mojom/payments/payment_request.mojom.h"

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

#include "third_party/blink/public/mojom/payments/payment_request.mojom-params-data.h"
#include "third_party/blink/public/mojom/payments/payment_request.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/payments/payment_request.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_JUMBO_H_
#endif
namespace payments {
namespace mojom {
PaymentResponse::PaymentResponse()
    : method_name(),
      stringified_details(),
      shipping_address(),
      shipping_option(),
      payer() {}

PaymentResponse::PaymentResponse(
    const std::string& method_name_in,
    const std::string& stringified_details_in,
    ::payments::mojom::PaymentAddressPtr shipping_address_in,
    const base::Optional<std::string>& shipping_option_in,
    PayerDetailPtr payer_in)
    : method_name(std::move(method_name_in)),
      stringified_details(std::move(stringified_details_in)),
      shipping_address(std::move(shipping_address_in)),
      shipping_option(std::move(shipping_option_in)),
      payer(std::move(payer_in)) {}

PaymentResponse::~PaymentResponse() = default;

bool PaymentResponse::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PayerDetail::PayerDetail()
    : email(),
      name(),
      phone() {}

PayerDetail::PayerDetail(
    const base::Optional<std::string>& email_in,
    const base::Optional<std::string>& name_in,
    const base::Optional<std::string>& phone_in)
    : email(std::move(email_in)),
      name(std::move(name_in)),
      phone(std::move(phone_in)) {}

PayerDetail::~PayerDetail() = default;

bool PayerDetail::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentItem::PaymentItem()
    : label(),
      amount(),
      pending() {}

PaymentItem::PaymentItem(
    const std::string& label_in,
    ::payments::mojom::PaymentCurrencyAmountPtr amount_in,
    bool pending_in)
    : label(std::move(label_in)),
      amount(std::move(amount_in)),
      pending(std::move(pending_in)) {}

PaymentItem::~PaymentItem() = default;
size_t PaymentItem::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->label);
  seed = mojo::internal::Hash(seed, this->amount);
  seed = mojo::internal::Hash(seed, this->pending);
  return seed;
}

bool PaymentItem::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentShippingOption::PaymentShippingOption()
    : id(),
      label(),
      amount(),
      selected() {}

PaymentShippingOption::PaymentShippingOption(
    const std::string& id_in,
    const std::string& label_in,
    ::payments::mojom::PaymentCurrencyAmountPtr amount_in,
    bool selected_in)
    : id(std::move(id_in)),
      label(std::move(label_in)),
      amount(std::move(amount_in)),
      selected(std::move(selected_in)) {}

PaymentShippingOption::~PaymentShippingOption() = default;
size_t PaymentShippingOption::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->id);
  seed = mojo::internal::Hash(seed, this->label);
  seed = mojo::internal::Hash(seed, this->amount);
  seed = mojo::internal::Hash(seed, this->selected);
  return seed;
}

bool PaymentShippingOption::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentMethodData::PaymentMethodData()
    : supported_method(),
      stringified_data(),
      environment(),
      min_google_play_services_version(),
      api_version(),
      supported_networks(),
      supported_types() {}

PaymentMethodData::PaymentMethodData(
    const std::string& supported_method_in,
    const std::string& stringified_data_in,
    AndroidPayEnvironment environment_in,
    int32_t min_google_play_services_version_in,
    int32_t api_version_in,
    const std::vector<BasicCardNetwork>& supported_networks_in,
    const std::vector<BasicCardType>& supported_types_in)
    : supported_method(std::move(supported_method_in)),
      stringified_data(std::move(stringified_data_in)),
      environment(std::move(environment_in)),
      min_google_play_services_version(std::move(min_google_play_services_version_in)),
      api_version(std::move(api_version_in)),
      supported_networks(std::move(supported_networks_in)),
      supported_types(std::move(supported_types_in)) {}

PaymentMethodData::~PaymentMethodData() = default;

bool PaymentMethodData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentDetailsModifier::PaymentDetailsModifier()
    : total(),
      additional_display_items(),
      method_data() {}

PaymentDetailsModifier::PaymentDetailsModifier(
    PaymentItemPtr total_in,
    std::vector<PaymentItemPtr> additional_display_items_in,
    PaymentMethodDataPtr method_data_in)
    : total(std::move(total_in)),
      additional_display_items(std::move(additional_display_items_in)),
      method_data(std::move(method_data_in)) {}

PaymentDetailsModifier::~PaymentDetailsModifier() = default;

bool PaymentDetailsModifier::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentDetails::PaymentDetails()
    : total(),
      display_items(),
      shipping_options(),
      modifiers(),
      error(""),
      shipping_address_errors(),
      id(),
      stringified_payment_method_errors() {}

PaymentDetails::PaymentDetails(
    PaymentItemPtr total_in,
    base::Optional<std::vector<PaymentItemPtr>> display_items_in,
    base::Optional<std::vector<PaymentShippingOptionPtr>> shipping_options_in,
    base::Optional<std::vector<PaymentDetailsModifierPtr>> modifiers_in,
    const std::string& error_in,
    ::payments::mojom::AddressErrorsPtr shipping_address_errors_in,
    const base::Optional<std::string>& id_in,
    const base::Optional<std::string>& stringified_payment_method_errors_in)
    : total(std::move(total_in)),
      display_items(std::move(display_items_in)),
      shipping_options(std::move(shipping_options_in)),
      modifiers(std::move(modifiers_in)),
      error(std::move(error_in)),
      shipping_address_errors(std::move(shipping_address_errors_in)),
      id(std::move(id_in)),
      stringified_payment_method_errors(std::move(stringified_payment_method_errors_in)) {}

PaymentDetails::~PaymentDetails() = default;

bool PaymentDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentOptions::PaymentOptions()
    : request_payer_name(),
      request_payer_email(),
      request_payer_phone(),
      request_shipping(),
      shipping_type() {}

PaymentOptions::PaymentOptions(
    bool request_payer_name_in,
    bool request_payer_email_in,
    bool request_payer_phone_in,
    bool request_shipping_in,
    PaymentShippingType shipping_type_in)
    : request_payer_name(std::move(request_payer_name_in)),
      request_payer_email(std::move(request_payer_email_in)),
      request_payer_phone(std::move(request_payer_phone_in)),
      request_shipping(std::move(request_shipping_in)),
      shipping_type(std::move(shipping_type_in)) {}

PaymentOptions::~PaymentOptions() = default;
size_t PaymentOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->request_payer_name);
  seed = mojo::internal::Hash(seed, this->request_payer_email);
  seed = mojo::internal::Hash(seed, this->request_payer_phone);
  seed = mojo::internal::Hash(seed, this->request_shipping);
  seed = mojo::internal::Hash(seed, this->shipping_type);
  return seed;
}

bool PaymentOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PaymentRequestClient::Name_[] = "payments.mojom.PaymentRequestClient";

PaymentRequestClientProxy::PaymentRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PaymentRequestClientProxy::OnPaymentMethodChange(
    const std::string& in_method_name, const std::string& in_stringified_details) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnPaymentMethodChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnPaymentMethodChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnPaymentMethodChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->method_name)::BaseType::BufferWriter
      method_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_method_name, buffer, &method_name_writer, &serialization_context);
  params->method_name.Set(
      method_name_writer.is_null() ? nullptr : method_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->method_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null method_name in PaymentRequestClient.OnPaymentMethodChange request");
  typename decltype(params->stringified_details)::BaseType::BufferWriter
      stringified_details_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_stringified_details, buffer, &stringified_details_writer, &serialization_context);
  params->stringified_details.Set(
      stringified_details_writer.is_null() ? nullptr : stringified_details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->stringified_details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null stringified_details in PaymentRequestClient.OnPaymentMethodChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("OnPaymentMethodChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnShippingAddressChange(
    ::payments::mojom::PaymentAddressPtr in_address) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnShippingAddressChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnShippingAddressChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnShippingAddressChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->address)::BaseType::BufferWriter
      address_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentAddressDataView>(
      in_address, buffer, &address_writer, &serialization_context);
  params->address.Set(
      address_writer.is_null() ? nullptr : address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null address in PaymentRequestClient.OnShippingAddressChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("OnShippingAddressChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnShippingOptionChange(
    const std::string& in_shipping_option_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnShippingOptionChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnShippingOptionChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnShippingOptionChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->shipping_option_id)::BaseType::BufferWriter
      shipping_option_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_shipping_option_id, buffer, &shipping_option_id_writer, &serialization_context);
  params->shipping_option_id.Set(
      shipping_option_id_writer.is_null() ? nullptr : shipping_option_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->shipping_option_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null shipping_option_id in PaymentRequestClient.OnShippingOptionChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("OnShippingOptionChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnPayerDetailChange(
    PayerDetailPtr in_detail) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnPayerDetailChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnPayerDetailChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnPayerDetailChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->detail)::BaseType::BufferWriter
      detail_writer;
  mojo::internal::Serialize<::payments::mojom::PayerDetailDataView>(
      in_detail, buffer, &detail_writer, &serialization_context);
  params->detail.Set(
      detail_writer.is_null() ? nullptr : detail_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->detail.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null detail in PaymentRequestClient.OnPayerDetailChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("OnPayerDetailChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnPaymentResponse(
    PaymentResponsePtr in_response) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnPaymentResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnPaymentResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnPaymentResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in PaymentRequestClient.OnPaymentResponse request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("OnPaymentResponse");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnError(
    PaymentErrorReason in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentErrorReason>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("OnError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnComplete(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnComplete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnComplete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnComplete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("OnComplete");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnAbort(
    bool in_aborted_successfully) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnAbort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnAbort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnAbort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->aborted_successfully = in_aborted_successfully;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("OnAbort");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnCanMakePayment(
    CanMakePaymentQueryResult in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnCanMakePayment");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnCanMakePayment_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnCanMakePayment_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::CanMakePaymentQueryResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("OnCanMakePayment");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::OnHasEnrolledInstrument(
    HasEnrolledInstrumentQueryResult in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnHasEnrolledInstrument");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_OnHasEnrolledInstrument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_OnHasEnrolledInstrument_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::HasEnrolledInstrumentQueryResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("OnHasEnrolledInstrument");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestClientProxy::WarnNoFavicon(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequestClient::WarnNoFavicon");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequestClient_WarnNoFavicon_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequestClient_WarnNoFavicon_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequestClient::Name_);
  message.set_method_name("WarnNoFavicon");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PaymentRequestClientStubDispatch::Accept(
    PaymentRequestClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPaymentRequestClient_OnPaymentMethodChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnPaymentMethodChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnPaymentMethodChange_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnPaymentMethodChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_method_name{};
      std::string p_stringified_details{};
      PaymentRequestClient_OnPaymentMethodChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMethodName(&p_method_name))
        success = false;
      if (!input_data_view.ReadStringifiedDetails(&p_stringified_details))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnPaymentMethodChange(
std::move(p_method_name), 
std::move(p_stringified_details));
      return true;
    }
    case internal::kPaymentRequestClient_OnShippingAddressChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnShippingAddressChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnShippingAddressChange_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnShippingAddressChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::payments::mojom::PaymentAddressPtr p_address{};
      PaymentRequestClient_OnShippingAddressChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAddress(&p_address))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnShippingAddressChange(
std::move(p_address));
      return true;
    }
    case internal::kPaymentRequestClient_OnShippingOptionChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnShippingOptionChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnShippingOptionChange_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnShippingOptionChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_shipping_option_id{};
      PaymentRequestClient_OnShippingOptionChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadShippingOptionId(&p_shipping_option_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnShippingOptionChange(
std::move(p_shipping_option_id));
      return true;
    }
    case internal::kPaymentRequestClient_OnPayerDetailChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnPayerDetailChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnPayerDetailChange_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnPayerDetailChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PayerDetailPtr p_detail{};
      PaymentRequestClient_OnPayerDetailChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDetail(&p_detail))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnPayerDetailChange(
std::move(p_detail));
      return true;
    }
    case internal::kPaymentRequestClient_OnPaymentResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnPaymentResponse",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnPaymentResponse_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnPaymentResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentResponsePtr p_response{};
      PaymentRequestClient_OnPaymentResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnPaymentResponse(
std::move(p_response));
      return true;
    }
    case internal::kPaymentRequestClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnError_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentErrorReason p_error{};
      PaymentRequestClient_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnError(
std::move(p_error));
      return true;
    }
    case internal::kPaymentRequestClient_OnComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnComplete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnComplete_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnComplete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequestClient_OnComplete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnComplete();
      return true;
    }
    case internal::kPaymentRequestClient_OnAbort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnAbort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnAbort_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnAbort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_aborted_successfully{};
      PaymentRequestClient_OnAbort_ParamsDataView input_data_view(params, &serialization_context);
      
      p_aborted_successfully = input_data_view.aborted_successfully();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnAbort(
std::move(p_aborted_successfully));
      return true;
    }
    case internal::kPaymentRequestClient_OnCanMakePayment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnCanMakePayment",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnCanMakePayment_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnCanMakePayment_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CanMakePaymentQueryResult p_result{};
      PaymentRequestClient_OnCanMakePayment_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCanMakePayment(
std::move(p_result));
      return true;
    }
    case internal::kPaymentRequestClient_OnHasEnrolledInstrument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::OnHasEnrolledInstrument",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_OnHasEnrolledInstrument_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnHasEnrolledInstrument_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HasEnrolledInstrumentQueryResult p_result{};
      PaymentRequestClient_OnHasEnrolledInstrument_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnHasEnrolledInstrument(
std::move(p_result));
      return true;
    }
    case internal::kPaymentRequestClient_WarnNoFavicon_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequestClient::WarnNoFavicon",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequestClient_WarnNoFavicon_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_WarnNoFavicon_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequestClient_WarnNoFavicon_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequestClient::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WarnNoFavicon();
      return true;
    }
  }
  return false;
}

// static
bool PaymentRequestClientStubDispatch::AcceptWithResponder(
    PaymentRequestClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPaymentRequestClient_OnPaymentMethodChange_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnShippingAddressChange_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnShippingOptionChange_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnPayerDetailChange_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnPaymentResponse_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnError_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnComplete_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnAbort_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnCanMakePayment_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnHasEnrolledInstrument_Name: {
      break;
    }
    case internal::kPaymentRequestClient_WarnNoFavicon_Name: {
      break;
    }
  }
  return false;
}

bool PaymentRequestClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PaymentRequestClient RequestValidator");

  switch (message->header()->name) {
    case internal::kPaymentRequestClient_OnPaymentMethodChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnPaymentMethodChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnShippingAddressChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnShippingAddressChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnShippingOptionChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnShippingOptionChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnPayerDetailChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnPayerDetailChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnPaymentResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnPaymentResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnComplete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnAbort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnAbort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnCanMakePayment_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnCanMakePayment_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_OnHasEnrolledInstrument_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnHasEnrolledInstrument_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequestClient_WarnNoFavicon_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_WarnNoFavicon_Params_Data>(
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

const char PaymentRequest::Name_[] = "payments.mojom.PaymentRequest";

PaymentRequestProxy::PaymentRequestProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PaymentRequestProxy::Init(
    PaymentRequestClientPtr in_client, std::vector<PaymentMethodDataPtr> in_method_data, PaymentDetailsPtr in_details, PaymentOptionsPtr in_options) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequest::Init");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_Init_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_Init_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentRequestClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in PaymentRequest.Init request");
  typename decltype(params->method_data)::BaseType::BufferWriter
      method_data_writer;
  const mojo::internal::ContainerValidateParams method_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
      in_method_data, buffer, &method_data_writer, &method_data_validate_params,
      &serialization_context);
  params->method_data.Set(
      method_data_writer.is_null() ? nullptr : method_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->method_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null method_data in PaymentRequest.Init request");
  typename decltype(params->details)::BaseType::BufferWriter
      details_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentDetailsDataView>(
      in_details, buffer, &details_writer, &serialization_context);
  params->details.Set(
      details_writer.is_null() ? nullptr : details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in PaymentRequest.Init request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in PaymentRequest.Init request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequest::Name_);
  message.set_method_name("Init");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::Show(
    bool in_is_user_gesture, bool in_wait_for_updated_details) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequest::Show");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_Show_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_Show_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_user_gesture = in_is_user_gesture;
  params->wait_for_updated_details = in_wait_for_updated_details;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequest::Name_);
  message.set_method_name("Show");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::UpdateWith(
    PaymentDetailsPtr in_details) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequest::UpdateWith");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_UpdateWith_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_UpdateWith_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->details)::BaseType::BufferWriter
      details_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentDetailsDataView>(
      in_details, buffer, &details_writer, &serialization_context);
  params->details.Set(
      details_writer.is_null() ? nullptr : details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in PaymentRequest.UpdateWith request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequest::Name_);
  message.set_method_name("UpdateWith");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::NoUpdatedPaymentDetails(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequest::NoUpdatedPaymentDetails");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_NoUpdatedPaymentDetails_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_NoUpdatedPaymentDetails_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequest::Name_);
  message.set_method_name("NoUpdatedPaymentDetails");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::Abort(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequest::Abort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_Abort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_Abort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequest::Name_);
  message.set_method_name("Abort");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::Complete(
    PaymentComplete in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequest::Complete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_Complete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_Complete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentComplete>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequest::Name_);
  message.set_method_name("Complete");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::Retry(
    ::payments::mojom::PaymentValidationErrorsPtr in_errors) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequest::Retry");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_Retry_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_Retry_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->errors)::BaseType::BufferWriter
      errors_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentValidationErrorsDataView>(
      in_errors, buffer, &errors_writer, &serialization_context);
  params->errors.Set(
      errors_writer.is_null() ? nullptr : errors_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->errors.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null errors in PaymentRequest.Retry request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequest::Name_);
  message.set_method_name("Retry");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::CanMakePayment(
    bool in_legacy_mode) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequest::CanMakePayment");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_CanMakePayment_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_CanMakePayment_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->legacy_mode = in_legacy_mode;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequest::Name_);
  message.set_method_name("CanMakePayment");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PaymentRequestProxy::HasEnrolledInstrument(
    bool in_per_method_quota) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PaymentRequest::HasEnrolledInstrument");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPaymentRequest_HasEnrolledInstrument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::payments::mojom::internal::PaymentRequest_HasEnrolledInstrument_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->per_method_quota = in_per_method_quota;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PaymentRequest::Name_);
  message.set_method_name("HasEnrolledInstrument");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PaymentRequestStubDispatch::Accept(
    PaymentRequest* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPaymentRequest_Init_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequest::Init",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_Init_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Init_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequestClientPtr p_client{};
      std::vector<PaymentMethodDataPtr> p_method_data{};
      PaymentDetailsPtr p_details{};
      PaymentOptionsPtr p_options{};
      PaymentRequest_Init_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadMethodData(&p_method_data))
        success = false;
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequest::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Init(
std::move(p_client), 
std::move(p_method_data), 
std::move(p_details), 
std::move(p_options));
      return true;
    }
    case internal::kPaymentRequest_Show_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequest::Show",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_Show_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Show_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_is_user_gesture{};
      bool p_wait_for_updated_details{};
      PaymentRequest_Show_ParamsDataView input_data_view(params, &serialization_context);
      
      p_is_user_gesture = input_data_view.is_user_gesture();
      p_wait_for_updated_details = input_data_view.wait_for_updated_details();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequest::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Show(
std::move(p_is_user_gesture), 
std::move(p_wait_for_updated_details));
      return true;
    }
    case internal::kPaymentRequest_UpdateWith_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequest::UpdateWith",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_UpdateWith_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_UpdateWith_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentDetailsPtr p_details{};
      PaymentRequest_UpdateWith_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequest::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateWith(
std::move(p_details));
      return true;
    }
    case internal::kPaymentRequest_NoUpdatedPaymentDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequest::NoUpdatedPaymentDetails",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_NoUpdatedPaymentDetails_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_NoUpdatedPaymentDetails_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequest_NoUpdatedPaymentDetails_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequest::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NoUpdatedPaymentDetails();
      return true;
    }
    case internal::kPaymentRequest_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequest::Abort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_Abort_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Abort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentRequest_Abort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequest::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Abort();
      return true;
    }
    case internal::kPaymentRequest_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequest::Complete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_Complete_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Complete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PaymentComplete p_result{};
      PaymentRequest_Complete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequest::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Complete(
std::move(p_result));
      return true;
    }
    case internal::kPaymentRequest_Retry_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequest::Retry",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_Retry_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Retry_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::payments::mojom::PaymentValidationErrorsPtr p_errors{};
      PaymentRequest_Retry_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadErrors(&p_errors))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequest::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Retry(
std::move(p_errors));
      return true;
    }
    case internal::kPaymentRequest_CanMakePayment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequest::CanMakePayment",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_CanMakePayment_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_CanMakePayment_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_legacy_mode{};
      PaymentRequest_CanMakePayment_ParamsDataView input_data_view(params, &serialization_context);
      
      p_legacy_mode = input_data_view.legacy_mode();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequest::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CanMakePayment(
std::move(p_legacy_mode));
      return true;
    }
    case internal::kPaymentRequest_HasEnrolledInstrument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PaymentRequest::HasEnrolledInstrument",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PaymentRequest_HasEnrolledInstrument_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_HasEnrolledInstrument_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_per_method_quota{};
      PaymentRequest_HasEnrolledInstrument_ParamsDataView input_data_view(params, &serialization_context);
      
      p_per_method_quota = input_data_view.per_method_quota();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PaymentRequest::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->HasEnrolledInstrument(
std::move(p_per_method_quota));
      return true;
    }
  }
  return false;
}

// static
bool PaymentRequestStubDispatch::AcceptWithResponder(
    PaymentRequest* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPaymentRequest_Init_Name: {
      break;
    }
    case internal::kPaymentRequest_Show_Name: {
      break;
    }
    case internal::kPaymentRequest_UpdateWith_Name: {
      break;
    }
    case internal::kPaymentRequest_NoUpdatedPaymentDetails_Name: {
      break;
    }
    case internal::kPaymentRequest_Abort_Name: {
      break;
    }
    case internal::kPaymentRequest_Complete_Name: {
      break;
    }
    case internal::kPaymentRequest_Retry_Name: {
      break;
    }
    case internal::kPaymentRequest_CanMakePayment_Name: {
      break;
    }
    case internal::kPaymentRequest_HasEnrolledInstrument_Name: {
      break;
    }
  }
  return false;
}

bool PaymentRequestRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PaymentRequest RequestValidator");

  switch (message->header()->name) {
    case internal::kPaymentRequest_Init_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Init_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_Show_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Show_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_UpdateWith_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_UpdateWith_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_NoUpdatedPaymentDetails_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_NoUpdatedPaymentDetails_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_Abort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Abort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_Complete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Complete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_Retry_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Retry_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_CanMakePayment_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_CanMakePayment_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPaymentRequest_HasEnrolledInstrument_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_HasEnrolledInstrument_Params_Data>(
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
bool StructTraits<::payments::mojom::PaymentResponse::DataView, ::payments::mojom::PaymentResponsePtr>::Read(
    ::payments::mojom::PaymentResponse::DataView input,
    ::payments::mojom::PaymentResponsePtr* output) {
  bool success = true;
  ::payments::mojom::PaymentResponsePtr result(::payments::mojom::PaymentResponse::New());
  
      if (!input.ReadMethodName(&result->method_name))
        success = false;
      if (!input.ReadStringifiedDetails(&result->stringified_details))
        success = false;
      if (!input.ReadShippingAddress(&result->shipping_address))
        success = false;
      if (!input.ReadShippingOption(&result->shipping_option))
        success = false;
      if (!input.ReadPayer(&result->payer))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PayerDetail::DataView, ::payments::mojom::PayerDetailPtr>::Read(
    ::payments::mojom::PayerDetail::DataView input,
    ::payments::mojom::PayerDetailPtr* output) {
  bool success = true;
  ::payments::mojom::PayerDetailPtr result(::payments::mojom::PayerDetail::New());
  
      if (!input.ReadEmail(&result->email))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadPhone(&result->phone))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentItem::DataView, ::payments::mojom::PaymentItemPtr>::Read(
    ::payments::mojom::PaymentItem::DataView input,
    ::payments::mojom::PaymentItemPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentItemPtr result(::payments::mojom::PaymentItem::New());
  
      if (!input.ReadLabel(&result->label))
        success = false;
      if (!input.ReadAmount(&result->amount))
        success = false;
      result->pending = input.pending();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentShippingOption::DataView, ::payments::mojom::PaymentShippingOptionPtr>::Read(
    ::payments::mojom::PaymentShippingOption::DataView input,
    ::payments::mojom::PaymentShippingOptionPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentShippingOptionPtr result(::payments::mojom::PaymentShippingOption::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadLabel(&result->label))
        success = false;
      if (!input.ReadAmount(&result->amount))
        success = false;
      result->selected = input.selected();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentMethodData::DataView, ::payments::mojom::PaymentMethodDataPtr>::Read(
    ::payments::mojom::PaymentMethodData::DataView input,
    ::payments::mojom::PaymentMethodDataPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentMethodDataPtr result(::payments::mojom::PaymentMethodData::New());
  
      if (!input.ReadSupportedMethod(&result->supported_method))
        success = false;
      if (!input.ReadStringifiedData(&result->stringified_data))
        success = false;
      if (!input.ReadEnvironment(&result->environment))
        success = false;
      result->min_google_play_services_version = input.min_google_play_services_version();
      result->api_version = input.api_version();
      if (!input.ReadSupportedNetworks(&result->supported_networks))
        success = false;
      if (!input.ReadSupportedTypes(&result->supported_types))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentDetailsModifier::DataView, ::payments::mojom::PaymentDetailsModifierPtr>::Read(
    ::payments::mojom::PaymentDetailsModifier::DataView input,
    ::payments::mojom::PaymentDetailsModifierPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentDetailsModifierPtr result(::payments::mojom::PaymentDetailsModifier::New());
  
      if (!input.ReadTotal(&result->total))
        success = false;
      if (!input.ReadAdditionalDisplayItems(&result->additional_display_items))
        success = false;
      if (!input.ReadMethodData(&result->method_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentDetails::DataView, ::payments::mojom::PaymentDetailsPtr>::Read(
    ::payments::mojom::PaymentDetails::DataView input,
    ::payments::mojom::PaymentDetailsPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentDetailsPtr result(::payments::mojom::PaymentDetails::New());
  
      if (!input.ReadTotal(&result->total))
        success = false;
      if (!input.ReadDisplayItems(&result->display_items))
        success = false;
      if (!input.ReadShippingOptions(&result->shipping_options))
        success = false;
      if (!input.ReadModifiers(&result->modifiers))
        success = false;
      if (!input.ReadError(&result->error))
        success = false;
      if (!input.ReadShippingAddressErrors(&result->shipping_address_errors))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadStringifiedPaymentMethodErrors(&result->stringified_payment_method_errors))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentOptions::DataView, ::payments::mojom::PaymentOptionsPtr>::Read(
    ::payments::mojom::PaymentOptions::DataView input,
    ::payments::mojom::PaymentOptionsPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentOptionsPtr result(::payments::mojom::PaymentOptions::New());
  
      result->request_payer_name = input.request_payer_name();
      result->request_payer_email = input.request_payer_email();
      result->request_payer_phone = input.request_payer_phone();
      result->request_shipping = input.request_shipping();
      if (!input.ReadShippingType(&result->shipping_type))
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