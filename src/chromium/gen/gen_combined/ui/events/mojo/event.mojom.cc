// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "ui/events/mojo/event.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "ui/events/mojo/event.mojom-params-data.h"
#include "ui/events/mojo/event.mojom-shared-message-ids.h"

#include "ui/events/mojo/event.mojom-import-headers.h"


#ifndef UI_EVENTS_MOJO_EVENT_MOJOM_JUMBO_H_
#define UI_EVENTS_MOJO_EVENT_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
#endif
namespace ui {
namespace mojom {
KeyData::KeyData()
    : key_code(),
      dom_code(),
      dom_key(),
      is_char() {}

KeyData::KeyData(
    int32_t key_code_in,
    uint32_t dom_code_in,
    int32_t dom_key_in,
    bool is_char_in)
    : key_code(std::move(key_code_in)),
      dom_code(std::move(dom_code_in)),
      dom_key(std::move(dom_key_in)),
      is_char(std::move(is_char_in)) {}

KeyData::~KeyData() = default;
size_t KeyData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->key_code);
  seed = mojo::internal::Hash(seed, this->dom_code);
  seed = mojo::internal::Hash(seed, this->dom_key);
  seed = mojo::internal::Hash(seed, this->is_char);
  return seed;
}

bool KeyData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
LocationData::LocationData()
    : relative_location(),
      root_location() {}

LocationData::LocationData(
    const gfx::PointF& relative_location_in,
    const gfx::PointF& root_location_in)
    : relative_location(std::move(relative_location_in)),
      root_location(std::move(root_location_in)) {}

LocationData::~LocationData() = default;

bool LocationData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GestureData::GestureData()
    : location(),
      device_type(),
      scale() {}

GestureData::GestureData(
    LocationDataPtr location_in,
    ui::GestureDeviceType device_type_in,
    float scale_in)
    : location(std::move(location_in)),
      device_type(std::move(device_type_in)),
      scale(std::move(scale_in)) {}

GestureData::~GestureData() = default;

bool GestureData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ScrollData::ScrollData()
    : location(),
      x_offset(),
      y_offset(),
      x_offset_ordinal(),
      y_offset_ordinal(),
      finger_count(),
      momentum_phase(),
      scroll_event_phase() {}

ScrollData::ScrollData(
    LocationDataPtr location_in,
    float x_offset_in,
    float y_offset_in,
    float x_offset_ordinal_in,
    float y_offset_ordinal_in,
    int32_t finger_count_in,
    ui::EventMomentumPhase momentum_phase_in,
    ui::ScrollEventPhase scroll_event_phase_in)
    : location(std::move(location_in)),
      x_offset(std::move(x_offset_in)),
      y_offset(std::move(y_offset_in)),
      x_offset_ordinal(std::move(x_offset_ordinal_in)),
      y_offset_ordinal(std::move(y_offset_ordinal_in)),
      finger_count(std::move(finger_count_in)),
      momentum_phase(std::move(momentum_phase_in)),
      scroll_event_phase(std::move(scroll_event_phase_in)) {}

ScrollData::~ScrollData() = default;

bool ScrollData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PointerDetails::PointerDetails()
    : pointer_type(),
      radius_x(),
      radius_y(),
      force(),
      tilt_x(),
      tilt_y(),
      tangential_pressure(),
      twist(),
      id(),
      offset_x(),
      offset_y() {}

PointerDetails::PointerDetails(
    ::ui::mojom::PointerKind pointer_type_in,
    float radius_x_in,
    float radius_y_in,
    float force_in,
    float tilt_x_in,
    float tilt_y_in,
    float tangential_pressure_in,
    float twist_in,
    int32_t id_in,
    int32_t offset_x_in,
    int32_t offset_y_in)
    : pointer_type(std::move(pointer_type_in)),
      radius_x(std::move(radius_x_in)),
      radius_y(std::move(radius_y_in)),
      force(std::move(force_in)),
      tilt_x(std::move(tilt_x_in)),
      tilt_y(std::move(tilt_y_in)),
      tangential_pressure(std::move(tangential_pressure_in)),
      twist(std::move(twist_in)),
      id(std::move(id_in)),
      offset_x(std::move(offset_x_in)),
      offset_y(std::move(offset_y_in)) {}

