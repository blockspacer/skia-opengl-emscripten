// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/cors_origin_pattern.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/cors_origin_pattern.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, CorsOriginAccessMatchMode value) {
  switch(value) {
    case CorsOriginAccessMatchMode::kAllowSubdomains:
      return os << "CorsOriginAccessMatchMode::kAllowSubdomains";
    case CorsOriginAccessMatchMode::kAllowRegistrableDomains:
      return os << "CorsOriginAccessMatchMode::kAllowRegistrableDomains";
    case CorsOriginAccessMatchMode::kDisallowSubdomains:
      return os << "CorsOriginAccessMatchMode::kDisallowSubdomains";
    default:
      return os << "Unknown CorsOriginAccessMatchMode value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CorsOriginAccessMatchPriority value) {
  switch(value) {
    case CorsOriginAccessMatchPriority::kNoMatchingOrigin:
      return os << "CorsOriginAccessMatchPriority::kNoMatchingOrigin";
    case CorsOriginAccessMatchPriority::kDefaultPriority:
      return os << "CorsOriginAccessMatchPriority::kDefaultPriority";
    case CorsOriginAccessMatchPriority::kLowPriority:
      return os << "CorsOriginAccessMatchPriority::kLowPriority";
    case CorsOriginAccessMatchPriority::kMediumPriority:
      return os << "CorsOriginAccessMatchPriority::kMediumPriority";
    case CorsOriginAccessMatchPriority::kHighPriority:
      return os << "CorsOriginAccessMatchPriority::kHighPriority";
    case CorsOriginAccessMatchPriority::kMaxPriority:
      return os << "CorsOriginAccessMatchPriority::kMaxPriority";
    default:
      return os << "Unknown CorsOriginAccessMatchPriority value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool CorsOriginPattern_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CorsOriginPattern_Data* object = static_cast<const CorsOriginPattern_Data*>(data);

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
          object->protocol, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams protocol_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->protocol, validation_context,
                                         &protocol_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->domain, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams domain_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->domain, validation_context,
                                         &domain_validate_params)) {
    return false;
  }


  if (!::network::mojom::internal::CorsOriginAccessMatchMode_Data
        ::Validate(object->mode, validation_context))
    return false;


  if (!::network::mojom::internal::CorsOriginAccessMatchPriority_Data
        ::Validate(object->priority, validation_context))
    return false;

  return true;
}

CorsOriginPattern_Data::CorsOriginPattern_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CorsOriginAccessPatterns_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CorsOriginAccessPatterns_Data* object = static_cast<const CorsOriginAccessPatterns_Data*>(data);

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
          object->source_origin, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_origin_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_origin, validation_context,
                                         &source_origin_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->allow_patterns, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams allow_patterns_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->allow_patterns, validation_context,
                                         &allow_patterns_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->block_patterns, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams block_patterns_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->block_patterns, validation_context,
                                         &block_patterns_validate_params)) {
    return false;
  }

  return true;
}

CorsOriginAccessPatterns_Data::CorsOriginAccessPatterns_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif