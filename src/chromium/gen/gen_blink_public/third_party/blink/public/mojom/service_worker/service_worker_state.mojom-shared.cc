// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/service_worker/service_worker_state.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_state.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ServiceWorkerState value) {
  switch(value) {
    case ServiceWorkerState::kUnknown:
      return os << "ServiceWorkerState::kUnknown";
    case ServiceWorkerState::kInstalling:
      return os << "ServiceWorkerState::kInstalling";
    case ServiceWorkerState::kInstalled:
      return os << "ServiceWorkerState::kInstalled";
    case ServiceWorkerState::kActivating:
      return os << "ServiceWorkerState::kActivating";
    case ServiceWorkerState::kActivated:
      return os << "ServiceWorkerState::kActivated";
    case ServiceWorkerState::kRedundant:
      return os << "ServiceWorkerState::kRedundant";
    default:
      return os << "Unknown ServiceWorkerState value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif