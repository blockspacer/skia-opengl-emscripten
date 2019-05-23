// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-params-data.h"
namespace viz {
namespace mojom {

std::ostream& operator<<(std::ostream& os, BeginFrameArgsType value) {
  switch(value) {
    case BeginFrameArgsType::INVALID:
      return os << "BeginFrameArgsType::INVALID";
    case BeginFrameArgsType::NORMAL:
      return os << "BeginFrameArgsType::NORMAL";
    case BeginFrameArgsType::MISSED:
      return os << "BeginFrameArgsType::MISSED";
    default:
      return os << "Unknown BeginFrameArgsType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool BeginFrameArgs_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BeginFrameArgs_Data* object = static_cast<const BeginFrameArgs_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->deadline, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->deadline, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->interval, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->interval, validation_context))
    return false;


  if (!::viz::mojom::internal::BeginFrameArgsType_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

BeginFrameArgs_Data::BeginFrameArgs_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BeginFrameAck_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BeginFrameAck_Data* object = static_cast<const BeginFrameAck_Data*>(data);

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

  return true;
}

BeginFrameAck_Data::BeginFrameAck_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#if defined(_MSC_VER)
#pragma warning(pop)
#endif