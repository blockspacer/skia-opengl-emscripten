// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/cookie_manager.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/cookie_manager.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, CookiePriority value) {
  switch(value) {
    case CookiePriority::LOW:
      return os << "CookiePriority::LOW";
    case CookiePriority::MEDIUM:
      return os << "CookiePriority::MEDIUM";
    case CookiePriority::HIGH:
      return os << "CookiePriority::HIGH";
    default:
      return os << "Unknown CookiePriority value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CookieSameSite value) {
  switch(value) {
    case CookieSameSite::UNSPECIFIED:
      return os << "CookieSameSite::UNSPECIFIED";
    case CookieSameSite::NO_RESTRICTION:
      return os << "CookieSameSite::NO_RESTRICTION";
    case CookieSameSite::LAX_MODE:
      return os << "CookieSameSite::LAX_MODE";
    case CookieSameSite::STRICT_MODE:
      return os << "CookieSameSite::STRICT_MODE";
    case CookieSameSite::EXTENDED_MODE:
      return os << "CookieSameSite::EXTENDED_MODE";
    default:
      return os << "Unknown CookieSameSite value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CookieSameSiteContext value) {
  switch(value) {
    case CookieSameSiteContext::CROSS_SITE:
      return os << "CookieSameSiteContext::CROSS_SITE";
    case CookieSameSiteContext::SAME_SITE_LAX:
      return os << "CookieSameSiteContext::SAME_SITE_LAX";
    case CookieSameSiteContext::SAME_SITE_STRICT:
      return os << "CookieSameSiteContext::SAME_SITE_STRICT";
    default:
      return os << "Unknown CookieSameSiteContext value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CookieInclusionStatus value) {
  switch(value) {
    case CookieInclusionStatus::INCLUDE:
      return os << "CookieInclusionStatus::INCLUDE";
    case CookieInclusionStatus::EXCLUDE_HTTP_ONLY:
      return os << "CookieInclusionStatus::EXCLUDE_HTTP_ONLY";
    case CookieInclusionStatus::EXCLUDE_SECURE_ONLY:
      return os << "CookieInclusionStatus::EXCLUDE_SECURE_ONLY";
    case CookieInclusionStatus::EXCLUDE_DOMAIN_MISMATCH:
      return os << "CookieInclusionStatus::EXCLUDE_DOMAIN_MISMATCH";
    case CookieInclusionStatus::EXCLUDE_NOT_ON_PATH:
      return os << "CookieInclusionStatus::EXCLUDE_NOT_ON_PATH";
    case CookieInclusionStatus::EXCLUDE_SAMESITE_STRICT:
      return os << "CookieInclusionStatus::EXCLUDE_SAMESITE_STRICT";
    case CookieInclusionStatus::EXCLUDE_SAMESITE_LAX:
      return os << "CookieInclusionStatus::EXCLUDE_SAMESITE_LAX";
    case CookieInclusionStatus::EXCLUDE_SAMESITE_EXTENDED:
      return os << "CookieInclusionStatus::EXCLUDE_SAMESITE_EXTENDED";
    case CookieInclusionStatus::EXCLUDE_SAMESITE_UNSPECIFIED_TREATED_AS_LAX:
      return os << "CookieInclusionStatus::EXCLUDE_SAMESITE_UNSPECIFIED_TREATED_AS_LAX";
    case CookieInclusionStatus::EXCLUDE_SAMESITE_NONE_INSECURE:
      return os << "CookieInclusionStatus::EXCLUDE_SAMESITE_NONE_INSECURE";
    case CookieInclusionStatus::EXCLUDE_USER_PREFERENCES:
      return os << "CookieInclusionStatus::EXCLUDE_USER_PREFERENCES";
    case CookieInclusionStatus::EXCLUDE_FAILURE_TO_STORE:
      return os << "CookieInclusionStatus::EXCLUDE_FAILURE_TO_STORE";
    case CookieInclusionStatus::EXCLUDE_NONCOOKIEABLE_SCHEME:
      return os << "CookieInclusionStatus::EXCLUDE_NONCOOKIEABLE_SCHEME";
    case CookieInclusionStatus::EXCLUDE_OVERWRITE_SECURE:
      return os << "CookieInclusionStatus::EXCLUDE_OVERWRITE_SECURE";
    case CookieInclusionStatus::EXCLUDE_OVERWRITE_HTTP_ONLY:
      return os << "CookieInclusionStatus::EXCLUDE_OVERWRITE_HTTP_ONLY";
    case CookieInclusionStatus::EXCLUDE_INVALID_DOMAIN:
      return os << "CookieInclusionStatus::EXCLUDE_INVALID_DOMAIN";
    case CookieInclusionStatus::EXCLUDE_INVALID_PREFIX:
      return os << "CookieInclusionStatus::EXCLUDE_INVALID_PREFIX";
    case CookieInclusionStatus::EXCLUDE_UNKNOWN_ERROR:
      return os << "CookieInclusionStatus::EXCLUDE_UNKNOWN_ERROR";
    default:
      return os << "Unknown CookieInclusionStatus value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CookieChangeCause value) {
  switch(value) {
    case CookieChangeCause::INSERTED:
      return os << "CookieChangeCause::INSERTED";
    case CookieChangeCause::EXPLICIT:
      return os << "CookieChangeCause::EXPLICIT";
    case CookieChangeCause::UNKNOWN_DELETION:
      return os << "CookieChangeCause::UNKNOWN_DELETION";
    case CookieChangeCause::OVERWRITE:
      return os << "CookieChangeCause::OVERWRITE";
    case CookieChangeCause::EXPIRED:
      return os << "CookieChangeCause::EXPIRED";
    case CookieChangeCause::EVICTED:
      return os << "CookieChangeCause::EVICTED";
    case CookieChangeCause::EXPIRED_OVERWRITE:
      return os << "CookieChangeCause::EXPIRED_OVERWRITE";
    default:
      return os << "Unknown CookieChangeCause value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CookieDeletionSessionControl value) {
  switch(value) {
    case CookieDeletionSessionControl::IGNORE_CONTROL:
      return os << "CookieDeletionSessionControl::IGNORE_CONTROL";
    case CookieDeletionSessionControl::SESSION_COOKIES:
      return os << "CookieDeletionSessionControl::SESSION_COOKIES";
    case CookieDeletionSessionControl::PERSISTENT_COOKIES:
      return os << "CookieDeletionSessionControl::PERSISTENT_COOKIES";
    default:
      return os << "Unknown CookieDeletionSessionControl value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool CookieManagerParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManagerParams_Data* object = static_cast<const CookieManagerParams_Data*>(data);

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
          object->settings, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams settings_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->settings, validation_context,
                                         &settings_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->secure_origin_cookies_allowed_schemes, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams secure_origin_cookies_allowed_schemes_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->secure_origin_cookies_allowed_schemes, validation_context,
                                         &secure_origin_cookies_allowed_schemes_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->matching_scheme_cookies_allowed_schemes, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams matching_scheme_cookies_allowed_schemes_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->matching_scheme_cookies_allowed_schemes, validation_context,
                                         &matching_scheme_cookies_allowed_schemes_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->third_party_cookies_allowed_schemes, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams third_party_cookies_allowed_schemes_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->third_party_cookies_allowed_schemes, validation_context,
                                         &third_party_cookies_allowed_schemes_validate_params)) {
    return false;
  }

  return true;
}

CookieManagerParams_Data::CookieManagerParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieOptions_Data* object = static_cast<const CookieOptions_Data*>(data);

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


  if (!::network::mojom::internal::CookieSameSiteContext_Data
        ::Validate(object->same_site_cookie_context, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->server_time, validation_context))
    return false;

  return true;
}

CookieOptions_Data::CookieOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CanonicalCookie_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CanonicalCookie_Data* object = static_cast<const CanonicalCookie_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 80 }};

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
          object->name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->domain, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams domain_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->domain, validation_context,
                                         &domain_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->creation, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->creation, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->expiry, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->expiry, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->last_access, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->last_access, validation_context))
    return false;


  if (!::network::mojom::internal::CookieSameSite_Data
        ::Validate(object->site_restrictions, validation_context))
    return false;


  if (!::network::mojom::internal::CookiePriority_Data
        ::Validate(object->priority, validation_context))
    return false;

  return true;
}

