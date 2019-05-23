// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "skia/public/interfaces/blur_image_filter_tile_mode.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "skia/public/interfaces/blur_image_filter_tile_mode.mojom-params-data.h"
namespace skia {
namespace mojom {

std::ostream& operator<<(std::ostream& os, BlurTileMode value) {
  switch(value) {
    case BlurTileMode::CLAMP:
      return os << "BlurTileMode::CLAMP";
    case BlurTileMode::REPEAT:
      return os << "BlurTileMode::REPEAT";
    case BlurTileMode::CLAMP_TO_BLACK:
      return os << "BlurTileMode::{CLAMP_TO_BLACK, BLUR_TILE_MODE_LAST}";
    default:
      return os << "Unknown BlurTileMode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace skia

#if defined(_MSC_VER)
#pragma warning(pop)
#endif