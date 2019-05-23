// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/proxy_config.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/proxy_config.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ProxyRulesType value) {
  switch(value) {
    case ProxyRulesType::EMPTY:
      return os << "ProxyRulesType::EMPTY";
    case ProxyRulesType::PROXY_LIST:
      return os << "ProxyRulesType::PROXY_LIST";
    case ProxyRulesType::PROXY_LIST_PER_SCHEME:
      return os << "ProxyRulesType::PROXY_LIST_PER_SCHEME";
    default:
      return os << "Unknown ProxyRulesType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool ProxyBypassRules_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyBypassRules_Data* object = static_cast<const ProxyBypassRules_Data*>(data);

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
          object->rules, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams rules_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->rules, validation_context,
                                         &rules_validate_params)) {
    return false;
  }

  return true;
}

ProxyBypassRules_Data::ProxyBypassRules_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyList_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyList_Data* object = static_cast<const ProxyList_Data*>(data);

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
          object->proxies, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams proxies_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->proxies, validation_context,
                                         &proxies_validate_params)) {
    return false;
  }

  return true;
}

ProxyList_Data::ProxyList_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyRules_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyRules_Data* object = static_cast<const ProxyRules_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 64 }};

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
          object->bypass_rules, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bypass_rules, validation_context))
    return false;


  if (!::network::mojom::internal::ProxyRulesType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->single_proxies, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->single_proxies, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->proxies_for_http, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->proxies_for_http, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->proxies_for_https, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->proxies_for_https, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->proxies_for_ftp, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->proxies_for_ftp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fallback_proxies, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->fallback_proxies, validation_context))
    return false;

  return true;
}

ProxyRules_Data::ProxyRules_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyConfig_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyConfig_Data* object = static_cast<const ProxyConfig_Data*>(data);

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
          object->pac_url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->pac_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->proxy_rules, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->proxy_rules, validation_context))
    return false;

  return true;
}

ProxyConfig_Data::ProxyConfig_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif