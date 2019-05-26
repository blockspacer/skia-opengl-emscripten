// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/display/mojo/display.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/display/mojo/display.mojom-params-data.h"
namespace display {
namespace mojom {

std::ostream& operator<<(std::ostream& os, Rotation value) {
  switch(value) {
    case Rotation::VALUE_0:
      return os << "Rotation::VALUE_0";
    case Rotation::VALUE_90:
      return os << "Rotation::VALUE_90";
    case Rotation::VALUE_180:
      return os << "Rotation::VALUE_180";
    case Rotation::VALUE_270:
      return os << "Rotation::VALUE_270";
    default:
      return os << "Unknown Rotation value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TouchSupport value) {
  switch(value) {
    case TouchSupport::UNKNOWN:
      return os << "TouchSupport::UNKNOWN";
    case TouchSupport::AVAILABLE:
      return os << "TouchSupport::AVAILABLE";
    case TouchSupport::UNAVAILABLE:
      return os << "TouchSupport::UNAVAILABLE";
    default:
      return os << "Unknown TouchSupport value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AccelerometerSupport value) {
  switch(value) {
    case AccelerometerSupport::UNKNOWN:
      return os << "AccelerometerSupport::UNKNOWN";
    case AccelerometerSupport::AVAILABLE:
      return os << "AccelerometerSupport::AVAILABLE";
    case AccelerometerSupport::UNAVAILABLE:
      return os << "AccelerometerSupport::UNAVAILABLE";
    default:
      return os << "Unknown AccelerometerSupport value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool Display_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Display_Data* object = static_cast<const Display_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 80 }};

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
          object->bounds, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounds, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->size_in_pixels, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->size_in_pixels, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->work_area, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->work_area, validation_context))
    return false;


  if (!::display::mojom::internal::Rotation_Data
        ::Validate(object->rotation, validation_context))
    return false;


  if (!::display::mojom::internal::TouchSupport_Data
        ::Validate(object->touch_support, validation_context))
    return false;


  if (!::display::mojom::internal::AccelerometerSupport_Data
        ::Validate(object->accelerometer_support, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->maximum_cursor_size, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->maximum_cursor_size, validation_context))
    return false;

  return true;
}

Display_Data::Display_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace display

#if defined(_MSC_VER)
#pragma warning(pop)
#endif