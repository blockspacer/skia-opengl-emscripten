// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/mojom/base/application_state.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/mojom/base/application_state.mojom-params-data.h"
namespace mojo_base {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ApplicationState value) {
  switch(value) {
    case ApplicationState::UNKNOWN:
      return os << "ApplicationState::UNKNOWN";
    case ApplicationState::HAS_RUNNING_ACTIVITIES:
      return os << "ApplicationState::HAS_RUNNING_ACTIVITIES";
    case ApplicationState::HAS_PAUSED_ACTIVITIES:
      return os << "ApplicationState::HAS_PAUSED_ACTIVITIES";
    case ApplicationState::HAS_STOPPED_ACTIVITIES:
      return os << "ApplicationState::HAS_STOPPED_ACTIVITIES";
    case ApplicationState::HAS_DESTROYED_ACTIVITIES:
      return os << "ApplicationState::HAS_DESTROYED_ACTIVITIES";
    default:
      return os << "Unknown ApplicationState value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base

#if defined(_MSC_VER)
#pragma warning(pop)
#endif