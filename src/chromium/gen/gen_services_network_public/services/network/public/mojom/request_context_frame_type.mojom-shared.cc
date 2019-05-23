// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/request_context_frame_type.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/request_context_frame_type.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, RequestContextFrameType value) {
  switch(value) {
    case RequestContextFrameType::kAuxiliary:
      return os << "RequestContextFrameType::kAuxiliary";
    case RequestContextFrameType::kNested:
      return os << "RequestContextFrameType::kNested";
    case RequestContextFrameType::kNone:
      return os << "RequestContextFrameType::kNone";
    case RequestContextFrameType::kTopLevel:
      return os << "RequestContextFrameType::kTopLevel";
    default:
      return os << "Unknown RequestContextFrameType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif