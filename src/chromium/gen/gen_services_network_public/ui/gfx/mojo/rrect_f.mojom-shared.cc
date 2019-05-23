// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/gfx/mojo/rrect_f.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/gfx/mojo/rrect_f.mojom-params-data.h"
namespace gfx {
namespace mojom {

std::ostream& operator<<(std::ostream& os, RRectFType value) {
  switch(value) {
    case RRectFType::kEmpty:
      return os << "RRectFType::kEmpty";
    case RRectFType::kRect:
      return os << "RRectFType::kRect";
    case RRectFType::kSingle:
      return os << "RRectFType::kSingle";
    case RRectFType::kSimple:
      return os << "RRectFType::kSimple";
    case RRectFType::kOval:
      return os << "RRectFType::kOval";
    case RRectFType::kComplex:
      return os << "RRectFType::kComplex";
    default:
      return os << "Unknown RRectFType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool RRectF_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RRectF_Data* object = static_cast<const RRectF_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 56 }};

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


  if (!::gfx::mojom::internal::RRectFType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->rect, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->rect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->upper_left, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->upper_left, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->upper_right, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->upper_right, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->lower_right, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->lower_right, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->lower_left, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->lower_left, validation_context))
    return false;

  return true;
}

RRectF_Data::RRectF_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#if defined(_MSC_VER)
#pragma warning(pop)
#endif