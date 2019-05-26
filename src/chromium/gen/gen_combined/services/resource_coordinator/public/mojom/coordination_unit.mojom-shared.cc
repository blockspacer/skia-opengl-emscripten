// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-params-data.h"
namespace resource_coordinator {
namespace mojom {

std::ostream& operator<<(std::ostream& os, CoordinationUnitType value) {
  switch(value) {
    case CoordinationUnitType::kFrame:
      return os << "CoordinationUnitType::kFrame";
    case CoordinationUnitType::kPage:
      return os << "CoordinationUnitType::kPage";
    case CoordinationUnitType::kProcess:
      return os << "CoordinationUnitType::kProcess";
    case CoordinationUnitType::kSystem:
      return os << "CoordinationUnitType::kSystem";
    default:
      return os << "Unknown CoordinationUnitType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, InterventionPolicy value) {
  switch(value) {
    case InterventionPolicy::kUnknown:
      return os << "InterventionPolicy::kUnknown";
    case InterventionPolicy::kOptIn:
      return os << "InterventionPolicy::kOptIn";
    case InterventionPolicy::kOptOut:
      return os << "InterventionPolicy::kOptOut";
    case InterventionPolicy::kDefault:
      return os << "InterventionPolicy::kDefault";
    default:
      return os << "Unknown InterventionPolicy value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PolicyControlledIntervention value) {
  switch(value) {
    case PolicyControlledIntervention::kPageLifecycleTransitions:
      return os << "PolicyControlledIntervention::kPageLifecycleTransitions";
    default:
      return os << "Unknown PolicyControlledIntervention value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data* object = static_cast<const DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data*>(data);

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

DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data::DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DocumentCoordinationUnit_SetLifecycleState_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DocumentCoordinationUnit_SetLifecycleState_Params_Data* object = static_cast<const DocumentCoordinationUnit_SetLifecycleState_Params_Data*>(data);

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


  if (!::resource_coordinator::mojom::internal::LifecycleState_Data
        ::Validate(object->state, validation_context))
    return false;

  return true;
}

DocumentCoordinationUnit_SetLifecycleState_Params_Data::DocumentCoordinationUnit_SetLifecycleState_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data* object = static_cast<const DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data*>(data);

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

DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data::DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DocumentCoordinationUnit_SetInterventionPolicy_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DocumentCoordinationUnit_SetInterventionPolicy_Params_Data* object = static_cast<const DocumentCoordinationUnit_SetInterventionPolicy_Params_Data*>(data);

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


  if (!::resource_coordinator::mojom::internal::PolicyControlledIntervention_Data
        ::Validate(object->intervention, validation_context))
    return false;


  if (!::resource_coordinator::mojom::internal::InterventionPolicy_Data
        ::Validate(object->policy, validation_context))
    return false;

  return true;
}

DocumentCoordinationUnit_SetInterventionPolicy_Params_Data::DocumentCoordinationUnit_SetInterventionPolicy_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DocumentCoordinationUnit_SetIsAdFrame_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DocumentCoordinationUnit_SetIsAdFrame_Params_Data* object = static_cast<const DocumentCoordinationUnit_SetIsAdFrame_Params_Data*>(data);

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

DocumentCoordinationUnit_SetIsAdFrame_Params_Data::DocumentCoordinationUnit_SetIsAdFrame_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* object = static_cast<const DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data*>(data);

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

DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data::DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* object = static_cast<const ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data*>(data);

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
          object->duration, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->duration, validation_context))
    return false;

  return true;
}

ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* object = static_cast<const ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data*>(data);

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

ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#if defined(_MSC_VER)
#pragma warning(pop)
#endif