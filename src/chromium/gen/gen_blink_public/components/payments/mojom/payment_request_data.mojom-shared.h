// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_H_
#define COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "components/payments/mojom/payment_request_data.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace payments {
namespace mojom {
class PaymentAddressDataView;

class PaymentCurrencyAmountDataView;

class PaymentValidationErrorsDataView;

class PayerErrorsDataView;

class AddressErrorsDataView;



}  // namespace mojom
}  // namespace payments

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::payments::mojom::PaymentAddressDataView> {
  using Data = ::payments::mojom::internal::PaymentAddress_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentCurrencyAmountDataView> {
  using Data = ::payments::mojom::internal::PaymentCurrencyAmount_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentValidationErrorsDataView> {
  using Data = ::payments::mojom::internal::PaymentValidationErrors_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PayerErrorsDataView> {
  using Data = ::payments::mojom::internal::PayerErrors_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::AddressErrorsDataView> {
  using Data = ::payments::mojom::internal::AddressErrors_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace payments {
namespace mojom {
class PaymentAddressDataView {
 public:
  PaymentAddressDataView() {}

  PaymentAddressDataView(
      internal::PaymentAddress_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCountryDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCountry(UserType* output) {
    auto* pointer = data_->country.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAddressLineDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddressLine(UserType* output) {
    auto* pointer = data_->address_line.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetRegionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegion(UserType* output) {
    auto* pointer = data_->region.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCity(UserType* output) {
    auto* pointer = data_->city.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDependentLocalityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDependentLocality(UserType* output) {
    auto* pointer = data_->dependent_locality.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPostalCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPostalCode(UserType* output) {
    auto* pointer = data_->postal_code.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSortingCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSortingCode(UserType* output) {
    auto* pointer = data_->sorting_code.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOrganizationDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrganization(UserType* output) {
    auto* pointer = data_->organization.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRecipientDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecipient(UserType* output) {
    auto* pointer = data_->recipient.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPhoneDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPhone(UserType* output) {
    auto* pointer = data_->phone.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentAddress_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentCurrencyAmountDataView {
 public:
  PaymentCurrencyAmountDataView() {}

  PaymentCurrencyAmountDataView(
      internal::PaymentCurrencyAmount_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCurrencyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCurrency(UserType* output) {
    auto* pointer = data_->currency.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentCurrencyAmount_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentValidationErrorsDataView {
 public:
  PaymentValidationErrorsDataView() {}

  PaymentValidationErrorsDataView(
      internal::PaymentValidationErrors_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPayerDataView(
      PayerErrorsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPayer(UserType* output) {
    auto* pointer = data_->payer.Get();
    return mojo::internal::Deserialize<::payments::mojom::PayerErrorsDataView>(
        pointer, output, context_);
  }
  inline void GetShippingAddressDataView(
      AddressErrorsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShippingAddress(UserType* output) {
    auto* pointer = data_->shipping_address.Get();
    return mojo::internal::Deserialize<::payments::mojom::AddressErrorsDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentValidationErrors_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PayerErrorsDataView {
 public:
  PayerErrorsDataView() {}

  PayerErrorsDataView(
      internal::PayerErrors_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEmailDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEmail(UserType* output) {
    auto* pointer = data_->email.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPhoneDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPhone(UserType* output) {
    auto* pointer = data_->phone.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PayerErrors_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AddressErrorsDataView {
 public:
  AddressErrorsDataView() {}

  AddressErrorsDataView(
      internal::AddressErrors_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressLineDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddressLine(UserType* output) {
    auto* pointer = data_->address_line.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCity(UserType* output) {
    auto* pointer = data_->city.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCountryDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCountry(UserType* output) {
    auto* pointer = data_->country.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDependentLocalityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDependentLocality(UserType* output) {
    auto* pointer = data_->dependent_locality.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOrganizationDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrganization(UserType* output) {
    auto* pointer = data_->organization.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPhoneDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPhone(UserType* output) {
    auto* pointer = data_->phone.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPostalCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPostalCode(UserType* output) {
    auto* pointer = data_->postal_code.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRecipientDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecipient(UserType* output) {
    auto* pointer = data_->recipient.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRegionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegion(UserType* output) {
    auto* pointer = data_->region.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSortingCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSortingCode(UserType* output) {
    auto* pointer = data_->sorting_code.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AddressErrors_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace payments

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentAddressDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentAddressDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentAddress_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::country(input)) in_country = Traits::country(input);
    typename decltype((*output)->country)::BaseType::BufferWriter
        country_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_country, buffer, &country_writer, context);
    (*output)->country.Set(
        country_writer.is_null() ? nullptr : country_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->country.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null country in PaymentAddress struct");
    decltype(Traits::address_line(input)) in_address_line = Traits::address_line(input);
    typename decltype((*output)->address_line)::BaseType::BufferWriter
        address_line_writer;
    const mojo::internal::ContainerValidateParams address_line_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_address_line, buffer, &address_line_writer, &address_line_validate_params,
        context);
    (*output)->address_line.Set(
        address_line_writer.is_null() ? nullptr : address_line_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address_line.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address_line in PaymentAddress struct");
    decltype(Traits::region(input)) in_region = Traits::region(input);
    typename decltype((*output)->region)::BaseType::BufferWriter
        region_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_region, buffer, &region_writer, context);
    (*output)->region.Set(
        region_writer.is_null() ? nullptr : region_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->region.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null region in PaymentAddress struct");
    decltype(Traits::city(input)) in_city = Traits::city(input);
    typename decltype((*output)->city)::BaseType::BufferWriter
        city_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_city, buffer, &city_writer, context);
    (*output)->city.Set(
        city_writer.is_null() ? nullptr : city_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->city.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null city in PaymentAddress struct");
    decltype(Traits::dependent_locality(input)) in_dependent_locality = Traits::dependent_locality(input);
    typename decltype((*output)->dependent_locality)::BaseType::BufferWriter
        dependent_locality_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_dependent_locality, buffer, &dependent_locality_writer, context);
    (*output)->dependent_locality.Set(
        dependent_locality_writer.is_null() ? nullptr : dependent_locality_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->dependent_locality.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null dependent_locality in PaymentAddress struct");
    decltype(Traits::postal_code(input)) in_postal_code = Traits::postal_code(input);
    typename decltype((*output)->postal_code)::BaseType::BufferWriter
        postal_code_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_postal_code, buffer, &postal_code_writer, context);
    (*output)->postal_code.Set(
        postal_code_writer.is_null() ? nullptr : postal_code_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->postal_code.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null postal_code in PaymentAddress struct");
    decltype(Traits::sorting_code(input)) in_sorting_code = Traits::sorting_code(input);
    typename decltype((*output)->sorting_code)::BaseType::BufferWriter
        sorting_code_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_sorting_code, buffer, &sorting_code_writer, context);
    (*output)->sorting_code.Set(
        sorting_code_writer.is_null() ? nullptr : sorting_code_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sorting_code.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sorting_code in PaymentAddress struct");
    decltype(Traits::organization(input)) in_organization = Traits::organization(input);
    typename decltype((*output)->organization)::BaseType::BufferWriter
        organization_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_organization, buffer, &organization_writer, context);
    (*output)->organization.Set(
        organization_writer.is_null() ? nullptr : organization_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->organization.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null organization in PaymentAddress struct");
    decltype(Traits::recipient(input)) in_recipient = Traits::recipient(input);
    typename decltype((*output)->recipient)::BaseType::BufferWriter
        recipient_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_recipient, buffer, &recipient_writer, context);
    (*output)->recipient.Set(
        recipient_writer.is_null() ? nullptr : recipient_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->recipient.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null recipient in PaymentAddress struct");
    decltype(Traits::phone(input)) in_phone = Traits::phone(input);
    typename decltype((*output)->phone)::BaseType::BufferWriter
        phone_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_phone, buffer, &phone_writer, context);
    (*output)->phone.Set(
        phone_writer.is_null() ? nullptr : phone_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->phone.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null phone in PaymentAddress struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentAddress_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentAddressDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentCurrencyAmountDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentCurrencyAmountDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentCurrencyAmount_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::currency(input)) in_currency = Traits::currency(input);
    typename decltype((*output)->currency)::BaseType::BufferWriter
        currency_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_currency, buffer, &currency_writer, context);
    (*output)->currency.Set(
        currency_writer.is_null() ? nullptr : currency_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->currency.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null currency in PaymentCurrencyAmount struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in PaymentCurrencyAmount struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentCurrencyAmount_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentCurrencyAmountDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentValidationErrorsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentValidationErrorsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentValidationErrors_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::error(input)) in_error = Traits::error(input);
    typename decltype((*output)->error)::BaseType::BufferWriter
        error_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_error, buffer, &error_writer, context);
    (*output)->error.Set(
        error_writer.is_null() ? nullptr : error_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->error.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null error in PaymentValidationErrors struct");
    decltype(Traits::payer(input)) in_payer = Traits::payer(input);
    typename decltype((*output)->payer)::BaseType::BufferWriter
        payer_writer;
    mojo::internal::Serialize<::payments::mojom::PayerErrorsDataView>(
        in_payer, buffer, &payer_writer, context);
    (*output)->payer.Set(
        payer_writer.is_null() ? nullptr : payer_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->payer.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null payer in PaymentValidationErrors struct");
    decltype(Traits::shipping_address(input)) in_shipping_address = Traits::shipping_address(input);
    typename decltype((*output)->shipping_address)::BaseType::BufferWriter
        shipping_address_writer;
    mojo::internal::Serialize<::payments::mojom::AddressErrorsDataView>(
        in_shipping_address, buffer, &shipping_address_writer, context);
    (*output)->shipping_address.Set(
        shipping_address_writer.is_null() ? nullptr : shipping_address_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->shipping_address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null shipping_address in PaymentValidationErrors struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentValidationErrors_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentValidationErrorsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PayerErrorsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PayerErrorsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PayerErrors_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::email(input)) in_email = Traits::email(input);
    typename decltype((*output)->email)::BaseType::BufferWriter
        email_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_email, buffer, &email_writer, context);
    (*output)->email.Set(
        email_writer.is_null() ? nullptr : email_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->email.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null email in PayerErrors struct");
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in PayerErrors struct");
    decltype(Traits::phone(input)) in_phone = Traits::phone(input);
    typename decltype((*output)->phone)::BaseType::BufferWriter
        phone_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_phone, buffer, &phone_writer, context);
    (*output)->phone.Set(
        phone_writer.is_null() ? nullptr : phone_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->phone.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null phone in PayerErrors struct");
  }

  static bool Deserialize(::payments::mojom::internal::PayerErrors_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PayerErrorsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::AddressErrorsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::AddressErrorsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::AddressErrors_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::address_line(input)) in_address_line = Traits::address_line(input);
    typename decltype((*output)->address_line)::BaseType::BufferWriter
        address_line_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_address_line, buffer, &address_line_writer, context);
    (*output)->address_line.Set(
        address_line_writer.is_null() ? nullptr : address_line_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address_line.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address_line in AddressErrors struct");
    decltype(Traits::city(input)) in_city = Traits::city(input);
    typename decltype((*output)->city)::BaseType::BufferWriter
        city_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_city, buffer, &city_writer, context);
    (*output)->city.Set(
        city_writer.is_null() ? nullptr : city_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->city.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null city in AddressErrors struct");
    decltype(Traits::country(input)) in_country = Traits::country(input);
    typename decltype((*output)->country)::BaseType::BufferWriter
        country_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_country, buffer, &country_writer, context);
    (*output)->country.Set(
        country_writer.is_null() ? nullptr : country_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->country.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null country in AddressErrors struct");
    decltype(Traits::dependent_locality(input)) in_dependent_locality = Traits::dependent_locality(input);
    typename decltype((*output)->dependent_locality)::BaseType::BufferWriter
        dependent_locality_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_dependent_locality, buffer, &dependent_locality_writer, context);
    (*output)->dependent_locality.Set(
        dependent_locality_writer.is_null() ? nullptr : dependent_locality_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->dependent_locality.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null dependent_locality in AddressErrors struct");
    decltype(Traits::organization(input)) in_organization = Traits::organization(input);
    typename decltype((*output)->organization)::BaseType::BufferWriter
        organization_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_organization, buffer, &organization_writer, context);
    (*output)->organization.Set(
        organization_writer.is_null() ? nullptr : organization_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->organization.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null organization in AddressErrors struct");
    decltype(Traits::phone(input)) in_phone = Traits::phone(input);
    typename decltype((*output)->phone)::BaseType::BufferWriter
        phone_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_phone, buffer, &phone_writer, context);
    (*output)->phone.Set(
        phone_writer.is_null() ? nullptr : phone_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->phone.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null phone in AddressErrors struct");
    decltype(Traits::postal_code(input)) in_postal_code = Traits::postal_code(input);
    typename decltype((*output)->postal_code)::BaseType::BufferWriter
        postal_code_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_postal_code, buffer, &postal_code_writer, context);
    (*output)->postal_code.Set(
        postal_code_writer.is_null() ? nullptr : postal_code_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->postal_code.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null postal_code in AddressErrors struct");
    decltype(Traits::recipient(input)) in_recipient = Traits::recipient(input);
    typename decltype((*output)->recipient)::BaseType::BufferWriter
        recipient_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_recipient, buffer, &recipient_writer, context);
    (*output)->recipient.Set(
        recipient_writer.is_null() ? nullptr : recipient_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->recipient.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null recipient in AddressErrors struct");
    decltype(Traits::region(input)) in_region = Traits::region(input);
    typename decltype((*output)->region)::BaseType::BufferWriter
        region_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_region, buffer, &region_writer, context);
    (*output)->region.Set(
        region_writer.is_null() ? nullptr : region_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->region.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null region in AddressErrors struct");
    decltype(Traits::sorting_code(input)) in_sorting_code = Traits::sorting_code(input);
    typename decltype((*output)->sorting_code)::BaseType::BufferWriter
        sorting_code_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_sorting_code, buffer, &sorting_code_writer, context);
    (*output)->sorting_code.Set(
        sorting_code_writer.is_null() ? nullptr : sorting_code_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sorting_code.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sorting_code in AddressErrors struct");
  }

  static bool Deserialize(::payments::mojom::internal::AddressErrors_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::AddressErrorsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace payments {
namespace mojom {

inline void PaymentAddressDataView::GetCountryDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->country.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetAddressLineDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->address_line.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void PaymentAddressDataView::GetRegionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->region.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetCityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->city.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetDependentLocalityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->dependent_locality.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetPostalCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->postal_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetSortingCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sorting_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetOrganizationDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->organization.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetRecipientDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->recipient.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetPhoneDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->phone.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentCurrencyAmountDataView::GetCurrencyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->currency.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentCurrencyAmountDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentValidationErrorsDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentValidationErrorsDataView::GetPayerDataView(
    PayerErrorsDataView* output) {
  auto pointer = data_->payer.Get();
  *output = PayerErrorsDataView(pointer, context_);
}
inline void PaymentValidationErrorsDataView::GetShippingAddressDataView(
    AddressErrorsDataView* output) {
  auto pointer = data_->shipping_address.Get();
  *output = AddressErrorsDataView(pointer, context_);
}


inline void PayerErrorsDataView::GetEmailDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->email.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PayerErrorsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PayerErrorsDataView::GetPhoneDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->phone.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void AddressErrorsDataView::GetAddressLineDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->address_line.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AddressErrorsDataView::GetCityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->city.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AddressErrorsDataView::GetCountryDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->country.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AddressErrorsDataView::GetDependentLocalityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->dependent_locality.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AddressErrorsDataView::GetOrganizationDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->organization.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AddressErrorsDataView::GetPhoneDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->phone.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AddressErrorsDataView::GetPostalCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->postal_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AddressErrorsDataView::GetRecipientDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->recipient.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AddressErrorsDataView::GetRegionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->region.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AddressErrorsDataView::GetSortingCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sorting_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace payments

#endif  // COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_H_