// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom-params-data.h"
namespace viz {
namespace mojom {

namespace internal {


// static
bool SharedQuadState_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SharedQuadState_Data* object = static_cast<const SharedQuadState_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 64 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->quad_to_target_transform, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->quad_to_target_transform, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->quad_layer_rect, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->quad_layer_rect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->visible_quad_layer_rect, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visible_quad_layer_rect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->rounded_corner_bounds, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->rounded_corner_bounds, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->clip_rect, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->clip_rect, validation_context))
    return false;

  return true;
}

SharedQuadState_Data::SharedQuadState_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#if defined(_MSC_VER)
#pragma warning(pop)
#endif