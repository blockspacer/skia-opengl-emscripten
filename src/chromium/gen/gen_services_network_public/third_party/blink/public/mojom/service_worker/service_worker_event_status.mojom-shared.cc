// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ServiceWorkerEventStatus value) {
  switch(value) {
    case ServiceWorkerEventStatus::COMPLETED:
      return os << "ServiceWorkerEventStatus::COMPLETED";
    case ServiceWorkerEventStatus::REJECTED:
      return os << "ServiceWorkerEventStatus::REJECTED";
    case ServiceWorkerEventStatus::ABORTED:
      return os << "ServiceWorkerEventStatus::ABORTED";
    case ServiceWorkerEventStatus::TIMEOUT:
      return os << "ServiceWorkerEventStatus::{TIMEOUT, MAX}";
    default:
      return os << "Unknown ServiceWorkerEventStatus value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ServiceWorkerStartStatus value) {
  switch(value) {
    case ServiceWorkerStartStatus::kNormalCompletion:
      return os << "ServiceWorkerStartStatus::kNormalCompletion";
    case ServiceWorkerStartStatus::kAbruptCompletion:
      return os << "ServiceWorkerStartStatus::kAbruptCompletion";
    default:
      return os << "Unknown ServiceWorkerStartStatus value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif