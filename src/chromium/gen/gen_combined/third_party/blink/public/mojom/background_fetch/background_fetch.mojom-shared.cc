// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, BackgroundFetchError value) {
  switch(value) {
    case BackgroundFetchError::NONE:
      return os << "BackgroundFetchError::NONE";
    case BackgroundFetchError::DUPLICATED_DEVELOPER_ID:
      return os << "BackgroundFetchError::DUPLICATED_DEVELOPER_ID";
    case BackgroundFetchError::INVALID_ARGUMENT:
      return os << "BackgroundFetchError::INVALID_ARGUMENT";
    case BackgroundFetchError::INVALID_ID:
      return os << "BackgroundFetchError::INVALID_ID";
    case BackgroundFetchError::STORAGE_ERROR:
      return os << "BackgroundFetchError::STORAGE_ERROR";
    case BackgroundFetchError::SERVICE_WORKER_UNAVAILABLE:
      return os << "BackgroundFetchError::SERVICE_WORKER_UNAVAILABLE";
    case BackgroundFetchError::QUOTA_EXCEEDED:
      return os << "BackgroundFetchError::QUOTA_EXCEEDED";
    case BackgroundFetchError::PERMISSION_DENIED:
      return os << "BackgroundFetchError::PERMISSION_DENIED";
    case BackgroundFetchError::REGISTRATION_LIMIT_EXCEEDED:
      return os << "BackgroundFetchError::REGISTRATION_LIMIT_EXCEEDED";
    default:
      return os << "Unknown BackgroundFetchError value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BackgroundFetchResult value) {
  switch(value) {
    case BackgroundFetchResult::UNSET:
      return os << "BackgroundFetchResult::UNSET";
    case BackgroundFetchResult::FAILURE:
      return os << "BackgroundFetchResult::FAILURE";
    case BackgroundFetchResult::SUCCESS:
      return os << "BackgroundFetchResult::SUCCESS";
    default:
      return os << "Unknown BackgroundFetchResult value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BackgroundFetchFailureReason value) {
  switch(value) {
    case BackgroundFetchFailureReason::NONE:
      return os << "BackgroundFetchFailureReason::NONE";
    case BackgroundFetchFailureReason::CANCELLED_FROM_UI:
      return os << "BackgroundFetchFailureReason::CANCELLED_FROM_UI";
    case BackgroundFetchFailureReason::CANCELLED_BY_DEVELOPER:
      return os << "BackgroundFetchFailureReason::CANCELLED_BY_DEVELOPER";
    case BackgroundFetchFailureReason::BAD_STATUS:
      return os << "BackgroundFetchFailureReason::BAD_STATUS";
    case BackgroundFetchFailureReason::FETCH_ERROR:
      return os << "BackgroundFetchFailureReason::FETCH_ERROR";
    case BackgroundFetchFailureReason::SERVICE_WORKER_UNAVAILABLE:
      return os << "BackgroundFetchFailureReason::SERVICE_WORKER_UNAVAILABLE";
    case BackgroundFetchFailureReason::QUOTA_EXCEEDED:
      return os << "BackgroundFetchFailureReason::QUOTA_EXCEEDED";
    case BackgroundFetchFailureReason::DOWNLOAD_TOTAL_EXCEEDED:
      return os << "BackgroundFetchFailureReason::DOWNLOAD_TOTAL_EXCEEDED";
    default:
      return os << "Unknown BackgroundFetchFailureReason value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool BackgroundFetchSettledFetch_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchSettledFetch_Data* object = static_cast<const BackgroundFetchSettledFetch_Data*>(data);

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
          object->request, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->response, validation_context))
    return false;

  return true;
}

BackgroundFetchSettledFetch_Data::BackgroundFetchSettledFetch_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchOptions_Data* object = static_cast<const BackgroundFetchOptions_Data*>(data);

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
          object->icons, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams icons_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->icons, validation_context,
                                         &icons_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->title, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams title_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->title, validation_context,
                                         &title_validate_params)) {
    return false;
  }

  return true;
}

BackgroundFetchOptions_Data::BackgroundFetchOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationData_Data* object = static_cast<const BackgroundFetchRegistrationData_Data*>(data);

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
          object->developer_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams developer_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->developer_id, validation_context,
                                         &developer_id_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::BackgroundFetchResult_Data
        ::Validate(object->result, validation_context))
    return false;


  if (!::blink::mojom::internal::BackgroundFetchFailureReason_Data
        ::Validate(object->failure_reason, validation_context))
    return false;

  return true;
}

BackgroundFetchRegistrationData_Data::BackgroundFetchRegistrationData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistration_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistration_Data* object = static_cast<const BackgroundFetchRegistration_Data*>(data);

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
          object->registration_data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->registration_data, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->registration_interface, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->registration_interface,
                                                 validation_context)) {
    return false;
  }

  return true;
}

BackgroundFetchRegistration_Data::BackgroundFetchRegistration_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchUkmData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchUkmData_Data* object = static_cast<const BackgroundFetchUkmData_Data*>(data);

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

