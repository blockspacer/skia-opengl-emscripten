// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/gfx/mojo/swap_result.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/gfx/mojo/swap_result.mojom-params-data.h"
namespace gfx {
namespace mojom {

std::ostream& operator<<(std::ostream& os, SwapResult value) {
  switch(value) {
    case SwapResult::ACK:
      return os << "SwapResult::ACK";
    case SwapResult::FAILED:
      return os << "SwapResult::FAILED";
    case SwapResult::NAK_RECREATE_BUFFERS:
      return os << "SwapResult::NAK_RECREATE_BUFFERS";
    default:
      return os << "Unknown SwapResult value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#if defined(_MSC_VER)
#pragma warning(pop)
#endif