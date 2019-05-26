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

#include "ui/display/mojo/display_layout.mojom-blink.h"

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

#include "ui/display/mojo/display_layout.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_BLINK_JUMBO_H_
#define UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_BLINK_JUMBO_H_
#endif
namespace display {
namespace mojom {
namespace blink {
DisplayPlacement::DisplayPlacement()
    : display_id(),
      parent_display_id(),
      position(),
      offset(),
      offset_reference() {}

DisplayPlacement::DisplayPlacement(
    int64_t display_id_in,
    int64_t parent_display_id_in,
    Position position_in,
    int32_t offset_in,
    OffsetReference offset_reference_in)
    : display_id(std::move(display_id_in)),
      parent_display_id(std::move(parent_display_id_in)),
      position(std::move(position_in)),
      offset(std::move(offset_in)),
      offset_reference(std::move(offset_reference_in)) {}

DisplayPlacement::~DisplayPlacement() = default;
size_t DisplayPlacement::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->display_id);
  seed = mojo::internal::WTFHash(seed, this->parent_display_id);
  seed = mojo::internal::WTFHash(seed, this->position);
  seed = mojo::internal::WTFHash(seed, this->offset);
  seed = mojo::internal::WTFHash(seed, this->offset_reference);
  return seed;
}

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
    WTF::Vector<DisplayPlacementPtr> placement_list_in)
    : default_unified(std::move(default_unified_in)),
      primary_display_id(std::move(primary_display_id_in)),
      placement_list(std::move(placement_list_in)) {}

DisplayLayout::~DisplayLayout() = default;

bool DisplayLayout::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace display

namespace mojo {


// static
bool StructTraits<::display::mojom::blink::DisplayPlacement::DataView, ::display::mojom::blink::DisplayPlacementPtr>::Read(
    ::display::mojom::blink::DisplayPlacement::DataView input,
    ::display::mojom::blink::DisplayPlacementPtr* output) {
  bool success = true;
  ::display::mojom::blink::DisplayPlacementPtr result(::display::mojom::blink::DisplayPlacement::New());
  
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
bool StructTraits<::display::mojom::blink::DisplayLayout::DataView, ::display::mojom::blink::DisplayLayoutPtr>::Read(
    ::display::mojom::blink::DisplayLayout::DataView input,
    ::display::mojom::blink::DisplayLayoutPtr* output) {
  bool success = true;
  ::display::mojom::blink::DisplayLayoutPtr result(::display::mojom::blink::DisplayLayout::New());
  
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