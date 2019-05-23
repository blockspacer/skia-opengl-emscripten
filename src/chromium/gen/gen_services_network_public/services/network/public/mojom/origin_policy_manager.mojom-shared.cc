// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/origin_policy_manager.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/origin_policy_manager.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, OriginPolicyState value) {
  switch(value) {
    case OriginPolicyState::kLoaded:
      return os << "OriginPolicyState::kLoaded";
    case OriginPolicyState::kCannotLoadPolicy:
      return os << "OriginPolicyState::kCannotLoadPolicy";
    case OriginPolicyState::kInvalidRedirect:
      return os << "OriginPolicyState::kInvalidRedirect";
    case OriginPolicyState::kNoPolicyApplies:
      return os << "OriginPolicyState::kNoPolicyApplies";
    case OriginPolicyState::kOther:
      return os << "OriginPolicyState::kOther";
    default:
      return os << "Unknown OriginPolicyState value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool OriginPolicyContents_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const OriginPolicyContents_Data* object = static_cast<const OriginPolicyContents_Data*>(data);

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
          object->features, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams features_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->features, validation_context,
                                         &features_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->content_security_policies, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams content_security_policies_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->content_security_policies, validation_context,
                                         &content_security_policies_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->content_security_policies_report_only, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams content_security_policies_report_only_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->content_security_policies_report_only, validation_context,
                                         &content_security_policies_report_only_validate_params)) {
    return false;
  }

  return true;
}

OriginPolicyContents_Data::OriginPolicyContents_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool OriginPolicy_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const OriginPolicy_Data* object = static_cast<const OriginPolicy_Data*>(data);

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


  if (!::network::mojom::internal::OriginPolicyState_Data
        ::Validate(object->state, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->policy_url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->policy_url, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->contents, validation_context))
    return false;

  return true;
}

OriginPolicy_Data::OriginPolicy_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif