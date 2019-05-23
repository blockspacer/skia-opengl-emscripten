// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "media/mojo/interfaces/key_system_support.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "media/mojo/interfaces/key_system_support.mojom-params-data.h"
namespace media {
namespace mojom {

namespace internal {


// static
bool KeySystemCapability_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const KeySystemCapability_Data* object = static_cast<const KeySystemCapability_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_codecs, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams video_codecs_validate_params(
      0, ::media::mojom::internal::VideoCodec_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->video_codecs, validation_context,
                                         &video_codecs_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->encryption_schemes, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams encryption_schemes_validate_params(
      0, ::media::mojom::internal::EncryptionMode_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->encryption_schemes, validation_context,
                                         &encryption_schemes_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->hw_secure_video_codecs, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams hw_secure_video_codecs_validate_params(
      0, ::media::mojom::internal::VideoCodec_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->hw_secure_video_codecs, validation_context,
                                         &hw_secure_video_codecs_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->hw_secure_encryption_schemes, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams hw_secure_encryption_schemes_validate_params(
      0, ::media::mojom::internal::EncryptionMode_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->hw_secure_encryption_schemes, validation_context,
                                         &hw_secure_encryption_schemes_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->session_types, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_types_validate_params(
      0, ::media::mojom::internal::CdmSessionType_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->session_types, validation_context,
                                         &session_types_validate_params)) {
    return false;
  }

  return true;
}

KeySystemCapability_Data::KeySystemCapability_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool KeySystemSupport_IsKeySystemSupported_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const KeySystemSupport_IsKeySystemSupported_Params_Data* object = static_cast<const KeySystemSupport_IsKeySystemSupported_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key_system, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_system_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key_system, validation_context,
                                         &key_system_validate_params)) {
    return false;
  }

  return true;
}

KeySystemSupport_IsKeySystemSupported_Params_Data::KeySystemSupport_IsKeySystemSupported_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool KeySystemSupport_IsKeySystemSupported_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* object = static_cast<const KeySystemSupport_IsKeySystemSupported_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->key_system_capability, validation_context))
    return false;

  return true;
}

KeySystemSupport_IsKeySystemSupported_ResponseParams_Data::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media

#if defined(_MSC_VER)
#pragma warning(pop)
#endif