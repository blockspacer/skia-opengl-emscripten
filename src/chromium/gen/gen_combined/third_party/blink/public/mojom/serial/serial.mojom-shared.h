// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/serial/serial.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/device/public/mojom/serial.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SerialPortInfoDataView;

class SerialPortFilterDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SerialPortInfoDataView> {
  using Data = ::blink::mojom::internal::SerialPortInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::SerialPortFilterDataView> {
  using Data = ::blink::mojom::internal::SerialPortFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SerialServiceInterfaceBase {};

using SerialServicePtrDataView =
    mojo::InterfacePtrDataView<SerialServiceInterfaceBase>;
using SerialServiceRequestDataView =
    mojo::InterfaceRequestDataView<SerialServiceInterfaceBase>;
using SerialServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialServiceInterfaceBase>;
using SerialServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialServiceInterfaceBase>;
class SerialPortInfoDataView {
 public:
  SerialPortInfoDataView() {}

  SerialPortInfoDataView(
      internal::SerialPortInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  uint32_t vendor_id() const {
    return data_->vendor_id;
  }
  bool has_vendor_id() const {
    return data_->has_vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  bool has_product_id() const {
    return data_->has_product_id;
  }
 private:
  internal::SerialPortInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialPortFilterDataView {
 public:
  SerialPortFilterDataView() {}

  SerialPortFilterDataView(
      internal::SerialPortFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t vendor_id() const {
    return data_->vendor_id;
  }
  bool has_vendor_id() const {
    return data_->has_vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  bool has_product_id() const {
    return data_->has_product_id;
  }
 private:
  internal::SerialPortFilter_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SerialPortInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SerialPortInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SerialPortInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::token(input)) in_token = Traits::token(input);
    typename decltype((*output)->token)::BaseType::BufferWriter
        token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_token, buffer, &token_writer, context);
    (*output)->token.Set(
        token_writer.is_null() ? nullptr : token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null token in SerialPortInfo struct");
    (*output)->vendor_id = Traits::vendor_id(input);
    (*output)->has_vendor_id = Traits::has_vendor_id(input);
    (*output)->product_id = Traits::product_id(input);
    (*output)->has_product_id = Traits::has_product_id(input);
  }

  static bool Deserialize(::blink::mojom::internal::SerialPortInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SerialPortInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SerialPortFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SerialPortFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SerialPortFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->vendor_id = Traits::vendor_id(input);
    (*output)->has_vendor_id = Traits::has_vendor_id(input);
    (*output)->product_id = Traits::product_id(input);
    (*output)->has_product_id = Traits::has_product_id(input);
  }

  static bool Deserialize(::blink::mojom::internal::SerialPortFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SerialPortFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void SerialPortInfoDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_SHARED_H_