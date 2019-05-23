// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/device/public/mojom/geoposition.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/device/public/mojom/geoposition.mojom-params-data.h"
namespace device {
namespace mojom {

std::ostream& operator<<(std::ostream& os, Geoposition_ErrorCode value) {
  switch(value) {
    case Geoposition_ErrorCode::NONE:
      return os << "Geoposition_ErrorCode::NONE";
    case Geoposition_ErrorCode::PERMISSION_DENIED:
      return os << "Geoposition_ErrorCode::PERMISSION_DENIED";
    case Geoposition_ErrorCode::POSITION_UNAVAILABLE:
      return os << "Geoposition_ErrorCode::POSITION_UNAVAILABLE";
    case Geoposition_ErrorCode::TIMEOUT:
      return os << "Geoposition_ErrorCode::{TIMEOUT, LAST}";
    default:
      return os << "Unknown Geoposition_ErrorCode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool Geoposition_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Geoposition_Data* object = static_cast<const Geoposition_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 88 }};

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
          object->timestamp, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;


  if (!::device::mojom::internal::Geoposition_ErrorCode_Data
        ::Validate(object->error_code, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 11, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

Geoposition_Data::Geoposition_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace device

#if defined(_MSC_VER)
#pragma warning(pop)
#endif