// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_FORWARD_H_
#define UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {
class TextInputStateDataView;

class TextInputState;
using TextInputStatePtr = mojo::StructPtr<TextInputState>;




}  // namespace mojom
}  // namespace ui

#endif  // UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_FORWARD_H_