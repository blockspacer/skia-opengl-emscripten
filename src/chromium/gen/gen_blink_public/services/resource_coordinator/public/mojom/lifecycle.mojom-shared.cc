// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/resource_coordinator/public/mojom/lifecycle.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/resource_coordinator/public/mojom/lifecycle.mojom-params-data.h"
namespace resource_coordinator {
namespace mojom {

std::ostream& operator<<(std::ostream& os, LifecycleState value) {
  switch(value) {
    case LifecycleState::kRunning:
      return os << "LifecycleState::kRunning";
    case LifecycleState::kFrozen:
      return os << "LifecycleState::kFrozen";
    case LifecycleState::kDiscarded:
      return os << "LifecycleState::kDiscarded";
    default:
      return os << "Unknown LifecycleState value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#if defined(_MSC_VER)
#pragma warning(pop)
#endif