// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, WebContentSecurityPolicyType value) {
  switch(value) {
    case WebContentSecurityPolicyType::WebContentSecurityPolicyTypeReport:
      return os << "WebContentSecurityPolicyType::WebContentSecurityPolicyTypeReport";
    case WebContentSecurityPolicyType::WebContentSecurityPolicyTypeEnforce:
      return os << "WebContentSecurityPolicyType::WebContentSecurityPolicyTypeEnforce";
    default:
      return os << "Unknown WebContentSecurityPolicyType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool SourceLocation_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SourceLocation_Data* object = static_cast<const SourceLocation_Data*>(data);

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
  const mojo::internal::ContainerValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->url, validation_context,
                                         &url_validate_params)) {
    return false;
  }

  return true;
}

SourceLocation_Data::SourceLocation_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CSPViolationParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CSPViolationParams_Data* object = static_cast<const CSPViolationParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 72 }};

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
          object->directive, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams directive_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->directive, validation_context,
                                         &directive_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->effective_directive, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams effective_directive_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->effective_directive, validation_context,
                                         &effective_directive_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->console_message, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams console_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->console_message, validation_context,
                                         &console_message_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->blocked_url, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams blocked_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->blocked_url, validation_context,
                                         &blocked_url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->report_endpoints, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams report_endpoints_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->report_endpoints, validation_context,
                                         &report_endpoints_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->header, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams header_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->header, validation_context,
                                         &header_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::WebContentSecurityPolicyType_Data
        ::Validate(object->disposition, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source_location, 10, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->source_location, validation_context))
    return false;

  return true;
}

CSPViolationParams_Data::CSPViolationParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NavigationInitiator_SendViolationReport_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NavigationInitiator_SendViolationReport_Params_Data* object = static_cast<const NavigationInitiator_SendViolationReport_Params_Data*>(data);

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
          object->violation_params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->violation_params, validation_context))
    return false;

  return true;
}

NavigationInitiator_SendViolationReport_Params_Data::NavigationInitiator_SendViolationReport_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif