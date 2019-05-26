// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_FORWARD_H_
#define UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace display {
namespace mojom {
class DisplayPlacementDataView;

class DisplayLayoutDataView;


enum class Position : int32_t;

enum class OffsetReference : int32_t;
class DisplayPlacement;
using DisplayPlacementPtr = mojo::StructPtr<DisplayPlacement>;

class DisplayLayout;
using DisplayLayoutPtr = mojo::StructPtr<DisplayLayout>;




}  // namespace mojom
}  // namespace display
#include "ui/display/display_layout.h"

#endif  // UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_FORWARD_H_