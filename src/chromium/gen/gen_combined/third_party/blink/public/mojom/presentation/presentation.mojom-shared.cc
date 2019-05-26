// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/presentation/presentation.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/presentation/presentation.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ScreenAvailability value) {
  switch(value) {
    case ScreenAvailability::UNKNOWN:
      return os << "ScreenAvailability::UNKNOWN";
    case ScreenAvailability::UNAVAILABLE:
      return os << "ScreenAvailability::UNAVAILABLE";
    case ScreenAvailability::SOURCE_NOT_SUPPORTED:
      return os << "ScreenAvailability::SOURCE_NOT_SUPPORTED";
    case ScreenAvailability::DISABLED:
      return os << "ScreenAvailability::DISABLED";
    case ScreenAvailability::AVAILABLE:
      return os << "ScreenAvailability::AVAILABLE";
    default:
      return os << "Unknown ScreenAvailability value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PresentationConnectionState value) {
  switch(value) {
    case PresentationConnectionState::CONNECTING:
      return os << "PresentationConnectionState::CONNECTING";
    case PresentationConnectionState::CONNECTED:
      return os << "PresentationConnectionState::CONNECTED";
    case PresentationConnectionState::CLOSED:
      return os << "PresentationConnectionState::CLOSED";
    case PresentationConnectionState::TERMINATED:
      return os << "PresentationConnectionState::TERMINATED";
    default:
      return os << "Unknown PresentationConnectionState value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PresentationConnectionCloseReason value) {
  switch(value) {
    case PresentationConnectionCloseReason::CONNECTION_ERROR:
      return os << "PresentationConnectionCloseReason::CONNECTION_ERROR";
    case PresentationConnectionCloseReason::CLOSED:
      return os << "PresentationConnectionCloseReason::CLOSED";
    case PresentationConnectionCloseReason::WENT_AWAY:
      return os << "PresentationConnectionCloseReason::WENT_AWAY";
    default:
      return os << "Unknown PresentationConnectionCloseReason value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PresentationErrorType value) {
  switch(value) {
    case PresentationErrorType::NO_AVAILABLE_SCREENS:
      return os << "PresentationErrorType::NO_AVAILABLE_SCREENS";
    case PresentationErrorType::PRESENTATION_REQUEST_CANCELLED:
      return os << "PresentationErrorType::PRESENTATION_REQUEST_CANCELLED";
    case PresentationErrorType::NO_PRESENTATION_FOUND:
      return os << "PresentationErrorType::NO_PRESENTATION_FOUND";
    case PresentationErrorType::PREVIOUS_START_IN_PROGRESS:
      return os << "PresentationErrorType::PREVIOUS_START_IN_PROGRESS";
    case PresentationErrorType::UNKNOWN:
      return os << "PresentationErrorType::UNKNOWN";
    default:
      return os << "Unknown PresentationErrorType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool PresentationConnectionMessage_Data::Validate(
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

  const PresentationConnectionMessage_Data* object = static_cast<const PresentationConnectionMessage_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case PresentationConnectionMessage_Tag::MESSAGE: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_message, 1, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams message_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_message, validation_context,
                                             &message_validate_params)) {
        return false;
      }
      return true;
    }
    case PresentationConnectionMessage_Tag::DATA: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_data, 2, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams data_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_data, validation_context,
                                             &data_validate_params)) {
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in PresentationConnectionMessage");
      return false;
    }
  }
}


// static
bool PresentationInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationInfo_Data* object = static_cast<const PresentationInfo_Data*>(data);

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
          object->url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  return true;
}

PresentationInfo_Data::PresentationInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationError_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationError_Data* object = static_cast<const PresentationError_Data*>(data);

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


  if (!::blink::mojom::internal::PresentationErrorType_Data
        ::Validate(object->error_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  return true;
}

PresentationError_Data::PresentationError_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationConnectionResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationConnectionResult_Data* object = static_cast<const PresentationConnectionResult_Data*>(data);

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
          object->presentation_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->presentation_info, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->connection_ptr, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->connection_ptr,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->connection_request, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->connection_request,
                                                 validation_context)) {
    return false;
  }

  return true;
}

PresentationConnectionResult_Data::PresentationConnectionResult_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationConnection_OnMessage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationConnection_OnMessage_Params_Data* object = static_cast<const PresentationConnection_OnMessage_Params_Data*>(data);

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

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->message, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->message, validation_context))
    return false;

  return true;
}

PresentationConnection_OnMessage_Params_Data::PresentationConnection_OnMessage_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationConnection_DidChangeState_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationConnection_DidChangeState_Params_Data* object = static_cast<const PresentationConnection_DidChangeState_Params_Data*>(data);

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


  if (!::blink::mojom::internal::PresentationConnectionState_Data
        ::Validate(object->state, validation_context))
    return false;

  return true;
}

PresentationConnection_DidChangeState_Params_Data::PresentationConnection_DidChangeState_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationConnection_DidClose_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationConnection_DidClose_Params_Data* object = static_cast<const PresentationConnection_DidClose_Params_Data*>(data);

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


  if (!::blink::mojom::internal::PresentationConnectionCloseReason_Data
        ::Validate(object->reason, validation_context))
    return false;

  return true;
}

PresentationConnection_DidClose_Params_Data::PresentationConnection_DidClose_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_SetController_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_SetController_Params_Data* object = static_cast<const PresentationService_SetController_Params_Data*>(data);

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
          object->controller, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->controller,
                                                 validation_context)) {
    return false;
  }

  return true;
}

PresentationService_SetController_Params_Data::PresentationService_SetController_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_SetReceiver_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_SetReceiver_Params_Data* object = static_cast<const PresentationService_SetReceiver_Params_Data*>(data);

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
          object->receiver, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->receiver,
                                                 validation_context)) {
    return false;
  }

  return true;
}

PresentationService_SetReceiver_Params_Data::PresentationService_SetReceiver_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_SetDefaultPresentationUrls_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_SetDefaultPresentationUrls_Params_Data* object = static_cast<const PresentationService_SetDefaultPresentationUrls_Params_Data*>(data);

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
          object->presentation_urls, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams presentation_urls_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->presentation_urls, validation_context,
                                         &presentation_urls_validate_params)) {
    return false;
  }

  return true;
}

PresentationService_SetDefaultPresentationUrls_Params_Data::PresentationService_SetDefaultPresentationUrls_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_ListenForScreenAvailability_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_ListenForScreenAvailability_Params_Data* object = static_cast<const PresentationService_ListenForScreenAvailability_Params_Data*>(data);

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
          object->availability_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->availability_url, validation_context))
    return false;

  return true;
}

PresentationService_ListenForScreenAvailability_Params_Data::PresentationService_ListenForScreenAvailability_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_StopListeningForScreenAvailability_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_StopListeningForScreenAvailability_Params_Data* object = static_cast<const PresentationService_StopListeningForScreenAvailability_Params_Data*>(data);

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
          object->availability_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->availability_url, validation_context))
    return false;

  return true;
}

PresentationService_StopListeningForScreenAvailability_Params_Data::PresentationService_StopListeningForScreenAvailability_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_StartPresentation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_StartPresentation_Params_Data* object = static_cast<const PresentationService_StartPresentation_Params_Data*>(data);

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
          object->presentation_urls, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams presentation_urls_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->presentation_urls, validation_context,
                                         &presentation_urls_validate_params)) {
    return false;
  }

  return true;
}

PresentationService_StartPresentation_Params_Data::PresentationService_StartPresentation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_StartPresentation_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_StartPresentation_ResponseParams_Data* object = static_cast<const PresentationService_StartPresentation_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->error, validation_context))
    return false;

  return true;
}

PresentationService_StartPresentation_ResponseParams_Data::PresentationService_StartPresentation_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_ReconnectPresentation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_ReconnectPresentation_Params_Data* object = static_cast<const PresentationService_ReconnectPresentation_Params_Data*>(data);

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
          object->presentation_urls, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams presentation_urls_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->presentation_urls, validation_context,
                                         &presentation_urls_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentation_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->presentation_id, validation_context,
                                         &presentation_id_validate_params)) {
    return false;
  }

  return true;
}

PresentationService_ReconnectPresentation_Params_Data::PresentationService_ReconnectPresentation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_ReconnectPresentation_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_ReconnectPresentation_ResponseParams_Data* object = static_cast<const PresentationService_ReconnectPresentation_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->error, validation_context))
    return false;

  return true;
}

PresentationService_ReconnectPresentation_ResponseParams_Data::PresentationService_ReconnectPresentation_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_CloseConnection_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_CloseConnection_Params_Data* object = static_cast<const PresentationService_CloseConnection_Params_Data*>(data);

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
          object->presentation_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->presentation_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentation_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->presentation_id, validation_context,
                                         &presentation_id_validate_params)) {
    return false;
  }

  return true;
}

PresentationService_CloseConnection_Params_Data::PresentationService_CloseConnection_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationService_Terminate_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_Terminate_Params_Data* object = static_cast<const PresentationService_Terminate_Params_Data*>(data);

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
          object->presentation_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->presentation_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentation_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->presentation_id, validation_context,
                                         &presentation_id_validate_params)) {
    return false;
  }

  return true;
}

PresentationService_Terminate_Params_Data::PresentationService_Terminate_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationController_OnScreenAvailabilityUpdated_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationController_OnScreenAvailabilityUpdated_Params_Data* object = static_cast<const PresentationController_OnScreenAvailabilityUpdated_Params_Data*>(data);

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
          object->url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;


  if (!::blink::mojom::internal::ScreenAvailability_Data
        ::Validate(object->availability, validation_context))
    return false;

  return true;
}

PresentationController_OnScreenAvailabilityUpdated_Params_Data::PresentationController_OnScreenAvailabilityUpdated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationController_OnDefaultPresentationStarted_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationController_OnDefaultPresentationStarted_Params_Data* object = static_cast<const PresentationController_OnDefaultPresentationStarted_Params_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  return true;
}

PresentationController_OnDefaultPresentationStarted_Params_Data::PresentationController_OnDefaultPresentationStarted_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationController_OnConnectionStateChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationController_OnConnectionStateChanged_Params_Data* object = static_cast<const PresentationController_OnConnectionStateChanged_Params_Data*>(data);

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
          object->presentation_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->presentation_info, validation_context))
    return false;


  if (!::blink::mojom::internal::PresentationConnectionState_Data
        ::Validate(object->newState, validation_context))
    return false;

  return true;
}

PresentationController_OnConnectionStateChanged_Params_Data::PresentationController_OnConnectionStateChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationController_OnConnectionClosed_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationController_OnConnectionClosed_Params_Data* object = static_cast<const PresentationController_OnConnectionClosed_Params_Data*>(data);

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
          object->presentation_info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->presentation_info, validation_context))
    return false;


  if (!::blink::mojom::internal::PresentationConnectionCloseReason_Data
        ::Validate(object->reason, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  return true;
}

PresentationController_OnConnectionClosed_Params_Data::PresentationController_OnConnectionClosed_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PresentationReceiver_OnReceiverConnectionAvailable_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationReceiver_OnReceiverConnectionAvailable_Params_Data* object = static_cast<const PresentationReceiver_OnReceiverConnectionAvailable_Params_Data*>(data);

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
          object->info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->info, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->controller_connection, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->controller_connection,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->receiver_connection_request, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->receiver_connection_request,
                                                 validation_context)) {
    return false;
  }

  return true;
}

PresentationReceiver_OnReceiverConnectionAvailable_Params_Data::PresentationReceiver_OnReceiverConnectionAvailable_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif