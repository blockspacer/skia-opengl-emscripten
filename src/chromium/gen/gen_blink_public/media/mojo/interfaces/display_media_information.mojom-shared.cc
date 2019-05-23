// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "media/mojo/interfaces/display_media_information.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "media/mojo/interfaces/display_media_information.mojom-params-data.h"
namespace media {
namespace mojom {

std::ostream& operator<<(std::ostream& os, DisplayCaptureSurfaceType value) {
  switch(value) {
    case DisplayCaptureSurfaceType::MONITOR:
      return os << "DisplayCaptureSurfaceType::MONITOR";
    case DisplayCaptureSurfaceType::WINDOW:
      return os << "DisplayCaptureSurfaceType::WINDOW";
    case DisplayCaptureSurfaceType::APPLICATION:
      return os << "DisplayCaptureSurfaceType::APPLICATION";
    case DisplayCaptureSurfaceType::BROWSER:
      return os << "DisplayCaptureSurfaceType::BROWSER";
    default:
      return os << "Unknown DisplayCaptureSurfaceType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CursorCaptureType value) {
  switch(value) {
    case CursorCaptureType::NEVER:
      return os << "CursorCaptureType::NEVER";
    case CursorCaptureType::ALWAYS:
      return os << "CursorCaptureType::ALWAYS";
    case CursorCaptureType::MOTION:
      return os << "CursorCaptureType::MOTION";
    default:
      return os << "Unknown CursorCaptureType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool DisplayMediaInformation_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DisplayMediaInformation_Data* object = static_cast<const DisplayMediaInformation_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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


  if (!::media::mojom::internal::DisplayCaptureSurfaceType_Data
        ::Validate(object->display_surface, validation_context))
    return false;


  if (!::media::mojom::internal::CursorCaptureType_Data
        ::Validate(object->cursor, validation_context))
    return false;

  return true;
}

DisplayMediaInformation_Data::DisplayMediaInformation_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media

#if defined(_MSC_VER)
#pragma warning(pop)
#endif