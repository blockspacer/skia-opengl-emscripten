// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SurfaceEmbedderInterfaceBase {};

using SurfaceEmbedderPtrDataView =
    mojo::InterfacePtrDataView<SurfaceEmbedderInterfaceBase>;
using SurfaceEmbedderRequestDataView =
    mojo::InterfaceRequestDataView<SurfaceEmbedderInterfaceBase>;
using SurfaceEmbedderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SurfaceEmbedderInterfaceBase>;
using SurfaceEmbedderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SurfaceEmbedderInterfaceBase>;
class EmbeddedFrameSinkClientInterfaceBase {};

using EmbeddedFrameSinkClientPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedFrameSinkClientInterfaceBase>;
using EmbeddedFrameSinkClientRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedFrameSinkClientInterfaceBase>;
using EmbeddedFrameSinkClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedFrameSinkClientInterfaceBase>;
using EmbeddedFrameSinkClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedFrameSinkClientInterfaceBase>;
class EmbeddedFrameSinkProviderInterfaceBase {};

using EmbeddedFrameSinkProviderPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedFrameSinkProviderInterfaceBase>;
using EmbeddedFrameSinkProviderRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedFrameSinkProviderInterfaceBase>;
using EmbeddedFrameSinkProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedFrameSinkProviderInterfaceBase>;
using EmbeddedFrameSinkProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedFrameSinkProviderInterfaceBase>;


}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_H_