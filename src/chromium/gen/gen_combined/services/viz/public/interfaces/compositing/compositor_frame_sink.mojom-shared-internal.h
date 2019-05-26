// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-shared-internal.h"
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/presentation_feedback.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_INTERNAL_H_