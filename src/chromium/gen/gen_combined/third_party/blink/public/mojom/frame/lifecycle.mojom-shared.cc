// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/frame/lifecycle.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/frame/lifecycle.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, FrameVisibility value) {
  switch(value) {
    case FrameVisibility::kRenderedOutOfViewport:
      return os << "FrameVisibility::kRenderedOutOfViewport";
    case FrameVisibility::kRenderedInViewport:
      return os << "FrameVisibility::kRenderedInViewport";
    case FrameVisibility::kNotRendered:
      return os << "FrameVisibility::kNotRendered";
    default:
      return os << "Unknown FrameVisibility value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FrameLifecycleState value) {
  switch(value) {
    case FrameLifecycleState::kRunning:
      return os << "FrameLifecycleState::kRunning";
    case FrameLifecycleState::kPaused:
      return os << "FrameLifecycleState::kPaused";
    case FrameLifecycleState::kFrozen:
      return os << "FrameLifecycleState::kFrozen";
    case FrameLifecycleState::kFrozenAutoResumeMedia:
      return os << "FrameLifecycleState::kFrozenAutoResumeMedia";
    default:
      return os << "Unknown FrameLifecycleState value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif