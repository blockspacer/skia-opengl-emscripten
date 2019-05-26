// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace imported {
class PointDataView;

class PointOrShapeDataView;


}  // namespace imported

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::imported::PointDataView> {
  using Data = ::imported::internal::Point_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::imported::PointOrShapeDataView> {
  using Data = ::imported::internal::PointOrShape_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace imported {


enum class Shape : int32_t {
  
  RECTANGLE = 1,
  
  CIRCLE,
  
  TRIANGLE,
  
  LAST = Shape::TRIANGLE,
  kMinValue = 1,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, Shape value);
inline bool IsKnownEnumValue(Shape value) {
  return internal::Shape_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AnotherShape : int32_t {
  
  RECTANGLE = 10,
  
  CIRCLE,
  
  TRIANGLE,
  kMinValue = 10,
  kMaxValue = 12,
};

 std::ostream& operator<<(std::ostream& os, AnotherShape value);
inline bool IsKnownEnumValue(AnotherShape value) {
  return internal::AnotherShape_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class YetAnotherShape : int32_t {
  
  RECTANGLE = 20,
  
  CIRCLE,
  
  TRIANGLE,
  kMinValue = 20,
  kMaxValue = 22,
};

 std::ostream& operator<<(std::ostream& os, YetAnotherShape value);
inline bool IsKnownEnumValue(YetAnotherShape value) {
  return internal::YetAnotherShape_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ImportedInterfaceInterfaceBase {};

using ImportedInterfacePtrDataView =
    mojo::InterfacePtrDataView<ImportedInterfaceInterfaceBase>;
using ImportedInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<ImportedInterfaceInterfaceBase>;
using ImportedInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ImportedInterfaceInterfaceBase>;
using ImportedInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ImportedInterfaceInterfaceBase>;
class PointDataView {
 public:
  PointDataView() {}

  PointDataView(
      internal::Point_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  int32_t y() const {
    return data_->y;
  }
 private:
  internal::Point_Data* data_ = nullptr;
};

class PointOrShapeDataView {
 public:
  using Tag = internal::PointOrShape_Data::PointOrShape_Tag;

  PointOrShapeDataView() {}

  PointOrShapeDataView(
      internal::PointOrShape_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_point() const { return data_->tag == Tag::POINT; }
  inline void GetPointDataView(
      PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    DCHECK(is_point());
    return mojo::internal::Deserialize<::imported::PointDataView>(
        data_->data.f_point.Get(), output, context_);
  }
  bool is_shape() const { return data_->tag == Tag::SHAPE; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShape(UserType* output) const {
    DCHECK(is_shape());
    return mojo::internal::Deserialize<::imported::Shape>(
        data_->data.f_shape, output);
  }

  Shape shape() const {
    DCHECK(is_shape());
    return static_cast<Shape>(
        data_->data.f_shape);
  }

 private:
  internal::PointOrShape_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace imported

namespace std {

template <>
struct hash<::imported::Shape>
    : public mojo::internal::EnumHashImpl<::imported::Shape> {};

template <>
struct hash<::imported::AnotherShape>
    : public mojo::internal::EnumHashImpl<::imported::AnotherShape> {};

template <>
struct hash<::imported::YetAnotherShape>
    : public mojo::internal::EnumHashImpl<::imported::YetAnotherShape> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::imported::Shape, ::imported::Shape> {
  static ::imported::Shape ToMojom(::imported::Shape input) { return input; }
  static bool FromMojom(::imported::Shape input, ::imported::Shape* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::imported::Shape, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::imported::Shape, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::imported::Shape>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::imported::AnotherShape, ::imported::AnotherShape> {
  static ::imported::AnotherShape ToMojom(::imported::AnotherShape input) { return input; }
  static bool FromMojom(::imported::AnotherShape input, ::imported::AnotherShape* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::imported::AnotherShape, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::imported::AnotherShape, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::imported::AnotherShape>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::imported::YetAnotherShape, ::imported::YetAnotherShape> {
  static ::imported::YetAnotherShape ToMojom(::imported::YetAnotherShape input) { return input; }
  static bool FromMojom(::imported::YetAnotherShape input, ::imported::YetAnotherShape* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::imported::YetAnotherShape, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::imported::YetAnotherShape, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::imported::YetAnotherShape>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::imported::PointDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::imported::PointDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::imported::internal::Point_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
  }

  static bool Deserialize(::imported::internal::Point_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::imported::PointDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::imported::PointOrShapeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::imported::PointOrShapeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::imported::internal::PointOrShape_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::imported::internal::PointOrShape_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::imported::PointOrShapeDataView::Tag::POINT: {
        decltype(Traits::point(input))
            in_point = Traits::point(input);
        typename decltype(result->data.f_point)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::imported::PointDataView>(
            in_point, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null point in PointOrShape union");
        result->data.f_point.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::imported::PointOrShapeDataView::Tag::SHAPE: {
        decltype(Traits::shape(input))
            in_shape = Traits::shape(input);
        mojo::internal::Serialize<::imported::Shape>(
            in_shape, &result->data.f_shape);
        break;
      }
    }
  }

  static bool Deserialize(::imported::internal::PointOrShape_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::imported::PointOrShapeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace imported {



inline void PointOrShapeDataView::GetPointDataView(
    PointDataView* output) {
  DCHECK(is_point());
  *output = PointDataView(data_->data.f_point.Get(), context_);
}


}  // namespace imported

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_SHARED_H_