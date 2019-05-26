// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-params-data.h"
namespace viz {
namespace mojom {

std::ostream& operator<<(std::ostream& os, CopyOutputResultFormat value) {
  switch(value) {
    case CopyOutputResultFormat::RGBA_BITMAP:
      return os << "CopyOutputResultFormat::RGBA_BITMAP";
    case CopyOutputResultFormat::RGBA_TEXTURE:
      return os << "CopyOutputResultFormat::RGBA_TEXTURE";
    default:
      return os << "Unknown CopyOutputResultFormat value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool CopyOutputResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CopyOutputResult_Data* object = static_cast<const CopyOutputResult_Data*>(data);

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


  if (!::viz::mojom::internal::CopyOutputResultFormat_Data
        ::Validate(object->format, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->rect, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->rect, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->bitmap, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->mailbox, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->sync_token, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->color_space, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterface(object->releaser,
                                                 validation_context)) {
    return false;
  }

  return true;
}

CopyOutputResult_Data::CopyOutputResult_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#if defined(_MSC_VER)
#pragma warning(pop)
#endif