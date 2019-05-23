// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/device/public/mojom/screen_orientation_lock_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/device/public/mojom/screen_orientation_lock_types.mojom-params-data.h"
namespace device {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ScreenOrientationLockResult value) {
  switch(value) {
    case ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_SUCCESS:
      return os << "ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_SUCCESS";
    case ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_ERROR_NOT_AVAILABLE:
      return os << "ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_ERROR_NOT_AVAILABLE";
    case ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_ERROR_FULLSCREEN_REQUIRED:
      return os << "ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_ERROR_FULLSCREEN_REQUIRED";
    case ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_ERROR_CANCELED:
      return os << "ScreenOrientationLockResult::SCREEN_ORIENTATION_LOCK_RESULT_ERROR_CANCELED";
    default:
      return os << "Unknown ScreenOrientationLockResult value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ScreenOrientationLockType value) {
  switch(value) {
    case ScreenOrientationLockType::DEFAULT:
      return os << "ScreenOrientationLockType::DEFAULT";
    case ScreenOrientationLockType::PORTRAIT_PRIMARY:
      return os << "ScreenOrientationLockType::PORTRAIT_PRIMARY";
    case ScreenOrientationLockType::PORTRAIT_SECONDARY:
      return os << "ScreenOrientationLockType::PORTRAIT_SECONDARY";
    case ScreenOrientationLockType::LANDSCAPE_PRIMARY:
      return os << "ScreenOrientationLockType::LANDSCAPE_PRIMARY";
    case ScreenOrientationLockType::LANDSCAPE_SECONDARY:
      return os << "ScreenOrientationLockType::LANDSCAPE_SECONDARY";
    case ScreenOrientationLockType::ANY:
      return os << "ScreenOrientationLockType::ANY";
    case ScreenOrientationLockType::LANDSCAPE:
      return os << "ScreenOrientationLockType::LANDSCAPE";
    case ScreenOrientationLockType::PORTRAIT:
      return os << "ScreenOrientationLockType::PORTRAIT";
    case ScreenOrientationLockType::NATURAL:
      return os << "ScreenOrientationLockType::NATURAL";
    default:
      return os << "Unknown ScreenOrientationLockType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace device

#if defined(_MSC_VER)
#pragma warning(pop)
#endif