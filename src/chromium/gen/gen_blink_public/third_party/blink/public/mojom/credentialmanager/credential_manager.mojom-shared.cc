// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/credentialmanager/credential_manager.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/credentialmanager/credential_manager.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, CredentialType value) {
  switch(value) {
    case CredentialType::EMPTY:
      return os << "CredentialType::EMPTY";
    case CredentialType::PASSWORD:
      return os << "CredentialType::PASSWORD";
    case CredentialType::FEDERATED:
      return os << "CredentialType::FEDERATED";
    default:
      return os << "Unknown CredentialType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CredentialMediationRequirement value) {
  switch(value) {
    case CredentialMediationRequirement::kSilent:
      return os << "CredentialMediationRequirement::kSilent";
    case CredentialMediationRequirement::kOptional:
      return os << "CredentialMediationRequirement::kOptional";
    case CredentialMediationRequirement::kRequired:
      return os << "CredentialMediationRequirement::kRequired";
    default:
      return os << "Unknown CredentialMediationRequirement value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CredentialManagerError value) {
  switch(value) {
    case CredentialManagerError::SUCCESS:
      return os << "CredentialManagerError::SUCCESS";
    case CredentialManagerError::PENDING_REQUEST:
      return os << "CredentialManagerError::PENDING_REQUEST";
    case CredentialManagerError::PASSWORD_STORE_UNAVAILABLE:
      return os << "CredentialManagerError::PASSWORD_STORE_UNAVAILABLE";
    case CredentialManagerError::NOT_ALLOWED:
      return os << "CredentialManagerError::NOT_ALLOWED";
    case CredentialManagerError::INVALID_DOMAIN:
      return os << "CredentialManagerError::INVALID_DOMAIN";
    case CredentialManagerError::CREDENTIAL_EXCLUDED:
      return os << "CredentialManagerError::CREDENTIAL_EXCLUDED";
    case CredentialManagerError::CREDENTIAL_NOT_RECOGNIZED:
      return os << "CredentialManagerError::CREDENTIAL_NOT_RECOGNIZED";
    case CredentialManagerError::NOT_IMPLEMENTED:
      return os << "CredentialManagerError::NOT_IMPLEMENTED";
    case CredentialManagerError::NOT_FOCUSED:
      return os << "CredentialManagerError::NOT_FOCUSED";
    case CredentialManagerError::RESIDENT_CREDENTIALS_UNSUPPORTED:
      return os << "CredentialManagerError::RESIDENT_CREDENTIALS_UNSUPPORTED";
    case CredentialManagerError::PROTECTION_POLICY_INCONSISTENT:
      return os << "CredentialManagerError::PROTECTION_POLICY_INCONSISTENT";
    case CredentialManagerError::ANDROID_ALGORITHM_UNSUPPORTED:
      return os << "CredentialManagerError::ANDROID_ALGORITHM_UNSUPPORTED";
    case CredentialManagerError::ANDROID_EMPTY_ALLOW_CREDENTIALS:
      return os << "CredentialManagerError::ANDROID_EMPTY_ALLOW_CREDENTIALS";
    case CredentialManagerError::ANDROID_NOT_SUPPORTED_ERROR:
      return os << "CredentialManagerError::ANDROID_NOT_SUPPORTED_ERROR";
    case CredentialManagerError::ANDROID_USER_VERIFICATION_UNSUPPORTED:
      return os << "CredentialManagerError::ANDROID_USER_VERIFICATION_UNSUPPORTED";
    case CredentialManagerError::ABORT:
      return os << "CredentialManagerError::ABORT";
    case CredentialManagerError::UNKNOWN:
      return os << "CredentialManagerError::UNKNOWN";
    default:
      return os << "Unknown CredentialManagerError value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool CredentialInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CredentialInfo_Data* object = static_cast<const CredentialInfo_Data*>(data);

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


  if (!::blink::mojom::internal::CredentialType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->name, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->icon, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->icon, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->password, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->federation, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->federation, validation_context))
    return false;

  return true;
}

CredentialInfo_Data::CredentialInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CredentialManager_Store_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CredentialManager_Store_Params_Data* object = static_cast<const CredentialManager_Store_Params_Data*>(data);

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
          object->credential, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->credential, validation_context))
    return false;

  return true;
}

CredentialManager_Store_Params_Data::CredentialManager_Store_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CredentialManager_Store_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CredentialManager_Store_ResponseParams_Data* object = static_cast<const CredentialManager_Store_ResponseParams_Data*>(data);

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

CredentialManager_Store_ResponseParams_Data::CredentialManager_Store_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CredentialManager_PreventSilentAccess_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CredentialManager_PreventSilentAccess_Params_Data* object = static_cast<const CredentialManager_PreventSilentAccess_Params_Data*>(data);

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

CredentialManager_PreventSilentAccess_Params_Data::CredentialManager_PreventSilentAccess_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CredentialManager_PreventSilentAccess_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CredentialManager_PreventSilentAccess_ResponseParams_Data* object = static_cast<const CredentialManager_PreventSilentAccess_ResponseParams_Data*>(data);

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

CredentialManager_PreventSilentAccess_ResponseParams_Data::CredentialManager_PreventSilentAccess_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CredentialManager_Get_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CredentialManager_Get_Params_Data* object = static_cast<const CredentialManager_Get_Params_Data*>(data);

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


  if (!::blink::mojom::internal::CredentialMediationRequirement_Data
        ::Validate(object->mediation, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->federations, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams federations_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->federations, validation_context,
                                         &federations_validate_params)) {
    return false;
  }

  return true;
}

CredentialManager_Get_Params_Data::CredentialManager_Get_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CredentialManager_Get_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CredentialManager_Get_ResponseParams_Data* object = static_cast<const CredentialManager_Get_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::CredentialManagerError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->credential, validation_context))
    return false;

  return true;
}

CredentialManager_Get_ResponseParams_Data::CredentialManager_Get_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif