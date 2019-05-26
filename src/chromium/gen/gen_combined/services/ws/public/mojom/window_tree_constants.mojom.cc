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

#include "services/ws/public/mojom/window_tree_constants.mojom.h"

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

#include "services/ws/public/mojom/window_tree_constants.mojom-params-data.h"
#include "services/ws/public/mojom/window_tree_constants.mojom-shared-message-ids.h"

#include "services/ws/public/mojom/window_tree_constants.mojom-import-headers.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_JUMBO_H_
#include "ui/base/mojo/ui_base_types_struct_traits.h"
#include "ui/display/mojo/display_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace ws {
namespace mojom {
FrameDecorationValues::FrameDecorationValues()
    : normal_client_area_insets(),
      maximized_client_area_insets(),
      max_title_bar_button_width() {}

FrameDecorationValues::FrameDecorationValues(
    const gfx::Insets& normal_client_area_insets_in,
    const gfx::Insets& maximized_client_area_insets_in,
    uint32_t max_title_bar_button_width_in)
    : normal_client_area_insets(std::move(normal_client_area_insets_in)),
      maximized_client_area_insets(std::move(maximized_client_area_insets_in)),
      max_title_bar_button_width(std::move(max_title_bar_button_width_in)) {}

FrameDecorationValues::~FrameDecorationValues() = default;

bool FrameDecorationValues::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WindowData::WindowData()
    : parent_id(),
      window_id(),
      transient_parent_id(),
      bounds(),
      state(mojo::internal::ConvertEnumValue<::ui::mojom::WindowShowState, ui::WindowShowState>(::ui::mojom::WindowShowState::kDefault)),
      properties(),
      visible() {}

WindowData::WindowData(
    uint64_t parent_id_in,
    uint64_t window_id_in,
    uint64_t transient_parent_id_in,
    const gfx::Rect& bounds_in,
    ui::WindowShowState state_in,
    const base::flat_map<std::string, std::vector<uint8_t>>& properties_in,
    bool visible_in)
    : parent_id(std::move(parent_id_in)),
      window_id(std::move(window_id_in)),
      transient_parent_id(std::move(transient_parent_id_in)),
      bounds(std::move(bounds_in)),
      state(std::move(state_in)),
      properties(std::move(properties_in)),
      visible(std::move(visible_in)) {}

WindowData::~WindowData() = default;

bool WindowData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WsDisplay::WsDisplay()
    : display(),
      frame_decoration_values() {}

WsDisplay::WsDisplay(
    const display::Display& display_in,
    FrameDecorationValuesPtr frame_decoration_values_in)
    : display(std::move(display_in)),
      frame_decoration_values(std::move(frame_decoration_values_in)) {}

WsDisplay::~WsDisplay() = default;

bool WsDisplay::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ws

namespace mojo {


// static
bool StructTraits<::ws::mojom::FrameDecorationValues::DataView, ::ws::mojom::FrameDecorationValuesPtr>::Read(
    ::ws::mojom::FrameDecorationValues::DataView input,
    ::ws::mojom::FrameDecorationValuesPtr* output) {
  bool success = true;
  ::ws::mojom::FrameDecorationValuesPtr result(::ws::mojom::FrameDecorationValues::New());
  
      if (!input.ReadNormalClientAreaInsets(&result->normal_client_area_insets))
        success = false;
      if (!input.ReadMaximizedClientAreaInsets(&result->maximized_client_area_insets))
        success = false;
      result->max_title_bar_button_width = input.max_title_bar_button_width();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ws::mojom::WindowData::DataView, ::ws::mojom::WindowDataPtr>::Read(
    ::ws::mojom::WindowData::DataView input,
    ::ws::mojom::WindowDataPtr* output) {
  bool success = true;
  ::ws::mojom::WindowDataPtr result(::ws::mojom::WindowData::New());
  
      result->parent_id = input.parent_id();
      result->window_id = input.window_id();
      result->transient_parent_id = input.transient_parent_id();
      if (!input.ReadBounds(&result->bounds))
        success = false;
      if (!input.ReadState(&result->state))
        success = false;
      if (!input.ReadProperties(&result->properties))
        success = false;
      result->visible = input.visible();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ws::mojom::WsDisplay::DataView, ::ws::mojom::WsDisplayPtr>::Read(
    ::ws::mojom::WsDisplay::DataView input,
    ::ws::mojom::WsDisplayPtr* output) {
  bool success = true;
  ::ws::mojom::WsDisplayPtr result(::ws::mojom::WsDisplay::New());
  
      if (!input.ReadDisplay(&result->display))
        success = false;
      if (!input.ReadFrameDecorationValues(&result->frame_decoration_values))
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