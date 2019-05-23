// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/events/mojo/event_constants.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/events/mojo/event_constants.mojom-params-data.h"
namespace ui {
namespace mojom {

std::ostream& operator<<(std::ostream& os, AcceleratorPhase value) {
  switch(value) {
    case AcceleratorPhase::PRE_TARGET:
      return os << "AcceleratorPhase::PRE_TARGET";
    case AcceleratorPhase::POST_TARGET:
      return os << "AcceleratorPhase::POST_TARGET";
    default:
      return os << "Unknown AcceleratorPhase value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, EventType value) {
  switch(value) {
    case EventType::UNKNOWN:
      return os << "EventType::UNKNOWN";
    case EventType::KEY_PRESSED:
      return os << "EventType::KEY_PRESSED";
    case EventType::KEY_RELEASED:
      return os << "EventType::KEY_RELEASED";
    case EventType::GESTURE_TAP:
      return os << "EventType::GESTURE_TAP";
    case EventType::GESTURE_SWIPE:
      return os << "EventType::GESTURE_SWIPE";
    case EventType::GESTURE_PINCH_BEGIN:
      return os << "EventType::GESTURE_PINCH_BEGIN";
    case EventType::GESTURE_PINCH_END:
      return os << "EventType::GESTURE_PINCH_END";
    case EventType::GESTURE_PINCH_UPDATE:
      return os << "EventType::GESTURE_PINCH_UPDATE";
    case EventType::SCROLL:
      return os << "EventType::SCROLL";
    case EventType::SCROLL_FLING_START:
      return os << "EventType::SCROLL_FLING_START";
    case EventType::SCROLL_FLING_CANCEL:
      return os << "EventType::SCROLL_FLING_CANCEL";
    case EventType::CANCEL_MODE:
      return os << "EventType::CANCEL_MODE";
    case EventType::MOUSE_PRESSED_EVENT:
      return os << "EventType::MOUSE_PRESSED_EVENT";
    case EventType::MOUSE_DRAGGED_EVENT:
      return os << "EventType::MOUSE_DRAGGED_EVENT";
    case EventType::MOUSE_RELEASED_EVENT:
      return os << "EventType::MOUSE_RELEASED_EVENT";
    case EventType::MOUSE_MOVED_EVENT:
      return os << "EventType::MOUSE_MOVED_EVENT";
    case EventType::MOUSE_ENTERED_EVENT:
      return os << "EventType::MOUSE_ENTERED_EVENT";
    case EventType::MOUSE_EXITED_EVENT:
      return os << "EventType::MOUSE_EXITED_EVENT";
    case EventType::MOUSE_WHEEL_EVENT:
      return os << "EventType::MOUSE_WHEEL_EVENT";
    case EventType::MOUSE_CAPTURE_CHANGED_EVENT:
      return os << "EventType::MOUSE_CAPTURE_CHANGED_EVENT";
    case EventType::TOUCH_RELEASED:
      return os << "EventType::TOUCH_RELEASED";
    case EventType::TOUCH_PRESSED:
      return os << "EventType::TOUCH_PRESSED";
    case EventType::TOUCH_MOVED:
      return os << "EventType::TOUCH_MOVED";
    case EventType::TOUCH_CANCELLED:
      return os << "EventType::TOUCH_CANCELLED";
    default:
      return os << "Unknown EventType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PointerKind value) {
  switch(value) {
    case PointerKind::UNKNOWN:
      return os << "PointerKind::UNKNOWN";
    case PointerKind::MOUSE:
      return os << "PointerKind::MOUSE";
    case PointerKind::PEN:
      return os << "PointerKind::PEN";
    case PointerKind::TOUCH:
      return os << "PointerKind::TOUCH";
    case PointerKind::ERASER:
      return os << "PointerKind::ERASER";
    default:
      return os << "Unknown PointerKind value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ScrollEventPhase value) {
  switch(value) {
    case ScrollEventPhase::kNone:
      return os << "ScrollEventPhase::kNone";
    case ScrollEventPhase::kBegan:
      return os << "ScrollEventPhase::kBegan";
    case ScrollEventPhase::kUpdate:
      return os << "ScrollEventPhase::kUpdate";
    case ScrollEventPhase::kEnd:
      return os << "ScrollEventPhase::kEnd";
    default:
      return os << "Unknown ScrollEventPhase value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, EventMomentumPhase value) {
  switch(value) {
    case EventMomentumPhase::NONE:
      return os << "EventMomentumPhase::NONE";
    case EventMomentumPhase::BEGAN:
      return os << "EventMomentumPhase::BEGAN";
    case EventMomentumPhase::MAY_BEGIN:
      return os << "EventMomentumPhase::MAY_BEGIN";
    case EventMomentumPhase::INERTIAL_UPDATE:
      return os << "EventMomentumPhase::INERTIAL_UPDATE";
    case EventMomentumPhase::END:
      return os << "EventMomentumPhase::END";
    default:
      return os << "Unknown EventMomentumPhase value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, GestureDeviceType value) {
  switch(value) {
    case GestureDeviceType::DEVICE_UNKNOWN:
      return os << "GestureDeviceType::DEVICE_UNKNOWN";
    case GestureDeviceType::DEVICE_TOUCHPAD:
      return os << "GestureDeviceType::DEVICE_TOUCHPAD";
    case GestureDeviceType::DEVICE_TOUCHSCREEN:
      return os << "GestureDeviceType::DEVICE_TOUCHSCREEN";
    default:
      return os << "Unknown GestureDeviceType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#if defined(_MSC_VER)
#pragma warning(pop)
#endif