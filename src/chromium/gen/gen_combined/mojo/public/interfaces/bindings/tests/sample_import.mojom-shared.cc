// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-params-data.h"
namespace imported {

std::ostream& operator<<(std::ostream& os, Shape value) {
  switch(value) {
    case Shape::RECTANGLE:
      return os << "Shape::RECTANGLE";
    case Shape::CIRCLE:
      return os << "Shape::CIRCLE";
    case Shape::TRIANGLE:
      return os << "Shape::{TRIANGLE, LAST}";
    default:
      return os << "Unknown Shape value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AnotherShape value) {
  switch(value) {
    case AnotherShape::RECTANGLE:
      return os << "AnotherShape::RECTANGLE";
    case AnotherShape::CIRCLE:
      return os << "AnotherShape::CIRCLE";
    case AnotherShape::TRIANGLE:
      return os << "AnotherShape::TRIANGLE";
    default:
      return os << "Unknown AnotherShape value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, YetAnotherShape value) {
  switch(value) {
    case YetAnotherShape::RECTANGLE:
      return os << "YetAnotherShape::RECTANGLE";
    case YetAnotherShape::CIRCLE:
      return os << "YetAnotherShape::CIRCLE";
    case YetAnotherShape::TRIANGLE:
      return os << "YetAnotherShape::TRIANGLE";
    default:
      return os << "Unknown YetAnotherShape value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool PointOrShape_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const PointOrShape_Data* object = static_cast<const PointOrShape_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case PointOrShape_Tag::POINT: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_point, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_point, validation_context))
        return false;
      return true;
    }
    case PointOrShape_Tag::SHAPE: {


      if (!::imported::internal::Shape_Data
            ::Validate(object->data.f_shape, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in PointOrShape");
      return false;
    }
  }
}


// static
bool Point_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Point_Data* object = static_cast<const Point_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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

  return true;
}

Point_Data::Point_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImportedInterface_DoSomething_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImportedInterface_DoSomething_Params_Data* object = static_cast<const ImportedInterface_DoSomething_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

  return true;
}

ImportedInterface_DoSomething_Params_Data::ImportedInterface_DoSomething_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace imported

#if defined(_MSC_VER)
#pragma warning(pop)
#endif