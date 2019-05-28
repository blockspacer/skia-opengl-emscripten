// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_BLINK_H_
#define UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "ui/events/mojo/event_constants.mojom-shared.h"
#include "ui/events/mojo/event_constants.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace WTF {
struct ui_mojom_internal_AcceleratorPhase_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::AcceleratorPhase& value) {
    using utype = std::underlying_type<::ui::mojom::AcceleratorPhase>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::AcceleratorPhase& left, const ::ui::mojom::AcceleratorPhase& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::AcceleratorPhase>
    : public GenericHashTraits<::ui::mojom::AcceleratorPhase> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::AcceleratorPhase& value) {
    return value == static_cast<::ui::mojom::AcceleratorPhase>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::AcceleratorPhase& slot, bool) {
    slot = static_cast<::ui::mojom::AcceleratorPhase>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::AcceleratorPhase& value) {
    return value == static_cast<::ui::mojom::AcceleratorPhase>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_EventType_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::EventType& value) {
    using utype = std::underlying_type<::ui::mojom::EventType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::EventType& left, const ::ui::mojom::EventType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::EventType>
    : public GenericHashTraits<::ui::mojom::EventType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::EventType& value) {
    return value == static_cast<::ui::mojom::EventType>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::EventType& slot, bool) {
    slot = static_cast<::ui::mojom::EventType>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::EventType& value) {
    return value == static_cast<::ui::mojom::EventType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_PointerKind_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::PointerKind& value) {
    using utype = std::underlying_type<::ui::mojom::PointerKind>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::PointerKind& left, const ::ui::mojom::PointerKind& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::PointerKind>
    : public GenericHashTraits<::ui::mojom::PointerKind> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::PointerKind& value) {
    return value == static_cast<::ui::mojom::PointerKind>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::PointerKind& slot, bool) {
    slot = static_cast<::ui::mojom::PointerKind>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::PointerKind& value) {
    return value == static_cast<::ui::mojom::PointerKind>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_ScrollEventPhase_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::ScrollEventPhase& value) {
    using utype = std::underlying_type<::ui::mojom::ScrollEventPhase>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::ScrollEventPhase& left, const ::ui::mojom::ScrollEventPhase& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::ScrollEventPhase>
    : public GenericHashTraits<::ui::mojom::ScrollEventPhase> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::ScrollEventPhase& value) {
    return value == static_cast<::ui::mojom::ScrollEventPhase>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::ScrollEventPhase& slot, bool) {
    slot = static_cast<::ui::mojom::ScrollEventPhase>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::ScrollEventPhase& value) {
    return value == static_cast<::ui::mojom::ScrollEventPhase>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_EventMomentumPhase_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::EventMomentumPhase& value) {
    using utype = std::underlying_type<::ui::mojom::EventMomentumPhase>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::EventMomentumPhase& left, const ::ui::mojom::EventMomentumPhase& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::EventMomentumPhase>
    : public GenericHashTraits<::ui::mojom::EventMomentumPhase> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::EventMomentumPhase& value) {
    return value == static_cast<::ui::mojom::EventMomentumPhase>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::EventMomentumPhase& slot, bool) {
    slot = static_cast<::ui::mojom::EventMomentumPhase>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::EventMomentumPhase& value) {
    return value == static_cast<::ui::mojom::EventMomentumPhase>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_GestureDeviceType_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::GestureDeviceType& value) {
    using utype = std::underlying_type<::ui::mojom::GestureDeviceType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::GestureDeviceType& left, const ::ui::mojom::GestureDeviceType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::GestureDeviceType>
    : public GenericHashTraits<::ui::mojom::GestureDeviceType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::GestureDeviceType& value) {
    return value == static_cast<::ui::mojom::GestureDeviceType>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::GestureDeviceType& slot, bool) {
    slot = static_cast<::ui::mojom::GestureDeviceType>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::GestureDeviceType& value) {
    return value == static_cast<::ui::mojom::GestureDeviceType>(-1000001);
  }
};
}  // namespace WTF


namespace ui {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_BLINK_H_