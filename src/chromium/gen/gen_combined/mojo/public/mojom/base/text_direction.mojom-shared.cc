// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/mojom/base/text_direction.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/mojom/base/text_direction.mojom-params-data.h"
namespace mojo_base {
namespace mojom {

std::ostream& operator<<(std::ostream& os, TextDirection value) {
  switch(value) {
    case TextDirection::UNKNOWN_DIRECTION:
      return os << "TextDirection::UNKNOWN_DIRECTION";
    case TextDirection::RIGHT_TO_LEFT:
      return os << "TextDirection::RIGHT_TO_LEFT";
    case TextDirection::LEFT_TO_RIGHT:
      return os << "TextDirection::LEFT_TO_RIGHT";
    default:
      return os << "Unknown TextDirection value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base

#if defined(_MSC_VER)
#pragma warning(pop)
#endif