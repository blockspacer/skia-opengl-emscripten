// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/viz/public/interfaces/compositing/render_pass.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/viz/public/interfaces/compositing/render_pass.mojom-params-data.h"
namespace viz {
namespace mojom {

namespace internal {


// static
bool RenderPass_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RenderPass_Data* object = static_cast<const RenderPass_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 96 }};

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
          object->output_rect, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->output_rect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->damage_rect, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->damage_rect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->transform_to_root_target, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->transform_to_root_target, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->filters, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->filters, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->backdrop_filters, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->backdrop_filters, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->backdrop_filter_bounds, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->backdrop_filter_bounds, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->color_space, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->color_space, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->copy_requests, 13, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams copy_requests_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->copy_requests, validation_context,
                                         &copy_requests_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->quad_list, 14, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams quad_list_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->quad_list, validation_context,
                                         &quad_list_validate_params)) {
    return false;
  }

  return true;
}

RenderPass_Data::RenderPass_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#if defined(_MSC_VER)
#pragma warning(pop)
#endif