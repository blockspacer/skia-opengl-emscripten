// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_ACCESSIBILITY_AX_ENUMS_MOJOM_FORWARD_H_
#define UI_ACCESSIBILITY_AX_ENUMS_MOJOM_FORWARD_H_




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



}  // namespace mojom
}  // namespace ax

#endif  // UI_ACCESSIBILITY_AX_ENUMS_MOJOM_FORWARD_H_