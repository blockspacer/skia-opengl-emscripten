// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/viz/public/interfaces/compositing/filter_operation.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/viz/public/interfaces/compositing/filter_operation.mojom-params-data.h"
namespace viz {
namespace mojom {

std::ostream& operator<<(std::ostream& os, FilterType value) {
  switch(value) {
    case FilterType::GRAYSCALE:
      return os << "FilterType::GRAYSCALE";
    case FilterType::SEPIA:
      return os << "FilterType::SEPIA";
    case FilterType::SATURATE:
      return os << "FilterType::SATURATE";
    case FilterType::HUE_ROTATE:
      return os << "FilterType::HUE_ROTATE";
    case FilterType::INVERT:
      return os << "FilterType::INVERT";
    case FilterType::BRIGHTNESS:
      return os << "FilterType::BRIGHTNESS";
    case FilterType::CONTRAST:
      return os << "FilterType::CONTRAST";
    case FilterType::OPACITY:
      return os << "FilterType::OPACITY";
    case FilterType::BLUR:
      return os << "FilterType::BLUR";
    case FilterType::DROP_SHADOW:
      return os << "FilterType::DROP_SHADOW";
    case FilterType::COLOR_MATRIX:
      return os << "FilterType::COLOR_MATRIX";
    case FilterType::ZOOM:
      return os << "FilterType::ZOOM";
    case FilterType::REFERENCE:
      return os << "FilterType::REFERENCE";
    case FilterType::SATURATING_BRIGHTNESS:
      return os << "FilterType::SATURATING_BRIGHTNESS";
    case FilterType::ALPHA_THRESHOLD:
      return os << "FilterType::{ALPHA_THRESHOLD, FILTER_TYPE_LAST}";
    default:
      return os << "Unknown FilterType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool FilterOperation_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FilterOperation_Data* object = static_cast<const FilterOperation_Data*>(data);

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


  if (!::viz::mojom::internal::FilterType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->drop_shadow_offset, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->drop_shadow_offset, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->image_filter, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->image_filter, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams matrix_validate_params(
      20, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->matrix, validation_context,
                                         &matrix_validate_params)) {
    return false;
  }


  if (!::skia::mojom::internal::BlurTileMode_Data
        ::Validate(object->blur_tile_mode, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams shape_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->shape, validation_context,
                                         &shape_validate_params)) {
    return false;
  }

  return true;
}

FilterOperation_Data::FilterOperation_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#if defined(_MSC_VER)
#pragma warning(pop)
#endif