CanonicalCookie_Data::CanonicalCookie_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieWithStatus_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieWithStatus_Data* object = static_cast<const CookieWithStatus_Data*>(data);

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
          object->cookie, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cookie, validation_context))
    return false;


  if (!::network::mojom::internal::CookieInclusionStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

CookieWithStatus_Data::CookieWithStatus_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieDeletionFilter_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieDeletionFilter_Data* object = static_cast<const CookieDeletionFilter_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->created_after_time, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->created_before_time, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams excluding_domains_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->excluding_domains, validation_context,
                                         &excluding_domains_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams including_domains_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->including_domains, validation_context,
                                         &including_domains_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams cookie_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->cookie_name, validation_context,
                                         &cookie_name_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams host_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->host_name, validation_context,
                                         &host_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;


  if (!::network::mojom::internal::CookieDeletionSessionControl_Data
        ::Validate(object->session_control, validation_context))
    return false;

  return true;
}

CookieDeletionFilter_Data::CookieDeletionFilter_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieChangeListener_OnCookieChange_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieChangeListener_OnCookieChange_Params_Data* object = static_cast<const CookieChangeListener_OnCookieChange_Params_Data*>(data);

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
          object->cookie, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cookie, validation_context))
    return false;


  if (!::network::mojom::internal::CookieChangeCause_Data
        ::Validate(object->cause, validation_context))
    return false;

  return true;
}

CookieChangeListener_OnCookieChange_Params_Data::CookieChangeListener_OnCookieChange_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_GetAllCookies_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_GetAllCookies_Params_Data* object = static_cast<const CookieManager_GetAllCookies_Params_Data*>(data);

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

CookieManager_GetAllCookies_Params_Data::CookieManager_GetAllCookies_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_GetAllCookies_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_GetAllCookies_ResponseParams_Data* object = static_cast<const CookieManager_GetAllCookies_ResponseParams_Data*>(data);

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
          object->cookies, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams cookies_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->cookies, validation_context,
                                         &cookies_validate_params)) {
    return false;
  }

  return true;
}

CookieManager_GetAllCookies_ResponseParams_Data::CookieManager_GetAllCookies_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_GetCookieList_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_GetCookieList_Params_Data* object = static_cast<const CookieManager_GetCookieList_Params_Data*>(data);

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
          object->cookie_options, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cookie_options, validation_context))
    return false;

  return true;
}

CookieManager_GetCookieList_Params_Data::CookieManager_GetCookieList_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_GetCookieList_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_GetCookieList_ResponseParams_Data* object = static_cast<const CookieManager_GetCookieList_ResponseParams_Data*>(data);

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
          object->cookies, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams cookies_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->cookies, validation_context,
                                         &cookies_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->excluded_cookies, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams excluded_cookies_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->excluded_cookies, validation_context,
                                         &excluded_cookies_validate_params)) {
    return false;
  }

  return true;
}

CookieManager_GetCookieList_ResponseParams_Data::CookieManager_GetCookieList_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_SetCanonicalCookie_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_SetCanonicalCookie_Params_Data* object = static_cast<const CookieManager_SetCanonicalCookie_Params_Data*>(data);

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
          object->cookie, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cookie, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source_scheme, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_scheme_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_scheme, validation_context,
                                         &source_scheme_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cookie_options, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cookie_options, validation_context))
    return false;

  return true;
}

CookieManager_SetCanonicalCookie_Params_Data::CookieManager_SetCanonicalCookie_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_SetCanonicalCookie_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_SetCanonicalCookie_ResponseParams_Data* object = static_cast<const CookieManager_SetCanonicalCookie_ResponseParams_Data*>(data);

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


  if (!::network::mojom::internal::CookieInclusionStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

CookieManager_SetCanonicalCookie_ResponseParams_Data::CookieManager_SetCanonicalCookie_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_DeleteCanonicalCookie_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_DeleteCanonicalCookie_Params_Data* object = static_cast<const CookieManager_DeleteCanonicalCookie_Params_Data*>(data);

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
          object->cookie, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cookie, validation_context))
    return false;

  return true;
}

