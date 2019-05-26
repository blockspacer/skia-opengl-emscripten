// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_SHARED_H_
#define UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_SHARED_H_

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
#include "ui/display/mojo/display_layout.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace display {
namespace mojom {
class DisplayPlacementDataView;

class DisplayLayoutDataView;



}  // namespace mojom
}  // namespace display

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::display::mojom::DisplayPlacementDataView> {
  using Data = ::display::mojom::internal::DisplayPlacement_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::display::mojom::DisplayLayoutDataView> {
  using Data = ::display::mojom::internal::DisplayLayout_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace display {
namespace mojom {


enum class Position : int32_t {
  
  TOP,
  
  RIGHT,
  
  BOTTOM,
  
  LEFT,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, Position value);
inline bool IsKnownEnumValue(Position value) {
  return internal::Position_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class OffsetReference : int32_t {
  
  TOP_LEFT,
  
  BOTTOM_RIGHT,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, OffsetReference value);
inline bool IsKnownEnumValue(OffsetReference value) {
  return internal::OffsetReference_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class DisplayPlacementDataView {
 public:
  DisplayPlacementDataView() {}

  DisplayPlacementDataView(
      internal::DisplayPlacement_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  int64_t parent_display_id() const {
    return data_->parent_display_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPosition(UserType* output) const {
    auto data_value = data_->position;
    return mojo::internal::Deserialize<::display::mojom::Position>(
        data_value, output);
  }

  Position position() const {
    return static_cast<Position>(data_->position);
  }
  int32_t offset() const {
    return data_->offset;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOffsetReference(UserType* output) const {
    auto data_value = data_->offset_reference;
    return mojo::internal::Deserialize<::display::mojom::OffsetReference>(
        data_value, output);
  }

  OffsetReference offset_reference() const {
    return static_cast<OffsetReference>(data_->offset_reference);
  }
 private:
  internal::DisplayPlacement_Data* data_ = nullptr;
};

class DisplayLayoutDataView {
 public:
  DisplayLayoutDataView() {}

  DisplayLayoutDataView(
      internal::DisplayLayout_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool default_unified() const {
    return data_->default_unified;
  }
  int64_t primary_display_id() const {
    return data_->primary_display_id;
  }
  inline void GetPlacementListDataView(
      mojo::ArrayDataView<DisplayPlacementDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlacementList(UserType* output) {
    auto* pointer = data_->placement_list.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::display::mojom::DisplayPlacementDataView>>(
        pointer, output, context_);
  }
 private:
  internal::DisplayLayout_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace display

namespace std {

template <>
struct hash<::display::mojom::Position>
    : public mojo::internal::EnumHashImpl<::display::mojom::Position> {};

template <>
struct hash<::display::mojom::OffsetReference>
    : public mojo::internal::EnumHashImpl<::display::mojom::OffsetReference> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::display::mojom::Position, ::display::mojom::Position> {
  static ::display::mojom::Position ToMojom(::display::mojom::Position input) { return input; }
  static bool FromMojom(::display::mojom::Position input, ::display::mojom::Position* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::Position, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::display::mojom::Position, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::display::mojom::Position>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::display::mojom::OffsetReference, ::display::mojom::OffsetReference> {
  static ::display::mojom::OffsetReference ToMojom(::display::mojom::OffsetReference input) { return input; }
  static bool FromMojom(::display::mojom::OffsetReference input, ::display::mojom::OffsetReference* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::OffsetReference, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::display::mojom::OffsetReference, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::display::mojom::OffsetReference>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::DisplayPlacementDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::display::mojom::DisplayPlacementDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::display::mojom::internal::DisplayPlacement_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->display_id = Traits::display_id(input);
    (*output)->parent_display_id = Traits::parent_display_id(input);
    mojo::internal::Serialize<::display::mojom::Position>(
        Traits::position(input), &(*output)->position);
    (*output)->offset = Traits::offset(input);
    mojo::internal::Serialize<::display::mojom::OffsetReference>(
        Traits::offset_reference(input), &(*output)->offset_reference);
  }

  static bool Deserialize(::display::mojom::internal::DisplayPlacement_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::display::mojom::DisplayPlacementDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::DisplayLayoutDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::display::mojom::DisplayLayoutDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::display::mojom::internal::DisplayLayout_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->default_unified = Traits::default_unified(input);
    (*output)->primary_display_id = Traits::primary_display_id(input);
    decltype(Traits::placement_list(input)) in_placement_list = Traits::placement_list(input);
    typename decltype((*output)->placement_list)::BaseType::BufferWriter
        placement_list_writer;
    const mojo::internal::ContainerValidateParams placement_list_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::display::mojom::DisplayPlacementDataView>>(
        in_placement_list, buffer, &placement_list_writer, &placement_list_validate_params,
        context);
    (*output)->placement_list.Set(
        placement_list_writer.is_null() ? nullptr : placement_list_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->placement_list.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null placement_list in DisplayLayout struct");
  }

  static bool Deserialize(::display::mojom::internal::DisplayLayout_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::display::mojom::DisplayLayoutDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace display {
namespace mojom {



inline void DisplayLayoutDataView::GetPlacementListDataView(
    mojo::ArrayDataView<DisplayPlacementDataView>* output) {
  auto pointer = data_->placement_list.Get();
  *output = mojo::ArrayDataView<DisplayPlacementDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_SHARED_H_