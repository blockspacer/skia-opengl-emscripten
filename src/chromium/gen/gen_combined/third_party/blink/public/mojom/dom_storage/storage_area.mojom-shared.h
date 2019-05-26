// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class KeyValueDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::KeyValueDataView> {
  using Data = ::blink::mojom::internal::KeyValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class StorageAreaObserverInterfaceBase {};

using StorageAreaObserverPtrDataView =
    mojo::InterfacePtrDataView<StorageAreaObserverInterfaceBase>;
using StorageAreaObserverRequestDataView =
    mojo::InterfaceRequestDataView<StorageAreaObserverInterfaceBase>;
using StorageAreaObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<StorageAreaObserverInterfaceBase>;
using StorageAreaObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<StorageAreaObserverInterfaceBase>;
class StorageAreaGetAllCallbackInterfaceBase {};

using StorageAreaGetAllCallbackPtrDataView =
    mojo::InterfacePtrDataView<StorageAreaGetAllCallbackInterfaceBase>;
using StorageAreaGetAllCallbackRequestDataView =
    mojo::InterfaceRequestDataView<StorageAreaGetAllCallbackInterfaceBase>;
using StorageAreaGetAllCallbackAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<StorageAreaGetAllCallbackInterfaceBase>;
using StorageAreaGetAllCallbackAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<StorageAreaGetAllCallbackInterfaceBase>;
class StorageAreaInterfaceBase {};

using StorageAreaPtrDataView =
    mojo::InterfacePtrDataView<StorageAreaInterfaceBase>;
using StorageAreaRequestDataView =
    mojo::InterfaceRequestDataView<StorageAreaInterfaceBase>;
using StorageAreaAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<StorageAreaInterfaceBase>;
using StorageAreaAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<StorageAreaInterfaceBase>;
class KeyValueDataView {
 public:
  KeyValueDataView() {}

  KeyValueDataView(
      internal::KeyValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::KeyValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::KeyValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::KeyValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::KeyValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::key(input)) in_key = Traits::key(input);
    typename decltype((*output)->key)::BaseType::BufferWriter
        key_writer;
    const mojo::internal::ContainerValidateParams key_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_key, buffer, &key_writer, &key_validate_params,
        context);
    (*output)->key.Set(
        key_writer.is_null() ? nullptr : key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key in KeyValue struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    const mojo::internal::ContainerValidateParams value_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_value, buffer, &value_writer, &value_validate_params,
        context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in KeyValue struct");
  }

  static bool Deserialize(::blink::mojom::internal::KeyValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::KeyValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void KeyValueDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void KeyValueDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_SHARED_H_