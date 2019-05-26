// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_SHARED_H_
#define UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_SHARED_H_

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
#include "ui/events/mojo/event_constants.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {


enum class AcceleratorPhase : int32_t {
  
  PRE_TARGET,
  
  POST_TARGET,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, AcceleratorPhase value);
inline bool IsKnownEnumValue(AcceleratorPhase value) {
  return internal::AcceleratorPhase_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EventType : int32_t {
  
  UNKNOWN,
  
  KEY_PRESSED,
  
  KEY_RELEASED,
  
  GESTURE_TAP,
  
  GESTURE_SWIPE,
  
  GESTURE_PINCH_BEGIN,
  
  GESTURE_PINCH_END,
  
  GESTURE_PINCH_UPDATE,
  
  SCROLL,
  
  SCROLL_FLING_START,
  
  SCROLL_FLING_CANCEL,
  
  CANCEL_MODE,
  
  MOUSE_PRESSED_EVENT,
  
  MOUSE_DRAGGED_EVENT,
  
  MOUSE_RELEASED_EVENT,
  
  MOUSE_MOVED_EVENT,
  
  MOUSE_ENTERED_EVENT,
  
  MOUSE_EXITED_EVENT,
  
  MOUSE_WHEEL_EVENT,
  
  MOUSE_CAPTURE_CHANGED_EVENT,
  
  TOUCH_RELEASED,
  
  TOUCH_PRESSED,
  
  TOUCH_MOVED,
  
  TOUCH_CANCELLED,
  kMinValue = 0,
  kMaxValue = 23,
};

 std::ostream& operator<<(std::ostream& os, EventType value);
inline bool IsKnownEnumValue(EventType value) {
  return internal::EventType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PointerKind : int32_t {
  
  UNKNOWN,
  
  MOUSE,
  
  PEN,
  
  TOUCH,
  
  ERASER,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, PointerKind value);
inline bool IsKnownEnumValue(PointerKind value) {
  return internal::PointerKind_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ScrollEventPhase : int32_t {
  
  kNone,
  
  kBegan,
  
  kUpdate,
  
  kEnd,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, ScrollEventPhase value);
inline bool IsKnownEnumValue(ScrollEventPhase value) {
  return internal::ScrollEventPhase_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EventMomentumPhase : int32_t {
  
  NONE,
  
  BEGAN,
  
  MAY_BEGIN,
  
  INERTIAL_UPDATE,
  
  END,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, EventMomentumPhase value);
inline bool IsKnownEnumValue(EventMomentumPhase value) {
  return internal::EventMomentumPhase_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class GestureDeviceType : int32_t {
  
  DEVICE_UNKNOWN,
  
  DEVICE_TOUCHPAD,
  
  DEVICE_TOUCHSCREEN,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, GestureDeviceType value);
inline bool IsKnownEnumValue(GestureDeviceType value) {
  return internal::GestureDeviceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::AcceleratorPhase>
    : public mojo::internal::EnumHashImpl<::ui::mojom::AcceleratorPhase> {};

template <>
struct hash<::ui::mojom::EventType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::EventType> {};

template <>
struct hash<::ui::mojom::PointerKind>
    : public mojo::internal::EnumHashImpl<::ui::mojom::PointerKind> {};

template <>
struct hash<::ui::mojom::ScrollEventPhase>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ScrollEventPhase> {};

template <>
struct hash<::ui::mojom::EventMomentumPhase>
    : public mojo::internal::EnumHashImpl<::ui::mojom::EventMomentumPhase> {};

template <>
struct hash<::ui::mojom::GestureDeviceType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::GestureDeviceType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::AcceleratorPhase, ::ui::mojom::AcceleratorPhase> {
  static ::ui::mojom::AcceleratorPhase ToMojom(::ui::mojom::AcceleratorPhase input) { return input; }
  static bool FromMojom(::ui::mojom::AcceleratorPhase input, ::ui::mojom::AcceleratorPhase* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::AcceleratorPhase, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::AcceleratorPhase, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::AcceleratorPhase>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::EventType, ::ui::mojom::EventType> {
  static ::ui::mojom::EventType ToMojom(::ui::mojom::EventType input) { return input; }
  static bool FromMojom(::ui::mojom::EventType input, ::ui::mojom::EventType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::EventType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::EventType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::PointerKind, ::ui::mojom::PointerKind> {
  static ::ui::mojom::PointerKind ToMojom(::ui::mojom::PointerKind input) { return input; }
  static bool FromMojom(::ui::mojom::PointerKind input, ::ui::mojom::PointerKind* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::PointerKind, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::PointerKind, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::PointerKind>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::ScrollEventPhase, ::ui::mojom::ScrollEventPhase> {
  static ::ui::mojom::ScrollEventPhase ToMojom(::ui::mojom::ScrollEventPhase input) { return input; }
  static bool FromMojom(::ui::mojom::ScrollEventPhase input, ::ui::mojom::ScrollEventPhase* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ScrollEventPhase, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ScrollEventPhase, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::ScrollEventPhase>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::EventMomentumPhase, ::ui::mojom::EventMomentumPhase> {
  static ::ui::mojom::EventMomentumPhase ToMojom(::ui::mojom::EventMomentumPhase input) { return input; }
  static bool FromMojom(::ui::mojom::EventMomentumPhase input, ::ui::mojom::EventMomentumPhase* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventMomentumPhase, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::EventMomentumPhase, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::EventMomentumPhase>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::GestureDeviceType, ::ui::mojom::GestureDeviceType> {
  static ::ui::mojom::GestureDeviceType ToMojom(::ui::mojom::GestureDeviceType input) { return input; }
  static bool FromMojom(::ui::mojom::GestureDeviceType input, ::ui::mojom::GestureDeviceType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::GestureDeviceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::GestureDeviceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::GestureDeviceType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_SHARED_H_