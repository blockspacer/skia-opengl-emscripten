// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "device/usb/public/mojom/device_enumeration_options.mojom-shared.h"
#include "device/usb/public/mojom/device_enumeration_options.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {









class  UsbDeviceFilter {
 public:
  using DataView = UsbDeviceFilterDataView;
  using Data_ = internal::UsbDeviceFilter_Data;

  template <typename... Args>
  static UsbDeviceFilterPtr New(Args&&... args) {
    return UsbDeviceFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbDeviceFilterPtr From(const U& u) {
    return mojo::TypeConverter<UsbDeviceFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbDeviceFilter>::Convert(*this);
  }


  UsbDeviceFilter();

  UsbDeviceFilter(
      bool has_vendor_id,
      uint16_t vendor_id,
      bool has_product_id,
      uint16_t product_id,
      bool has_class_code,
      uint8_t class_code,
      bool has_subclass_code,
      uint8_t subclass_code,
      bool has_protocol_code,
      uint8_t protocol_code,
      const base::Optional<base::string16>& serial_number);

  ~UsbDeviceFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbDeviceFilterPtr>
  UsbDeviceFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbDeviceFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbDeviceFilter::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbDeviceFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbDeviceFilter_UnserializedMessageContext<
            UserType, UsbDeviceFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbDeviceFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbDeviceFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbDeviceFilter_UnserializedMessageContext<
            UserType, UsbDeviceFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbDeviceFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool has_vendor_id;
  
  uint16_t vendor_id;
  
  bool has_product_id;
  
  uint16_t product_id;
  
  bool has_class_code;
  
  uint8_t class_code;
  
  bool has_subclass_code;
  
  uint8_t subclass_code;
  
  bool has_protocol_code;
  
  uint8_t protocol_code;
  
  base::Optional<base::string16> serial_number;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  UsbEnumerationOptions {
 public:
  using DataView = UsbEnumerationOptionsDataView;
  using Data_ = internal::UsbEnumerationOptions_Data;

  template <typename... Args>
  static UsbEnumerationOptionsPtr New(Args&&... args) {
    return UsbEnumerationOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbEnumerationOptionsPtr From(const U& u) {
    return mojo::TypeConverter<UsbEnumerationOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbEnumerationOptions>::Convert(*this);
  }


  UsbEnumerationOptions();

  explicit UsbEnumerationOptions(
      std::vector<UsbDeviceFilterPtr> filters);

  ~UsbEnumerationOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbEnumerationOptionsPtr>
  UsbEnumerationOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbEnumerationOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbEnumerationOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbEnumerationOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbEnumerationOptions_UnserializedMessageContext<
            UserType, UsbEnumerationOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbEnumerationOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbEnumerationOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbEnumerationOptions_UnserializedMessageContext<
            UserType, UsbEnumerationOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbEnumerationOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<UsbDeviceFilterPtr> filters;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(UsbEnumerationOptions);
};

template <typename StructPtrType>
UsbDeviceFilterPtr UsbDeviceFilter::Clone() const {
  return New(
      mojo::Clone(has_vendor_id),
      mojo::Clone(vendor_id),
      mojo::Clone(has_product_id),
      mojo::Clone(product_id),
      mojo::Clone(has_class_code),
      mojo::Clone(class_code),
      mojo::Clone(has_subclass_code),
      mojo::Clone(subclass_code),
      mojo::Clone(has_protocol_code),
      mojo::Clone(protocol_code),
      mojo::Clone(serial_number)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbDeviceFilter>::value>::type*>
bool UsbDeviceFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->has_vendor_id, other_struct.has_vendor_id))
    return false;
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->has_product_id, other_struct.has_product_id))
    return false;
  if (!mojo::Equals(this->product_id, other_struct.product_id))
    return false;
  if (!mojo::Equals(this->has_class_code, other_struct.has_class_code))
    return false;
  if (!mojo::Equals(this->class_code, other_struct.class_code))
    return false;
  if (!mojo::Equals(this->has_subclass_code, other_struct.has_subclass_code))
    return false;
  if (!mojo::Equals(this->subclass_code, other_struct.subclass_code))
    return false;
  if (!mojo::Equals(this->has_protocol_code, other_struct.has_protocol_code))
    return false;
  if (!mojo::Equals(this->protocol_code, other_struct.protocol_code))
    return false;
  if (!mojo::Equals(this->serial_number, other_struct.serial_number))
    return false;
  return true;
}
template <typename StructPtrType>
UsbEnumerationOptionsPtr UsbEnumerationOptions::Clone() const {
  return New(
      mojo::Clone(filters)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbEnumerationOptions>::value>::type*>
bool UsbEnumerationOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->filters, other_struct.filters))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::UsbDeviceFilter::DataView,
                                         ::device::mojom::UsbDeviceFilterPtr> {
  static bool IsNull(const ::device::mojom::UsbDeviceFilterPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbDeviceFilterPtr* output) { output->reset(); }

  static decltype(::device::mojom::UsbDeviceFilter::has_vendor_id) has_vendor_id(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->has_vendor_id;
  }

  static decltype(::device::mojom::UsbDeviceFilter::vendor_id) vendor_id(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->vendor_id;
  }

  static decltype(::device::mojom::UsbDeviceFilter::has_product_id) has_product_id(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->has_product_id;
  }

  static decltype(::device::mojom::UsbDeviceFilter::product_id) product_id(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->product_id;
  }

  static decltype(::device::mojom::UsbDeviceFilter::has_class_code) has_class_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->has_class_code;
  }

  static decltype(::device::mojom::UsbDeviceFilter::class_code) class_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->class_code;
  }

  static decltype(::device::mojom::UsbDeviceFilter::has_subclass_code) has_subclass_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->has_subclass_code;
  }

  static decltype(::device::mojom::UsbDeviceFilter::subclass_code) subclass_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->subclass_code;
  }

  static decltype(::device::mojom::UsbDeviceFilter::has_protocol_code) has_protocol_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->has_protocol_code;
  }

  static decltype(::device::mojom::UsbDeviceFilter::protocol_code) protocol_code(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->protocol_code;
  }

  static const decltype(::device::mojom::UsbDeviceFilter::serial_number)& serial_number(
      const ::device::mojom::UsbDeviceFilterPtr& input) {
    return input->serial_number;
  }

  static bool Read(::device::mojom::UsbDeviceFilter::DataView input, ::device::mojom::UsbDeviceFilterPtr* output);
};


template <>
struct  StructTraits<::device::mojom::UsbEnumerationOptions::DataView,
                                         ::device::mojom::UsbEnumerationOptionsPtr> {
  static bool IsNull(const ::device::mojom::UsbEnumerationOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbEnumerationOptionsPtr* output) { output->reset(); }

  static const decltype(::device::mojom::UsbEnumerationOptions::filters)& filters(
      const ::device::mojom::UsbEnumerationOptionsPtr& input) {
    return input->filters;
  }

  static bool Read(::device::mojom::UsbEnumerationOptions::DataView input, ::device::mojom::UsbEnumerationOptionsPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_H_