BackgroundFetchUkmData_Data::BackgroundFetchUkmData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationObserver_OnProgress_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationObserver_OnProgress_Params_Data* object = static_cast<const BackgroundFetchRegistrationObserver_OnProgress_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

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


  if (!::blink::mojom::internal::BackgroundFetchResult_Data
        ::Validate(object->result, validation_context))
    return false;


  if (!::blink::mojom::internal::BackgroundFetchFailureReason_Data
        ::Validate(object->failure_reason, validation_context))
    return false;

  return true;
}

BackgroundFetchRegistrationObserver_OnProgress_Params_Data::BackgroundFetchRegistrationObserver_OnProgress_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data* object = static_cast<const BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data*>(data);

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

BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data::BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data* object = static_cast<const BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data*>(data);

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
          object->request, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->response, validation_context))
    return false;

  return true;
}

BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data::BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchService_Fetch_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchService_Fetch_Params_Data* object = static_cast<const BackgroundFetchService_Fetch_Params_Data*>(data);

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
          object->developer_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams developer_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->developer_id, validation_context,
                                         &developer_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->requests, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams requests_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->requests, validation_context,
                                         &requests_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->options, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->icon, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ukm_data, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->ukm_data, validation_context))
    return false;

  return true;
}

BackgroundFetchService_Fetch_Params_Data::BackgroundFetchService_Fetch_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchService_Fetch_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchService_Fetch_ResponseParams_Data* object = static_cast<const BackgroundFetchService_Fetch_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::BackgroundFetchError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->registration, validation_context))
    return false;

  return true;
}

BackgroundFetchService_Fetch_ResponseParams_Data::BackgroundFetchService_Fetch_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchService_GetRegistration_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchService_GetRegistration_Params_Data* object = static_cast<const BackgroundFetchService_GetRegistration_Params_Data*>(data);

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
          object->developer_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams developer_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->developer_id, validation_context,
                                         &developer_id_validate_params)) {
    return false;
  }

  return true;
}

BackgroundFetchService_GetRegistration_Params_Data::BackgroundFetchService_GetRegistration_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchService_GetRegistration_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchService_GetRegistration_ResponseParams_Data* object = static_cast<const BackgroundFetchService_GetRegistration_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::BackgroundFetchError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->registration, validation_context))
    return false;

  return true;
}

BackgroundFetchService_GetRegistration_ResponseParams_Data::BackgroundFetchService_GetRegistration_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchService_GetDeveloperIds_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchService_GetDeveloperIds_Params_Data* object = static_cast<const BackgroundFetchService_GetDeveloperIds_Params_Data*>(data);

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

BackgroundFetchService_GetDeveloperIds_Params_Data::BackgroundFetchService_GetDeveloperIds_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchService_GetDeveloperIds_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchService_GetDeveloperIds_ResponseParams_Data* object = static_cast<const BackgroundFetchService_GetDeveloperIds_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::BackgroundFetchError_Data
        ::Validate(object->error, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->developer_ids, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams developer_ids_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->developer_ids, validation_context,
                                         &developer_ids_validate_params)) {
    return false;
  }

  return true;
}

BackgroundFetchService_GetDeveloperIds_ResponseParams_Data::BackgroundFetchService_GetDeveloperIds_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchService_GetIconDisplaySize_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchService_GetIconDisplaySize_Params_Data* object = static_cast<const BackgroundFetchService_GetIconDisplaySize_Params_Data*>(data);

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

BackgroundFetchService_GetIconDisplaySize_Params_Data::BackgroundFetchService_GetIconDisplaySize_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data* object = static_cast<const BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data*>(data);

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
          object->icon_size_pixels, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->icon_size_pixels, validation_context))
    return false;

  return true;
}

BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data::BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationService_UpdateUI_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationService_UpdateUI_Params_Data* object = static_cast<const BackgroundFetchRegistrationService_UpdateUI_Params_Data*>(data);

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

  const mojo::internal::ContainerValidateParams title_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->title, validation_context,
                                         &title_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->icon, validation_context))
    return false;

  return true;
}

BackgroundFetchRegistrationService_UpdateUI_Params_Data::BackgroundFetchRegistrationService_UpdateUI_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data* object = static_cast<const BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::BackgroundFetchError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data::BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationService_Abort_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationService_Abort_Params_Data* object = static_cast<const BackgroundFetchRegistrationService_Abort_Params_Data*>(data);

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

BackgroundFetchRegistrationService_Abort_Params_Data::BackgroundFetchRegistrationService_Abort_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationService_Abort_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationService_Abort_ResponseParams_Data* object = static_cast<const BackgroundFetchRegistrationService_Abort_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::BackgroundFetchError_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

BackgroundFetchRegistrationService_Abort_ResponseParams_Data::BackgroundFetchRegistrationService_Abort_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationService_MatchRequests_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationService_MatchRequests_Params_Data* object = static_cast<const BackgroundFetchRegistrationService_MatchRequests_Params_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->request_to_match, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->cache_query_options, validation_context))
    return false;

  return true;
}

BackgroundFetchRegistrationService_MatchRequests_Params_Data::BackgroundFetchRegistrationService_MatchRequests_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data* object = static_cast<const BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data*>(data);

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
          object->fetches, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams fetches_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->fetches, validation_context,
                                         &fetches_validate_params)) {
    return false;
  }

  return true;
}

BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data::BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data* object = static_cast<const BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->observer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data::BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif