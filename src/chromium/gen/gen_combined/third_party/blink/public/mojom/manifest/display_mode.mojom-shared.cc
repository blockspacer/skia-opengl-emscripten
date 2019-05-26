// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/manifest/display_mode.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/manifest/display_mode.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, DisplayMode value) {
  switch(value) {
    case DisplayMode::UNDEFINED:
      return os << "DisplayMode::UNDEFINED";
    case DisplayMode::BROWSER:
      return os << "DisplayMode::BROWSER";
    case DisplayMode::MINIMAL_UI:
      return os << "DisplayMode::MINIMAL_UI";
    case DisplayMode::STANDALONE:
      return os << "DisplayMode::STANDALONE";
    case DisplayMode::FULLSCREEN:
      return os << "DisplayMode::FULLSCREEN";
    default:
      return os << "Unknown DisplayMode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif