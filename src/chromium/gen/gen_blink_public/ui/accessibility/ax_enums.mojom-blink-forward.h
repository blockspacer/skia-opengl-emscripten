// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_ACCESSIBILITY_AX_ENUMS_MOJOM_BLINK_FORWARD_H_
#define UI_ACCESSIBILITY_AX_ENUMS_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "base/component_export.h"


namespace ax {
namespace mojom {

enum class Event : int32_t;

enum class Role : int32_t;

enum class State : int32_t;

enum class Action : int32_t;

enum class ActionFlags : int32_t;

enum class DefaultActionVerb : int32_t;

enum class Mutation : int32_t;

enum class StringAttribute : int32_t;

enum class IntAttribute : int32_t;

enum class FloatAttribute : int32_t;

enum class BoolAttribute : int32_t;

enum class IntListAttribute : int32_t;

enum class StringListAttribute : int32_t;

enum class MarkerType : int32_t;

enum class ListStyle : int32_t;

enum class TextDirection : int32_t;

enum class TextPosition : int32_t;

enum class TextStyle : int32_t;

enum class TextDecorationStyle : int32_t;

enum class AriaCurrentState : int32_t;

enum class HasPopup : int32_t;

enum class InvalidState : int32_t;

enum class Restriction : int32_t;

enum class CheckedState : int32_t;

enum class SortDirection : int32_t;

enum class NameFrom : int32_t;

enum class DescriptionFrom : int32_t;

enum class EventFrom : int32_t;

enum class Gesture : int32_t;

enum class TextAffinity : int32_t;

enum class TreeOrder : int32_t;

enum class AXTreeIDType : int32_t;

enum class ImageAnnotationStatus : int32_t;
}  // namespace ax
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct ax_mojom_internal_Event_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::Event> {
  using Hash = ax_mojom_internal_Event_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_Role_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::Role> {
  using Hash = ax_mojom_internal_Role_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_State_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::State> {
  using Hash = ax_mojom_internal_State_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_Action_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::Action> {
  using Hash = ax_mojom_internal_Action_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_ActionFlags_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::ActionFlags> {
  using Hash = ax_mojom_internal_ActionFlags_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_DefaultActionVerb_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::DefaultActionVerb> {
  using Hash = ax_mojom_internal_DefaultActionVerb_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_Mutation_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::Mutation> {
  using Hash = ax_mojom_internal_Mutation_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_StringAttribute_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::StringAttribute> {
  using Hash = ax_mojom_internal_StringAttribute_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_IntAttribute_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::IntAttribute> {
  using Hash = ax_mojom_internal_IntAttribute_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_FloatAttribute_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::FloatAttribute> {
  using Hash = ax_mojom_internal_FloatAttribute_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_BoolAttribute_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::BoolAttribute> {
  using Hash = ax_mojom_internal_BoolAttribute_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_IntListAttribute_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::IntListAttribute> {
  using Hash = ax_mojom_internal_IntListAttribute_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_StringListAttribute_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::StringListAttribute> {
  using Hash = ax_mojom_internal_StringListAttribute_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_MarkerType_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::MarkerType> {
  using Hash = ax_mojom_internal_MarkerType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_ListStyle_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::ListStyle> {
  using Hash = ax_mojom_internal_ListStyle_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_TextDirection_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::TextDirection> {
  using Hash = ax_mojom_internal_TextDirection_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_TextPosition_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::TextPosition> {
  using Hash = ax_mojom_internal_TextPosition_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_TextStyle_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::TextStyle> {
  using Hash = ax_mojom_internal_TextStyle_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_TextDecorationStyle_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::TextDecorationStyle> {
  using Hash = ax_mojom_internal_TextDecorationStyle_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_AriaCurrentState_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::AriaCurrentState> {
  using Hash = ax_mojom_internal_AriaCurrentState_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_HasPopup_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::HasPopup> {
  using Hash = ax_mojom_internal_HasPopup_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_InvalidState_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::InvalidState> {
  using Hash = ax_mojom_internal_InvalidState_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_Restriction_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::Restriction> {
  using Hash = ax_mojom_internal_Restriction_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_CheckedState_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::CheckedState> {
  using Hash = ax_mojom_internal_CheckedState_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_SortDirection_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::SortDirection> {
  using Hash = ax_mojom_internal_SortDirection_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_NameFrom_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::NameFrom> {
  using Hash = ax_mojom_internal_NameFrom_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_DescriptionFrom_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::DescriptionFrom> {
  using Hash = ax_mojom_internal_DescriptionFrom_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_EventFrom_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::EventFrom> {
  using Hash = ax_mojom_internal_EventFrom_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_Gesture_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::Gesture> {
  using Hash = ax_mojom_internal_Gesture_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_TextAffinity_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::TextAffinity> {
  using Hash = ax_mojom_internal_TextAffinity_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_TreeOrder_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::TreeOrder> {
  using Hash = ax_mojom_internal_TreeOrder_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_AXTreeIDType_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::AXTreeIDType> {
  using Hash = ax_mojom_internal_AXTreeIDType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ax_mojom_internal_ImageAnnotationStatus_DataHashFn;

template <>
struct DefaultHash<::ax::mojom::ImageAnnotationStatus> {
  using Hash = ax_mojom_internal_ImageAnnotationStatus_DataHashFn;
};
}  // namespace WTF


namespace ax {
namespace mojom {
namespace blink {
using Event = Event;  // Alias for definition in the parent namespace.
using Role = Role;  // Alias for definition in the parent namespace.
using State = State;  // Alias for definition in the parent namespace.
using Action = Action;  // Alias for definition in the parent namespace.
using ActionFlags = ActionFlags;  // Alias for definition in the parent namespace.
using DefaultActionVerb = DefaultActionVerb;  // Alias for definition in the parent namespace.
using Mutation = Mutation;  // Alias for definition in the parent namespace.
using StringAttribute = StringAttribute;  // Alias for definition in the parent namespace.
using IntAttribute = IntAttribute;  // Alias for definition in the parent namespace.
using FloatAttribute = FloatAttribute;  // Alias for definition in the parent namespace.
using BoolAttribute = BoolAttribute;  // Alias for definition in the parent namespace.
using IntListAttribute = IntListAttribute;  // Alias for definition in the parent namespace.
using StringListAttribute = StringListAttribute;  // Alias for definition in the parent namespace.
using MarkerType = MarkerType;  // Alias for definition in the parent namespace.
using ListStyle = ListStyle;  // Alias for definition in the parent namespace.
using TextDirection = TextDirection;  // Alias for definition in the parent namespace.
using TextPosition = TextPosition;  // Alias for definition in the parent namespace.
using TextStyle = TextStyle;  // Alias for definition in the parent namespace.
using TextDecorationStyle = TextDecorationStyle;  // Alias for definition in the parent namespace.
using AriaCurrentState = AriaCurrentState;  // Alias for definition in the parent namespace.
using HasPopup = HasPopup;  // Alias for definition in the parent namespace.
using InvalidState = InvalidState;  // Alias for definition in the parent namespace.
using Restriction = Restriction;  // Alias for definition in the parent namespace.
using CheckedState = CheckedState;  // Alias for definition in the parent namespace.
using SortDirection = SortDirection;  // Alias for definition in the parent namespace.
using NameFrom = NameFrom;  // Alias for definition in the parent namespace.
using DescriptionFrom = DescriptionFrom;  // Alias for definition in the parent namespace.
using EventFrom = EventFrom;  // Alias for definition in the parent namespace.
using Gesture = Gesture;  // Alias for definition in the parent namespace.
using TextAffinity = TextAffinity;  // Alias for definition in the parent namespace.
using TreeOrder = TreeOrder;  // Alias for definition in the parent namespace.
using AXTreeIDType = AXTreeIDType;  // Alias for definition in the parent namespace.
using ImageAnnotationStatus = ImageAnnotationStatus;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace ax

#endif  // UI_ACCESSIBILITY_AX_ENUMS_MOJOM_BLINK_FORWARD_H_