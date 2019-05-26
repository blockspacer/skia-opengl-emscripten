// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared-internal.h"
#include "services/ws/public/mojom/window_manager.mojom-shared-internal.h"
#include "services/ws/public/mojom/screen_provider_observer.mojom-shared-internal.h"
#include "services/ws/public/mojom/window_tree_constants.mojom-shared-internal.h"
#include "ui/base/ime/mojo/ime.mojom-shared-internal.h"
#include "ui/base/mojo/cursor.mojom-shared-internal.h"
#include "ui/base/mojo/ui_base_types.mojom-shared-internal.h"
#include "ui/events/mojo/event.mojom-shared-internal.h"
#include "ui/events/mojo/event_constants.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/image/mojo/image.mojom-shared-internal.h"
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"
#include "ui/platform_window/mojo/text_input_state.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ws {
namespace mojom {
namespace internal {

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_INTERNAL_H_