// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_TYPES_MOJOM_BLINK_FORWARD_H_
#define UI_BASE_IME_MOJO_IME_TYPES_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {

enum class TextInputType : int32_t;

enum class TextInputMode : int32_t;

enum class TextInputFlag : int32_t;

enum class ImeTextSpanType : int32_t;

enum class ImeTextSpanThickness : int32_t;

enum class FocusReason : int32_t;
}  // namespace ui
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct ui_mojom_internal_TextInputType_DataHashFn;

template <>
struct DefaultHash<::ui::mojom::TextInputType> {
  using Hash = ui_mojom_internal_TextInputType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ui_mojom_internal_TextInputMode_DataHashFn;

template <>
struct DefaultHash<::ui::mojom::TextInputMode> {
  using Hash = ui_mojom_internal_TextInputMode_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ui_mojom_internal_TextInputFlag_DataHashFn;

template <>
struct DefaultHash<::ui::mojom::TextInputFlag> {
  using Hash = ui_mojom_internal_TextInputFlag_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ui_mojom_internal_ImeTextSpanType_DataHashFn;

template <>
struct DefaultHash<::ui::mojom::ImeTextSpanType> {
  using Hash = ui_mojom_internal_ImeTextSpanType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ui_mojom_internal_ImeTextSpanThickness_DataHashFn;

template <>
struct DefaultHash<::ui::mojom::ImeTextSpanThickness> {
  using Hash = ui_mojom_internal_ImeTextSpanThickness_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ui_mojom_internal_FocusReason_DataHashFn;

template <>
struct DefaultHash<::ui::mojom::FocusReason> {
  using Hash = ui_mojom_internal_FocusReason_DataHashFn;
};
}  // namespace WTF


namespace ui {
namespace mojom {
namespace blink {
using TextInputType = TextInputType;  // Alias for definition in the parent namespace.
using TextInputMode = TextInputMode;  // Alias for definition in the parent namespace.
using TextInputFlag = TextInputFlag;  // Alias for definition in the parent namespace.
using ImeTextSpanType = ImeTextSpanType;  // Alias for definition in the parent namespace.
using ImeTextSpanThickness = ImeTextSpanThickness;  // Alias for definition in the parent namespace.
using FocusReason = FocusReason;  // Alias for definition in the parent namespace.
class ImeTextSpan;
using ImeTextSpanPtr = mojo::StructPtr<ImeTextSpan>;

class CompositionText;
using CompositionTextPtr = mojo::StructPtr<CompositionText>;




}  // namespace blink
}  // namespace mojom
}  // namespace ui

#endif  // UI_BASE_IME_MOJO_IME_TYPES_MOJOM_BLINK_FORWARD_H_