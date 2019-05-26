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

#include "ui/gfx/mojo/color_space.mojom.h"

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

#include "ui/gfx/mojo/color_space.mojom-params-data.h"
#include "ui/gfx/mojo/color_space.mojom-shared-message-ids.h"

#include "ui/gfx/mojo/color_space.mojom-import-headers.h"


#ifndef UI_GFX_MOJO_COLOR_SPACE_MOJOM_JUMBO_H_
#define UI_GFX_MOJO_COLOR_SPACE_MOJOM_JUMBO_H_
#endif
namespace gfx {
namespace mojom {
ColorSpace::ColorSpace()
    : primaries(),
      transfer(),
      matrix(),
      range(),
      custom_primary_matrix(),
      custom_transfer_params() {}

ColorSpace::ColorSpace(
    ColorSpacePrimaryID primaries_in,
    ColorSpaceTransferID transfer_in,
    ColorSpaceMatrixID matrix_in,
    ColorSpaceRangeID range_in,
    const std::vector<float>& custom_primary_matrix_in,
    const std::vector<float>& custom_transfer_params_in)
    : primaries(std::move(primaries_in)),
      transfer(std::move(transfer_in)),
      matrix(std::move(matrix_in)),
      range(std::move(range_in)),
      custom_primary_matrix(std::move(custom_primary_matrix_in)),
      custom_transfer_params(std::move(custom_transfer_params_in)) {}

ColorSpace::~ColorSpace() = default;

bool ColorSpace::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::ColorSpace::DataView, ::gfx::mojom::ColorSpacePtr>::Read(
    ::gfx::mojom::ColorSpace::DataView input,
    ::gfx::mojom::ColorSpacePtr* output) {
  bool success = true;
  ::gfx::mojom::ColorSpacePtr result(::gfx::mojom::ColorSpace::New());
  
      if (!input.ReadPrimaries(&result->primaries))
        success = false;
      if (!input.ReadTransfer(&result->transfer))
        success = false;
      if (!input.ReadMatrix(&result->matrix))
        success = false;
      if (!input.ReadRange(&result->range))
        success = false;
      if (!input.ReadCustomPrimaryMatrix(&result->custom_primary_matrix))
        success = false;
      if (!input.ReadCustomTransferParams(&result->custom_transfer_params))
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