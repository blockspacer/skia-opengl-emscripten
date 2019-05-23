// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_RRECT_F_MOJOM_SHARED_H_
#define UI_GFX_MOJO_RRECT_F_MOJOM_SHARED_H_

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
#include "ui/gfx/mojo/rrect_f.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class RRectFDataView;



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gfx::mojom::RRectFDataView> {
  using Data = ::gfx::mojom::internal::RRectF_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gfx {
namespace mojom {


enum class RRectFType : int32_t {
  
  kEmpty,
  
  kRect,
  
  kSingle,
  
  kSimple,
  
  kOval,
  
  kComplex,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, RRectFType value);
inline bool IsKnownEnumValue(RRectFType value) {
  return internal::RRectFType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class RRectFDataView {
 public:
  RRectFDataView() {}

  RRectFDataView(
      internal::RRectF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::gfx::mojom::RRectFType>(
        data_value, output);
  }

  RRectFType type() const {
    return static_cast<RRectFType>(data_->type);
  }
  inline void GetRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRect(UserType* output) {
    auto* pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetUpperLeftDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpperLeft(UserType* output) {
    auto* pointer = data_->upper_left.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFDataView>(
        pointer, output, context_);
  }
  inline void GetUpperRightDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpperRight(UserType* output) {
    auto* pointer = data_->upper_right.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFDataView>(
        pointer, output, context_);
  }
  inline void GetLowerRightDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLowerRight(UserType* output) {
    auto* pointer = data_->lower_right.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFDataView>(
        pointer, output, context_);
  }
  inline void GetLowerLeftDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLowerLeft(UserType* output) {
    auto* pointer = data_->lower_left.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFDataView>(
        pointer, output, context_);
  }
 private:
  internal::RRectF_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace std {

template <>
struct hash<::gfx::mojom::RRectFType>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::RRectFType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gfx::mojom::RRectFType, ::gfx::mojom::RRectFType> {
  static ::gfx::mojom::RRectFType ToMojom(::gfx::mojom::RRectFType input) { return input; }
  static bool FromMojom(::gfx::mojom::RRectFType input, ::gfx::mojom::RRectFType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::RRectFType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::RRectFType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::RRectFType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::RRectFDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::RRectFDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::RRectF_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::gfx::mojom::RRectFType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::rect(input)) in_rect = Traits::rect(input);
    typename decltype((*output)->rect)::BaseType::BufferWriter
        rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
        in_rect, buffer, &rect_writer, context);
    (*output)->rect.Set(
        rect_writer.is_null() ? nullptr : rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null rect in RRectF struct");
    decltype(Traits::upper_left(input)) in_upper_left = Traits::upper_left(input);
    typename decltype((*output)->upper_left)::BaseType::BufferWriter
        upper_left_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dFDataView>(
        in_upper_left, buffer, &upper_left_writer, context);
    (*output)->upper_left.Set(
        upper_left_writer.is_null() ? nullptr : upper_left_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->upper_left.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null upper_left in RRectF struct");
    decltype(Traits::upper_right(input)) in_upper_right = Traits::upper_right(input);
    typename decltype((*output)->upper_right)::BaseType::BufferWriter
        upper_right_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dFDataView>(
        in_upper_right, buffer, &upper_right_writer, context);
    (*output)->upper_right.Set(
        upper_right_writer.is_null() ? nullptr : upper_right_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->upper_right.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null upper_right in RRectF struct");
    decltype(Traits::lower_right(input)) in_lower_right = Traits::lower_right(input);
    typename decltype((*output)->lower_right)::BaseType::BufferWriter
        lower_right_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dFDataView>(
        in_lower_right, buffer, &lower_right_writer, context);
    (*output)->lower_right.Set(
        lower_right_writer.is_null() ? nullptr : lower_right_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->lower_right.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null lower_right in RRectF struct");
    decltype(Traits::lower_left(input)) in_lower_left = Traits::lower_left(input);
    typename decltype((*output)->lower_left)::BaseType::BufferWriter
        lower_left_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dFDataView>(
        in_lower_left, buffer, &lower_left_writer, context);
    (*output)->lower_left.Set(
        lower_left_writer.is_null() ? nullptr : lower_left_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->lower_left.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null lower_left in RRectF struct");
  }

  static bool Deserialize(::gfx::mojom::internal::RRectF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::RRectFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {

inline void RRectFDataView::GetRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void RRectFDataView::GetUpperLeftDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->upper_left.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}
inline void RRectFDataView::GetUpperRightDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->upper_right.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}
inline void RRectFDataView::GetLowerRightDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->lower_right.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}
inline void RRectFDataView::GetLowerLeftDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->lower_left.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_RRECT_F_MOJOM_SHARED_H_