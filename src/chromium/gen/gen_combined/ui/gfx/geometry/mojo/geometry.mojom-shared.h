// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_SHARED_H_
#define UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_SHARED_H_

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
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class PointDataView;

class PointFDataView;

class Point3FDataView;

class SizeDataView;

class SizeFDataView;

class RectDataView;

class RectFDataView;

class InsetsDataView;

class InsetsFDataView;

class Vector2dDataView;

class Vector2dFDataView;

class Vector3dFDataView;

class ScrollOffsetDataView;



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gfx::mojom::PointDataView> {
  using Data = ::gfx::mojom::internal::Point_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::PointFDataView> {
  using Data = ::gfx::mojom::internal::PointF_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::Point3FDataView> {
  using Data = ::gfx::mojom::internal::Point3F_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::SizeDataView> {
  using Data = ::gfx::mojom::internal::Size_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::SizeFDataView> {
  using Data = ::gfx::mojom::internal::SizeF_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::RectDataView> {
  using Data = ::gfx::mojom::internal::Rect_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::RectFDataView> {
  using Data = ::gfx::mojom::internal::RectF_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::InsetsDataView> {
  using Data = ::gfx::mojom::internal::Insets_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::InsetsFDataView> {
  using Data = ::gfx::mojom::internal::InsetsF_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::Vector2dDataView> {
  using Data = ::gfx::mojom::internal::Vector2d_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::Vector2dFDataView> {
  using Data = ::gfx::mojom::internal::Vector2dF_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::Vector3dFDataView> {
  using Data = ::gfx::mojom::internal::Vector3dF_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::ScrollOffsetDataView> {
  using Data = ::gfx::mojom::internal::ScrollOffset_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gfx {
namespace mojom {
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

class PointFDataView {
 public:
  PointFDataView() {}

  PointFDataView(
      internal::PointF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
 private:
  internal::PointF_Data* data_ = nullptr;
};

class Point3FDataView {
 public:
  Point3FDataView() {}

  Point3FDataView(
      internal::Point3F_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
  float z() const {
    return data_->z;
  }
 private:
  internal::Point3F_Data* data_ = nullptr;
};

class SizeDataView {
 public:
  SizeDataView() {}

  SizeDataView(
      internal::Size_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t width() const {
    return data_->width;
  }
  int32_t height() const {
    return data_->height;
  }
 private:
  internal::Size_Data* data_ = nullptr;
};

class SizeFDataView {
 public:
  SizeFDataView() {}

  SizeFDataView(
      internal::SizeF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float width() const {
    return data_->width;
  }
  float height() const {
    return data_->height;
  }
 private:
  internal::SizeF_Data* data_ = nullptr;
};

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

class RectFDataView {
 public:
  RectFDataView() {}

  RectFDataView(
      internal::RectF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
  float width() const {
    return data_->width;
  }
  float height() const {
    return data_->height;
  }
 private:
  internal::RectF_Data* data_ = nullptr;
};

class InsetsDataView {
 public:
  InsetsDataView() {}

  InsetsDataView(
      internal::Insets_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t top() const {
    return data_->top;
  }
  int32_t left() const {
    return data_->left;
  }
  int32_t bottom() const {
    return data_->bottom;
  }
  int32_t right() const {
    return data_->right;
  }
 private:
  internal::Insets_Data* data_ = nullptr;
};

class InsetsFDataView {
 public:
  InsetsFDataView() {}

  InsetsFDataView(
      internal::InsetsF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float top() const {
    return data_->top;
  }
  float left() const {
    return data_->left;
  }
  float bottom() const {
    return data_->bottom;
  }
  float right() const {
    return data_->right;
  }
 private:
  internal::InsetsF_Data* data_ = nullptr;
};

class Vector2dDataView {
 public:
  Vector2dDataView() {}

  Vector2dDataView(
      internal::Vector2d_Data* data,
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
  internal::Vector2d_Data* data_ = nullptr;
};

class Vector2dFDataView {
 public:
  Vector2dFDataView() {}

  Vector2dFDataView(
      internal::Vector2dF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
 private:
  internal::Vector2dF_Data* data_ = nullptr;
};

class Vector3dFDataView {
 public:
  Vector3dFDataView() {}

  Vector3dFDataView(
      internal::Vector3dF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
  float z() const {
    return data_->z;
  }
 private:
  internal::Vector3dF_Data* data_ = nullptr;
};

class ScrollOffsetDataView {
 public:
  ScrollOffsetDataView() {}

  ScrollOffsetDataView(
      internal::ScrollOffset_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
 private:
  internal::ScrollOffset_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::PointDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::PointDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Point_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
  }

  static bool Deserialize(::gfx::mojom::internal::Point_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::PointDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::PointFDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::PointFDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::PointF_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
  }

  static bool Deserialize(::gfx::mojom::internal::PointF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::PointFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::Point3FDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Point3FDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Point3F_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
    (*output)->z = Traits::z(input);
  }

  static bool Deserialize(::gfx::mojom::internal::Point3F_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::Point3FDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::SizeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::SizeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Size_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->width = Traits::width(input);
    (*output)->height = Traits::height(input);
  }

  static bool Deserialize(::gfx::mojom::internal::Size_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::SizeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::SizeFDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::SizeFDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::SizeF_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->width = Traits::width(input);
    (*output)->height = Traits::height(input);
  }

  static bool Deserialize(::gfx::mojom::internal::SizeF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::SizeFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::RectDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::RectDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Rect_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
    (*output)->width = Traits::width(input);
    (*output)->height = Traits::height(input);
  }

  static bool Deserialize(::gfx::mojom::internal::Rect_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::RectDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::RectFDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::RectFDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::RectF_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
    (*output)->width = Traits::width(input);
    (*output)->height = Traits::height(input);
  }

  static bool Deserialize(::gfx::mojom::internal::RectF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::RectFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::InsetsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::InsetsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Insets_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->top = Traits::top(input);
    (*output)->left = Traits::left(input);
    (*output)->bottom = Traits::bottom(input);
    (*output)->right = Traits::right(input);
  }

  static bool Deserialize(::gfx::mojom::internal::Insets_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::InsetsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::InsetsFDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::InsetsFDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::InsetsF_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->top = Traits::top(input);
    (*output)->left = Traits::left(input);
    (*output)->bottom = Traits::bottom(input);
    (*output)->right = Traits::right(input);
  }

  static bool Deserialize(::gfx::mojom::internal::InsetsF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::InsetsFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::Vector2dDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Vector2dDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Vector2d_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
  }

  static bool Deserialize(::gfx::mojom::internal::Vector2d_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::Vector2dDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::Vector2dFDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Vector2dFDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Vector2dF_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
  }

  static bool Deserialize(::gfx::mojom::internal::Vector2dF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::Vector2dFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::Vector3dFDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Vector3dFDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Vector3dF_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
    (*output)->z = Traits::z(input);
  }

  static bool Deserialize(::gfx::mojom::internal::Vector3dF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::Vector3dFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::ScrollOffsetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::ScrollOffsetDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::ScrollOffset_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
  }

  static bool Deserialize(::gfx::mojom::internal::ScrollOffset_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::ScrollOffsetDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {




























}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_SHARED_H_