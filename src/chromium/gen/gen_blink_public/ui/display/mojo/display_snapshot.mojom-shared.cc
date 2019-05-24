// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/display/mojo/display_snapshot.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/display/mojo/display_snapshot.mojom-params-data.h"
namespace display {
namespace mojom {

namespace internal {


// static
bool DisplaySnapshot_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DisplaySnapshot_Data* object = static_cast<const DisplaySnapshot_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 120 }};

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
          object->origin, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->physical_size, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->physical_size, validation_context))
    return false;


  if (!::display::mojom::internal::DisplayConnectionType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->color_space, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->color_space, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->display_name, 10, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams display_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->display_name, validation_context,
                                         &display_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sys_path, 11, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->sys_path, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->modes, 12, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams modes_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->modes, validation_context,
                                         &modes_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->edid, 13, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams edid_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->edid, validation_context,
                                         &edid_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->maximum_cursor_size, 20, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->maximum_cursor_size, validation_context))
    return false;

  return true;
}

DisplaySnapshot_Data::DisplaySnapshot_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace display

#if defined(_MSC_VER)
#pragma warning(pop)
#endif