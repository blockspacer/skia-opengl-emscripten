// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, BackgroundSyncError value) {
  switch(value) {
    case BackgroundSyncError::NONE:
      return os << "BackgroundSyncError::NONE";
    case BackgroundSyncError::STORAGE:
      return os << "BackgroundSyncError::STORAGE";
    case BackgroundSyncError::NOT_FOUND:
      return os << "BackgroundSyncError::NOT_FOUND";
    case BackgroundSyncError::NO_SERVICE_WORKER:
      return os << "BackgroundSyncError::NO_SERVICE_WORKER";
    case BackgroundSyncError::NOT_ALLOWED:
      return os << "BackgroundSyncError::NOT_ALLOWED";
    case BackgroundSyncError::PERMISSION_DENIED:
      return os << "BackgroundSyncError::{PERMISSION_DENIED, MAX}";
    default:
      return os << "Unknown BackgroundSyncError value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BackgroundSyncState value) {
  switch(value) {
    case BackgroundSyncState::PENDING:
      return os << "BackgroundSyncState::PENDING";
    case BackgroundSyncState::FIRING:
      return os << "BackgroundSyncState::FIRING";
    case BackgroundSyncState::REREGISTERED_WHILE_FIRING:
      return os << "BackgroundSyncState::REREGISTERED_WHILE_FIRING";
    default:
      return os << "Unknown BackgroundSyncState value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BackgroundSyncEventLastChance value) {
  switch(value) {
    case BackgroundSyncEventLastChance::IS_NOT_LAST_CHANCE:
      return os << "BackgroundSyncEventLastChance::IS_NOT_LAST_CHANCE";
    case BackgroundSyncEventLastChance::IS_LAST_CHANCE:
      return os << "BackgroundSyncEventLastChance::IS_LAST_CHANCE";
    default:
      return os << "Unknown BackgroundSyncEventLastChance value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BackgroundSyncType value) {
  switch(value) {
    case BackgroundSyncType::ONE_SHOT:
      return os << "BackgroundSyncType::ONE_SHOT";
    case BackgroundSyncType::PERIODIC:
      return os << "BackgroundSyncType::PERIODIC";
    default:
      return os << "Unknown BackgroundSyncType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool SyncRegistrationOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SyncRegistrationOptions_Data* object = static_cast<const SyncRegistrationOptions_Data*>(data);

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
          object->tag, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams tag_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->tag, validation_context,
                                         &tag_validate_params)) {
    return false;
  }

  return true;
}

SyncRegistrationOptions_Data::SyncRegistrationOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundSyncRegistrationInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncRegistrationInfo_Data* object = static_cast<const BackgroundSyncRegistrationInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

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
          object->tag, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams tag_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->tag, validation_context,
                                         &tag_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::BackgroundSyncType_Data
        ::Validate(object->sync_type, validation_context))
    return false;

  return true;
}

BackgroundSyncRegistrationInfo_Data::BackgroundSyncRegistrationInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundSyncService_Register_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_Register_Params_Data* object = static_cast<const BackgroundSyncService_Register_Params_Data*>(data);

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
          object->options, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

BackgroundSyncService_Register_Params_Data::BackgroundSyncService_Register_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundSyncService_Register_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_Register_ResponseParams_Data* object = static_cast<const BackgroundSyncService_Register_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::BackgroundSyncError_Data
        ::Validate(object->err, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->options, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

BackgroundSyncService_Register_ResponseParams_Data::BackgroundSyncService_Register_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundSyncService_DidResolveRegistration_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_DidResolveRegistration_Params_Data* object = static_cast<const BackgroundSyncService_DidResolveRegistration_Params_Data*>(data);

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
          object->registration_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->registration_info, validation_context))
    return false;

  return true;
}

BackgroundSyncService_DidResolveRegistration_Params_Data::BackgroundSyncService_DidResolveRegistration_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundSyncService_GetRegistrations_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_GetRegistrations_Params_Data* object = static_cast<const BackgroundSyncService_GetRegistrations_Params_Data*>(data);

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

BackgroundSyncService_GetRegistrations_Params_Data::BackgroundSyncService_GetRegistrations_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundSyncService_GetRegistrations_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_GetRegistrations_ResponseParams_Data* object = static_cast<const BackgroundSyncService_GetRegistrations_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::BackgroundSyncError_Data
        ::Validate(object->err, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->registrations, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams registrations_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->registrations, validation_context,
                                         &registrations_validate_params)) {
    return false;
  }

  return true;
}

BackgroundSyncService_GetRegistrations_ResponseParams_Data::BackgroundSyncService_GetRegistrations_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif