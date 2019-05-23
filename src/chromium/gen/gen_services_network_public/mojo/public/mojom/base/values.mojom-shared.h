// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_SHARED_H_
#define MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_SHARED_H_

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
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
class DictionaryValueDataView;

class ListValueDataView;

class ValueDataView;


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo_base::mojom::DictionaryValueDataView> {
  using Data = ::mojo_base::mojom::internal::DictionaryValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo_base::mojom::ListValueDataView> {
  using Data = ::mojo_base::mojom::internal::ListValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo_base::mojom::ValueDataView> {
  using Data = ::mojo_base::mojom::internal::Value_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace mojo_base {
namespace mojom {
class DictionaryValueDataView {
 public:
  DictionaryValueDataView() {}

  DictionaryValueDataView(
      internal::DictionaryValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStorageDataView(
      mojo::MapDataView<mojo::StringDataView, ValueDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStorage(UserType* output) {
    auto* pointer = data_->storage.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::mojo_base::mojom::ValueDataView>>(
        pointer, output, context_);
  }
 private:
  internal::DictionaryValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ListValueDataView {
 public:
  ListValueDataView() {}

  ListValueDataView(
      internal::ListValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStorageDataView(
      mojo::ArrayDataView<ValueDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStorage(UserType* output) {
    auto* pointer = data_->storage.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::ValueDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ListValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ValueDataView {
 public:
  using Tag = internal::Value_Data::Value_Tag;

  ValueDataView() {}

  ValueDataView(
      internal::Value_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_null_value() const { return data_->tag == Tag::NULL_VALUE; }
  uint8_t null_value() const {
    DCHECK(is_null_value());
    return data_->data.f_null_value;
  }
  bool is_bool_value() const { return data_->tag == Tag::BOOL_VALUE; }
  bool bool_value() const {
    DCHECK(is_bool_value());
    return data_->data.f_bool_value;
  }
  bool is_int_value() const { return data_->tag == Tag::INT_VALUE; }
  int32_t int_value() const {
    DCHECK(is_int_value());
    return data_->data.f_int_value;
  }
  bool is_double_value() const { return data_->tag == Tag::DOUBLE_VALUE; }
  double double_value() const {
    DCHECK(is_double_value());
    return data_->data.f_double_value;
  }
  bool is_string_value() const { return data_->tag == Tag::STRING_VALUE; }
  inline void GetStringValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringValue(UserType* output) {
    DCHECK(is_string_value());
    return mojo::internal::Deserialize<mojo::StringDataView>(
        data_->data.f_string_value.Get(), output, context_);
  }
  bool is_binary_value() const { return data_->tag == Tag::BINARY_VALUE; }
  inline void GetBinaryValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBinaryValue(UserType* output) {
    DCHECK(is_binary_value());
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        data_->data.f_binary_value.Get(), output, context_);
  }
  bool is_dictionary_value() const { return data_->tag == Tag::DICTIONARY_VALUE; }
  inline void GetDictionaryValueDataView(
      DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDictionaryValue(UserType* output) {
    DCHECK(is_dictionary_value());
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        data_->data.f_dictionary_value.Get(), output, context_);
  }
  bool is_list_value() const { return data_->tag == Tag::LIST_VALUE; }
  inline void GetListValueDataView(
      ListValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadListValue(UserType* output) {
    DCHECK(is_list_value());
    return mojo::internal::Deserialize<::mojo_base::mojom::ListValueDataView>(
        data_->data.f_list_value.Get(), output, context_);
  }

 private:
  internal::Value_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace mojo_base

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::DictionaryValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo_base::mojom::DictionaryValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo_base::mojom::internal::DictionaryValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::storage(input)) in_storage = Traits::storage(input);
    typename decltype((*output)->storage)::BaseType::BufferWriter
        storage_writer;
    const mojo::internal::ContainerValidateParams storage_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::mojo_base::mojom::ValueDataView>>(
        in_storage, buffer, &storage_writer, &storage_validate_params,
        context);
    (*output)->storage.Set(
        storage_writer.is_null() ? nullptr : storage_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->storage.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null storage in DictionaryValue struct");
  }

  static bool Deserialize(::mojo_base::mojom::internal::DictionaryValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo_base::mojom::DictionaryValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::ListValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo_base::mojom::ListValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo_base::mojom::internal::ListValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::storage(input)) in_storage = Traits::storage(input);
    typename decltype((*output)->storage)::BaseType::BufferWriter
        storage_writer;
    const mojo::internal::ContainerValidateParams storage_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::ValueDataView>>(
        in_storage, buffer, &storage_writer, &storage_validate_params,
        context);
    (*output)->storage.Set(
        storage_writer.is_null() ? nullptr : storage_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->storage.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null storage in ListValue struct");
  }

  static bool Deserialize(::mojo_base::mojom::internal::ListValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo_base::mojom::ListValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::ValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo_base::mojom::ValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo_base::mojom::internal::Value_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo_base::mojom::internal::Value_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo_base::mojom::ValueDataView::Tag::NULL_VALUE: {
        decltype(Traits::null_value(input))
            in_null_value = Traits::null_value(input);
        result->data.f_null_value = in_null_value;
        break;
      }
      case ::mojo_base::mojom::ValueDataView::Tag::BOOL_VALUE: {
        decltype(Traits::bool_value(input))
            in_bool_value = Traits::bool_value(input);
        result->data.f_bool_value = in_bool_value;
        break;
      }
      case ::mojo_base::mojom::ValueDataView::Tag::INT_VALUE: {
        decltype(Traits::int_value(input))
            in_int_value = Traits::int_value(input);
        result->data.f_int_value = in_int_value;
        break;
      }
      case ::mojo_base::mojom::ValueDataView::Tag::DOUBLE_VALUE: {
        decltype(Traits::double_value(input))
            in_double_value = Traits::double_value(input);
        result->data.f_double_value = in_double_value;
        break;
      }
      case ::mojo_base::mojom::ValueDataView::Tag::STRING_VALUE: {
        decltype(Traits::string_value(input))
            in_string_value = Traits::string_value(input);
        typename decltype(result->data.f_string_value)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<mojo::StringDataView>(
            in_string_value, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null string_value in Value union");
        result->data.f_string_value.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo_base::mojom::ValueDataView::Tag::BINARY_VALUE: {
        decltype(Traits::binary_value(input))
            in_binary_value = Traits::binary_value(input);
        typename decltype(result->data.f_binary_value)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams binary_value_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
            in_binary_value, buffer, &value_writer, &binary_value_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null binary_value in Value union");
        result->data.f_binary_value.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo_base::mojom::ValueDataView::Tag::DICTIONARY_VALUE: {
        decltype(Traits::dictionary_value(input))
            in_dictionary_value = Traits::dictionary_value(input);
        typename decltype(result->data.f_dictionary_value)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
            in_dictionary_value, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null dictionary_value in Value union");
        result->data.f_dictionary_value.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo_base::mojom::ValueDataView::Tag::LIST_VALUE: {
        decltype(Traits::list_value(input))
            in_list_value = Traits::list_value(input);
        typename decltype(result->data.f_list_value)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::ListValueDataView>(
            in_list_value, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null list_value in Value union");
        result->data.f_list_value.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::mojo_base::mojom::internal::Value_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo_base::mojom::ValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo_base {
namespace mojom {

inline void DictionaryValueDataView::GetStorageDataView(
    mojo::MapDataView<mojo::StringDataView, ValueDataView>* output) {
  auto pointer = data_->storage.Get();
  *output = mojo::MapDataView<mojo::StringDataView, ValueDataView>(pointer, context_);
}


inline void ListValueDataView::GetStorageDataView(
    mojo::ArrayDataView<ValueDataView>* output) {
  auto pointer = data_->storage.Get();
  *output = mojo::ArrayDataView<ValueDataView>(pointer, context_);
}


inline void ValueDataView::GetStringValueDataView(
    mojo::StringDataView* output) {
  DCHECK(is_string_value());
  *output = mojo::StringDataView(data_->data.f_string_value.Get(), context_);
}
inline void ValueDataView::GetBinaryValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  DCHECK(is_binary_value());
  *output = mojo::ArrayDataView<uint8_t>(data_->data.f_binary_value.Get(), context_);
}
inline void ValueDataView::GetDictionaryValueDataView(
    DictionaryValueDataView* output) {
  DCHECK(is_dictionary_value());
  *output = DictionaryValueDataView(data_->data.f_dictionary_value.Get(), context_);
}
inline void ValueDataView::GetListValueDataView(
    ListValueDataView* output) {
  DCHECK(is_list_value());
  *output = ListValueDataView(data_->data.f_list_value.Get(), context_);
}


}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_SHARED_H_