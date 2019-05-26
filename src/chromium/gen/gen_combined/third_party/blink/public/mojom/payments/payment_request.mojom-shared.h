// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/payments/payment_request.mojom-shared-internal.h"
#include "components/payments/mojom/payment_request_data.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace payments {
namespace mojom {
class PaymentResponseDataView;

class PayerDetailDataView;

class PaymentItemDataView;

class PaymentShippingOptionDataView;

class PaymentMethodDataDataView;

class PaymentDetailsModifierDataView;

class PaymentDetailsDataView;

class PaymentOptionsDataView;



}  // namespace mojom
}  // namespace payments

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::payments::mojom::PaymentResponseDataView> {
  using Data = ::payments::mojom::internal::PaymentResponse_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PayerDetailDataView> {
  using Data = ::payments::mojom::internal::PayerDetail_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentItemDataView> {
  using Data = ::payments::mojom::internal::PaymentItem_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentShippingOptionDataView> {
  using Data = ::payments::mojom::internal::PaymentShippingOption_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentMethodDataDataView> {
  using Data = ::payments::mojom::internal::PaymentMethodData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentDetailsModifierDataView> {
  using Data = ::payments::mojom::internal::PaymentDetailsModifier_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentDetailsDataView> {
  using Data = ::payments::mojom::internal::PaymentDetails_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentOptionsDataView> {
  using Data = ::payments::mojom::internal::PaymentOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace payments {
namespace mojom {


enum class PaymentErrorReason : int32_t {
  
  UNKNOWN,
  
  USER_CANCEL,
  
  NOT_SUPPORTED,
  
  ALREADY_SHOWING,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PaymentErrorReason value);
inline bool IsKnownEnumValue(PaymentErrorReason value) {
  return internal::PaymentErrorReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CanMakePaymentQueryResult : int32_t {
  
  CAN_MAKE_PAYMENT,
  
  CANNOT_MAKE_PAYMENT,
  
  QUERY_QUOTA_EXCEEDED,
  
  WARNING_CAN_MAKE_PAYMENT,
  
  WARNING_CANNOT_MAKE_PAYMENT,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, CanMakePaymentQueryResult value);
inline bool IsKnownEnumValue(CanMakePaymentQueryResult value) {
  return internal::CanMakePaymentQueryResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class HasEnrolledInstrumentQueryResult : int32_t {
  
  HAS_ENROLLED_INSTRUMENT,
  
  HAS_NO_ENROLLED_INSTRUMENT,
  
  QUERY_QUOTA_EXCEEDED,
  
  WARNING_HAS_ENROLLED_INSTRUMENT,
  
  WARNING_HAS_NO_ENROLLED_INSTRUMENT,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, HasEnrolledInstrumentQueryResult value);
inline bool IsKnownEnumValue(HasEnrolledInstrumentQueryResult value) {
  return internal::HasEnrolledInstrumentQueryResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AndroidPayEnvironment : int32_t {
  
  PRODUCTION,
  
  TEST,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, AndroidPayEnvironment value);
inline bool IsKnownEnumValue(AndroidPayEnvironment value) {
  return internal::AndroidPayEnvironment_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BasicCardNetwork : int32_t {
  
  AMEX,
  
  DINERS,
  
  DISCOVER,
  
  JCB,
  
  MASTERCARD,
  
  MIR,
  
  UNIONPAY,
  
  VISA,
  kMinValue = 0,
  kMaxValue = 7,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, BasicCardNetwork value);
inline bool IsKnownEnumValue(BasicCardNetwork value) {
  return internal::BasicCardNetwork_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BasicCardType : int32_t {
  
  CREDIT,
  
  DEBIT,
  
  PREPAID,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, BasicCardType value);
inline bool IsKnownEnumValue(BasicCardType value) {
  return internal::BasicCardType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PaymentShippingType : int32_t {
  
  SHIPPING,
  
  DELIVERY,
  
  PICKUP,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PaymentShippingType value);
inline bool IsKnownEnumValue(PaymentShippingType value) {
  return internal::PaymentShippingType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PaymentComplete : int32_t {
  
  FAIL,
  
  SUCCESS,
  
  UNKNOWN,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PaymentComplete value);
inline bool IsKnownEnumValue(PaymentComplete value) {
  return internal::PaymentComplete_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PaymentRequestClientInterfaceBase {};

using PaymentRequestClientPtrDataView =
    mojo::InterfacePtrDataView<PaymentRequestClientInterfaceBase>;
using PaymentRequestClientRequestDataView =
    mojo::InterfaceRequestDataView<PaymentRequestClientInterfaceBase>;
using PaymentRequestClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PaymentRequestClientInterfaceBase>;
using PaymentRequestClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PaymentRequestClientInterfaceBase>;
class PaymentRequestInterfaceBase {};

using PaymentRequestPtrDataView =
    mojo::InterfacePtrDataView<PaymentRequestInterfaceBase>;
using PaymentRequestRequestDataView =
    mojo::InterfaceRequestDataView<PaymentRequestInterfaceBase>;
using PaymentRequestAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PaymentRequestInterfaceBase>;
using PaymentRequestAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PaymentRequestInterfaceBase>;
class PaymentResponseDataView {
 public:
  PaymentResponseDataView() {}

  PaymentResponseDataView(
      internal::PaymentResponse_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMethodNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodName(UserType* output) {
    auto* pointer = data_->method_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStringifiedDetailsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringifiedDetails(UserType* output) {
    auto* pointer = data_->stringified_details.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetShippingAddressDataView(
      ::payments::mojom::PaymentAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShippingAddress(UserType* output) {
    auto* pointer = data_->shipping_address.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentAddressDataView>(
        pointer, output, context_);
  }
  inline void GetShippingOptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShippingOption(UserType* output) {
    auto* pointer = data_->shipping_option.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPayerDataView(
      PayerDetailDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPayer(UserType* output) {
    auto* pointer = data_->payer.Get();
    return mojo::internal::Deserialize<::payments::mojom::PayerDetailDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PayerDetailDataView {
 public:
  PayerDetailDataView() {}

  PayerDetailDataView(
      internal::PayerDetail_Data* data,
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
  internal::PayerDetail_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentItemDataView {
 public:
  PaymentItemDataView() {}

  PaymentItemDataView(
      internal::PaymentItem_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAmountDataView(
      ::payments::mojom::PaymentCurrencyAmountDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAmount(UserType* output) {
    auto* pointer = data_->amount.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        pointer, output, context_);
  }
  bool pending() const {
    return data_->pending;
  }
 private:
  internal::PaymentItem_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentShippingOptionDataView {
 public:
  PaymentShippingOptionDataView() {}

  PaymentShippingOptionDataView(
      internal::PaymentShippingOption_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAmountDataView(
      ::payments::mojom::PaymentCurrencyAmountDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAmount(UserType* output) {
    auto* pointer = data_->amount.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        pointer, output, context_);
  }
  bool selected() const {
    return data_->selected;
  }
 private:
  internal::PaymentShippingOption_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentMethodDataDataView {
 public:
  PaymentMethodDataDataView() {}

  PaymentMethodDataDataView(
      internal::PaymentMethodData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSupportedMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedMethod(UserType* output) {
    auto* pointer = data_->supported_method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStringifiedDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringifiedData(UserType* output) {
    auto* pointer = data_->stringified_data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEnvironment(UserType* output) const {
    auto data_value = data_->environment;
    return mojo::internal::Deserialize<::payments::mojom::AndroidPayEnvironment>(
        data_value, output);
  }

  AndroidPayEnvironment environment() const {
    return static_cast<AndroidPayEnvironment>(data_->environment);
  }
  int32_t min_google_play_services_version() const {
    return data_->min_google_play_services_version;
  }
  int32_t api_version() const {
    return data_->api_version;
  }
  inline void GetSupportedNetworksDataView(
      mojo::ArrayDataView<BasicCardNetwork>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedNetworks(UserType* output) {
    auto* pointer = data_->supported_networks.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>>(
        pointer, output, context_);
  }
  inline void GetSupportedTypesDataView(
      mojo::ArrayDataView<BasicCardType>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedTypes(UserType* output) {
    auto* pointer = data_->supported_types.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::BasicCardType>>(
        pointer, output, context_);
  }
 private:
  internal::PaymentMethodData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentDetailsModifierDataView {
 public:
  PaymentDetailsModifierDataView() {}

  PaymentDetailsModifierDataView(
      internal::PaymentDetailsModifier_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTotalDataView(
      PaymentItemDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTotal(UserType* output) {
    auto* pointer = data_->total.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentItemDataView>(
        pointer, output, context_);
  }
  inline void GetAdditionalDisplayItemsDataView(
      mojo::ArrayDataView<PaymentItemDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdditionalDisplayItems(UserType* output) {
    auto* pointer = data_->additional_display_items.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentItemDataView>>(
        pointer, output, context_);
  }
  inline void GetMethodDataDataView(
      PaymentMethodDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodData(UserType* output) {
    auto* pointer = data_->method_data.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentMethodDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentDetailsModifier_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentDetailsDataView {
 public:
  PaymentDetailsDataView() {}

  PaymentDetailsDataView(
      internal::PaymentDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTotalDataView(
      PaymentItemDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTotal(UserType* output) {
    auto* pointer = data_->total.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentItemDataView>(
        pointer, output, context_);
  }
  inline void GetDisplayItemsDataView(
      mojo::ArrayDataView<PaymentItemDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayItems(UserType* output) {
    auto* pointer = data_->display_items.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentItemDataView>>(
        pointer, output, context_);
  }
  inline void GetShippingOptionsDataView(
      mojo::ArrayDataView<PaymentShippingOptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShippingOptions(UserType* output) {
    auto* pointer = data_->shipping_options.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentShippingOptionDataView>>(
        pointer, output, context_);
  }
  inline void GetModifiersDataView(
      mojo::ArrayDataView<PaymentDetailsModifierDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModifiers(UserType* output) {
    auto* pointer = data_->modifiers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>>(
        pointer, output, context_);
  }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetShippingAddressErrorsDataView(
      ::payments::mojom::AddressErrorsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShippingAddressErrors(UserType* output) {
    auto* pointer = data_->shipping_address_errors.Get();
    return mojo::internal::Deserialize<::payments::mojom::AddressErrorsDataView>(
        pointer, output, context_);
  }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStringifiedPaymentMethodErrorsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringifiedPaymentMethodErrors(UserType* output) {
    auto* pointer = data_->stringified_payment_method_errors.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentOptionsDataView {
 public:
  PaymentOptionsDataView() {}

  PaymentOptionsDataView(
      internal::PaymentOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool request_payer_name() const {
    return data_->request_payer_name;
  }
  bool request_payer_email() const {
    return data_->request_payer_email;
  }
  bool request_payer_phone() const {
    return data_->request_payer_phone;
  }
  bool request_shipping() const {
    return data_->request_shipping;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShippingType(UserType* output) const {
    auto data_value = data_->shipping_type;
    return mojo::internal::Deserialize<::payments::mojom::PaymentShippingType>(
        data_value, output);
  }

  PaymentShippingType shipping_type() const {
    return static_cast<PaymentShippingType>(data_->shipping_type);
  }
 private:
  internal::PaymentOptions_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace payments

namespace std {

template <>
struct hash<::payments::mojom::PaymentErrorReason>
    : public mojo::internal::EnumHashImpl<::payments::mojom::PaymentErrorReason> {};

template <>
struct hash<::payments::mojom::CanMakePaymentQueryResult>
    : public mojo::internal::EnumHashImpl<::payments::mojom::CanMakePaymentQueryResult> {};

template <>
struct hash<::payments::mojom::HasEnrolledInstrumentQueryResult>
    : public mojo::internal::EnumHashImpl<::payments::mojom::HasEnrolledInstrumentQueryResult> {};

template <>
struct hash<::payments::mojom::AndroidPayEnvironment>
    : public mojo::internal::EnumHashImpl<::payments::mojom::AndroidPayEnvironment> {};

template <>
struct hash<::payments::mojom::BasicCardNetwork>
    : public mojo::internal::EnumHashImpl<::payments::mojom::BasicCardNetwork> {};

template <>
struct hash<::payments::mojom::BasicCardType>
    : public mojo::internal::EnumHashImpl<::payments::mojom::BasicCardType> {};

template <>
struct hash<::payments::mojom::PaymentShippingType>
    : public mojo::internal::EnumHashImpl<::payments::mojom::PaymentShippingType> {};

template <>
struct hash<::payments::mojom::PaymentComplete>
    : public mojo::internal::EnumHashImpl<::payments::mojom::PaymentComplete> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::payments::mojom::PaymentErrorReason, ::payments::mojom::PaymentErrorReason> {
  static ::payments::mojom::PaymentErrorReason ToMojom(::payments::mojom::PaymentErrorReason input) { return input; }
  static bool FromMojom(::payments::mojom::PaymentErrorReason input, ::payments::mojom::PaymentErrorReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentErrorReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::payments::mojom::PaymentErrorReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::payments::mojom::PaymentErrorReason>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::payments::mojom::CanMakePaymentQueryResult, ::payments::mojom::CanMakePaymentQueryResult> {
  static ::payments::mojom::CanMakePaymentQueryResult ToMojom(::payments::mojom::CanMakePaymentQueryResult input) { return input; }
  static bool FromMojom(::payments::mojom::CanMakePaymentQueryResult input, ::payments::mojom::CanMakePaymentQueryResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::CanMakePaymentQueryResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::payments::mojom::CanMakePaymentQueryResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::payments::mojom::CanMakePaymentQueryResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::payments::mojom::HasEnrolledInstrumentQueryResult, ::payments::mojom::HasEnrolledInstrumentQueryResult> {
  static ::payments::mojom::HasEnrolledInstrumentQueryResult ToMojom(::payments::mojom::HasEnrolledInstrumentQueryResult input) { return input; }
  static bool FromMojom(::payments::mojom::HasEnrolledInstrumentQueryResult input, ::payments::mojom::HasEnrolledInstrumentQueryResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::HasEnrolledInstrumentQueryResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::payments::mojom::HasEnrolledInstrumentQueryResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::payments::mojom::HasEnrolledInstrumentQueryResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::payments::mojom::AndroidPayEnvironment, ::payments::mojom::AndroidPayEnvironment> {
  static ::payments::mojom::AndroidPayEnvironment ToMojom(::payments::mojom::AndroidPayEnvironment input) { return input; }
  static bool FromMojom(::payments::mojom::AndroidPayEnvironment input, ::payments::mojom::AndroidPayEnvironment* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::AndroidPayEnvironment, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::payments::mojom::AndroidPayEnvironment, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::payments::mojom::AndroidPayEnvironment>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::payments::mojom::BasicCardNetwork, ::payments::mojom::BasicCardNetwork> {
  static ::payments::mojom::BasicCardNetwork ToMojom(::payments::mojom::BasicCardNetwork input) { return input; }
  static bool FromMojom(::payments::mojom::BasicCardNetwork input, ::payments::mojom::BasicCardNetwork* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::BasicCardNetwork, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::payments::mojom::BasicCardNetwork, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::payments::mojom::BasicCardNetwork>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::payments::mojom::BasicCardType, ::payments::mojom::BasicCardType> {
  static ::payments::mojom::BasicCardType ToMojom(::payments::mojom::BasicCardType input) { return input; }
  static bool FromMojom(::payments::mojom::BasicCardType input, ::payments::mojom::BasicCardType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::BasicCardType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::payments::mojom::BasicCardType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::payments::mojom::BasicCardType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::payments::mojom::PaymentShippingType, ::payments::mojom::PaymentShippingType> {
  static ::payments::mojom::PaymentShippingType ToMojom(::payments::mojom::PaymentShippingType input) { return input; }
  static bool FromMojom(::payments::mojom::PaymentShippingType input, ::payments::mojom::PaymentShippingType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentShippingType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::payments::mojom::PaymentShippingType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::payments::mojom::PaymentShippingType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::payments::mojom::PaymentComplete, ::payments::mojom::PaymentComplete> {
  static ::payments::mojom::PaymentComplete ToMojom(::payments::mojom::PaymentComplete input) { return input; }
  static bool FromMojom(::payments::mojom::PaymentComplete input, ::payments::mojom::PaymentComplete* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentComplete, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::payments::mojom::PaymentComplete, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::payments::mojom::PaymentComplete>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentResponse_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::method_name(input)) in_method_name = Traits::method_name(input);
    typename decltype((*output)->method_name)::BaseType::BufferWriter
        method_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_method_name, buffer, &method_name_writer, context);
    (*output)->method_name.Set(
        method_name_writer.is_null() ? nullptr : method_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method_name in PaymentResponse struct");
    decltype(Traits::stringified_details(input)) in_stringified_details = Traits::stringified_details(input);
    typename decltype((*output)->stringified_details)::BaseType::BufferWriter
        stringified_details_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stringified_details, buffer, &stringified_details_writer, context);
    (*output)->stringified_details.Set(
        stringified_details_writer.is_null() ? nullptr : stringified_details_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->stringified_details.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stringified_details in PaymentResponse struct");
    decltype(Traits::shipping_address(input)) in_shipping_address = Traits::shipping_address(input);
    typename decltype((*output)->shipping_address)::BaseType::BufferWriter
        shipping_address_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentAddressDataView>(
        in_shipping_address, buffer, &shipping_address_writer, context);
    (*output)->shipping_address.Set(
        shipping_address_writer.is_null() ? nullptr : shipping_address_writer.data());
    decltype(Traits::shipping_option(input)) in_shipping_option = Traits::shipping_option(input);
    typename decltype((*output)->shipping_option)::BaseType::BufferWriter
        shipping_option_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_shipping_option, buffer, &shipping_option_writer, context);
    (*output)->shipping_option.Set(
        shipping_option_writer.is_null() ? nullptr : shipping_option_writer.data());
    decltype(Traits::payer(input)) in_payer = Traits::payer(input);
    typename decltype((*output)->payer)::BaseType::BufferWriter
        payer_writer;
    mojo::internal::Serialize<::payments::mojom::PayerDetailDataView>(
        in_payer, buffer, &payer_writer, context);
    (*output)->payer.Set(
        payer_writer.is_null() ? nullptr : payer_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->payer.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null payer in PaymentResponse struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PayerDetailDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PayerDetailDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PayerDetail_Data::BufferWriter* output,
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
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(Traits::phone(input)) in_phone = Traits::phone(input);
    typename decltype((*output)->phone)::BaseType::BufferWriter
        phone_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_phone, buffer, &phone_writer, context);
    (*output)->phone.Set(
        phone_writer.is_null() ? nullptr : phone_writer.data());
  }

  static bool Deserialize(::payments::mojom::internal::PayerDetail_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PayerDetailDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentItemDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentItemDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentItem_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::label(input)) in_label = Traits::label(input);
    typename decltype((*output)->label)::BaseType::BufferWriter
        label_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_label, buffer, &label_writer, context);
    (*output)->label.Set(
        label_writer.is_null() ? nullptr : label_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->label.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null label in PaymentItem struct");
    decltype(Traits::amount(input)) in_amount = Traits::amount(input);
    typename decltype((*output)->amount)::BaseType::BufferWriter
        amount_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        in_amount, buffer, &amount_writer, context);
    (*output)->amount.Set(
        amount_writer.is_null() ? nullptr : amount_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->amount.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null amount in PaymentItem struct");
    (*output)->pending = Traits::pending(input);
  }

  static bool Deserialize(::payments::mojom::internal::PaymentItem_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentItemDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentShippingOptionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentShippingOptionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentShippingOption_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in PaymentShippingOption struct");
    decltype(Traits::label(input)) in_label = Traits::label(input);
    typename decltype((*output)->label)::BaseType::BufferWriter
        label_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_label, buffer, &label_writer, context);
    (*output)->label.Set(
        label_writer.is_null() ? nullptr : label_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->label.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null label in PaymentShippingOption struct");
    decltype(Traits::amount(input)) in_amount = Traits::amount(input);
    typename decltype((*output)->amount)::BaseType::BufferWriter
        amount_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        in_amount, buffer, &amount_writer, context);
    (*output)->amount.Set(
        amount_writer.is_null() ? nullptr : amount_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->amount.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null amount in PaymentShippingOption struct");
    (*output)->selected = Traits::selected(input);
  }

  static bool Deserialize(::payments::mojom::internal::PaymentShippingOption_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentShippingOptionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentMethodDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentMethodDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentMethodData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::supported_method(input)) in_supported_method = Traits::supported_method(input);
    typename decltype((*output)->supported_method)::BaseType::BufferWriter
        supported_method_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_supported_method, buffer, &supported_method_writer, context);
    (*output)->supported_method.Set(
        supported_method_writer.is_null() ? nullptr : supported_method_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_method.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_method in PaymentMethodData struct");
    decltype(Traits::stringified_data(input)) in_stringified_data = Traits::stringified_data(input);
    typename decltype((*output)->stringified_data)::BaseType::BufferWriter
        stringified_data_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stringified_data, buffer, &stringified_data_writer, context);
    (*output)->stringified_data.Set(
        stringified_data_writer.is_null() ? nullptr : stringified_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->stringified_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stringified_data in PaymentMethodData struct");
    mojo::internal::Serialize<::payments::mojom::AndroidPayEnvironment>(
        Traits::environment(input), &(*output)->environment);
    (*output)->min_google_play_services_version = Traits::min_google_play_services_version(input);
    (*output)->api_version = Traits::api_version(input);
    decltype(Traits::supported_networks(input)) in_supported_networks = Traits::supported_networks(input);
    typename decltype((*output)->supported_networks)::BaseType::BufferWriter
        supported_networks_writer;
    const mojo::internal::ContainerValidateParams supported_networks_validate_params(
        0, ::payments::mojom::internal::BasicCardNetwork_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>>(
        in_supported_networks, buffer, &supported_networks_writer, &supported_networks_validate_params,
        context);
    (*output)->supported_networks.Set(
        supported_networks_writer.is_null() ? nullptr : supported_networks_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_networks.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_networks in PaymentMethodData struct");
    decltype(Traits::supported_types(input)) in_supported_types = Traits::supported_types(input);
    typename decltype((*output)->supported_types)::BaseType::BufferWriter
        supported_types_writer;
    const mojo::internal::ContainerValidateParams supported_types_validate_params(
        0, ::payments::mojom::internal::BasicCardType_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::BasicCardType>>(
        in_supported_types, buffer, &supported_types_writer, &supported_types_validate_params,
        context);
    (*output)->supported_types.Set(
        supported_types_writer.is_null() ? nullptr : supported_types_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_types.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_types in PaymentMethodData struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentMethodData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentMethodDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentDetailsModifierDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentDetailsModifierDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentDetailsModifier_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::total(input)) in_total = Traits::total(input);
    typename decltype((*output)->total)::BaseType::BufferWriter
        total_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentItemDataView>(
        in_total, buffer, &total_writer, context);
    (*output)->total.Set(
        total_writer.is_null() ? nullptr : total_writer.data());
    decltype(Traits::additional_display_items(input)) in_additional_display_items = Traits::additional_display_items(input);
    typename decltype((*output)->additional_display_items)::BaseType::BufferWriter
        additional_display_items_writer;
    const mojo::internal::ContainerValidateParams additional_display_items_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentItemDataView>>(
        in_additional_display_items, buffer, &additional_display_items_writer, &additional_display_items_validate_params,
        context);
    (*output)->additional_display_items.Set(
        additional_display_items_writer.is_null() ? nullptr : additional_display_items_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->additional_display_items.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null additional_display_items in PaymentDetailsModifier struct");
    decltype(Traits::method_data(input)) in_method_data = Traits::method_data(input);
    typename decltype((*output)->method_data)::BaseType::BufferWriter
        method_data_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentMethodDataDataView>(
        in_method_data, buffer, &method_data_writer, context);
    (*output)->method_data.Set(
        method_data_writer.is_null() ? nullptr : method_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method_data in PaymentDetailsModifier struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentDetailsModifier_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentDetailsModifierDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentDetailsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentDetailsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentDetails_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::total(input)) in_total = Traits::total(input);
    typename decltype((*output)->total)::BaseType::BufferWriter
        total_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentItemDataView>(
        in_total, buffer, &total_writer, context);
    (*output)->total.Set(
        total_writer.is_null() ? nullptr : total_writer.data());
    decltype(Traits::display_items(input)) in_display_items = Traits::display_items(input);
    typename decltype((*output)->display_items)::BaseType::BufferWriter
        display_items_writer;
    const mojo::internal::ContainerValidateParams display_items_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentItemDataView>>(
        in_display_items, buffer, &display_items_writer, &display_items_validate_params,
        context);
    (*output)->display_items.Set(
        display_items_writer.is_null() ? nullptr : display_items_writer.data());
    decltype(Traits::shipping_options(input)) in_shipping_options = Traits::shipping_options(input);
    typename decltype((*output)->shipping_options)::BaseType::BufferWriter
        shipping_options_writer;
    const mojo::internal::ContainerValidateParams shipping_options_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentShippingOptionDataView>>(
        in_shipping_options, buffer, &shipping_options_writer, &shipping_options_validate_params,
        context);
    (*output)->shipping_options.Set(
        shipping_options_writer.is_null() ? nullptr : shipping_options_writer.data());
    decltype(Traits::modifiers(input)) in_modifiers = Traits::modifiers(input);
    typename decltype((*output)->modifiers)::BaseType::BufferWriter
        modifiers_writer;
    const mojo::internal::ContainerValidateParams modifiers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>>(
        in_modifiers, buffer, &modifiers_writer, &modifiers_validate_params,
        context);
    (*output)->modifiers.Set(
        modifiers_writer.is_null() ? nullptr : modifiers_writer.data());
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
        "null error in PaymentDetails struct");
    decltype(Traits::shipping_address_errors(input)) in_shipping_address_errors = Traits::shipping_address_errors(input);
    typename decltype((*output)->shipping_address_errors)::BaseType::BufferWriter
        shipping_address_errors_writer;
    mojo::internal::Serialize<::payments::mojom::AddressErrorsDataView>(
        in_shipping_address_errors, buffer, &shipping_address_errors_writer, context);
    (*output)->shipping_address_errors.Set(
        shipping_address_errors_writer.is_null() ? nullptr : shipping_address_errors_writer.data());
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    decltype(Traits::stringified_payment_method_errors(input)) in_stringified_payment_method_errors = Traits::stringified_payment_method_errors(input);
    typename decltype((*output)->stringified_payment_method_errors)::BaseType::BufferWriter
        stringified_payment_method_errors_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stringified_payment_method_errors, buffer, &stringified_payment_method_errors_writer, context);
    (*output)->stringified_payment_method_errors.Set(
        stringified_payment_method_errors_writer.is_null() ? nullptr : stringified_payment_method_errors_writer.data());
  }

  static bool Deserialize(::payments::mojom::internal::PaymentDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->request_payer_name = Traits::request_payer_name(input);
    (*output)->request_payer_email = Traits::request_payer_email(input);
    (*output)->request_payer_phone = Traits::request_payer_phone(input);
    (*output)->request_shipping = Traits::request_shipping(input);
    mojo::internal::Serialize<::payments::mojom::PaymentShippingType>(
        Traits::shipping_type(input), &(*output)->shipping_type);
  }

  static bool Deserialize(::payments::mojom::internal::PaymentOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace payments {
namespace mojom {

inline void PaymentResponseDataView::GetMethodNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentResponseDataView::GetStringifiedDetailsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_details.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentResponseDataView::GetShippingAddressDataView(
    ::payments::mojom::PaymentAddressDataView* output) {
  auto pointer = data_->shipping_address.Get();
  *output = ::payments::mojom::PaymentAddressDataView(pointer, context_);
}
inline void PaymentResponseDataView::GetShippingOptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->shipping_option.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentResponseDataView::GetPayerDataView(
    PayerDetailDataView* output) {
  auto pointer = data_->payer.Get();
  *output = PayerDetailDataView(pointer, context_);
}


inline void PayerDetailDataView::GetEmailDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->email.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PayerDetailDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PayerDetailDataView::GetPhoneDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->phone.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentItemDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentItemDataView::GetAmountDataView(
    ::payments::mojom::PaymentCurrencyAmountDataView* output) {
  auto pointer = data_->amount.Get();
  *output = ::payments::mojom::PaymentCurrencyAmountDataView(pointer, context_);
}


inline void PaymentShippingOptionDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentShippingOptionDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentShippingOptionDataView::GetAmountDataView(
    ::payments::mojom::PaymentCurrencyAmountDataView* output) {
  auto pointer = data_->amount.Get();
  *output = ::payments::mojom::PaymentCurrencyAmountDataView(pointer, context_);
}


inline void PaymentMethodDataDataView::GetSupportedMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->supported_method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentMethodDataDataView::GetStringifiedDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_data.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentMethodDataDataView::GetSupportedNetworksDataView(
    mojo::ArrayDataView<BasicCardNetwork>* output) {
  auto pointer = data_->supported_networks.Get();
  *output = mojo::ArrayDataView<BasicCardNetwork>(pointer, context_);
}
inline void PaymentMethodDataDataView::GetSupportedTypesDataView(
    mojo::ArrayDataView<BasicCardType>* output) {
  auto pointer = data_->supported_types.Get();
  *output = mojo::ArrayDataView<BasicCardType>(pointer, context_);
}


inline void PaymentDetailsModifierDataView::GetTotalDataView(
    PaymentItemDataView* output) {
  auto pointer = data_->total.Get();
  *output = PaymentItemDataView(pointer, context_);
}
inline void PaymentDetailsModifierDataView::GetAdditionalDisplayItemsDataView(
    mojo::ArrayDataView<PaymentItemDataView>* output) {
  auto pointer = data_->additional_display_items.Get();
  *output = mojo::ArrayDataView<PaymentItemDataView>(pointer, context_);
}
inline void PaymentDetailsModifierDataView::GetMethodDataDataView(
    PaymentMethodDataDataView* output) {
  auto pointer = data_->method_data.Get();
  *output = PaymentMethodDataDataView(pointer, context_);
}


inline void PaymentDetailsDataView::GetTotalDataView(
    PaymentItemDataView* output) {
  auto pointer = data_->total.Get();
  *output = PaymentItemDataView(pointer, context_);
}
inline void PaymentDetailsDataView::GetDisplayItemsDataView(
    mojo::ArrayDataView<PaymentItemDataView>* output) {
  auto pointer = data_->display_items.Get();
  *output = mojo::ArrayDataView<PaymentItemDataView>(pointer, context_);
}
inline void PaymentDetailsDataView::GetShippingOptionsDataView(
    mojo::ArrayDataView<PaymentShippingOptionDataView>* output) {
  auto pointer = data_->shipping_options.Get();
  *output = mojo::ArrayDataView<PaymentShippingOptionDataView>(pointer, context_);
}
inline void PaymentDetailsDataView::GetModifiersDataView(
    mojo::ArrayDataView<PaymentDetailsModifierDataView>* output) {
  auto pointer = data_->modifiers.Get();
  *output = mojo::ArrayDataView<PaymentDetailsModifierDataView>(pointer, context_);
}
inline void PaymentDetailsDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentDetailsDataView::GetShippingAddressErrorsDataView(
    ::payments::mojom::AddressErrorsDataView* output) {
  auto pointer = data_->shipping_address_errors.Get();
  *output = ::payments::mojom::AddressErrorsDataView(pointer, context_);
}
inline void PaymentDetailsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentDetailsDataView::GetStringifiedPaymentMethodErrorsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_payment_method_errors.Get();
  *output = mojo::StringDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_SHARED_H_