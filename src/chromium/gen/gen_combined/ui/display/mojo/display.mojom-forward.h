// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_MOJOM_FORWARD_H_
#define UI_DISPLAY_MOJO_DISPLAY_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace display {
namespace mojom {
class DisplayDataView;


enum class Rotation : int32_t;

enum class TouchSupport : int32_t;

enum class AccelerometerSupport : int32_t;
class Display;
using DisplayPtr = mojo::StructPtr<Display>;




}  // namespace mojom
}  // namespace display
#include "ui/display/display.h"

#endif  // UI_DISPLAY_MOJO_DISPLAY_MOJOM_FORWARD_H_