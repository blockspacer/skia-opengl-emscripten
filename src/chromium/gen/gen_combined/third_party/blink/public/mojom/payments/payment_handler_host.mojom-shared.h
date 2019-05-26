// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-shared-internal.h"
#include "components/payments/mojom/payment_request_data.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace payments {
namespace mojom {
class PaymentHandlerMethodDataDataView;

class PaymentHandlerModifierDataView;

class PaymentMethodChangeResponseDataView;



}  // namespace mojom
}  // namespace payments

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::payments::mojom::PaymentHandlerMethodDataDataView> {
  using Data = ::payments::mojom::internal::PaymentHandlerMethodData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentHandlerModifierDataView> {
  using Data = ::payments::mojom::internal::PaymentHandlerModifier_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentMethodChangeResponseDataView> {
  using Data = ::payments::mojom::internal::PaymentMethodChangeResponse_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace payments {
namespace mojom {
// Interface base classes. They are used for type safety check.
class PaymentHandlerHostInterfaceBase {};

using PaymentHandlerHostPtrDataView =
    mojo::InterfacePtrDataView<PaymentHandlerHostInterfaceBase>;
using PaymentHandlerHostRequestDataView =
    mojo::InterfaceRequestDataView<PaymentHandlerHostInterfaceBase>;
using PaymentHandlerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PaymentHandlerHostInterfaceBase>;
using PaymentHandlerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PaymentHandlerHostInterfaceBase>;
class PaymentHandlerMethodDataDataView {
 public:
  PaymentHandlerMethodDataDataView() {}

  PaymentHandlerMethodDataDataView(
      internal::PaymentHandlerMethodData_Data* data,
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
  inline void GetStringifiedDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringifiedData(UserType* output) {
    auto* pointer = data_->stringified_data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentHandlerMethodData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentHandlerModifierDataView {
 public:
  PaymentHandlerModifierDataView() {}

  PaymentHandlerModifierDataView(
      internal::PaymentHandlerModifier_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTotalDataView(
      ::payments::mojom::PaymentCurrencyAmountDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTotal(UserType* output) {
    auto* pointer = data_->total.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        pointer, output, context_);
  }
  inline void GetMethodDataDataView(
      PaymentHandlerMethodDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodData(UserType* output) {
    auto* pointer = data_->method_data.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerMethodDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentHandlerModifier_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentMethodChangeResponseDataView {
 public:
  PaymentMethodChangeResponseDataView() {}

  PaymentMethodChangeResponseDataView(
      internal::PaymentMethodChangeResponse_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTotalDataView(
      ::payments::mojom::PaymentCurrencyAmountDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTotal(UserType* output) {
    auto* pointer = data_->total.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        pointer, output, context_);
  }
  inline void GetModifiersDataView(
      mojo::ArrayDataView<PaymentHandlerModifierDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModifiers(UserType* output) {
    auto* pointer = data_->modifiers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentHandlerModifierDataView>>(
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
  inline void GetStringifiedPaymentMethodErrorsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringifiedPaymentMethodErrors(UserType* output) {
    auto* pointer = data_->stringified_payment_method_errors.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentMethodChangeResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace payments

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentHandlerMethodDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentHandlerMethodDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentHandlerMethodData_Data::BufferWriter* output,
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
        "null method_name in PaymentHandlerMethodData struct");
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
        "null stringified_data in PaymentHandlerMethodData struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentHandlerMethodData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentHandlerMethodDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentHandlerModifierDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentHandlerModifierDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentHandlerModifier_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::total(input)) in_total = Traits::total(input);
    typename decltype((*output)->total)::BaseType::BufferWriter
        total_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        in_total, buffer, &total_writer, context);
    (*output)->total.Set(
        total_writer.is_null() ? nullptr : total_writer.data());
    decltype(Traits::method_data(input)) in_method_data = Traits::method_data(input);
    typename decltype((*output)->method_data)::BaseType::BufferWriter
        method_data_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentHandlerMethodDataDataView>(
        in_method_data, buffer, &method_data_writer, context);
    (*output)->method_data.Set(
        method_data_writer.is_null() ? nullptr : method_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method_data in PaymentHandlerModifier struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentHandlerModifier_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentHandlerModifierDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentMethodChangeResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentMethodChangeResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::payments::mojom::internal::PaymentMethodChangeResponse_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::total(input)) in_total = Traits::total(input);
    typename decltype((*output)->total)::BaseType::BufferWriter
        total_writer;
    mojo::internal::Serialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        in_total, buffer, &total_writer, context);
    (*output)->total.Set(
        total_writer.is_null() ? nullptr : total_writer.data());
    decltype(Traits::modifiers(input)) in_modifiers = Traits::modifiers(input);
    typename decltype((*output)->modifiers)::BaseType::BufferWriter
        modifiers_writer;
    const mojo::internal::ContainerValidateParams modifiers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentHandlerModifierDataView>>(
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
        "null error in PaymentMethodChangeResponse struct");
    decltype(Traits::stringified_payment_method_errors(input)) in_stringified_payment_method_errors = Traits::stringified_payment_method_errors(input);
    typename decltype((*output)->stringified_payment_method_errors)::BaseType::BufferWriter
        stringified_payment_method_errors_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stringified_payment_method_errors, buffer, &stringified_payment_method_errors_writer, context);
    (*output)->stringified_payment_method_errors.Set(
        stringified_payment_method_errors_writer.is_null() ? nullptr : stringified_payment_method_errors_writer.data());
  }

  static bool Deserialize(::payments::mojom::internal::PaymentMethodChangeResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentMethodChangeResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace payments {
namespace mojom {

inline void PaymentHandlerMethodDataDataView::GetMethodNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentHandlerMethodDataDataView::GetStringifiedDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_data.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentHandlerModifierDataView::GetTotalDataView(
    ::payments::mojom::PaymentCurrencyAmountDataView* output) {
  auto pointer = data_->total.Get();
  *output = ::payments::mojom::PaymentCurrencyAmountDataView(pointer, context_);
}
inline void PaymentHandlerModifierDataView::GetMethodDataDataView(
    PaymentHandlerMethodDataDataView* output) {
  auto pointer = data_->method_data.Get();
  *output = PaymentHandlerMethodDataDataView(pointer, context_);
}


inline void PaymentMethodChangeResponseDataView::GetTotalDataView(
    ::payments::mojom::PaymentCurrencyAmountDataView* output) {
  auto pointer = data_->total.Get();
  *output = ::payments::mojom::PaymentCurrencyAmountDataView(pointer, context_);
}
inline void PaymentMethodChangeResponseDataView::GetModifiersDataView(
    mojo::ArrayDataView<PaymentHandlerModifierDataView>* output) {
  auto pointer = data_->modifiers.Get();
  *output = mojo::ArrayDataView<PaymentHandlerModifierDataView>(pointer, context_);
}
inline void PaymentMethodChangeResponseDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentMethodChangeResponseDataView::GetStringifiedPaymentMethodErrorsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_payment_method_errors.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_SHARED_H_