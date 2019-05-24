// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_MOJOM_BLINK_FORWARD_H_
#define UI_EVENTS_MOJO_EVENT_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
}  // namespace ui
}  // namespace mojom


namespace ui {
namespace mojom {
namespace blink {
class KeyData;
using KeyDataPtr = mojo::InlinedStructPtr<KeyData>;

class LocationData;
using LocationDataPtr = mojo::StructPtr<LocationData>;

class GestureData;
using GestureDataPtr = mojo::StructPtr<GestureData>;

class ScrollData;
using ScrollDataPtr = mojo::StructPtr<ScrollData>;

class PointerDetails;
using PointerDetailsPtr = mojo::StructPtr<PointerDetails>;

class MouseData;
using MouseDataPtr = mojo::StructPtr<MouseData>;

class TouchData;
using TouchDataPtr = mojo::StructPtr<TouchData>;

class Event;
using EventPtr = mojo::StructPtr<Event>;




}  // namespace blink
}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_MOJO_EVENT_MOJOM_BLINK_FORWARD_H_