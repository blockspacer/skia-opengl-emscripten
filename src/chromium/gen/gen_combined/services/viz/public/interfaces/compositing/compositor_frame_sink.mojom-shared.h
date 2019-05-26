// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-shared.h"
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/presentation_feedback.mojom-shared.h"
#include "gpu/ipc/common/mailbox.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {


}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
// Interface base classes. They are used for type safety check.
class CompositorFrameSinkInterfaceBase {};

using CompositorFrameSinkPtrDataView =
    mojo::InterfacePtrDataView<CompositorFrameSinkInterfaceBase>;
using CompositorFrameSinkRequestDataView =
    mojo::InterfaceRequestDataView<CompositorFrameSinkInterfaceBase>;
using CompositorFrameSinkAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CompositorFrameSinkInterfaceBase>;
using CompositorFrameSinkAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CompositorFrameSinkInterfaceBase>;
class CompositorFrameSinkClientInterfaceBase {};

using CompositorFrameSinkClientPtrDataView =
    mojo::InterfacePtrDataView<CompositorFrameSinkClientInterfaceBase>;
using CompositorFrameSinkClientRequestDataView =
    mojo::InterfaceRequestDataView<CompositorFrameSinkClientInterfaceBase>;
using CompositorFrameSinkClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CompositorFrameSinkClientInterfaceBase>;
using CompositorFrameSinkClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CompositorFrameSinkClientInterfaceBase>;


}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace viz {
namespace mojom {


}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_H_