// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "ui/base/ime/mojo/ime_types.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "ui/base/ime/mojo/ime_types.mojom-params-data.h"
#include "ui/base/ime/mojo/ime_types.mojom-shared-message-ids.h"

#include "ui/base/ime/mojo/ime_types.mojom-import-headers.h"


#ifndef UI_BASE_IME_MOJO_IME_TYPES_MOJOM_JUMBO_H_
#define UI_BASE_IME_MOJO_IME_TYPES_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "ui/base/ime/mojo/ime_types_struct_traits.h"
#include "ui/gfx/range/mojo/range_struct_traits.h"
#endif
namespace ui {
namespace mojom {
ImeTextSpan::ImeTextSpan()
    : type(),
      start_offset(),
      end_offset(),
      underline_color(),
      thickness(),
      background_color(),
      suggestion_highlight_color(),
      remove_on_finish_composing(),
      suggestions() {}

ImeTextSpan::ImeTextSpan(
    ImeTextSpanType type_in,
    uint32_t start_offset_in,
    uint32_t end_offset_in,
    uint32_t underline_color_in,
    ui::ImeTextSpan::Thickness thickness_in,
    uint32_t background_color_in,
    uint32_t suggestion_highlight_color_in,
    bool remove_on_finish_composing_in,
    const std::vector<std::string>& suggestions_in)
    : type(std::move(type_in)),
      start_offset(std::move(start_offset_in)),
      end_offset(std::move(end_offset_in)),
      underline_color(std::move(underline_color_in)),
      thickness(std::move(thickness_in)),
      background_color(std::move(background_color_in)),
      suggestion_highlight_color(std::move(suggestion_highlight_color_in)),
      remove_on_finish_composing(std::move(remove_on_finish_composing_in)),
      suggestions(std::move(suggestions_in)) {}

ImeTextSpan::~ImeTextSpan() = default;

bool ImeTextSpan::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CompositionText::CompositionText()
    : text(),
      ime_text_spans(),
      selection() {}

CompositionText::CompositionText(
    const base::string16& text_in,
    const std::vector<ui::ImeTextSpan>& ime_text_spans_in,
    const gfx::Range& selection_in)
    : text(std::move(text_in)),
      ime_text_spans(std::move(ime_text_spans_in)),
      selection(std::move(selection_in)) {}

CompositionText::~CompositionText() = default;

bool CompositionText::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::ImeTextSpan::DataView, ::ui::mojom::ImeTextSpanPtr>::Read(
    ::ui::mojom::ImeTextSpan::DataView input,
    ::ui::mojom::ImeTextSpanPtr* output) {
  bool success = true;
  ::ui::mojom::ImeTextSpanPtr result(::ui::mojom::ImeTextSpan::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->start_offset = input.start_offset();
      result->end_offset = input.end_offset();
      result->underline_color = input.underline_color();
      if (!input.ReadThickness(&result->thickness))
        success = false;
      result->background_color = input.background_color();
      result->suggestion_highlight_color = input.suggestion_highlight_color();
      result->remove_on_finish_composing = input.remove_on_finish_composing();
      if (!input.ReadSuggestions(&result->suggestions))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::CompositionText::DataView, ::ui::mojom::CompositionTextPtr>::Read(
    ::ui::mojom::CompositionText::DataView input,
    ::ui::mojom::CompositionTextPtr* output) {
  bool success = true;
  ::ui::mojom::CompositionTextPtr result(::ui::mojom::CompositionText::New());
  
      if (!input.ReadText(&result->text))
        success = false;
      if (!input.ReadImeTextSpans(&result->ime_text_spans))
        success = false;
      if (!input.ReadSelection(&result->selection))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif