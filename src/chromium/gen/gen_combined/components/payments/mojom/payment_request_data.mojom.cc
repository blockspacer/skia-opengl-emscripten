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

#include "components/payments/mojom/payment_request_data.mojom.h"

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

#include "components/payments/mojom/payment_request_data.mojom-params-data.h"
#include "components/payments/mojom/payment_request_data.mojom-shared-message-ids.h"

#include "components/payments/mojom/payment_request_data.mojom-import-headers.h"


#ifndef COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_JUMBO_H_
#define COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_JUMBO_H_
#endif
namespace payments {
namespace mojom {
PaymentAddress::PaymentAddress()
    : country(),
      address_line(),
      region(),
      city(),
      dependent_locality(),
      postal_code(),
      sorting_code(),
      organization(),
      recipient(),
      phone() {}

PaymentAddress::PaymentAddress(
    const std::string& country_in,
    const std::vector<std::string>& address_line_in,
    const std::string& region_in,
    const std::string& city_in,
    const std::string& dependent_locality_in,
    const std::string& postal_code_in,
    const std::string& sorting_code_in,
    const std::string& organization_in,
    const std::string& recipient_in,
    const std::string& phone_in)
    : country(std::move(country_in)),
      address_line(std::move(address_line_in)),
      region(std::move(region_in)),
      city(std::move(city_in)),
      dependent_locality(std::move(dependent_locality_in)),
      postal_code(std::move(postal_code_in)),
      sorting_code(std::move(sorting_code_in)),
      organization(std::move(organization_in)),
      recipient(std::move(recipient_in)),
      phone(std::move(phone_in)) {}

PaymentAddress::~PaymentAddress() = default;

bool PaymentAddress::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentCurrencyAmount::PaymentCurrencyAmount()
    : currency(),
      value() {}

PaymentCurrencyAmount::PaymentCurrencyAmount(
    const std::string& currency_in,
    const std::string& value_in)
    : currency(std::move(currency_in)),
      value(std::move(value_in)) {}

PaymentCurrencyAmount::~PaymentCurrencyAmount() = default;
size_t PaymentCurrencyAmount::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->currency);
  seed = mojo::internal::Hash(seed, this->value);
  return seed;
}

bool PaymentCurrencyAmount::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PaymentValidationErrors::PaymentValidationErrors()
    : error(),
      payer(),
      shipping_address() {}

PaymentValidationErrors::PaymentValidationErrors(
    const std::string& error_in,
    PayerErrorsPtr payer_in,
    AddressErrorsPtr shipping_address_in)
    : error(std::move(error_in)),
      payer(std::move(payer_in)),
      shipping_address(std::move(shipping_address_in)) {}

PaymentValidationErrors::~PaymentValidationErrors() = default;
size_t PaymentValidationErrors::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->error);
  seed = mojo::internal::Hash(seed, this->payer);
  seed = mojo::internal::Hash(seed, this->shipping_address);
  return seed;
}

bool PaymentValidationErrors::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PayerErrors::PayerErrors()
    : email(),
      name(),
      phone() {}

PayerErrors::PayerErrors(
    const std::string& email_in,
    const std::string& name_in,
    const std::string& phone_in)
    : email(std::move(email_in)),
      name(std::move(name_in)),
      phone(std::move(phone_in)) {}

PayerErrors::~PayerErrors() = default;
size_t PayerErrors::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->email);
  seed = mojo::internal::Hash(seed, this->name);
  seed = mojo::internal::Hash(seed, this->phone);
  return seed;
}

bool PayerErrors::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AddressErrors::AddressErrors()
    : address_line(),
      city(),
      country(),
      dependent_locality(),
      organization(),
      phone(),
      postal_code(),
      recipient(),
      region(),
      sorting_code() {}

AddressErrors::AddressErrors(
    const std::string& address_line_in,
    const std::string& city_in,
    const std::string& country_in,
    const std::string& dependent_locality_in,
    const std::string& organization_in,
    const std::string& phone_in,
    const std::string& postal_code_in,
    const std::string& recipient_in,
    const std::string& region_in,
    const std::string& sorting_code_in)
    : address_line(std::move(address_line_in)),
      city(std::move(city_in)),
      country(std::move(country_in)),
      dependent_locality(std::move(dependent_locality_in)),
      organization(std::move(organization_in)),
      phone(std::move(phone_in)),
      postal_code(std::move(postal_code_in)),
      recipient(std::move(recipient_in)),
      region(std::move(region_in)),
      sorting_code(std::move(sorting_code_in)) {}

AddressErrors::~AddressErrors() = default;
size_t AddressErrors::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->address_line);
  seed = mojo::internal::Hash(seed, this->city);
  seed = mojo::internal::Hash(seed, this->country);
  seed = mojo::internal::Hash(seed, this->dependent_locality);
  seed = mojo::internal::Hash(seed, this->organization);
  seed = mojo::internal::Hash(seed, this->phone);
  seed = mojo::internal::Hash(seed, this->postal_code);
  seed = mojo::internal::Hash(seed, this->recipient);
  seed = mojo::internal::Hash(seed, this->region);
  seed = mojo::internal::Hash(seed, this->sorting_code);
  return seed;
}

bool AddressErrors::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace payments

namespace mojo {


// static
bool StructTraits<::payments::mojom::PaymentAddress::DataView, ::payments::mojom::PaymentAddressPtr>::Read(
    ::payments::mojom::PaymentAddress::DataView input,
    ::payments::mojom::PaymentAddressPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentAddressPtr result(::payments::mojom::PaymentAddress::New());
  
      if (!input.ReadCountry(&result->country))
        success = false;
      if (!input.ReadAddressLine(&result->address_line))
        success = false;
      if (!input.ReadRegion(&result->region))
        success = false;
      if (!input.ReadCity(&result->city))
        success = false;
      if (!input.ReadDependentLocality(&result->dependent_locality))
        success = false;
      if (!input.ReadPostalCode(&result->postal_code))
        success = false;
      if (!input.ReadSortingCode(&result->sorting_code))
        success = false;
      if (!input.ReadOrganization(&result->organization))
        success = false;
      if (!input.ReadRecipient(&result->recipient))
        success = false;
      if (!input.ReadPhone(&result->phone))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentCurrencyAmount::DataView, ::payments::mojom::PaymentCurrencyAmountPtr>::Read(
    ::payments::mojom::PaymentCurrencyAmount::DataView input,
    ::payments::mojom::PaymentCurrencyAmountPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentCurrencyAmountPtr result(::payments::mojom::PaymentCurrencyAmount::New());
  
      if (!input.ReadCurrency(&result->currency))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PaymentValidationErrors::DataView, ::payments::mojom::PaymentValidationErrorsPtr>::Read(
    ::payments::mojom::PaymentValidationErrors::DataView input,
    ::payments::mojom::PaymentValidationErrorsPtr* output) {
  bool success = true;
  ::payments::mojom::PaymentValidationErrorsPtr result(::payments::mojom::PaymentValidationErrors::New());
  
      if (!input.ReadError(&result->error))
        success = false;
      if (!input.ReadPayer(&result->payer))
        success = false;
      if (!input.ReadShippingAddress(&result->shipping_address))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::PayerErrors::DataView, ::payments::mojom::PayerErrorsPtr>::Read(
    ::payments::mojom::PayerErrors::DataView input,
    ::payments::mojom::PayerErrorsPtr* output) {
  bool success = true;
  ::payments::mojom::PayerErrorsPtr result(::payments::mojom::PayerErrors::New());
  
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
bool StructTraits<::payments::mojom::AddressErrors::DataView, ::payments::mojom::AddressErrorsPtr>::Read(
    ::payments::mojom::AddressErrors::DataView input,
    ::payments::mojom::AddressErrorsPtr* output) {
  bool success = true;
  ::payments::mojom::AddressErrorsPtr result(::payments::mojom::AddressErrors::New());
  
      if (!input.ReadAddressLine(&result->address_line))
        success = false;
      if (!input.ReadCity(&result->city))
        success = false;
      if (!input.ReadCountry(&result->country))
        success = false;
      if (!input.ReadDependentLocality(&result->dependent_locality))
        success = false;
      if (!input.ReadOrganization(&result->organization))
        success = false;
      if (!input.ReadPhone(&result->phone))
        success = false;
      if (!input.ReadPostalCode(&result->postal_code))
        success = false;
      if (!input.ReadRecipient(&result->recipient))
        success = false;
      if (!input.ReadRegion(&result->region))
        success = false;
      if (!input.ReadSortingCode(&result->sorting_code))
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