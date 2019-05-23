// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/cors.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/cors.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, CorsPreflightPolicy value) {
  switch(value) {
    case CorsPreflightPolicy::kConsiderPreflight:
      return os << "CorsPreflightPolicy::kConsiderPreflight";
    case CorsPreflightPolicy::kPreventPreflight:
      return os << "CorsPreflightPolicy::kPreventPreflight";
    default:
      return os << "Unknown CorsPreflightPolicy value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CorsError value) {
  switch(value) {
    case CorsError::kDisallowedByMode:
      return os << "CorsError::kDisallowedByMode";
    case CorsError::kInvalidResponse:
      return os << "CorsError::kInvalidResponse";
    case CorsError::kWildcardOriginNotAllowed:
      return os << "CorsError::kWildcardOriginNotAllowed";
    case CorsError::kMissingAllowOriginHeader:
      return os << "CorsError::kMissingAllowOriginHeader";
    case CorsError::kMultipleAllowOriginValues:
      return os << "CorsError::kMultipleAllowOriginValues";
    case CorsError::kInvalidAllowOriginValue:
      return os << "CorsError::kInvalidAllowOriginValue";
    case CorsError::kAllowOriginMismatch:
      return os << "CorsError::kAllowOriginMismatch";
    case CorsError::kInvalidAllowCredentials:
      return os << "CorsError::kInvalidAllowCredentials";
    case CorsError::kCorsDisabledScheme:
      return os << "CorsError::kCorsDisabledScheme";
    case CorsError::kPreflightInvalidStatus:
      return os << "CorsError::kPreflightInvalidStatus";
    case CorsError::kPreflightDisallowedRedirect:
      return os << "CorsError::kPreflightDisallowedRedirect";
    case CorsError::kPreflightWildcardOriginNotAllowed:
      return os << "CorsError::kPreflightWildcardOriginNotAllowed";
    case CorsError::kPreflightMissingAllowOriginHeader:
      return os << "CorsError::kPreflightMissingAllowOriginHeader";
    case CorsError::kPreflightMultipleAllowOriginValues:
      return os << "CorsError::kPreflightMultipleAllowOriginValues";
    case CorsError::kPreflightInvalidAllowOriginValue:
      return os << "CorsError::kPreflightInvalidAllowOriginValue";
    case CorsError::kPreflightAllowOriginMismatch:
      return os << "CorsError::kPreflightAllowOriginMismatch";
    case CorsError::kPreflightInvalidAllowCredentials:
      return os << "CorsError::kPreflightInvalidAllowCredentials";
    case CorsError::kPreflightMissingAllowExternal:
      return os << "CorsError::kPreflightMissingAllowExternal";
    case CorsError::kPreflightInvalidAllowExternal:
      return os << "CorsError::kPreflightInvalidAllowExternal";
    case CorsError::kInvalidAllowMethodsPreflightResponse:
      return os << "CorsError::kInvalidAllowMethodsPreflightResponse";
    case CorsError::kInvalidAllowHeadersPreflightResponse:
      return os << "CorsError::kInvalidAllowHeadersPreflightResponse";
    case CorsError::kMethodDisallowedByPreflightResponse:
      return os << "CorsError::kMethodDisallowedByPreflightResponse";
    case CorsError::kHeaderDisallowedByPreflightResponse:
      return os << "CorsError::kHeaderDisallowedByPreflightResponse";
    case CorsError::kRedirectContainsCredentials:
      return os << "CorsError::kRedirectContainsCredentials";
    default:
      return os << "Unknown CorsError value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif