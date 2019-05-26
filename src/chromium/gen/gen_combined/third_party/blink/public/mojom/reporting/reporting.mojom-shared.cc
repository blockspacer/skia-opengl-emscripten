// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/reporting/reporting.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/reporting/reporting.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool ReportingServiceProxy_QueueInterventionReport_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ReportingServiceProxy_QueueInterventionReport_Params_Data* object = static_cast<const ReportingServiceProxy_QueueInterventionReport_Params_Data*>(data);

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

  const mojo::internal::ContainerValidateParams source_file_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_file, validation_context,
                                         &source_file_validate_params)) {
    return false;
  }

  return true;
}

ReportingServiceProxy_QueueInterventionReport_Params_Data::ReportingServiceProxy_QueueInterventionReport_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ReportingServiceProxy_QueueDeprecationReport_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ReportingServiceProxy_QueueDeprecationReport_Params_Data* object = static_cast<const ReportingServiceProxy_QueueDeprecationReport_Params_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->anticipatedRemoval, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams source_file_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_file, validation_context,
                                         &source_file_validate_params)) {
    return false;
  }

  return true;
}

ReportingServiceProxy_QueueDeprecationReport_Params_Data::ReportingServiceProxy_QueueDeprecationReport_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ReportingServiceProxy_QueueCspViolationReport_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ReportingServiceProxy_QueueCspViolationReport_Params_Data* object = static_cast<const ReportingServiceProxy_QueueCspViolationReport_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 104 }};

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
          object->group, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams group_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->group, validation_context,
                                         &group_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->document_url, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams document_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->document_url, validation_context,
                                         &document_url_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams referrer_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->referrer, validation_context,
                                         &referrer_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams blocked_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->blocked_url, validation_context,
                                         &blocked_url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->effective_directive, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams effective_directive_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->effective_directive, validation_context,
                                         &effective_directive_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->original_policy, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams original_policy_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->original_policy, validation_context,
                                         &original_policy_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams source_file_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_file, validation_context,
                                         &source_file_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams script_sample_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->script_sample, validation_context,
                                         &script_sample_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->disposition, 10, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams disposition_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->disposition, validation_context,
                                         &disposition_validate_params)) {
    return false;
  }

  return true;
}

ReportingServiceProxy_QueueCspViolationReport_Params_Data::ReportingServiceProxy_QueueCspViolationReport_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data* object = static_cast<const ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data*>(data);

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
          object->url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->policy_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams policy_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->policy_id, validation_context,
                                         &policy_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->disposition, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams disposition_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->disposition, validation_context,
                                         &disposition_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams source_file_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_file, validation_context,
                                         &source_file_validate_params)) {
    return false;
  }

  return true;
}

ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data::ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif