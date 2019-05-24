// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_LIFECYCLE_MOJOM_BLINK_FORWARD_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_LIFECYCLE_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "base/component_export.h"


namespace resource_coordinator {
namespace mojom {

enum class LifecycleState : int32_t;
}  // namespace resource_coordinator
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct resource_coordinator_mojom_internal_LifecycleState_DataHashFn;

template <>
struct DefaultHash<::resource_coordinator::mojom::LifecycleState> {
  using Hash = resource_coordinator_mojom_internal_LifecycleState_DataHashFn;
};
}  // namespace WTF


namespace resource_coordinator {
namespace mojom {
namespace blink {
using LifecycleState = LifecycleState;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_LIFECYCLE_MOJOM_BLINK_FORWARD_H_