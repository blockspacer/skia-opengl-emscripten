// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/gfx/mojo/overlay_transform.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/gfx/mojo/overlay_transform.mojom-params-data.h"
namespace gfx {
namespace mojom {

std::ostream& operator<<(std::ostream& os, OverlayTransform value) {
  switch(value) {
    case OverlayTransform::OVERLAY_TRANSFORM_INVALID:
      return os << "OverlayTransform::OVERLAY_TRANSFORM_INVALID";
    case OverlayTransform::OVERLAY_TRANSFORM_NONE:
      return os << "OverlayTransform::OVERLAY_TRANSFORM_NONE";
    case OverlayTransform::OVERLAY_TRANSFORM_FLIP_HORIZONTAL:
      return os << "OverlayTransform::OVERLAY_TRANSFORM_FLIP_HORIZONTAL";
    case OverlayTransform::OVERLAY_TRANSFORM_FLIP_VERTICAL:
      return os << "OverlayTransform::OVERLAY_TRANSFORM_FLIP_VERTICAL";
    case OverlayTransform::OVERLAY_TRANSFORM_ROTATE_90:
      return os << "OverlayTransform::OVERLAY_TRANSFORM_ROTATE_90";
    case OverlayTransform::OVERLAY_TRANSFORM_ROTATE_180:
      return os << "OverlayTransform::OVERLAY_TRANSFORM_ROTATE_180";
    case OverlayTransform::OVERLAY_TRANSFORM_ROTATE_270:
      return os << "OverlayTransform::{OVERLAY_TRANSFORM_ROTATE_270, OVERLAY_TRANSFORM_LAST}";
    default:
      return os << "Unknown OverlayTransform value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#if defined(_MSC_VER)
#pragma warning(pop)
#endif