// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/gfx/mojo/font_render_params.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/gfx/mojo/font_render_params.mojom-params-data.h"
namespace gfx {
namespace mojom {

std::ostream& operator<<(std::ostream& os, Hinting value) {
  switch(value) {
    case Hinting::kNone:
      return os << "Hinting::kNone";
    case Hinting::kSlight:
      return os << "Hinting::kSlight";
    case Hinting::kMedium:
      return os << "Hinting::kMedium";
    case Hinting::kFull:
      return os << "Hinting::kFull";
    default:
      return os << "Unknown Hinting value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, SubpixelRendering value) {
  switch(value) {
    case SubpixelRendering::kNone:
      return os << "SubpixelRendering::kNone";
    case SubpixelRendering::kRGB:
      return os << "SubpixelRendering::kRGB";
    case SubpixelRendering::kBGR:
      return os << "SubpixelRendering::kBGR";
    case SubpixelRendering::kVRGB:
      return os << "SubpixelRendering::kVRGB";
    case SubpixelRendering::kVBGR:
      return os << "SubpixelRendering::kVBGR";
    default:
      return os << "Unknown SubpixelRendering value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#if defined(_MSC_VER)
#pragma warning(pop)
#endif