PointerDetails::~PointerDetails() = default;

bool PointerDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MouseData::MouseData()
    : changed_button_flags(),
      location(),
      pointer_details(),
      wheel_offset() {}

MouseData::MouseData(
    int32_t changed_button_flags_in,
    LocationDataPtr location_in,
    const ui::PointerDetails& pointer_details_in,
    const gfx::Vector2d& wheel_offset_in)
    : changed_button_flags(std::move(changed_button_flags_in)),
      location(std::move(location_in)),
      pointer_details(std::move(pointer_details_in)),
      wheel_offset(std::move(wheel_offset_in)) {}

MouseData::~MouseData() = default;

bool MouseData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TouchData::TouchData()
    : may_cause_scrolling(),
      hovering(),
      location(),
      pointer_details() {}

TouchData::TouchData(
    bool may_cause_scrolling_in,
    bool hovering_in,
    LocationDataPtr location_in,
    const ui::PointerDetails& pointer_details_in)
    : may_cause_scrolling(std::move(may_cause_scrolling_in)),
      hovering(std::move(hovering_in)),
      location(std::move(location_in)),
      pointer_details(std::move(pointer_details_in)) {}

TouchData::~TouchData() = default;

bool TouchData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Event::Event()
    : action(),
      flags(),
      time_stamp(),
      latency(),
      key_data(),
      gesture_data(),
      scroll_data(),
      touch_data(),
      mouse_data(),
      properties() {}

Event::Event(
    ::ui::mojom::EventType action_in,
    int32_t flags_in,
    base::TimeTicks time_stamp_in,
    const ui::LatencyInfo& latency_in,
    KeyDataPtr key_data_in,
    GestureDataPtr gesture_data_in,
    ScrollDataPtr scroll_data_in,
    TouchDataPtr touch_data_in,
    MouseDataPtr mouse_data_in,
    const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties_in)
    : action(std::move(action_in)),
      flags(std::move(flags_in)),
      time_stamp(std::move(time_stamp_in)),
      latency(std::move(latency_in)),
      key_data(std::move(key_data_in)),
      gesture_data(std::move(gesture_data_in)),
      scroll_data(std::move(scroll_data_in)),
      touch_data(std::move(touch_data_in)),
      mouse_data(std::move(mouse_data_in)),
      properties(std::move(properties_in)) {}

Event::~Event() = default;

