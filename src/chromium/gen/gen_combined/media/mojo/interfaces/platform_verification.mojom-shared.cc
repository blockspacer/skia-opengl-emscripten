// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "media/mojo/interfaces/platform_verification.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "media/mojo/interfaces/platform_verification.mojom-params-data.h"
namespace media {
namespace mojom {

namespace internal {


// static
bool PlatformVerification_ChallengePlatform_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PlatformVerification_ChallengePlatform_Params_Data* object = static_cast<const PlatformVerification_ChallengePlatform_Params_Data*>(data);

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
          object->service_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_id, validation_context,
                                         &service_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->challenge, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams challenge_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->challenge, validation_context,
                                         &challenge_validate_params)) {
    return false;
  }

  return true;
}

PlatformVerification_ChallengePlatform_Params_Data::PlatformVerification_ChallengePlatform_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PlatformVerification_ChallengePlatform_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PlatformVerification_ChallengePlatform_ResponseParams_Data* object = static_cast<const PlatformVerification_ChallengePlatform_ResponseParams_Data*>(data);

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
          object->signed_data, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams signed_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->signed_data, validation_context,
                                         &signed_data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->signed_data_signature, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams signed_data_signature_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->signed_data_signature, validation_context,
                                         &signed_data_signature_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->platform_key_certificate, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams platform_key_certificate_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->platform_key_certificate, validation_context,
                                         &platform_key_certificate_validate_params)) {
    return false;
  }

  return true;
}

PlatformVerification_ChallengePlatform_ResponseParams_Data::PlatformVerification_ChallengePlatform_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PlatformVerification_GetStorageId_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PlatformVerification_GetStorageId_Params_Data* object = static_cast<const PlatformVerification_GetStorageId_Params_Data*>(data);

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

PlatformVerification_GetStorageId_Params_Data::PlatformVerification_GetStorageId_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PlatformVerification_GetStorageId_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PlatformVerification_GetStorageId_ResponseParams_Data* object = static_cast<const PlatformVerification_GetStorageId_ResponseParams_Data*>(data);

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
          object->storage_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams storage_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->storage_id, validation_context,
                                         &storage_id_validate_params)) {
    return false;
  }

  return true;
}

PlatformVerification_GetStorageId_ResponseParams_Data::PlatformVerification_GetStorageId_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media

#if defined(_MSC_VER)
#pragma warning(pop)
#endif