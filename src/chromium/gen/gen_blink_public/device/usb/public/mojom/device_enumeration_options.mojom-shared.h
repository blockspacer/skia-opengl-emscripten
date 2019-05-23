// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_SHARED_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_SHARED_H_

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
#include "device/usb/public/mojom/device_enumeration_options.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class UsbDeviceFilterDataView;

class UsbEnumerationOptionsDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::UsbDeviceFilterDataView> {
  using Data = ::device::mojom::internal::UsbDeviceFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::UsbEnumerationOptionsDataView> {
  using Data = ::device::mojom::internal::UsbEnumerationOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {
class UsbDeviceFilterDataView {
 public:
  UsbDeviceFilterDataView() {}

  UsbDeviceFilterDataView(
      internal::UsbDeviceFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool has_vendor_id() const {
    return data_->has_vendor_id;
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  bool has_product_id() const {
    return data_->has_product_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  bool has_class_code() const {
    return data_->has_class_code;
  }
  uint8_t class_code() const {
    return data_->class_code;
  }
  bool has_subclass_code() const {
    return data_->has_subclass_code;
  }
  uint8_t subclass_code() const {
    return data_->subclass_code;
  }
  bool has_protocol_code() const {
    return data_->has_protocol_code;
  }
  uint8_t protocol_code() const {
    return data_->protocol_code;
  }
  inline void GetSerialNumberDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSerialNumber(UserType* output) {
    auto* pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::UsbDeviceFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbEnumerationOptionsDataView {
 public:
  UsbEnumerationOptionsDataView() {}

  UsbEnumerationOptionsDataView(
      internal::UsbEnumerationOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFiltersDataView(
      mojo::ArrayDataView<UsbDeviceFilterDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilters(UserType* output) {
    auto* pointer = data_->filters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbEnumerationOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbDeviceFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbDeviceFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbDeviceFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->has_vendor_id = Traits::has_vendor_id(input);
    (*output)->vendor_id = Traits::vendor_id(input);
    (*output)->has_product_id = Traits::has_product_id(input);
    (*output)->product_id = Traits::product_id(input);
    (*output)->has_class_code = Traits::has_class_code(input);
    (*output)->class_code = Traits::class_code(input);
    (*output)->has_subclass_code = Traits::has_subclass_code(input);
    (*output)->subclass_code = Traits::subclass_code(input);
    (*output)->has_protocol_code = Traits::has_protocol_code(input);
    (*output)->protocol_code = Traits::protocol_code(input);
    decltype(Traits::serial_number(input)) in_serial_number = Traits::serial_number(input);
    typename decltype((*output)->serial_number)::BaseType::BufferWriter
        serial_number_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_serial_number, buffer, &serial_number_writer, context);
    (*output)->serial_number.Set(
        serial_number_writer.is_null() ? nullptr : serial_number_writer.data());
  }

  static bool Deserialize(::device::mojom::internal::UsbDeviceFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbDeviceFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::UsbEnumerationOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::UsbEnumerationOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::UsbEnumerationOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::filters(input)) in_filters = Traits::filters(input);
    typename decltype((*output)->filters)::BaseType::BufferWriter
        filters_writer;
    const mojo::internal::ContainerValidateParams filters_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>>(
        in_filters, buffer, &filters_writer, &filters_validate_params,
        context);
    (*output)->filters.Set(
        filters_writer.is_null() ? nullptr : filters_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->filters.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null filters in UsbEnumerationOptions struct");
  }

  static bool Deserialize(::device::mojom::internal::UsbEnumerationOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::UsbEnumerationOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void UsbDeviceFilterDataView::GetSerialNumberDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void UsbEnumerationOptionsDataView::GetFiltersDataView(
    mojo::ArrayDataView<UsbDeviceFilterDataView>* output) {
  auto pointer = data_->filters.Get();
  *output = mojo::ArrayDataView<UsbDeviceFilterDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_SHARED_H_