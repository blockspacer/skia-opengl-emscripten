// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_SHARED_H_
#define MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_SHARED_H_

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
#include "mojo/public/cpp/test/module.test-mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace test_module {
class StructDataView;

class UnionDataView;


}  // namespace test_module

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::test_module::StructDataView> {
  using Data = ::test_module::internal::Struct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::test_module::UnionDataView> {
  using Data = ::test_module::internal::Union_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace test_module {


enum class GlobalEnum : int32_t {
  
  FIRST,
  
  SECOND = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, GlobalEnum value);
inline bool IsKnownEnumValue(GlobalEnum value) {
  return internal::GlobalEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class Struct_StructEnum : int32_t {
  
  SECOND,
  
  THIRD,
  
  FOURTH = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, Struct_StructEnum value);
inline bool IsKnownEnumValue(Struct_StructEnum value) {
  return internal::Struct_StructEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class Interface_InterfaceEnum : int32_t {
  
  FIFTH,
  
  SIXTH = 6,
  kMinValue = 0,
  kMaxValue = 6,
};

 std::ostream& operator<<(std::ostream& os, Interface_InterfaceEnum value);
inline bool IsKnownEnumValue(Interface_InterfaceEnum value) {
  return internal::Interface_InterfaceEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class InterfaceInterfaceBase {};

using InterfacePtrDataView =
    mojo::InterfacePtrDataView<InterfaceInterfaceBase>;
using InterfaceRequestDataView =
    mojo::InterfaceRequestDataView<InterfaceInterfaceBase>;
using InterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InterfaceInterfaceBase>;
using InterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InterfaceInterfaceBase>;
class StructDataView {
 public:
  StructDataView() {}

  StructDataView(
      internal::Struct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool c() const {
    return data_->c;
  }
 private:
  internal::Struct_Data* data_ = nullptr;
};

class UnionDataView {
 public:
  using Tag = internal::Union_Data::Union_Tag;

  UnionDataView() {}

  UnionDataView(
      internal::Union_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_a() const { return data_->tag == Tag::A; }
  bool a() const {
    DCHECK(is_a());
    return data_->data.f_a;
  }
  bool is_b() const { return data_->tag == Tag::B; }
  int64_t b() const {
    DCHECK(is_b());
    return data_->data.f_b;
  }

 private:
  internal::Union_Data* data_ = nullptr;
};



}  // namespace test_module

namespace std {

template <>
struct hash<::test_module::GlobalEnum>
    : public mojo::internal::EnumHashImpl<::test_module::GlobalEnum> {};

template <>
struct hash<::test_module::Struct_StructEnum>
    : public mojo::internal::EnumHashImpl<::test_module::Struct_StructEnum> {};

template <>
struct hash<::test_module::Interface_InterfaceEnum>
    : public mojo::internal::EnumHashImpl<::test_module::Interface_InterfaceEnum> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::test_module::GlobalEnum, ::test_module::GlobalEnum> {
  static ::test_module::GlobalEnum ToMojom(::test_module::GlobalEnum input) { return input; }
  static bool FromMojom(::test_module::GlobalEnum input, ::test_module::GlobalEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::test_module::GlobalEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::test_module::GlobalEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::test_module::GlobalEnum>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::test_module::Struct_StructEnum, ::test_module::Struct_StructEnum> {
  static ::test_module::Struct_StructEnum ToMojom(::test_module::Struct_StructEnum input) { return input; }
  static bool FromMojom(::test_module::Struct_StructEnum input, ::test_module::Struct_StructEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::test_module::Struct_StructEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::test_module::Struct_StructEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::test_module::Struct_StructEnum>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::test_module::Interface_InterfaceEnum, ::test_module::Interface_InterfaceEnum> {
  static ::test_module::Interface_InterfaceEnum ToMojom(::test_module::Interface_InterfaceEnum input) { return input; }
  static bool FromMojom(::test_module::Interface_InterfaceEnum input, ::test_module::Interface_InterfaceEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::test_module::Interface_InterfaceEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::test_module::Interface_InterfaceEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::test_module::Interface_InterfaceEnum>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::test_module::StructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::test_module::StructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::test_module::internal::Struct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->c = Traits::c(input);
  }

  static bool Deserialize(::test_module::internal::Struct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::test_module::StructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::test_module::UnionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::test_module::UnionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::test_module::internal::Union_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::test_module::internal::Union_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::test_module::UnionDataView::Tag::A: {
        decltype(Traits::a(input))
            in_a = Traits::a(input);
        result->data.f_a = in_a;
        break;
      }
      case ::test_module::UnionDataView::Tag::B: {
        decltype(Traits::b(input))
            in_b = Traits::b(input);
        result->data.f_b = in_b;
        break;
      }
    }
  }

  static bool Deserialize(::test_module::internal::Union_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::test_module::UnionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace test_module {





}  // namespace test_module

#endif  // MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_SHARED_H_