// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/remote_objects/remote_objects.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class RemoteInvocationResultDataView;

class RemoteInvocationArgumentDataView;
class RemoteInvocationResultValueDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::RemoteInvocationResultDataView> {
  using Data = ::blink::mojom::internal::RemoteInvocationResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::RemoteInvocationArgumentDataView> {
  using Data = ::blink::mojom::internal::RemoteInvocationArgument_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::blink::mojom::RemoteInvocationResultValueDataView> {
  using Data = ::blink::mojom::internal::RemoteInvocationResultValue_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class SingletonJavaScriptValue : int32_t {
  
  kNull,
  
  kUndefined,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, SingletonJavaScriptValue value);
inline bool IsKnownEnumValue(SingletonJavaScriptValue value) {
  return internal::SingletonJavaScriptValue_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class RemoteInvocationError : int32_t {
  
  OK = 0,
  
  METHOD_NOT_FOUND,
  
  OBJECT_GET_CLASS_BLOCKED,
  
  EXCEPTION_THROWN,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, RemoteInvocationError value);
inline bool IsKnownEnumValue(RemoteInvocationError value) {
  return internal::RemoteInvocationError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class RemoteObjectHostInterfaceBase {};

using RemoteObjectHostPtrDataView =
    mojo::InterfacePtrDataView<RemoteObjectHostInterfaceBase>;
using RemoteObjectHostRequestDataView =
    mojo::InterfaceRequestDataView<RemoteObjectHostInterfaceBase>;
using RemoteObjectHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemoteObjectHostInterfaceBase>;
using RemoteObjectHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemoteObjectHostInterfaceBase>;
class RemoteObjectInterfaceBase {};

using RemoteObjectPtrDataView =
    mojo::InterfacePtrDataView<RemoteObjectInterfaceBase>;
using RemoteObjectRequestDataView =
    mojo::InterfaceRequestDataView<RemoteObjectInterfaceBase>;
using RemoteObjectAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemoteObjectInterfaceBase>;
using RemoteObjectAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemoteObjectInterfaceBase>;
class RemoteInvocationResultDataView {
 public:
  RemoteInvocationResultDataView() {}

  RemoteInvocationResultDataView(
      internal::RemoteInvocationResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::RemoteInvocationError>(
        data_value, output);
  }

  RemoteInvocationError error() const {
    return static_cast<RemoteInvocationError>(data_->error);
  }
  inline void GetValueDataView(
      RemoteInvocationResultValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = !data_->value.is_null() ? &data_->value : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::RemoteInvocationResultValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::RemoteInvocationResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemoteInvocationArgumentDataView {
 public:
  using Tag = internal::RemoteInvocationArgument_Data::RemoteInvocationArgument_Tag;

  RemoteInvocationArgumentDataView() {}

  RemoteInvocationArgumentDataView(
      internal::RemoteInvocationArgument_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_number_value() const { return data_->tag == Tag::NUMBER_VALUE; }
  double number_value() const {
    DCHECK(is_number_value());
    return data_->data.f_number_value;
  }
  bool is_boolean_value() const { return data_->tag == Tag::BOOLEAN_VALUE; }
  bool boolean_value() const {
    DCHECK(is_boolean_value());
    return data_->data.f_boolean_value;
  }
  bool is_string_value() const { return data_->tag == Tag::STRING_VALUE; }
  inline void GetStringValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringValue(UserType* output) {
    DCHECK(is_string_value());
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        data_->data.f_string_value.Get(), output, context_);
  }
  bool is_singleton_value() const { return data_->tag == Tag::SINGLETON_VALUE; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSingletonValue(UserType* output) const {
    DCHECK(is_singleton_value());
    return mojo::internal::Deserialize<::blink::mojom::SingletonJavaScriptValue>(
        data_->data.f_singleton_value, output);
  }

  SingletonJavaScriptValue singleton_value() const {
    DCHECK(is_singleton_value());
    return static_cast<SingletonJavaScriptValue>(
        data_->data.f_singleton_value);
  }
  bool is_array_value() const { return data_->tag == Tag::ARRAY_VALUE; }
  inline void GetArrayValueDataView(
      mojo::ArrayDataView<RemoteInvocationArgumentDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArrayValue(UserType* output) {
    DCHECK(is_array_value());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::RemoteInvocationArgumentDataView>>(
        data_->data.f_array_value.Get(), output, context_);
  }

 private:
  internal::RemoteInvocationArgument_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemoteInvocationResultValueDataView {
 public:
  using Tag = internal::RemoteInvocationResultValue_Data::RemoteInvocationResultValue_Tag;

  RemoteInvocationResultValueDataView() {}

  RemoteInvocationResultValueDataView(
      internal::RemoteInvocationResultValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_number_value() const { return data_->tag == Tag::NUMBER_VALUE; }
  double number_value() const {
    DCHECK(is_number_value());
    return data_->data.f_number_value;
  }
  bool is_boolean_value() const { return data_->tag == Tag::BOOLEAN_VALUE; }
  bool boolean_value() const {
    DCHECK(is_boolean_value());
    return data_->data.f_boolean_value;
  }
  bool is_string_value() const { return data_->tag == Tag::STRING_VALUE; }
  inline void GetStringValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringValue(UserType* output) {
    DCHECK(is_string_value());
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        data_->data.f_string_value.Get(), output, context_);
  }
  bool is_singleton_value() const { return data_->tag == Tag::SINGLETON_VALUE; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSingletonValue(UserType* output) const {
    DCHECK(is_singleton_value());
    return mojo::internal::Deserialize<::blink::mojom::SingletonJavaScriptValue>(
        data_->data.f_singleton_value, output);
  }

  SingletonJavaScriptValue singleton_value() const {
    DCHECK(is_singleton_value());
    return static_cast<SingletonJavaScriptValue>(
        data_->data.f_singleton_value);
  }
  bool is_object_id() const { return data_->tag == Tag::OBJECT_ID; }
  int32_t object_id() const {
    DCHECK(is_object_id());
    return data_->data.f_object_id;
  }

 private:
  internal::RemoteInvocationResultValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::SingletonJavaScriptValue>
    : public mojo::internal::EnumHashImpl<::blink::mojom::SingletonJavaScriptValue> {};

template <>
struct hash<::blink::mojom::RemoteInvocationError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::RemoteInvocationError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::SingletonJavaScriptValue, ::blink::mojom::SingletonJavaScriptValue> {
  static ::blink::mojom::SingletonJavaScriptValue ToMojom(::blink::mojom::SingletonJavaScriptValue input) { return input; }
  static bool FromMojom(::blink::mojom::SingletonJavaScriptValue input, ::blink::mojom::SingletonJavaScriptValue* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SingletonJavaScriptValue, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::SingletonJavaScriptValue, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::SingletonJavaScriptValue>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::RemoteInvocationError, ::blink::mojom::RemoteInvocationError> {
  static ::blink::mojom::RemoteInvocationError ToMojom(::blink::mojom::RemoteInvocationError input) { return input; }
  static bool FromMojom(::blink::mojom::RemoteInvocationError input, ::blink::mojom::RemoteInvocationError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::RemoteInvocationError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::RemoteInvocationError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::RemoteInvocationError>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::RemoteInvocationResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::RemoteInvocationResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::RemoteInvocationResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::RemoteInvocationError>(
        Traits::error(input), &(*output)->error);
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BufferWriter value_writer;
    value_writer.AllocateInline(buffer, &(*output)->value);
    mojo::internal::Serialize<::blink::mojom::RemoteInvocationResultValueDataView>(
        in_value, buffer, &value_writer, true, context);
  }

  static bool Deserialize(::blink::mojom::internal::RemoteInvocationResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::RemoteInvocationResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::RemoteInvocationArgumentDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::RemoteInvocationArgumentDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::RemoteInvocationArgument_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::RemoteInvocationArgument_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::RemoteInvocationArgumentDataView::Tag::NUMBER_VALUE: {
        decltype(Traits::number_value(input))
            in_number_value = Traits::number_value(input);
        result->data.f_number_value = in_number_value;
        break;
      }
      case ::blink::mojom::RemoteInvocationArgumentDataView::Tag::BOOLEAN_VALUE: {
        decltype(Traits::boolean_value(input))
            in_boolean_value = Traits::boolean_value(input);
        result->data.f_boolean_value = in_boolean_value;
        break;
      }
      case ::blink::mojom::RemoteInvocationArgumentDataView::Tag::STRING_VALUE: {
        decltype(Traits::string_value(input))
            in_string_value = Traits::string_value(input);
        typename decltype(result->data.f_string_value)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
            in_string_value, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null string_value in RemoteInvocationArgument union");
        result->data.f_string_value.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::RemoteInvocationArgumentDataView::Tag::SINGLETON_VALUE: {
        decltype(Traits::singleton_value(input))
            in_singleton_value = Traits::singleton_value(input);
        mojo::internal::Serialize<::blink::mojom::SingletonJavaScriptValue>(
            in_singleton_value, &result->data.f_singleton_value);
        break;
      }
      case ::blink::mojom::RemoteInvocationArgumentDataView::Tag::ARRAY_VALUE: {
        decltype(Traits::array_value(input))
            in_array_value = Traits::array_value(input);
        typename decltype(result->data.f_array_value)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams array_value_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::RemoteInvocationArgumentDataView>>(
            in_array_value, buffer, &value_writer, &array_value_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null array_value in RemoteInvocationArgument union");
        result->data.f_array_value.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::RemoteInvocationArgument_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::RemoteInvocationArgumentDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::RemoteInvocationResultValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::RemoteInvocationResultValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::RemoteInvocationResultValue_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::RemoteInvocationResultValue_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::RemoteInvocationResultValueDataView::Tag::NUMBER_VALUE: {
        decltype(Traits::number_value(input))
            in_number_value = Traits::number_value(input);
        result->data.f_number_value = in_number_value;
        break;
      }
      case ::blink::mojom::RemoteInvocationResultValueDataView::Tag::BOOLEAN_VALUE: {
        decltype(Traits::boolean_value(input))
            in_boolean_value = Traits::boolean_value(input);
        result->data.f_boolean_value = in_boolean_value;
        break;
      }
      case ::blink::mojom::RemoteInvocationResultValueDataView::Tag::STRING_VALUE: {
        decltype(Traits::string_value(input))
            in_string_value = Traits::string_value(input);
        typename decltype(result->data.f_string_value)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
            in_string_value, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null string_value in RemoteInvocationResultValue union");
        result->data.f_string_value.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::RemoteInvocationResultValueDataView::Tag::SINGLETON_VALUE: {
        decltype(Traits::singleton_value(input))
            in_singleton_value = Traits::singleton_value(input);
        mojo::internal::Serialize<::blink::mojom::SingletonJavaScriptValue>(
            in_singleton_value, &result->data.f_singleton_value);
        break;
      }
      case ::blink::mojom::RemoteInvocationResultValueDataView::Tag::OBJECT_ID: {
        decltype(Traits::object_id(input))
            in_object_id = Traits::object_id(input);
        result->data.f_object_id = in_object_id;
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::RemoteInvocationResultValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::RemoteInvocationResultValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void RemoteInvocationResultDataView::GetValueDataView(
    RemoteInvocationResultValueDataView* output) {
  auto pointer = &data_->value;
  *output = RemoteInvocationResultValueDataView(pointer, context_);
}


inline void RemoteInvocationArgumentDataView::GetStringValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  DCHECK(is_string_value());
  *output = ::mojo_base::mojom::String16DataView(data_->data.f_string_value.Get(), context_);
}
inline void RemoteInvocationArgumentDataView::GetArrayValueDataView(
    mojo::ArrayDataView<RemoteInvocationArgumentDataView>* output) {
  DCHECK(is_array_value());
  *output = mojo::ArrayDataView<RemoteInvocationArgumentDataView>(data_->data.f_array_value.Get(), context_);
}

inline void RemoteInvocationResultValueDataView::GetStringValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  DCHECK(is_string_value());
  *output = ::mojo_base::mojom::String16DataView(data_->data.f_string_value.Get(), context_);
}


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_SHARED_H_