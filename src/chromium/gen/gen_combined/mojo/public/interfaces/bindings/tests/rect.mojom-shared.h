// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/rect.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace mojo {
namespace test {
class RectDataView;

class TypemappedRectDataView;

class SharedTypemappedRectDataView;



}  // namespace test
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::test::RectDataView> {
  using Data = ::mojo::test::internal::Rect_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::TypemappedRectDataView> {
  using Data = ::mojo::test::internal::TypemappedRect_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::SharedTypemappedRectDataView> {
  using Data = ::mojo::test::internal::SharedTypemappedRect_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace test {
class RectDataView {
 public:
  RectDataView() {}

  RectDataView(
      internal::Rect_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  int32_t y() const {
    return data_->y;
  }
  int32_t width() const {
    return data_->width;
  }
  int32_t height() const {
    return data_->height;
  }
 private:
  internal::Rect_Data* data_ = nullptr;
};

class TypemappedRectDataView {
 public:
  TypemappedRectDataView() {}

  TypemappedRectDataView(
      internal::TypemappedRect_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  int32_t y() const {
    return data_->y;
  }
  int32_t width() const {
    return data_->width;
  }
  int32_t height() const {
    return data_->height;
  }
 private:
  internal::TypemappedRect_Data* data_ = nullptr;
};

class SharedTypemappedRectDataView {
 public:
  SharedTypemappedRectDataView() {}

  SharedTypemappedRectDataView(
      internal::SharedTypemappedRect_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  int32_t y() const {
    return data_->y;
  }
  int32_t width() const {
    return data_->width;
  }
  int32_t height() const {
    return data_->height;
  }
 private:
  internal::SharedTypemappedRect_Data* data_ = nullptr;
};



}  // namespace test
}  // namespace mojo

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::RectDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::RectDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::Rect_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
    (*output)->width = Traits::width(input);
    (*output)->height = Traits::height(input);
  }

  static bool Deserialize(::mojo::test::internal::Rect_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::RectDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::TypemappedRectDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::TypemappedRectDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::TypemappedRect_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
    (*output)->width = Traits::width(input);
    (*output)->height = Traits::height(input);
  }

  static bool Deserialize(::mojo::test::internal::TypemappedRect_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::TypemappedRectDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::SharedTypemappedRectDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::SharedTypemappedRectDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::SharedTypemappedRect_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
    (*output)->width = Traits::width(input);
    (*output)->height = Traits::height(input);
  }

  static bool Deserialize(::mojo::test::internal::SharedTypemappedRect_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::SharedTypemappedRectDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo {
namespace test {








}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_SHARED_H_