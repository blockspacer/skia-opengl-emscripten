// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_FORWARD_H_
#define UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"






namespace ui {
namespace mojom {

enum class AcceleratorPhase : int32_t;

enum class EventType : int32_t;

enum class PointerKind : int32_t;

enum class ScrollEventPhase : int32_t;

enum class EventMomentumPhase : int32_t;

enum class GestureDeviceType : int32_t;

constexpr int32_t kEventFlagNone = 0x00000;

constexpr int32_t kEventFlagIsSynthesized = 0x00001;

constexpr int32_t kEventFlagShiftDown = 0x00002;

constexpr int32_t kEventFlagControlDown = 0x00004;

constexpr int32_t kEventFlagAltDown = 0x00008;

constexpr int32_t kEventFlagCommandDown = 0x00010;

constexpr int32_t kEventFlagAltgrDown = 0x00020;

constexpr int32_t kEventFlagMod3Down = 0x00040;

constexpr int32_t kEventFlagNumLockOn = 0x00080;

constexpr int32_t kEventFlagCapsLockOn = 0x00100;

constexpr int32_t kEventFlagScrollLockOn = 0x00200;

constexpr int32_t kEventFlagLeftMouseButton = 0x00400;

constexpr int32_t kEventFlagMiddleMouseButton = 0x00800;

constexpr int32_t kEventFlagRightMouseButton = 0x01000;

constexpr int32_t kEventFlagBackMouseButton = 0x02000;

constexpr int32_t kEventFlagForwardMouseButton = 0x04000;

constexpr int32_t kMouseEventFlagIsDoubleClick = 0x08000;

constexpr int32_t kMouseEventFlagIsTripleClick = 0x10000;

constexpr int32_t kMouseEventFlagIsNonClient = 0x20000;



}  // namespace mojom
}  // namespace ui
#include "ui/events/event.h"

#endif  // UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_FORWARD_H_