bool Event::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::KeyData::DataView, ::ui::mojom::KeyDataPtr>::Read(
    ::ui::mojom::KeyData::DataView input,
    ::ui::mojom::KeyDataPtr* output) {
  bool success = true;
  ::ui::mojom::KeyDataPtr result(::ui::mojom::KeyData::New());
  
      result->key_code = input.key_code();
      result->dom_code = input.dom_code();
      result->dom_key = input.dom_key();
      result->is_char = input.is_char();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::LocationData::DataView, ::ui::mojom::LocationDataPtr>::Read(
    ::ui::mojom::LocationData::DataView input,
    ::ui::mojom::LocationDataPtr* output) {
  bool success = true;
  ::ui::mojom::LocationDataPtr result(::ui::mojom::LocationData::New());
  
      if (!input.ReadRelativeLocation(&result->relative_location))
        success = false;
      if (!input.ReadRootLocation(&result->root_location))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::GestureData::DataView, ::ui::mojom::GestureDataPtr>::Read(
    ::ui::mojom::GestureData::DataView input,
    ::ui::mojom::GestureDataPtr* output) {
  bool success = true;
  ::ui::mojom::GestureDataPtr result(::ui::mojom::GestureData::New());
  
      if (!input.ReadLocation(&result->location))
        success = false;
      if (!input.ReadDeviceType(&result->device_type))
        success = false;
      result->scale = input.scale();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::ScrollData::DataView, ::ui::mojom::ScrollDataPtr>::Read(
    ::ui::mojom::ScrollData::DataView input,
    ::ui::mojom::ScrollDataPtr* output) {
  bool success = true;
  ::ui::mojom::ScrollDataPtr result(::ui::mojom::ScrollData::New());
  
      if (!input.ReadLocation(&result->location))
        success = false;
      result->x_offset = input.x_offset();
      result->y_offset = input.y_offset();
      result->x_offset_ordinal = input.x_offset_ordinal();
      result->y_offset_ordinal = input.y_offset_ordinal();
      result->finger_count = input.finger_count();
      if (!input.ReadMomentumPhase(&result->momentum_phase))
        success = false;
      if (!input.ReadScrollEventPhase(&result->scroll_event_phase))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::PointerDetails::DataView, ::ui::mojom::PointerDetailsPtr>::Read(
    ::ui::mojom::PointerDetails::DataView input,
    ::ui::mojom::PointerDetailsPtr* output) {
  bool success = true;
  ::ui::mojom::PointerDetailsPtr result(::ui::mojom::PointerDetails::New());
  
      if (!input.ReadPointerType(&result->pointer_type))
        success = false;
      result->radius_x = input.radius_x();
      result->radius_y = input.radius_y();
      result->force = input.force();
      result->tilt_x = input.tilt_x();
      result->tilt_y = input.tilt_y();
      result->tangential_pressure = input.tangential_pressure();
      result->twist = input.twist();
      result->id = input.id();
      result->offset_x = input.offset_x();
      result->offset_y = input.offset_y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::MouseData::DataView, ::ui::mojom::MouseDataPtr>::Read(
    ::ui::mojom::MouseData::DataView input,
    ::ui::mojom::MouseDataPtr* output) {
  bool success = true;
  ::ui::mojom::MouseDataPtr result(::ui::mojom::MouseData::New());
  
      result->changed_button_flags = input.changed_button_flags();
      if (!input.ReadLocation(&result->location))
        success = false;
      if (!input.ReadPointerDetails(&result->pointer_details))
        success = false;
      if (!input.ReadWheelOffset(&result->wheel_offset))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::TouchData::DataView, ::ui::mojom::TouchDataPtr>::Read(
    ::ui::mojom::TouchData::DataView input,
    ::ui::mojom::TouchDataPtr* output) {
  bool success = true;
  ::ui::mojom::TouchDataPtr result(::ui::mojom::TouchData::New());
  
      result->may_cause_scrolling = input.may_cause_scrolling();
      result->hovering = input.hovering();
      if (!input.ReadLocation(&result->location))
        success = false;
      if (!input.ReadPointerDetails(&result->pointer_details))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::Event::DataView, ::ui::mojom::EventPtr>::Read(
    ::ui::mojom::Event::DataView input,
    ::ui::mojom::EventPtr* output) {
  bool success = true;
  ::ui::mojom::EventPtr result(::ui::mojom::Event::New());
  
      if (!input.ReadAction(&result->action))
        success = false;
      result->flags = input.flags();
      if (!input.ReadTimeStamp(&result->time_stamp))
        success = false;
      if (!input.ReadLatency(&result->latency))
        success = false;
      if (!input.ReadKeyData(&result->key_data))
        success = false;
      if (!input.ReadGestureData(&result->gesture_data))
        success = false;
      if (!input.ReadScrollData(&result->scroll_data))
        success = false;
      if (!input.ReadTouchData(&result->touch_data))
        success = false;
      if (!input.ReadMouseData(&result->mouse_data))
        success = false;
      if (!input.ReadProperties(&result->properties))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif