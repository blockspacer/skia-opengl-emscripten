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

#include "ui/display/mojo/gamma_ramp_rgb_entry.mojom.h"

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

#include "ui/display/mojo/gamma_ramp_rgb_entry.mojom-params-data.h"
#include "ui/display/mojo/gamma_ramp_rgb_entry.mojom-shared-message-ids.h"

#include "ui/display/mojo/gamma_ramp_rgb_entry.mojom-import-headers.h"


#ifndef UI_DISPLAY_MOJO_GAMMA_RAMP_RGB_ENTRY_MOJOM_JUMBO_H_
#define UI_DISPLAY_MOJO_GAMMA_RAMP_RGB_ENTRY_MOJOM_JUMBO_H_
#endif
namespace display {
namespace mojom {
GammaRampRGBEntry::GammaRampRGBEntry()
    : r(),
      g(),
      b() {}

GammaRampRGBEntry::GammaRampRGBEntry(
    uint16_t r_in,
    uint16_t g_in,
    uint16_t b_in)
    : r(std::move(r_in)),
      g(std::move(g_in)),
      b(std::move(b_in)) {}

GammaRampRGBEntry::~GammaRampRGBEntry() = default;

bool GammaRampRGBEntry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace display

namespace mojo {


// static
bool StructTraits<::display::mojom::GammaRampRGBEntry::DataView, ::display::mojom::GammaRampRGBEntryPtr>::Read(
    ::display::mojom::GammaRampRGBEntry::DataView input,
    ::display::mojom::GammaRampRGBEntryPtr* output) {
  bool success = true;
  ::display::mojom::GammaRampRGBEntryPtr result(::display::mojom::GammaRampRGBEntry::New());
  
      result->r = input.r();
      result->g = input.g();
      result->b = input.b();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif