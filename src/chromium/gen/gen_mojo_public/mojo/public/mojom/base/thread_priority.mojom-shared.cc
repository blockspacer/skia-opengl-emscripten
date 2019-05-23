// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/mojom/base/thread_priority.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/mojom/base/thread_priority.mojom-params-data.h"
namespace mojo_base {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ThreadPriority value) {
  switch(value) {
    case ThreadPriority::BACKGROUND:
      return os << "ThreadPriority::BACKGROUND";
    case ThreadPriority::NORMAL:
      return os << "ThreadPriority::NORMAL";
    case ThreadPriority::DISPLAY:
      return os << "ThreadPriority::DISPLAY";
    case ThreadPriority::REALTIME_AUDIO:
      return os << "ThreadPriority::REALTIME_AUDIO";
    default:
      return os << "Unknown ThreadPriority value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base

#if defined(_MSC_VER)
#pragma warning(pop)
#endif