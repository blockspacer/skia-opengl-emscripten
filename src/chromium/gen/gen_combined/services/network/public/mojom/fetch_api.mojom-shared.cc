// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/fetch_api.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/fetch_api.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, FetchRequestMode value) {
  switch(value) {
    case FetchRequestMode::kSameOrigin:
      return os << "FetchRequestMode::kSameOrigin";
    case FetchRequestMode::kNoCors:
      return os << "FetchRequestMode::kNoCors";
    case FetchRequestMode::kCors:
      return os << "FetchRequestMode::kCors";
    case FetchRequestMode::kCorsWithForcedPreflight:
      return os << "FetchRequestMode::kCorsWithForcedPreflight";
    case FetchRequestMode::kNavigate:
      return os << "FetchRequestMode::kNavigate";
    default:
      return os << "Unknown FetchRequestMode value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FetchRedirectMode value) {
  switch(value) {
    case FetchRedirectMode::kFollow:
      return os << "FetchRedirectMode::kFollow";
    case FetchRedirectMode::kError:
      return os << "FetchRedirectMode::kError";
    case FetchRedirectMode::kManual:
      return os << "FetchRedirectMode::kManual";
    default:
      return os << "Unknown FetchRedirectMode value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FetchCredentialsMode value) {
  switch(value) {
    case FetchCredentialsMode::kOmit:
      return os << "FetchCredentialsMode::kOmit";
    case FetchCredentialsMode::kSameOrigin:
      return os << "FetchCredentialsMode::kSameOrigin";
    case FetchCredentialsMode::kInclude:
      return os << "FetchCredentialsMode::kInclude";
    default:
      return os << "Unknown FetchCredentialsMode value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FetchResponseType value) {
  switch(value) {
    case FetchResponseType::kBasic:
      return os << "FetchResponseType::kBasic";
    case FetchResponseType::kCors:
      return os << "FetchResponseType::kCors";
    case FetchResponseType::kDefault:
      return os << "FetchResponseType::kDefault";
    case FetchResponseType::kError:
      return os << "FetchResponseType::kError";
    case FetchResponseType::kOpaque:
      return os << "FetchResponseType::kOpaque";
    case FetchResponseType::kOpaqueRedirect:
      return os << "FetchResponseType::kOpaqueRedirect";
    default:
      return os << "Unknown FetchResponseType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FetchResponseSource value) {
  switch(value) {
    case FetchResponseSource::kUnspecified:
      return os << "FetchResponseSource::kUnspecified";
    case FetchResponseSource::kNetwork:
      return os << "FetchResponseSource::kNetwork";
    case FetchResponseSource::kHttpCache:
      return os << "FetchResponseSource::kHttpCache";
    case FetchResponseSource::kCacheStorage:
      return os << "FetchResponseSource::kCacheStorage";
    default:
      return os << "Unknown FetchResponseSource value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif