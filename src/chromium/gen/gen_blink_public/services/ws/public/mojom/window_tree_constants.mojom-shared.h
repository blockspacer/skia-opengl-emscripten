// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_SHARED_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_SHARED_H_

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
#include "services/ws/public/mojom/window_tree_constants.mojom-shared-internal.h"
#include "ui/base/mojo/ui_base_types.mojom-shared.h"
#include "ui/display/mojo/display.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ws {
namespace mojom {
class FrameDecorationValuesDataView;

class WindowDataDataView;

class WsDisplayDataView;



}  // namespace mojom
}  // namespace ws

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ws::mojom::FrameDecorationValuesDataView> {
  using Data = ::ws::mojom::internal::FrameDecorationValues_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ws::mojom::WindowDataDataView> {
  using Data = ::ws::mojom::internal::WindowData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ws::mojom::WsDisplayDataView> {
  using Data = ::ws::mojom::internal::WsDisplay_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ws {
namespace mojom {


enum class EventResult : int32_t {
  
  HANDLED,
  
  UNHANDLED,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, EventResult value);
inline bool IsKnownEnumValue(EventResult value) {
  return internal::EventResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EventTargetingPolicy : int32_t {
  
  TARGET_ONLY,
  
  TARGET_AND_DESCENDANTS,
  
  DESCENDANTS_ONLY,
  
  NONE,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, EventTargetingPolicy value);
inline bool IsKnownEnumValue(EventTargetingPolicy value) {
  return internal::EventTargetingPolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class MoveLoopSource : int32_t {
  
  MOUSE,
  
  TOUCH,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, MoveLoopSource value);
inline bool IsKnownEnumValue(MoveLoopSource value) {
  return internal::MoveLoopSource_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class OrderDirection : int32_t {
  
  ABOVE = 1,
  
  BELOW,
  kMinValue = 1,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, OrderDirection value);
inline bool IsKnownEnumValue(OrderDirection value) {
  return internal::OrderDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ShowState : int32_t {
  
  DEFAULT,
  
  NORMAL,
  
  MINIMIZED,
  
  MAXIMIZED,
  
  INACTIVE,
  
  FULLSCREEN,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, ShowState value);
inline bool IsKnownEnumValue(ShowState value) {
  return internal::ShowState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class WindowType : int32_t {
  
  WINDOW,
  
  WINDOW_FRAMELESS,
  
  CONTROL,
  
  POPUP,
  
  MENU,
  
  TOOLTIP,
  
  BUBBLE,
  
  DRAG,
  
  UNKNOWN,
  kMinValue = 0,
  kMaxValue = 8,
};

 std::ostream& operator<<(std::ostream& os, WindowType value);
inline bool IsKnownEnumValue(WindowType value) {
  return internal::WindowType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class OcclusionState : int32_t {
  
  kUnknown,
  
  kVisible,
  
  kOccluded,
  
  kHidden,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, OcclusionState value);
inline bool IsKnownEnumValue(OcclusionState value) {
  return internal::OcclusionState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class FrameDecorationValuesDataView {
 public:
  FrameDecorationValuesDataView() {}

  FrameDecorationValuesDataView(
      internal::FrameDecorationValues_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNormalClientAreaInsetsDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNormalClientAreaInsets(UserType* output) {
    auto* pointer = data_->normal_client_area_insets.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsDataView>(
        pointer, output, context_);
  }
  inline void GetMaximizedClientAreaInsetsDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaximizedClientAreaInsets(UserType* output) {
    auto* pointer = data_->maximized_client_area_insets.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsDataView>(
        pointer, output, context_);
  }
  uint32_t max_title_bar_button_width() const {
    return data_->max_title_bar_button_width;
  }
 private:
  internal::FrameDecorationValues_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowDataDataView {
 public:
  WindowDataDataView() {}

  WindowDataDataView(
      internal::WindowData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t parent_id() const {
    return data_->parent_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  uint64_t transient_parent_id() const {
    return data_->transient_parent_id;
  }
  inline void GetBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBounds(UserType* output) {
    auto* pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::ui::mojom::WindowShowState>(
        data_value, output);
  }

  ::ui::mojom::WindowShowState state() const {
    return static_cast<::ui::mojom::WindowShowState>(data_->state);
  }
  inline void GetPropertiesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::WindowData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WsDisplayDataView {
 public:
  WsDisplayDataView() {}

  WsDisplayDataView(
      internal::WsDisplay_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayDataView(
      ::display::mojom::DisplayDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplay(UserType* output) {
    auto* pointer = data_->display.Get();
    return mojo::internal::Deserialize<::display::mojom::DisplayDataView>(
        pointer, output, context_);
  }
  inline void GetFrameDecorationValuesDataView(
      FrameDecorationValuesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameDecorationValues(UserType* output) {
    auto* pointer = data_->frame_decoration_values.Get();
    return mojo::internal::Deserialize<::ws::mojom::FrameDecorationValuesDataView>(
        pointer, output, context_);
  }
 private:
  internal::WsDisplay_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ws

namespace std {

template <>
struct hash<::ws::mojom::EventResult>
    : public mojo::internal::EnumHashImpl<::ws::mojom::EventResult> {};

template <>
struct hash<::ws::mojom::EventTargetingPolicy>
    : public mojo::internal::EnumHashImpl<::ws::mojom::EventTargetingPolicy> {};

template <>
struct hash<::ws::mojom::MoveLoopSource>
    : public mojo::internal::EnumHashImpl<::ws::mojom::MoveLoopSource> {};

template <>
struct hash<::ws::mojom::OrderDirection>
    : public mojo::internal::EnumHashImpl<::ws::mojom::OrderDirection> {};

template <>
struct hash<::ws::mojom::ShowState>
    : public mojo::internal::EnumHashImpl<::ws::mojom::ShowState> {};

template <>
struct hash<::ws::mojom::WindowType>
    : public mojo::internal::EnumHashImpl<::ws::mojom::WindowType> {};

template <>
struct hash<::ws::mojom::OcclusionState>
    : public mojo::internal::EnumHashImpl<::ws::mojom::OcclusionState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ws::mojom::EventResult, ::ws::mojom::EventResult> {
  static ::ws::mojom::EventResult ToMojom(::ws::mojom::EventResult input) { return input; }
  static bool FromMojom(::ws::mojom::EventResult input, ::ws::mojom::EventResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::EventResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ws::mojom::EventResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ws::mojom::EventResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ws::mojom::EventTargetingPolicy, ::ws::mojom::EventTargetingPolicy> {
  static ::ws::mojom::EventTargetingPolicy ToMojom(::ws::mojom::EventTargetingPolicy input) { return input; }
  static bool FromMojom(::ws::mojom::EventTargetingPolicy input, ::ws::mojom::EventTargetingPolicy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::EventTargetingPolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ws::mojom::EventTargetingPolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ws::mojom::EventTargetingPolicy>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ws::mojom::MoveLoopSource, ::ws::mojom::MoveLoopSource> {
  static ::ws::mojom::MoveLoopSource ToMojom(::ws::mojom::MoveLoopSource input) { return input; }
  static bool FromMojom(::ws::mojom::MoveLoopSource input, ::ws::mojom::MoveLoopSource* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::MoveLoopSource, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ws::mojom::MoveLoopSource, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ws::mojom::MoveLoopSource>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ws::mojom::OrderDirection, ::ws::mojom::OrderDirection> {
  static ::ws::mojom::OrderDirection ToMojom(::ws::mojom::OrderDirection input) { return input; }
  static bool FromMojom(::ws::mojom::OrderDirection input, ::ws::mojom::OrderDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::OrderDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ws::mojom::OrderDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ws::mojom::OrderDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ws::mojom::ShowState, ::ws::mojom::ShowState> {
  static ::ws::mojom::ShowState ToMojom(::ws::mojom::ShowState input) { return input; }
  static bool FromMojom(::ws::mojom::ShowState input, ::ws::mojom::ShowState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::ShowState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ws::mojom::ShowState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ws::mojom::ShowState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ws::mojom::WindowType, ::ws::mojom::WindowType> {
  static ::ws::mojom::WindowType ToMojom(::ws::mojom::WindowType input) { return input; }
  static bool FromMojom(::ws::mojom::WindowType input, ::ws::mojom::WindowType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::WindowType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ws::mojom::WindowType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ws::mojom::WindowType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ws::mojom::OcclusionState, ::ws::mojom::OcclusionState> {
  static ::ws::mojom::OcclusionState ToMojom(::ws::mojom::OcclusionState input) { return input; }
  static bool FromMojom(::ws::mojom::OcclusionState input, ::ws::mojom::OcclusionState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::OcclusionState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ws::mojom::OcclusionState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ws::mojom::OcclusionState>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::FrameDecorationValuesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ws::mojom::FrameDecorationValuesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ws::mojom::internal::FrameDecorationValues_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::normal_client_area_insets(input)) in_normal_client_area_insets = Traits::normal_client_area_insets(input);
    typename decltype((*output)->normal_client_area_insets)::BaseType::BufferWriter
        normal_client_area_insets_writer;
    mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
        in_normal_client_area_insets, buffer, &normal_client_area_insets_writer, context);
    (*output)->normal_client_area_insets.Set(
        normal_client_area_insets_writer.is_null() ? nullptr : normal_client_area_insets_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->normal_client_area_insets.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null normal_client_area_insets in FrameDecorationValues struct");
    decltype(Traits::maximized_client_area_insets(input)) in_maximized_client_area_insets = Traits::maximized_client_area_insets(input);
    typename decltype((*output)->maximized_client_area_insets)::BaseType::BufferWriter
        maximized_client_area_insets_writer;
    mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
        in_maximized_client_area_insets, buffer, &maximized_client_area_insets_writer, context);
    (*output)->maximized_client_area_insets.Set(
        maximized_client_area_insets_writer.is_null() ? nullptr : maximized_client_area_insets_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->maximized_client_area_insets.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null maximized_client_area_insets in FrameDecorationValues struct");
    (*output)->max_title_bar_button_width = Traits::max_title_bar_button_width(input);
  }

  static bool Deserialize(::ws::mojom::internal::FrameDecorationValues_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ws::mojom::FrameDecorationValuesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::WindowDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ws::mojom::WindowDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ws::mojom::internal::WindowData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->parent_id = Traits::parent_id(input);
    (*output)->window_id = Traits::window_id(input);
    (*output)->transient_parent_id = Traits::transient_parent_id(input);
    decltype(Traits::bounds(input)) in_bounds = Traits::bounds(input);
    typename decltype((*output)->bounds)::BaseType::BufferWriter
        bounds_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_bounds, buffer, &bounds_writer, context);
    (*output)->bounds.Set(
        bounds_writer.is_null() ? nullptr : bounds_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bounds.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bounds in WindowData struct");
    mojo::internal::Serialize<::ui::mojom::WindowShowState>(
        Traits::state(input), &(*output)->state);
    decltype(Traits::properties(input)) in_properties = Traits::properties(input);
    typename decltype((*output)->properties)::BaseType::BufferWriter
        properties_writer;
    const mojo::internal::ContainerValidateParams properties_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        in_properties, buffer, &properties_writer, &properties_validate_params,
        context);
    (*output)->properties.Set(
        properties_writer.is_null() ? nullptr : properties_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->properties.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null properties in WindowData struct");
    (*output)->visible = Traits::visible(input);
  }

  static bool Deserialize(::ws::mojom::internal::WindowData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ws::mojom::WindowDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::WsDisplayDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ws::mojom::WsDisplayDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ws::mojom::internal::WsDisplay_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::display(input)) in_display = Traits::display(input);
    typename decltype((*output)->display)::BaseType::BufferWriter
        display_writer;
    mojo::internal::Serialize<::display::mojom::DisplayDataView>(
        in_display, buffer, &display_writer, context);
    (*output)->display.Set(
        display_writer.is_null() ? nullptr : display_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display in WsDisplay struct");
    decltype(Traits::frame_decoration_values(input)) in_frame_decoration_values = Traits::frame_decoration_values(input);
    typename decltype((*output)->frame_decoration_values)::BaseType::BufferWriter
        frame_decoration_values_writer;
    mojo::internal::Serialize<::ws::mojom::FrameDecorationValuesDataView>(
        in_frame_decoration_values, buffer, &frame_decoration_values_writer, context);
    (*output)->frame_decoration_values.Set(
        frame_decoration_values_writer.is_null() ? nullptr : frame_decoration_values_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_decoration_values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_decoration_values in WsDisplay struct");
  }

  static bool Deserialize(::ws::mojom::internal::WsDisplay_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ws::mojom::WsDisplayDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ws {
namespace mojom {

inline void FrameDecorationValuesDataView::GetNormalClientAreaInsetsDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->normal_client_area_insets.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}
inline void FrameDecorationValuesDataView::GetMaximizedClientAreaInsetsDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->maximized_client_area_insets.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}


inline void WindowDataDataView::GetBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void WindowDataDataView::GetPropertiesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}


inline void WsDisplayDataView::GetDisplayDataView(
    ::display::mojom::DisplayDataView* output) {
  auto pointer = data_->display.Get();
  *output = ::display::mojom::DisplayDataView(pointer, context_);
}
inline void WsDisplayDataView::GetFrameDecorationValuesDataView(
    FrameDecorationValuesDataView* output) {
  auto pointer = data_->frame_decoration_values.Get();
  *output = FrameDecorationValuesDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_SHARED_H_