CookieManager_DeleteCanonicalCookie_Params_Data::CookieManager_DeleteCanonicalCookie_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_DeleteCanonicalCookie_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_DeleteCanonicalCookie_ResponseParams_Data* object = static_cast<const CookieManager_DeleteCanonicalCookie_ResponseParams_Data*>(data);

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

CookieManager_DeleteCanonicalCookie_ResponseParams_Data::CookieManager_DeleteCanonicalCookie_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_DeleteCookies_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_DeleteCookies_Params_Data* object = static_cast<const CookieManager_DeleteCookies_Params_Data*>(data);

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
          object->filter, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->filter, validation_context))
    return false;

  return true;
}

CookieManager_DeleteCookies_Params_Data::CookieManager_DeleteCookies_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_DeleteCookies_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_DeleteCookies_ResponseParams_Data* object = static_cast<const CookieManager_DeleteCookies_ResponseParams_Data*>(data);

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

CookieManager_DeleteCookies_ResponseParams_Data::CookieManager_DeleteCookies_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_AddCookieChangeListener_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_AddCookieChangeListener_Params_Data* object = static_cast<const CookieManager_AddCookieChangeListener_Params_Data*>(data);

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
          object->url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->listener, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->listener,
                                                 validation_context)) {
    return false;
  }

  return true;
}

CookieManager_AddCookieChangeListener_Params_Data::CookieManager_AddCookieChangeListener_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_AddGlobalChangeListener_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_AddGlobalChangeListener_Params_Data* object = static_cast<const CookieManager_AddGlobalChangeListener_Params_Data*>(data);

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
          object->notification_pointer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->notification_pointer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

CookieManager_AddGlobalChangeListener_Params_Data::CookieManager_AddGlobalChangeListener_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_CloneInterface_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_CloneInterface_Params_Data* object = static_cast<const CookieManager_CloneInterface_Params_Data*>(data);

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
          object->new_interface, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->new_interface,
                                                 validation_context)) {
    return false;
  }

  return true;
}

CookieManager_CloneInterface_Params_Data::CookieManager_CloneInterface_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_FlushCookieStore_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_FlushCookieStore_Params_Data* object = static_cast<const CookieManager_FlushCookieStore_Params_Data*>(data);

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

CookieManager_FlushCookieStore_Params_Data::CookieManager_FlushCookieStore_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_FlushCookieStore_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_FlushCookieStore_ResponseParams_Data* object = static_cast<const CookieManager_FlushCookieStore_ResponseParams_Data*>(data);

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

CookieManager_FlushCookieStore_ResponseParams_Data::CookieManager_FlushCookieStore_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_AllowFileSchemeCookies_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_AllowFileSchemeCookies_Params_Data* object = static_cast<const CookieManager_AllowFileSchemeCookies_Params_Data*>(data);

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

CookieManager_AllowFileSchemeCookies_Params_Data::CookieManager_AllowFileSchemeCookies_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_AllowFileSchemeCookies_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_AllowFileSchemeCookies_ResponseParams_Data* object = static_cast<const CookieManager_AllowFileSchemeCookies_ResponseParams_Data*>(data);

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

CookieManager_AllowFileSchemeCookies_ResponseParams_Data::CookieManager_AllowFileSchemeCookies_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_SetContentSettings_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_SetContentSettings_Params_Data* object = static_cast<const CookieManager_SetContentSettings_Params_Data*>(data);

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
          object->settings, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams settings_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->settings, validation_context,
                                         &settings_validate_params)) {
    return false;
  }

  return true;
}

CookieManager_SetContentSettings_Params_Data::CookieManager_SetContentSettings_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_SetForceKeepSessionState_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_SetForceKeepSessionState_Params_Data* object = static_cast<const CookieManager_SetForceKeepSessionState_Params_Data*>(data);

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

CookieManager_SetForceKeepSessionState_Params_Data::CookieManager_SetForceKeepSessionState_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CookieManager_BlockThirdPartyCookies_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieManager_BlockThirdPartyCookies_Params_Data* object = static_cast<const CookieManager_BlockThirdPartyCookies_Params_Data*>(data);

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

CookieManager_BlockThirdPartyCookies_Params_Data::CookieManager_BlockThirdPartyCookies_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif