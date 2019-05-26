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

#include "ui/display/mojo/display_mode.mojom-blink.h"

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

#include "ui/display/mojo/display_mode.mojom-params-data.h"
#include "ui/display/mojo/display_mode.mojom-shared-message-ids.h"

#include "ui/display/mojo/display_mode.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_DISPLAY_MOJO_DISPLAY_MODE_MOJOM_BLINK_JUMBO_H_
#define UI_DISPLAY_MOJO_DISPLAY_MODE_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace display {
namespace mojom {
namespace blink {
DisplayMode::DisplayMode()
    : size(),
      is_interlaced(),
      refresh_rate() {}

DisplayMode::DisplayMode(
    const ::blink::WebSize& size_in,
    bool is_interlaced_in,
    float refresh_rate_in)
    : size(std::move(size_in)),
      is_interlaced(std::move(is_interlaced_in)),
      refresh_rate(std::move(refresh_rate_in)) {}

DisplayMode::~DisplayMode() = default;

bool DisplayMode::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace display

namespace mojo {


// static
bool StructTraits<::display::mojom::blink::DisplayMode::DataView, ::display::mojom::blink::DisplayModePtr>::Read(
    ::display::mojom::blink::DisplayMode::DataView input,
    ::display::mojom::blink::DisplayModePtr* output) {
  bool success = true;
  ::display::mojom::blink::DisplayModePtr result(::display::mojom::blink::DisplayMode::New());
  
      if (!input.ReadSize(&result->size))
        success = false;
      result->is_interlaced = input.is_interlaced();
      result->refresh_rate = input.refresh_rate();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif