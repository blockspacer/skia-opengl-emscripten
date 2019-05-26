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

#include "ui/display/mojo/display.mojom.h"

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

#include "ui/display/mojo/display.mojom-params-data.h"
#include "ui/display/mojo/display.mojom-shared-message-ids.h"

#include "ui/display/mojo/display.mojom-import-headers.h"


#ifndef UI_DISPLAY_MOJO_DISPLAY_MOJOM_JUMBO_H_
#define UI_DISPLAY_MOJO_DISPLAY_MOJOM_JUMBO_H_
#include "ui/display/mojo/display_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace display {
namespace mojom {
Display::Display()
    : id(),
      bounds(),
      size_in_pixels(),
      work_area(),
      device_scale_factor(),
      rotation(),
      touch_support(),
      accelerometer_support(),
      maximum_cursor_size(),
      color_depth(),
      depth_per_component(),
      is_monochrome() {}

Display::Display(
    int64_t id_in,
    const gfx::Rect& bounds_in,
    const gfx::Size& size_in_pixels_in,
    const gfx::Rect& work_area_in,
    float device_scale_factor_in,
    display::Display::Rotation rotation_in,
    display::Display::TouchSupport touch_support_in,
    display::Display::AccelerometerSupport accelerometer_support_in,
    const gfx::Size& maximum_cursor_size_in,
    int32_t color_depth_in,
    int32_t depth_per_component_in,
    bool is_monochrome_in)
    : id(std::move(id_in)),
      bounds(std::move(bounds_in)),
      size_in_pixels(std::move(size_in_pixels_in)),
      work_area(std::move(work_area_in)),
      device_scale_factor(std::move(device_scale_factor_in)),
      rotation(std::move(rotation_in)),
      touch_support(std::move(touch_support_in)),
      accelerometer_support(std::move(accelerometer_support_in)),
      maximum_cursor_size(std::move(maximum_cursor_size_in)),
      color_depth(std::move(color_depth_in)),
      depth_per_component(std::move(depth_per_component_in)),
      is_monochrome(std::move(is_monochrome_in)) {}

Display::~Display() = default;

bool Display::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace display

namespace mojo {


// static
bool StructTraits<::display::mojom::Display::DataView, ::display::mojom::DisplayPtr>::Read(
    ::display::mojom::Display::DataView input,
    ::display::mojom::DisplayPtr* output) {
  bool success = true;
  ::display::mojom::DisplayPtr result(::display::mojom::Display::New());
  
      result->id = input.id();
      if (!input.ReadBounds(&result->bounds))
        success = false;
      if (!input.ReadSizeInPixels(&result->size_in_pixels))
        success = false;
      if (!input.ReadWorkArea(&result->work_area))
        success = false;
      result->device_scale_factor = input.device_scale_factor();
      if (!input.ReadRotation(&result->rotation))
        success = false;
      if (!input.ReadTouchSupport(&result->touch_support))
        success = false;
      if (!input.ReadAccelerometerSupport(&result->accelerometer_support))
        success = false;
      if (!input.ReadMaximumCursorSize(&result->maximum_cursor_size))
        success = false;
      result->color_depth = input.color_depth();
      result->depth_per_component = input.depth_per_component();
      result->is_monochrome = input.is_monochrome();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif