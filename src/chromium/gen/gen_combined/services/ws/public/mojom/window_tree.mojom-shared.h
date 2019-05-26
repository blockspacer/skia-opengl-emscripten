// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/ws/public/mojom/window_tree.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared.h"
#include "services/ws/public/mojom/window_manager.mojom-shared.h"
#include "services/ws/public/mojom/screen_provider_observer.mojom-shared.h"
#include "services/ws/public/mojom/window_tree_constants.mojom-shared.h"
#include "ui/base/ime/mojo/ime.mojom-shared.h"
#include "ui/base/mojo/cursor.mojom-shared.h"
#include "ui/base/mojo/ui_base_types.mojom-shared.h"
#include "ui/events/mojo/event.mojom-shared.h"
#include "ui/events/mojo/event_constants.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/image/mojo/image.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"
#include "ui/platform_window/mojo/text_input_state.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ws {
namespace mojom {


}  // namespace mojom
}  // namespace ws

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ws {
namespace mojom {
// Interface base classes. They are used for type safety check.
class WindowTreeInterfaceBase {};

using WindowTreePtrDataView =
    mojo::InterfacePtrDataView<WindowTreeInterfaceBase>;
using WindowTreeRequestDataView =
    mojo::InterfaceRequestDataView<WindowTreeInterfaceBase>;
using WindowTreeAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WindowTreeInterfaceBase>;
using WindowTreeAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WindowTreeInterfaceBase>;
class WindowTreeClientInterfaceBase {};

using WindowTreeClientPtrDataView =
    mojo::InterfacePtrDataView<WindowTreeClientInterfaceBase>;
using WindowTreeClientRequestDataView =
    mojo::InterfaceRequestDataView<WindowTreeClientInterfaceBase>;
using WindowTreeClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WindowTreeClientInterfaceBase>;
using WindowTreeClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WindowTreeClientInterfaceBase>;
class WindowTreeFactoryInterfaceBase {};

using WindowTreeFactoryPtrDataView =
    mojo::InterfacePtrDataView<WindowTreeFactoryInterfaceBase>;
using WindowTreeFactoryRequestDataView =
    mojo::InterfaceRequestDataView<WindowTreeFactoryInterfaceBase>;
using WindowTreeFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WindowTreeFactoryInterfaceBase>;
using WindowTreeFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WindowTreeFactoryInterfaceBase>;


}  // namespace mojom
}  // namespace ws

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace ws {
namespace mojom {


}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_H_