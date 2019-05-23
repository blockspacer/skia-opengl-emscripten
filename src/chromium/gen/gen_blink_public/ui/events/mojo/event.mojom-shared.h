// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_H_
#define UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_H_

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
#include "ui/events/mojo/event.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/events/mojo/event_constants.mojom-shared.h"
#include "ui/events/mojo/keyboard_codes.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/latency/mojo/latency_info.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {
class KeyDataDataView;

class LocationDataDataView;

class GestureDataDataView;

class ScrollDataDataView;

class PointerDetailsDataView;

class MouseDataDataView;

class TouchDataDataView;

class EventDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::KeyDataDataView> {
  using Data = ::ui::mojom::internal::KeyData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::LocationDataDataView> {
  using Data = ::ui::mojom::internal::LocationData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::GestureDataDataView> {
  using Data = ::ui::mojom::internal::GestureData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::ScrollDataDataView> {
  using Data = ::ui::mojom::internal::ScrollData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::PointerDetailsDataView> {
  using Data = ::ui::mojom::internal::PointerDetails_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::MouseDataDataView> {
  using Data = ::ui::mojom::internal::MouseData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::TouchDataDataView> {
  using Data = ::ui::mojom::internal::TouchData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::EventDataView> {
  using Data = ::ui::mojom::internal::Event_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {
class KeyDataDataView {
 public:
  KeyDataDataView() {}

  KeyDataDataView(
      internal::KeyData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t key_code() const {
    return data_->key_code;
  }
  uint32_t dom_code() const {
    return data_->dom_code;
  }
  int32_t dom_key() const {
    return data_->dom_key;
  }
  bool is_char() const {
    return data_->is_char;
  }
 private:
  internal::KeyData_Data* data_ = nullptr;
};

class LocationDataDataView {
 public:
  LocationDataDataView() {}

  LocationDataDataView(
      internal::LocationData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRelativeLocationDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelativeLocation(UserType* output) {
    auto* pointer = data_->relative_location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetRootLocationDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRootLocation(UserType* output) {
    auto* pointer = data_->root_location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
 private:
  internal::LocationData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GestureDataDataView {
 public:
  GestureDataDataView() {}

  GestureDataDataView(
      internal::GestureData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocationDataView(
      LocationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::ui::mojom::LocationDataDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceType(UserType* output) const {
    auto data_value = data_->device_type;
    return mojo::internal::Deserialize<::ui::mojom::GestureDeviceType>(
        data_value, output);
  }

  ::ui::mojom::GestureDeviceType device_type() const {
    return static_cast<::ui::mojom::GestureDeviceType>(data_->device_type);
  }
  float scale() const {
    return data_->scale;
  }
 private:
  internal::GestureData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ScrollDataDataView {
 public:
  ScrollDataDataView() {}

  ScrollDataDataView(
      internal::ScrollData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocationDataView(
      LocationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::ui::mojom::LocationDataDataView>(
        pointer, output, context_);
  }
  float x_offset() const {
    return data_->x_offset;
  }
  float y_offset() const {
    return data_->y_offset;
  }
  float x_offset_ordinal() const {
    return data_->x_offset_ordinal;
  }
  float y_offset_ordinal() const {
    return data_->y_offset_ordinal;
  }
  int32_t finger_count() const {
    return data_->finger_count;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMomentumPhase(UserType* output) const {
    auto data_value = data_->momentum_phase;
    return mojo::internal::Deserialize<::ui::mojom::EventMomentumPhase>(
        data_value, output);
  }

  ::ui::mojom::EventMomentumPhase momentum_phase() const {
    return static_cast<::ui::mojom::EventMomentumPhase>(data_->momentum_phase);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollEventPhase(UserType* output) const {
    auto data_value = data_->scroll_event_phase;
    return mojo::internal::Deserialize<::ui::mojom::ScrollEventPhase>(
        data_value, output);
  }

  ::ui::mojom::ScrollEventPhase scroll_event_phase() const {
    return static_cast<::ui::mojom::ScrollEventPhase>(data_->scroll_event_phase);
  }
 private:
  internal::ScrollData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PointerDetailsDataView {
 public:
  PointerDetailsDataView() {}

  PointerDetailsDataView(
      internal::PointerDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerType(UserType* output) const {
    auto data_value = data_->pointer_type;
    return mojo::internal::Deserialize<::ui::mojom::PointerKind>(
        data_value, output);
  }

  ::ui::mojom::PointerKind pointer_type() const {
    return static_cast<::ui::mojom::PointerKind>(data_->pointer_type);
  }
  float radius_x() const {
    return data_->radius_x;
  }
  float radius_y() const {
    return data_->radius_y;
  }
  float force() const {
    return data_->force;
  }
  float tilt_x() const {
    return data_->tilt_x;
  }
  float tilt_y() const {
    return data_->tilt_y;
  }
  float tangential_pressure() const {
    return data_->tangential_pressure;
  }
  float twist() const {
    return data_->twist;
  }
  int32_t id() const {
    return data_->id;
  }
  int32_t offset_x() const {
    return data_->offset_x;
  }
  int32_t offset_y() const {
    return data_->offset_y;
  }
 private:
  internal::PointerDetails_Data* data_ = nullptr;
};

class MouseDataDataView {
 public:
  MouseDataDataView() {}

  MouseDataDataView(
      internal::MouseData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t changed_button_flags() const {
    return data_->changed_button_flags;
  }
  inline void GetLocationDataView(
      LocationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::ui::mojom::LocationDataDataView>(
        pointer, output, context_);
  }
  inline void GetPointerDetailsDataView(
      PointerDetailsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerDetails(UserType* output) {
    auto* pointer = data_->pointer_details.Get();
    return mojo::internal::Deserialize<::ui::mojom::PointerDetailsDataView>(
        pointer, output, context_);
  }
  inline void GetWheelOffsetDataView(
      ::gfx::mojom::Vector2dDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWheelOffset(UserType* output) {
    auto* pointer = data_->wheel_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dDataView>(
        pointer, output, context_);
  }
 private:
  internal::MouseData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TouchDataDataView {
 public:
  TouchDataDataView() {}

  TouchDataDataView(
      internal::TouchData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool may_cause_scrolling() const {
    return data_->may_cause_scrolling;
  }
  bool hovering() const {
    return data_->hovering;
  }
  inline void GetLocationDataView(
      LocationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::ui::mojom::LocationDataDataView>(
        pointer, output, context_);
  }
  inline void GetPointerDetailsDataView(
      PointerDetailsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerDetails(UserType* output) {
    auto* pointer = data_->pointer_details.Get();
    return mojo::internal::Deserialize<::ui::mojom::PointerDetailsDataView>(
        pointer, output, context_);
  }
 private:
  internal::TouchData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EventDataView {
 public:
  EventDataView() {}

  EventDataView(
      internal::Event_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) const {
    auto data_value = data_->action;
    return mojo::internal::Deserialize<::ui::mojom::EventType>(
        data_value, output);
  }

  ::ui::mojom::EventType action() const {
    return static_cast<::ui::mojom::EventType>(data_->action);
  }
  int32_t flags() const {
    return data_->flags;
  }
  inline void GetTimeStampDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeStamp(UserType* output) {
    auto* pointer = data_->time_stamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetLatencyDataView(
      ::ui::mojom::LatencyInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLatency(UserType* output) {
    auto* pointer = data_->latency.Get();
    return mojo::internal::Deserialize<::ui::mojom::LatencyInfoDataView>(
        pointer, output, context_);
  }
  inline void GetKeyDataDataView(
      KeyDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyData(UserType* output) {
    auto* pointer = data_->key_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::KeyDataDataView>(
        pointer, output, context_);
  }
  inline void GetGestureDataDataView(
      GestureDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGestureData(UserType* output) {
    auto* pointer = data_->gesture_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::GestureDataDataView>(
        pointer, output, context_);
  }
  inline void GetScrollDataDataView(
      ScrollDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollData(UserType* output) {
    auto* pointer = data_->scroll_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::ScrollDataDataView>(
        pointer, output, context_);
  }
  inline void GetTouchDataDataView(
      TouchDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouchData(UserType* output) {
    auto* pointer = data_->touch_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::TouchDataDataView>(
        pointer, output, context_);
  }
  inline void GetMouseDataDataView(
      MouseDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMouseData(UserType* output) {
    auto* pointer = data_->mouse_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::MouseDataDataView>(
        pointer, output, context_);
  }
  inline void GetPropertiesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::Event_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::KeyDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::KeyDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::KeyData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->key_code = Traits::key_code(input);
    (*output)->dom_code = Traits::dom_code(input);
    (*output)->dom_key = Traits::dom_key(input);
    (*output)->is_char = Traits::is_char(input);
  }

  static bool Deserialize(::ui::mojom::internal::KeyData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::KeyDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LocationDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LocationDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LocationData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::relative_location(input)) in_relative_location = Traits::relative_location(input);
    typename decltype((*output)->relative_location)::BaseType::BufferWriter
        relative_location_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_relative_location, buffer, &relative_location_writer, context);
    (*output)->relative_location.Set(
        relative_location_writer.is_null() ? nullptr : relative_location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->relative_location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null relative_location in LocationData struct");
    decltype(Traits::root_location(input)) in_root_location = Traits::root_location(input);
    typename decltype((*output)->root_location)::BaseType::BufferWriter
        root_location_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_root_location, buffer, &root_location_writer, context);
    (*output)->root_location.Set(
        root_location_writer.is_null() ? nullptr : root_location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->root_location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null root_location in LocationData struct");
  }

  static bool Deserialize(::ui::mojom::internal::LocationData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LocationDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::GestureDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::GestureDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::GestureData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::location(input)) in_location = Traits::location(input);
    typename decltype((*output)->location)::BaseType::BufferWriter
        location_writer;
    mojo::internal::Serialize<::ui::mojom::LocationDataDataView>(
        in_location, buffer, &location_writer, context);
    (*output)->location.Set(
        location_writer.is_null() ? nullptr : location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null location in GestureData struct");
    mojo::internal::Serialize<::ui::mojom::GestureDeviceType>(
        Traits::device_type(input), &(*output)->device_type);
    (*output)->scale = Traits::scale(input);
  }

  static bool Deserialize(::ui::mojom::internal::GestureData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::GestureDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ScrollDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::ScrollDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::ScrollData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::location(input)) in_location = Traits::location(input);
    typename decltype((*output)->location)::BaseType::BufferWriter
        location_writer;
    mojo::internal::Serialize<::ui::mojom::LocationDataDataView>(
        in_location, buffer, &location_writer, context);
    (*output)->location.Set(
        location_writer.is_null() ? nullptr : location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null location in ScrollData struct");
    (*output)->x_offset = Traits::x_offset(input);
    (*output)->y_offset = Traits::y_offset(input);
    (*output)->x_offset_ordinal = Traits::x_offset_ordinal(input);
    (*output)->y_offset_ordinal = Traits::y_offset_ordinal(input);
    (*output)->finger_count = Traits::finger_count(input);
    mojo::internal::Serialize<::ui::mojom::EventMomentumPhase>(
        Traits::momentum_phase(input), &(*output)->momentum_phase);
    mojo::internal::Serialize<::ui::mojom::ScrollEventPhase>(
        Traits::scroll_event_phase(input), &(*output)->scroll_event_phase);
  }

  static bool Deserialize(::ui::mojom::internal::ScrollData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::ScrollDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::PointerDetailsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::PointerDetailsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::PointerDetails_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::PointerKind>(
        Traits::pointer_type(input), &(*output)->pointer_type);
    (*output)->radius_x = Traits::radius_x(input);
    (*output)->radius_y = Traits::radius_y(input);
    (*output)->force = Traits::force(input);
    (*output)->tilt_x = Traits::tilt_x(input);
    (*output)->tilt_y = Traits::tilt_y(input);
    (*output)->tangential_pressure = Traits::tangential_pressure(input);
    (*output)->twist = Traits::twist(input);
    (*output)->id = Traits::id(input);
    (*output)->offset_x = Traits::offset_x(input);
    (*output)->offset_y = Traits::offset_y(input);
  }

  static bool Deserialize(::ui::mojom::internal::PointerDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::PointerDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::MouseDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::MouseDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::MouseData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->changed_button_flags = Traits::changed_button_flags(input);
    decltype(Traits::location(input)) in_location = Traits::location(input);
    typename decltype((*output)->location)::BaseType::BufferWriter
        location_writer;
    mojo::internal::Serialize<::ui::mojom::LocationDataDataView>(
        in_location, buffer, &location_writer, context);
    (*output)->location.Set(
        location_writer.is_null() ? nullptr : location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null location in MouseData struct");
    decltype(Traits::pointer_details(input)) in_pointer_details = Traits::pointer_details(input);
    typename decltype((*output)->pointer_details)::BaseType::BufferWriter
        pointer_details_writer;
    mojo::internal::Serialize<::ui::mojom::PointerDetailsDataView>(
        in_pointer_details, buffer, &pointer_details_writer, context);
    (*output)->pointer_details.Set(
        pointer_details_writer.is_null() ? nullptr : pointer_details_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pointer_details.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pointer_details in MouseData struct");
    decltype(Traits::wheel_offset(input)) in_wheel_offset = Traits::wheel_offset(input);
    typename decltype((*output)->wheel_offset)::BaseType::BufferWriter
        wheel_offset_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dDataView>(
        in_wheel_offset, buffer, &wheel_offset_writer, context);
    (*output)->wheel_offset.Set(
        wheel_offset_writer.is_null() ? nullptr : wheel_offset_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->wheel_offset.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null wheel_offset in MouseData struct");
  }

  static bool Deserialize(::ui::mojom::internal::MouseData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::MouseDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TouchDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::TouchDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::TouchData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->may_cause_scrolling = Traits::may_cause_scrolling(input);
    (*output)->hovering = Traits::hovering(input);
    decltype(Traits::location(input)) in_location = Traits::location(input);
    typename decltype((*output)->location)::BaseType::BufferWriter
        location_writer;
    mojo::internal::Serialize<::ui::mojom::LocationDataDataView>(
        in_location, buffer, &location_writer, context);
    (*output)->location.Set(
        location_writer.is_null() ? nullptr : location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null location in TouchData struct");
    decltype(Traits::pointer_details(input)) in_pointer_details = Traits::pointer_details(input);
    typename decltype((*output)->pointer_details)::BaseType::BufferWriter
        pointer_details_writer;
    mojo::internal::Serialize<::ui::mojom::PointerDetailsDataView>(
        in_pointer_details, buffer, &pointer_details_writer, context);
    (*output)->pointer_details.Set(
        pointer_details_writer.is_null() ? nullptr : pointer_details_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pointer_details.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pointer_details in TouchData struct");
  }

  static bool Deserialize(::ui::mojom::internal::TouchData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::TouchDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::EventDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::Event_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::EventType>(
        Traits::action(input), &(*output)->action);
    (*output)->flags = Traits::flags(input);
    decltype(Traits::time_stamp(input)) in_time_stamp = Traits::time_stamp(input);
    typename decltype((*output)->time_stamp)::BaseType::BufferWriter
        time_stamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_time_stamp, buffer, &time_stamp_writer, context);
    (*output)->time_stamp.Set(
        time_stamp_writer.is_null() ? nullptr : time_stamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->time_stamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null time_stamp in Event struct");
    decltype(Traits::latency(input)) in_latency = Traits::latency(input);
    typename decltype((*output)->latency)::BaseType::BufferWriter
        latency_writer;
    mojo::internal::Serialize<::ui::mojom::LatencyInfoDataView>(
        in_latency, buffer, &latency_writer, context);
    (*output)->latency.Set(
        latency_writer.is_null() ? nullptr : latency_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->latency.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null latency in Event struct");
    decltype(Traits::key_data(input)) in_key_data = Traits::key_data(input);
    typename decltype((*output)->key_data)::BaseType::BufferWriter
        key_data_writer;
    mojo::internal::Serialize<::ui::mojom::KeyDataDataView>(
        in_key_data, buffer, &key_data_writer, context);
    (*output)->key_data.Set(
        key_data_writer.is_null() ? nullptr : key_data_writer.data());
    decltype(Traits::gesture_data(input)) in_gesture_data = Traits::gesture_data(input);
    typename decltype((*output)->gesture_data)::BaseType::BufferWriter
        gesture_data_writer;
    mojo::internal::Serialize<::ui::mojom::GestureDataDataView>(
        in_gesture_data, buffer, &gesture_data_writer, context);
    (*output)->gesture_data.Set(
        gesture_data_writer.is_null() ? nullptr : gesture_data_writer.data());
    decltype(Traits::scroll_data(input)) in_scroll_data = Traits::scroll_data(input);
    typename decltype((*output)->scroll_data)::BaseType::BufferWriter
        scroll_data_writer;
    mojo::internal::Serialize<::ui::mojom::ScrollDataDataView>(
        in_scroll_data, buffer, &scroll_data_writer, context);
    (*output)->scroll_data.Set(
        scroll_data_writer.is_null() ? nullptr : scroll_data_writer.data());
    decltype(Traits::touch_data(input)) in_touch_data = Traits::touch_data(input);
    typename decltype((*output)->touch_data)::BaseType::BufferWriter
        touch_data_writer;
    mojo::internal::Serialize<::ui::mojom::TouchDataDataView>(
        in_touch_data, buffer, &touch_data_writer, context);
    (*output)->touch_data.Set(
        touch_data_writer.is_null() ? nullptr : touch_data_writer.data());
    decltype(Traits::mouse_data(input)) in_mouse_data = Traits::mouse_data(input);
    typename decltype((*output)->mouse_data)::BaseType::BufferWriter
        mouse_data_writer;
    mojo::internal::Serialize<::ui::mojom::MouseDataDataView>(
        in_mouse_data, buffer, &mouse_data_writer, context);
    (*output)->mouse_data.Set(
        mouse_data_writer.is_null() ? nullptr : mouse_data_writer.data());
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
  }

  static bool Deserialize(::ui::mojom::internal::Event_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::EventDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {



inline void LocationDataDataView::GetRelativeLocationDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->relative_location.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void LocationDataDataView::GetRootLocationDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->root_location.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}


inline void GestureDataDataView::GetLocationDataView(
    LocationDataDataView* output) {
  auto pointer = data_->location.Get();
  *output = LocationDataDataView(pointer, context_);
}


inline void ScrollDataDataView::GetLocationDataView(
    LocationDataDataView* output) {
  auto pointer = data_->location.Get();
  *output = LocationDataDataView(pointer, context_);
}




inline void MouseDataDataView::GetLocationDataView(
    LocationDataDataView* output) {
  auto pointer = data_->location.Get();
  *output = LocationDataDataView(pointer, context_);
}
inline void MouseDataDataView::GetPointerDetailsDataView(
    PointerDetailsDataView* output) {
  auto pointer = data_->pointer_details.Get();
  *output = PointerDetailsDataView(pointer, context_);
}
inline void MouseDataDataView::GetWheelOffsetDataView(
    ::gfx::mojom::Vector2dDataView* output) {
  auto pointer = data_->wheel_offset.Get();
  *output = ::gfx::mojom::Vector2dDataView(pointer, context_);
}


inline void TouchDataDataView::GetLocationDataView(
    LocationDataDataView* output) {
  auto pointer = data_->location.Get();
  *output = LocationDataDataView(pointer, context_);
}
inline void TouchDataDataView::GetPointerDetailsDataView(
    PointerDetailsDataView* output) {
  auto pointer = data_->pointer_details.Get();
  *output = PointerDetailsDataView(pointer, context_);
}


inline void EventDataView::GetTimeStampDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->time_stamp.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void EventDataView::GetLatencyDataView(
    ::ui::mojom::LatencyInfoDataView* output) {
  auto pointer = data_->latency.Get();
  *output = ::ui::mojom::LatencyInfoDataView(pointer, context_);
}
inline void EventDataView::GetKeyDataDataView(
    KeyDataDataView* output) {
  auto pointer = data_->key_data.Get();
  *output = KeyDataDataView(pointer, context_);
}
inline void EventDataView::GetGestureDataDataView(
    GestureDataDataView* output) {
  auto pointer = data_->gesture_data.Get();
  *output = GestureDataDataView(pointer, context_);
}
inline void EventDataView::GetScrollDataDataView(
    ScrollDataDataView* output) {
  auto pointer = data_->scroll_data.Get();
  *output = ScrollDataDataView(pointer, context_);
}
inline void EventDataView::GetTouchDataDataView(
    TouchDataDataView* output) {
  auto pointer = data_->touch_data.Get();
  *output = TouchDataDataView(pointer, context_);
}
inline void EventDataView::GetMouseDataDataView(
    MouseDataDataView* output) {
  auto pointer = data_->mouse_data.Get();
  *output = MouseDataDataView(pointer, context_);
}
inline void EventDataView::GetPropertiesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_H_