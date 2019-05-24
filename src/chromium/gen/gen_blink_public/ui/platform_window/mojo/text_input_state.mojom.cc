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

#include "ui/platform_window/mojo/text_input_state.mojom.h"

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

#include "ui/platform_window/mojo/text_input_state.mojom-params-data.h"
#include "ui/platform_window/mojo/text_input_state.mojom-shared-message-ids.h"

#include "ui/platform_window/mojo/text_input_state.mojom-import-headers.h"


#ifndef UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_JUMBO_H_
#define UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_JUMBO_H_
#include "ui/base/ime/mojo/ime_types_struct_traits.h"
#endif
namespace ui {
namespace mojom {
TextInputState::TextInputState()
    : type(),
      flags(),
      text(),
      selection_start(),
      selection_end(),
      composition_start(),
      composition_end(),
      can_compose_inline() {}

TextInputState::TextInputState(
    ui::TextInputType type_in,
    int32_t flags_in,
    const base::Optional<std::string>& text_in,
    int32_t selection_start_in,
    int32_t selection_end_in,
    int32_t composition_start_in,
    int32_t composition_end_in,
    bool can_compose_inline_in)
    : type(std::move(type_in)),
      flags(std::move(flags_in)),
      text(std::move(text_in)),
      selection_start(std::move(selection_start_in)),
      selection_end(std::move(selection_end_in)),
      composition_start(std::move(composition_start_in)),
      composition_end(std::move(composition_end_in)),
      can_compose_inline(std::move(can_compose_inline_in)) {}

TextInputState::~TextInputState() = default;

bool TextInputState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::TextInputState::DataView, ::ui::mojom::TextInputStatePtr>::Read(
    ::ui::mojom::TextInputState::DataView input,
    ::ui::mojom::TextInputStatePtr* output) {
  bool success = true;
  ::ui::mojom::TextInputStatePtr result(::ui::mojom::TextInputState::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->flags = input.flags();
      if (!input.ReadText(&result->text))
        success = false;
      result->selection_start = input.selection_start();
      result->selection_end = input.selection_end();
      result->composition_start = input.composition_start();
      result->composition_end = input.composition_end();
      result->can_compose_inline = input.can_compose_inline();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif