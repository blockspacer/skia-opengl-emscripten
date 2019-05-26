// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/referrer_policy.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/referrer_policy.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ReferrerPolicy value) {
  switch(value) {
    case ReferrerPolicy::kAlways:
      return os << "ReferrerPolicy::kAlways";
    case ReferrerPolicy::kDefault:
      return os << "ReferrerPolicy::kDefault";
    case ReferrerPolicy::kNoReferrerWhenDowngrade:
      return os << "ReferrerPolicy::kNoReferrerWhenDowngrade";
    case ReferrerPolicy::kNever:
      return os << "ReferrerPolicy::kNever";
    case ReferrerPolicy::kOrigin:
      return os << "ReferrerPolicy::kOrigin";
    case ReferrerPolicy::kOriginWhenCrossOrigin:
      return os << "ReferrerPolicy::kOriginWhenCrossOrigin";
    case ReferrerPolicy::kNoReferrerWhenDowngradeOriginWhenCrossOrigin:
      return os << "ReferrerPolicy::kNoReferrerWhenDowngradeOriginWhenCrossOrigin";
    case ReferrerPolicy::kSameOrigin:
      return os << "ReferrerPolicy::kSameOrigin";
    case ReferrerPolicy::kStrictOrigin:
      return os << "ReferrerPolicy::{kStrictOrigin, kLast}";
    default:
      return os << "Unknown ReferrerPolicy value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif