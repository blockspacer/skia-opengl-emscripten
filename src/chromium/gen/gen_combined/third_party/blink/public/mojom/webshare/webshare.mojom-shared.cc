// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/webshare/webshare.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/webshare/webshare.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ShareError value) {
  switch(value) {
    case ShareError::OK:
      return os << "ShareError::OK";
    case ShareError::INTERNAL_ERROR:
      return os << "ShareError::INTERNAL_ERROR";
    case ShareError::PERMISSION_DENIED:
      return os << "ShareError::PERMISSION_DENIED";
    case ShareError::CANCELED:
      return os << "ShareError::CANCELED";
    default:
      return os << "Unknown ShareError value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool SharedFile_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SharedFile_Data* object = static_cast<const SharedFile_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->blob, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->blob, validation_context))
    return false;

  return true;
}

SharedFile_Data::SharedFile_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ShareService_Share_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ShareService_Share_Params_Data* object = static_cast<const ShareService_Share_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->title, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams title_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->title, validation_context,
                                         &title_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->text, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->text, validation_context,
                                         &text_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->files, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams files_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->files, validation_context,
                                         &files_validate_params)) {
    return false;
  }

  return true;
}

ShareService_Share_Params_Data::ShareService_Share_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ShareService_Share_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ShareService_Share_ResponseParams_Data* object = static_cast<const ShareService_Share_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::ShareError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

ShareService_Share_ResponseParams_Data::ShareService_Share_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif