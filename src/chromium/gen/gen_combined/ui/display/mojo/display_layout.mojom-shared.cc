// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/display/mojo/display_layout.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/display/mojo/display_layout.mojom-params-data.h"
namespace display {
namespace mojom {

std::ostream& operator<<(std::ostream& os, Position value) {
  switch(value) {
    case Position::TOP:
      return os << "Position::TOP";
    case Position::RIGHT:
      return os << "Position::RIGHT";
    case Position::BOTTOM:
      return os << "Position::BOTTOM";
    case Position::LEFT:
      return os << "Position::LEFT";
    default:
      return os << "Unknown Position value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, OffsetReference value) {
  switch(value) {
    case OffsetReference::TOP_LEFT:
      return os << "OffsetReference::TOP_LEFT";
    case OffsetReference::BOTTOM_RIGHT:
      return os << "OffsetReference::BOTTOM_RIGHT";
    default:
      return os << "Unknown OffsetReference value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool DisplayPlacement_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DisplayPlacement_Data* object = static_cast<const DisplayPlacement_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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


  if (!::display::mojom::internal::Position_Data
        ::Validate(object->position, validation_context))
    return false;


  if (!::display::mojom::internal::OffsetReference_Data
        ::Validate(object->offset_reference, validation_context))
    return false;

  return true;
}

DisplayPlacement_Data::DisplayPlacement_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DisplayLayout_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DisplayLayout_Data* object = static_cast<const DisplayLayout_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

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
          object->placement_list, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams placement_list_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->placement_list, validation_context,
                                         &placement_list_validate_params)) {
    return false;
  }

  return true;
}

DisplayLayout_Data::DisplayLayout_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace display

#if defined(_MSC_VER)
#pragma warning(pop)
#endif