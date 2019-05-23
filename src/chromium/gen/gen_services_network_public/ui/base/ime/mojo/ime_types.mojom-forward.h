// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_TYPES_MOJOM_FORWARD_H_
#define UI_BASE_IME_MOJO_IME_TYPES_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {
class ImeTextSpanDataView;

class CompositionTextDataView;


enum class TextInputType : int32_t;

enum class TextInputMode : int32_t;

enum class TextInputFlag : int32_t;

enum class ImeTextSpanType : int32_t;

enum class ImeTextSpanThickness : int32_t;

enum class FocusReason : int32_t;
class ImeTextSpan;
using ImeTextSpanPtr = mojo::StructPtr<ImeTextSpan>;

class CompositionText;
using CompositionTextPtr = mojo::StructPtr<CompositionText>;




}  // namespace mojom
}  // namespace ui
#include "ui/base/ime/composition_text.h"
#include "ui/base/ime/ime_text_span.h"
#include "ui/base/ime/text_input_client.h"
#include "ui/base/ime/text_input_mode.h"
#include "ui/base/ime/text_input_type.h"

#endif  // UI_BASE_IME_MOJO_IME_TYPES_MOJOM_FORWARD_H_