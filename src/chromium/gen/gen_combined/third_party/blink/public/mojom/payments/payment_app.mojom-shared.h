// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/payments/payment_app.mojom-shared-internal.h"
#include "components/payments/mojom/payment_request_data.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared.h"
#include "third_party/blink/public/mojom/payments/payment_request.mojom-shared.h"
#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace payments {
namespace mojom {
class PaymentInstrumentDataView;

class CanMakePaymentEventDataDataView;

class PaymentRequestEventDataDataView;

class PaymentHandlerResponseDataView;



}  // namespace mojom
}  // namespace payments

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::payments::mojom::PaymentInstrumentDataView> {
  using Data = ::payments::mojom::internal::PaymentInstrument_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::CanMakePaymentEventDataDataView> {
  using Data = ::payments::mojom::internal::CanMakePaymentEventData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentRequestEventDataDataView> {
  using Data = ::payments::mojom::internal::PaymentRequestEventData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentHandlerResponseDataView> {
  using Data = ::payments::mojom::internal::PaymentHandlerResponse_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace payments {
namespace mojom {


enum class PaymentHandlerStatus : int32_t {
  
  SUCCESS,
  
  NOT_FOUND,
  
  NO_ACTIVE_WORKER,
  
  STORAGE_OPERATION_FAILED,
  
  FETCH_INSTRUMENT_ICON_FAILED,
  
  FETCH_PAYMENT_APP_INFO_FAILED,
  kMinValue = 0,
  kMaxValue = 5,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PaymentHandlerStatus value);
inline bool IsKnownEnumValue(PaymentHandlerStatus value) {
  return internal::PaymentHandlerStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PaymentManagerInterfaceBase {};

using PaymentManagerPtrDataView =
    mojo::InterfacePtrDataView<PaymentManagerInterfaceBase>;
using PaymentManagerRequestDataView =
    mojo::InterfaceRequestDataView<PaymentManagerInterfaceBase>;
using PaymentManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PaymentManagerInterfaceBase>;
using PaymentManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PaymentManagerInterfaceBase>;
class PaymentHandlerResponseCallbackInterfaceBase {};

using PaymentHandlerResponseCallbackPtrDataView =
    mojo::InterfacePtrDataView<PaymentHandlerResponseCallbackInterfaceBase>;
using PaymentHandlerResponseCallbackRequestDataView =
    mojo::InterfaceRequestDataView<PaymentHandlerResponseCallbackInterfaceBase>;
using PaymentHandlerResponseCallbackAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PaymentHandlerResponseCallbackInterfaceBase>;
using PaymentHandlerResponseCallbackAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PaymentHandlerResponseCallbackInterfaceBase>;
class PaymentInstrumentDataView {
 public:
  PaymentInstrumentDataView() {}

  PaymentInstrumentDataView(
      internal::PaymentInstrument_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetIconsDataView(
      mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcons(UserType* output) {
    auto* pointer = data_->icons.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>>(
        pointer, output, context_);
  }
  inline void GetMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) {
    auto* pointer = data_->method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStringifiedCapabilitiesDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringifiedCapabilities(UserType* output) {
    auto* pointer = data_->stringified_capabilities.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSupportedNetworksDataView(
      mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedNetworks(UserType* output) {
    auto* pointer = data_->supported_networks.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>>(
        pointer, output, context_);
  }
  inline void GetSupportedTypesDataView(
      mojo::ArrayDataView<::payments::mojom::BasicCardType>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedTypes(UserType* output) {
    auto* pointer = data_->supported_types.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::BasicCardType>>(
        pointer, output, context_);
  }
 private:
  internal::PaymentInstrument_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CanMakePaymentEventDataDataView {
 public:
  CanMakePaymentEventDataDataView() {}

  CanMakePaymentEventDataDataView(
      internal::CanMakePaymentEventData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTopOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTopOrigin(UserType* output) {
    auto* pointer = data_->top_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPaymentRequestOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPaymentRequestOrigin(UserType* output) {
    auto* pointer = data_->payment_request_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetMethodDataDataView(
      mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodData(UserType* output) {
    auto* pointer = data_->method_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
        pointer, output, context_);
  }
  inline void GetModifiersDataView(
      mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModifiers(UserType* output) {
    auto* pointer = data_->modifiers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CanMakePaymentEventData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentRequestEventDataDataView {
 public:
  PaymentRequestEventDataDataView() {}

  PaymentRequestEventDataDataView(
      internal::PaymentRequestEventData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTopOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTopOrigin(UserType* output) {
    auto* pointer = data_->top_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPaymentRequestOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPaymentRequestOrigin(UserType* output) {
    auto* pointer = data_->payment_request_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPaymentRequestIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPaymentRequestId(UserType* output) {
    auto* pointer = data_->payment_request_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMethodDataDataView(
      mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodData(UserType* output) {
    auto* pointer = data_->method_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
        pointer, output, context_);
  }
  inline void GetTotalDataView(
      ::payments::mojom::PaymentCurrencyAmountDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTotal(UserType* output) {
    auto* pointer = data_->total.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        pointer, output, context_);
  }
  inline void GetModifiersDataView(
      mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModifiers(UserType* output) {
    auto* pointer = data_->modifiers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>>(
        pointer, output, context_);
  }
  inline void GetInstrumentKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrumentKey(UserType* output) {
    auto* pointer = data_->instrument_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakePaymentHandlerHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::payments::mojom::PaymentHandlerHostPtrDataView>(
            &data_->payment_handler_host, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PaymentRequestEventData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentHandlerResponseDataView {
 public:
  PaymentHandlerResponseDataView() {}

  PaymentHandlerResponseDataView(
      internal::PaymentHandlerResponse_Data* data,
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
 private:
  internal::PaymentHandlerResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace payments

namespace std {

template <>
struct hash<::payments::mojom::PaymentHandlerStatus>
    : public mojo::internal::EnumHashImpl<::payments::mojom::PaymentHandlerStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::payments::mojom::PaymentHandlerStatus, ::payments::mojom::PaymentHandlerStatus> {
  static ::payments::mojom::PaymentHandlerStatus ToMojom(::payments::mojom::PaymentHandlerStatus input) { return input; }
  static bool FromMojom(::payments::mojom::PaymentHandlerStatus input, ::payments::mojom::PaymentHandlerStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentHandlerStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::payments::mojom::PaymentHandlerStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::payments::mojom::PaymentHandlerStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentInstrumentDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentInstrumentDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentInstrument_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
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
        "null name in PaymentInstrument struct");
    decltype(Traits::icons(input)) in_icons = Traits::icons(input);
    typename decltype((*output)->icons)::BaseType::BufferWriter
        icons_writer;
    const mojo::internal::ContainerValidateParams icons_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>>(
        in_icons, buffer, &icons_writer, &icons_validate_params,
        context);
    (*output)->icons.Set(
        icons_writer.is_null() ? nullptr : icons_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->icons.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null icons in PaymentInstrument struct");
    decltype(Traits::method(input)) in_method = Traits::method(input);
    typename decltype((*output)->method)::BaseType::BufferWriter
        method_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_method, buffer, &method_writer, context);
    (*output)->method.Set(
        method_writer.is_null() ? nullptr : method_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method in PaymentInstrument struct");
    decltype(Traits::stringified_capabilities(input)) in_stringified_capabilities = Traits::stringified_capabilities(input);
    typename decltype((*output)->stringified_capabilities)::BaseType::BufferWriter
        stringified_capabilities_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stringified_capabilities, buffer, &stringified_capabilities_writer, context);
    (*output)->stringified_capabilities.Set(
        stringified_capabilities_writer.is_null() ? nullptr : stringified_capabilities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->stringified_capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stringified_capabilities in PaymentInstrument struct");
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
        "null supported_networks in PaymentInstrument struct");
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
        "null supported_types in PaymentInstrument struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentInstrument_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentInstrumentDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::CanMakePaymentEventDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::CanMakePaymentEventDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::CanMakePaymentEventData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::top_origin(input)) in_top_origin = Traits::top_origin(input);
    typename decltype((*output)->top_origin)::BaseType::BufferWriter
        top_origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_top_origin, buffer, &top_origin_writer, context);
    (*output)->top_origin.Set(
        top_origin_writer.is_null() ? nullptr : top_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->top_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null top_origin in CanMakePaymentEventData struct");
    decltype(Traits::payment_request_origin(input)) in_payment_request_origin = Traits::payment_request_origin(input);
    typename decltype((*output)->payment_request_origin)::BaseType::BufferWriter
        payment_request_origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_payment_request_origin, buffer, &payment_request_origin_writer, context);
    (*output)->payment_request_origin.Set(
        payment_request_origin_writer.is_null() ? nullptr : payment_request_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->payment_request_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null payment_request_origin in CanMakePaymentEventData struct");
    decltype(Traits::method_data(input)) in_method_data = Traits::method_data(input);
    typename decltype((*output)->method_data)::BaseType::BufferWriter
        method_data_writer;
    const mojo::internal::ContainerValidateParams method_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
        in_method_data, buffer, &method_data_writer, &method_data_validate_params,
        context);
    (*output)->method_data.Set(
        method_data_writer.is_null() ? nullptr : method_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method_data in CanMakePaymentEventData struct");
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
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->modifiers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null modifiers in CanMakePaymentEventData struct");
  }

  static bool Deserialize(::payments::mojom::internal::CanMakePaymentEventData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::CanMakePaymentEventDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentRequestEventDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentRequestEventDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentRequestEventData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::top_origin(input)) in_top_origin = Traits::top_origin(input);
    typename decltype((*output)->top_origin)::BaseType::BufferWriter
        top_origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_top_origin, buffer, &top_origin_writer, context);
    (*output)->top_origin.Set(
        top_origin_writer.is_null() ? nullptr : top_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->top_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null top_origin in PaymentRequestEventData struct");
    decltype(Traits::payment_request_origin(input)) in_payment_request_origin = Traits::payment_request_origin(input);
    typename decltype((*output)->payment_request_origin)::BaseType::BufferWriter
        payment_request_origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_payment_request_origin, buffer, &payment_request_origin_writer, context);
    (*output)->payment_request_origin.Set(
        payment_request_origin_writer.is_null() ? nullptr : payment_request_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->payment_request_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null payment_request_origin in PaymentRequestEventData struct");
    decltype(Traits::payment_request_id(input)) in_payment_request_id = Traits::payment_request_id(input);
    typename decltype((*output)->payment_request_id)::BaseType::BufferWriter
        payment_request_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_payment_request_id, buffer, &payment_request_id_writer, context);
    (*output)->payment_request_id.Set(
        payment_request_id_writer.is_null() ? nullptr : payment_request_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->payment_request_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null payment_request_id in PaymentRequestEventData struct");
    decltype(Traits::method_data(input)) in_method_data = Traits::method_data(input);
    typename decltype((*output)->method_data)::BaseType::BufferWriter
        method_data_writer;
    const mojo::internal::ContainerValidateParams method_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
        in_method_data, buffer, &method_data_writer, &method_data_validate_params,
        context);
    (*output)->method_data.Set(
        method_data_writer.is_null() ? nullptr : method_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method_data in PaymentRequestEventData struct");
    decltype(Traits::total(input)) in_total = Traits::total(input);
    typename decltype((*output)->total)::BaseType::BufferWriter
        total_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        in_total, buffer, &total_writer, context);
    (*output)->total.Set(
        total_writer.is_null() ? nullptr : total_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->total.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null total in PaymentRequestEventData struct");
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
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->modifiers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null modifiers in PaymentRequestEventData struct");
    decltype(Traits::instrument_key(input)) in_instrument_key = Traits::instrument_key(input);
    typename decltype((*output)->instrument_key)::BaseType::BufferWriter
        instrument_key_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_instrument_key, buffer, &instrument_key_writer, context);
    (*output)->instrument_key.Set(
        instrument_key_writer.is_null() ? nullptr : instrument_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instrument_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instrument_key in PaymentRequestEventData struct");
    decltype(Traits::payment_handler_host(input)) in_payment_handler_host = Traits::payment_handler_host(input);
    mojo::internal::Serialize<::payments::mojom::PaymentHandlerHostPtrDataView>(
        in_payment_handler_host, &(*output)->payment_handler_host, context);
  }

  static bool Deserialize(::payments::mojom::internal::PaymentRequestEventData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentRequestEventDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentHandlerResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentHandlerResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentHandlerResponse_Data::BufferWriter* output,
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
        "null method_name in PaymentHandlerResponse struct");
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
        "null stringified_details in PaymentHandlerResponse struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentHandlerResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentHandlerResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace payments {
namespace mojom {

inline void PaymentInstrumentDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentInstrumentDataView::GetIconsDataView(
    mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>* output) {
  auto pointer = data_->icons.Get();
  *output = mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>(pointer, context_);
}
inline void PaymentInstrumentDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentInstrumentDataView::GetStringifiedCapabilitiesDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_capabilities.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentInstrumentDataView::GetSupportedNetworksDataView(
    mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>* output) {
  auto pointer = data_->supported_networks.Get();
  *output = mojo::ArrayDataView<::payments::mojom::BasicCardNetwork>(pointer, context_);
}
inline void PaymentInstrumentDataView::GetSupportedTypesDataView(
    mojo::ArrayDataView<::payments::mojom::BasicCardType>* output) {
  auto pointer = data_->supported_types.Get();
  *output = mojo::ArrayDataView<::payments::mojom::BasicCardType>(pointer, context_);
}


inline void CanMakePaymentEventDataDataView::GetTopOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->top_origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CanMakePaymentEventDataDataView::GetPaymentRequestOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->payment_request_origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CanMakePaymentEventDataDataView::GetMethodDataDataView(
    mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>* output) {
  auto pointer = data_->method_data.Get();
  *output = mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>(pointer, context_);
}
inline void CanMakePaymentEventDataDataView::GetModifiersDataView(
    mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>* output) {
  auto pointer = data_->modifiers.Get();
  *output = mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>(pointer, context_);
}


inline void PaymentRequestEventDataDataView::GetTopOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->top_origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetPaymentRequestOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->payment_request_origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetPaymentRequestIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->payment_request_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetMethodDataDataView(
    mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>* output) {
  auto pointer = data_->method_data.Get();
  *output = mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetTotalDataView(
    ::payments::mojom::PaymentCurrencyAmountDataView* output) {
  auto pointer = data_->total.Get();
  *output = ::payments::mojom::PaymentCurrencyAmountDataView(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetModifiersDataView(
    mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>* output) {
  auto pointer = data_->modifiers.Get();
  *output = mojo::ArrayDataView<::payments::mojom::PaymentDetailsModifierDataView>(pointer, context_);
}
inline void PaymentRequestEventDataDataView::GetInstrumentKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instrument_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentHandlerResponseDataView::GetMethodNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentHandlerResponseDataView::GetStringifiedDetailsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_details.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_H_