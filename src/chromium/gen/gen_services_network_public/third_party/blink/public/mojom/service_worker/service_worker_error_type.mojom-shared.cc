// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ServiceWorkerErrorType value) {
  switch(value) {
    case ServiceWorkerErrorType::kNone:
      return os << "ServiceWorkerErrorType::kNone";
    case ServiceWorkerErrorType::kAbort:
      return os << "ServiceWorkerErrorType::kAbort";
    case ServiceWorkerErrorType::kActivate:
      return os << "ServiceWorkerErrorType::kActivate";
    case ServiceWorkerErrorType::kDisabled:
      return os << "ServiceWorkerErrorType::kDisabled";
    case ServiceWorkerErrorType::kInstall:
      return os << "ServiceWorkerErrorType::kInstall";
    case ServiceWorkerErrorType::kNavigation:
      return os << "ServiceWorkerErrorType::kNavigation";
    case ServiceWorkerErrorType::kNetwork:
      return os << "ServiceWorkerErrorType::kNetwork";
    case ServiceWorkerErrorType::kNotFound:
      return os << "ServiceWorkerErrorType::kNotFound";
    case ServiceWorkerErrorType::kScriptEvaluateFailed:
      return os << "ServiceWorkerErrorType::kScriptEvaluateFailed";
    case ServiceWorkerErrorType::kSecurity:
      return os << "ServiceWorkerErrorType::kSecurity";
    case ServiceWorkerErrorType::kState:
      return os << "ServiceWorkerErrorType::kState";
    case ServiceWorkerErrorType::kTimeout:
      return os << "ServiceWorkerErrorType::kTimeout";
    case ServiceWorkerErrorType::kType:
      return os << "ServiceWorkerErrorType::kType";
    case ServiceWorkerErrorType::kUnknown:
      return os << "ServiceWorkerErrorType::kUnknown";
    default:
      return os << "Unknown ServiceWorkerErrorType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ServiceWorkerResponseError value) {
  switch(value) {
    case ServiceWorkerResponseError::kUnknown:
      return os << "ServiceWorkerResponseError::kUnknown";
    case ServiceWorkerResponseError::kPromiseRejected:
      return os << "ServiceWorkerResponseError::kPromiseRejected";
    case ServiceWorkerResponseError::kDefaultPrevented:
      return os << "ServiceWorkerResponseError::kDefaultPrevented";
    case ServiceWorkerResponseError::kNoV8Instance:
      return os << "ServiceWorkerResponseError::kNoV8Instance";
    case ServiceWorkerResponseError::kResponseTypeError:
      return os << "ServiceWorkerResponseError::kResponseTypeError";
    case ServiceWorkerResponseError::kResponseTypeOpaque:
      return os << "ServiceWorkerResponseError::kResponseTypeOpaque";
    case ServiceWorkerResponseError::kResponseTypeNotBasicOrDefault:
      return os << "ServiceWorkerResponseError::kResponseTypeNotBasicOrDefault";
    case ServiceWorkerResponseError::kBodyUsed:
      return os << "ServiceWorkerResponseError::kBodyUsed";
    case ServiceWorkerResponseError::kResponseTypeOpaqueForClientRequest:
      return os << "ServiceWorkerResponseError::kResponseTypeOpaqueForClientRequest";
    case ServiceWorkerResponseError::kResponseTypeOpaqueRedirect:
      return os << "ServiceWorkerResponseError::kResponseTypeOpaqueRedirect";
    case ServiceWorkerResponseError::kBodyLocked:
      return os << "ServiceWorkerResponseError::kBodyLocked";
    case ServiceWorkerResponseError::kRedirectedResponseForNotFollowRequest:
      return os << "ServiceWorkerResponseError::kRedirectedResponseForNotFollowRequest";
    case ServiceWorkerResponseError::kDataPipeCreationFailed:
      return os << "ServiceWorkerResponseError::kDataPipeCreationFailed";
    case ServiceWorkerResponseError::kResponseTypeCorsForRequestModeSameOrigin:
      return os << "ServiceWorkerResponseError::kResponseTypeCorsForRequestModeSameOrigin";
    case ServiceWorkerResponseError::kResponseBodyBroken:
      return os << "ServiceWorkerResponseError::kResponseBodyBroken";
    default:
      return os << "Unknown ServiceWorkerResponseError value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif