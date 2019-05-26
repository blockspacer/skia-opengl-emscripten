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

#include "ui/base/mojo/cursor.mojom.h"

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

#include "ui/base/mojo/cursor.mojom-params-data.h"
#include "ui/base/mojo/cursor.mojom-shared-message-ids.h"

#include "ui/base/mojo/cursor.mojom-import-headers.h"


#ifndef UI_BASE_MOJO_CURSOR_MOJOM_JUMBO_H_
#define UI_BASE_MOJO_CURSOR_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/base/mojo/cursor_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace ui {
namespace mojom {
Cursor::Cursor()
    : native_type(),
      hotspot(),
      bitmap(),
      device_scale_factor() {}

Cursor::Cursor(
    ui::CursorType native_type_in,
    const gfx::Point& hotspot_in,
    const SkBitmap& bitmap_in,
    float device_scale_factor_in)
    : native_type(std::move(native_type_in)),
      hotspot(std::move(hotspot_in)),
      bitmap(std::move(bitmap_in)),
      device_scale_factor(std::move(device_scale_factor_in)) {}

Cursor::~Cursor() = default;

bool Cursor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::Cursor::DataView, ::ui::mojom::CursorPtr>::Read(
    ::ui::mojom::Cursor::DataView input,
    ::ui::mojom::CursorPtr* output) {
  bool success = true;
  ::ui::mojom::CursorPtr result(::ui::mojom::Cursor::New());
  
      if (!input.ReadNativeType(&result->native_type))
        success = false;
      if (!input.ReadHotspot(&result->hotspot))
        success = false;
      if (!input.ReadBitmap(&result->bitmap))
        success = false;
      result->device_scale_factor = input.device_scale_factor();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif