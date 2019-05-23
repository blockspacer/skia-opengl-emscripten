// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/site_engagement/site_engagement.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/site_engagement/site_engagement.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, EngagementLevel value) {
  switch(value) {
    case EngagementLevel::NONE:
      return os << "EngagementLevel::NONE";
    case EngagementLevel::MINIMAL:
      return os << "EngagementLevel::MINIMAL";
    case EngagementLevel::LOW:
      return os << "EngagementLevel::LOW";
    case EngagementLevel::MEDIUM:
      return os << "EngagementLevel::MEDIUM";
    case EngagementLevel::HIGH:
      return os << "EngagementLevel::HIGH";
    case EngagementLevel::MAX:
      return os << "EngagementLevel::MAX";
    default:
      return os << "Unknown EngagementLevel value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif