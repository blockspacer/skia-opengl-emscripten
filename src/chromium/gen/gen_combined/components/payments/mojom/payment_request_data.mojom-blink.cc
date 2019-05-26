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

#include "components/payments/mojom/payment_request_data.mojom-blink.h"

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

#include "components/payments/mojom/payment_request_data.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_BLINK_JUMBO_H_
#define COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_BLINK_JUMBO_H_
#endif
namespace payments {
namespace mojom {
namespace blink {
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
    const WTF::String& country_in,
    const WTF::Vector<WTF::String>& address_line_in,
    const WTF::String& region_in,
    const WTF::String& city_in,
    const WTF::String& dependent_locality_in,
    const WTF::String& postal_code_in,
    const WTF::String& sorting_code_in,
    const WTF::String& organization_in,
    const WTF::String& recipient_in,
    const WTF::String& phone_in)
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
    const WTF::String& currency_in,
    const WTF::String& value_in)
    : currency(std::move(currency_in)),
      value(std::move(value_in)) {}

PaymentCurrencyAmount::~PaymentCurrencyAmount() = default;
size_t PaymentCurrencyAmount::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->currency);
  seed = mojo::internal::WTFHash(seed, this->value);
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
    const WTF::String& error_in,
    PayerErrorsPtr payer_in,
    AddressErrorsPtr shipping_address_in)
    : error(std::move(error_in)),
      payer(std::move(payer_in)),
      shipping_address(std::move(shipping_address_in)) {}

PaymentValidationErrors::~PaymentValidationErrors() = default;
size_t PaymentValidationErrors::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->error);
  seed = mojo::internal::WTFHash(seed, this->payer);
  seed = mojo::internal::WTFHash(seed, this->shipping_address);
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
    const WTF::String& email_in,
    const WTF::String& name_in,
    const WTF::String& phone_in)
    : email(std::move(email_in)),
      name(std::move(name_in)),
      phone(std::move(phone_in)) {}

PayerErrors::~PayerErrors() = default;
size_t PayerErrors::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->email);
  seed = mojo::internal::WTFHash(seed, this->name);
  seed = mojo::internal::WTFHash(seed, this->phone);
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
    const WTF::String& address_line_in,
    const WTF::String& city_in,
    const WTF::String& country_in,
    const WTF::String& dependent_locality_in,
    const WTF::String& organization_in,
    const WTF::String& phone_in,
    const WTF::String& postal_code_in,
    const WTF::String& recipient_in,
    const WTF::String& region_in,
    const WTF::String& sorting_code_in)
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
  seed = mojo::internal::WTFHash(seed, this->address_line);
  seed = mojo::internal::WTFHash(seed, this->city);
  seed = mojo::internal::WTFHash(seed, this->country);
  seed = mojo::internal::WTFHash(seed, this->dependent_locality);
  seed = mojo::internal::WTFHash(seed, this->organization);
  seed = mojo::internal::WTFHash(seed, this->phone);
  seed = mojo::internal::WTFHash(seed, this->postal_code);
  seed = mojo::internal::WTFHash(seed, this->recipient);
  seed = mojo::internal::WTFHash(seed, this->region);
  seed = mojo::internal::WTFHash(seed, this->sorting_code);
  return seed;
}

bool AddressErrors::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace payments

namespace mojo {


// static
bool StructTraits<::payments::mojom::blink::PaymentAddress::DataView, ::payments::mojom::blink::PaymentAddressPtr>::Read(
    ::payments::mojom::blink::PaymentAddress::DataView input,
    ::payments::mojom::blink::PaymentAddressPtr* output) {
  bool success = true;
  ::payments::mojom::blink::PaymentAddressPtr result(::payments::mojom::blink::PaymentAddress::New());
  
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
bool StructTraits<::payments::mojom::blink::PaymentCurrencyAmount::DataView, ::payments::mojom::blink::PaymentCurrencyAmountPtr>::Read(
    ::payments::mojom::blink::PaymentCurrencyAmount::DataView input,
    ::payments::mojom::blink::PaymentCurrencyAmountPtr* output) {
  bool success = true;
  ::payments::mojom::blink::PaymentCurrencyAmountPtr result(::payments::mojom::blink::PaymentCurrencyAmount::New());
  
      if (!input.ReadCurrency(&result->currency))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::payments::mojom::blink::PaymentValidationErrors::DataView, ::payments::mojom::blink::PaymentValidationErrorsPtr>::Read(
    ::payments::mojom::blink::PaymentValidationErrors::DataView input,
    ::payments::mojom::blink::PaymentValidationErrorsPtr* output) {
  bool success = true;
  ::payments::mojom::blink::PaymentValidationErrorsPtr result(::payments::mojom::blink::PaymentValidationErrors::New());
  
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
bool StructTraits<::payments::mojom::blink::PayerErrors::DataView, ::payments::mojom::blink::PayerErrorsPtr>::Read(
    ::payments::mojom::blink::PayerErrors::DataView input,
    ::payments::mojom::blink::PayerErrorsPtr* output) {
  bool success = true;
  ::payments::mojom::blink::PayerErrorsPtr result(::payments::mojom::blink::PayerErrors::New());
  
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
bool StructTraits<::payments::mojom::blink::AddressErrors::DataView, ::payments::mojom::blink::AddressErrorsPtr>::Read(
    ::payments::mojom::blink::AddressErrors::DataView input,
    ::payments::mojom::blink::AddressErrorsPtr* output) {
  bool success = true;
  ::payments::mojom::blink::AddressErrorsPtr result(::payments::mojom::blink::AddressErrors::New());
  
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