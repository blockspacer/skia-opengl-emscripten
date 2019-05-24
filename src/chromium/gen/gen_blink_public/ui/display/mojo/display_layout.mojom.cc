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

#include "ui/display/mojo/display_layout.mojom.h"

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

#include "ui/display/mojo/display_layout.mojom-params-data.h"
#include "ui/display/mojo/display_layout.mojom-shared-message-ids.h"

#include "ui/display/mojo/display_layout.mojom-import-headers.h"


#ifndef UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_JUMBO_H_
#define UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_JUMBO_H_
#include "ui/display/mojo/display_layout_struct_traits.h"
#endif
namespace display {
namespace mojom {
DisplayPlacement::DisplayPlacement()
    : display_id(),
      parent_display_id(),
      position(),
      offset(),
      offset_reference() {}

DisplayPlacement::DisplayPlacement(
    int64_t display_id_in,
    int64_t parent_display_id_in,
    display::DisplayPlacement::Position position_in,
    int32_t offset_in,
    display::DisplayPlacement::OffsetReference offset_reference_in)
    : display_id(std::move(display_id_in)),
      parent_display_id(std::move(parent_display_id_in)),
      position(std::move(position_in)),
      offset(std::move(offset_in)),
      offset_reference(std::move(offset_reference_in)) {}

DisplayPlacement::~DisplayPlacement() = default;

bool DisplayPlacement::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DisplayLayout::DisplayLayout()
    : default_unified(),
      primary_display_id(),
      placement_list() {}

DisplayLayout::DisplayLayout(
    bool default_unified_in,
    int64_t primary_display_id_in,
    const std::vector<display::DisplayPlacement>& placement_list_in)
    : default_unified(std::move(default_unified_in)),
      primary_display_id(std::move(primary_display_id_in)),
      placement_list(std::move(placement_list_in)) {}

DisplayLayout::~DisplayLayout() = default;

bool DisplayLayout::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace display

namespace mojo {


// static
bool StructTraits<::display::mojom::DisplayPlacement::DataView, ::display::mojom::DisplayPlacementPtr>::Read(
    ::display::mojom::DisplayPlacement::DataView input,
    ::display::mojom::DisplayPlacementPtr* output) {
  bool success = true;
  ::display::mojom::DisplayPlacementPtr result(::display::mojom::DisplayPlacement::New());
  
      result->display_id = input.display_id();
      result->parent_display_id = input.parent_display_id();
      if (!input.ReadPosition(&result->position))
        success = false;
      result->offset = input.offset();
      if (!input.ReadOffsetReference(&result->offset_reference))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::display::mojom::DisplayLayout::DataView, ::display::mojom::DisplayLayoutPtr>::Read(
    ::display::mojom::DisplayLayout::DataView input,
    ::display::mojom::DisplayLayoutPtr* output) {
  bool success = true;
  ::display::mojom::DisplayLayoutPtr result(::display::mojom::DisplayLayout::New());
  
      result->default_unified = input.default_unified();
      result->primary_display_id = input.primary_display_id();
      if (!input.ReadPlacementList(&result->placement_list))
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