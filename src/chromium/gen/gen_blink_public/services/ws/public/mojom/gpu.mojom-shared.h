// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_SHARED_H_
#define SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_SHARED_H_

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
#include "services/ws/public/mojom/gpu.mojom-shared-internal.h"
#include "gpu/ipc/common/gpu_feature_info.mojom-shared.h"
#include "gpu/ipc/common/gpu_info.mojom-shared.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"
#include "media/mojo/interfaces/video_encode_accelerator.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared.h"

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
class GpuMemoryBufferFactoryInterfaceBase {};

using GpuMemoryBufferFactoryPtrDataView =
    mojo::InterfacePtrDataView<GpuMemoryBufferFactoryInterfaceBase>;
using GpuMemoryBufferFactoryRequestDataView =
    mojo::InterfaceRequestDataView<GpuMemoryBufferFactoryInterfaceBase>;
using GpuMemoryBufferFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GpuMemoryBufferFactoryInterfaceBase>;
using GpuMemoryBufferFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GpuMemoryBufferFactoryInterfaceBase>;
class GpuInterfaceBase {};

using GpuPtrDataView =
    mojo::InterfacePtrDataView<GpuInterfaceBase>;
using GpuRequestDataView =
    mojo::InterfaceRequestDataView<GpuInterfaceBase>;
using GpuAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GpuInterfaceBase>;
using GpuAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GpuInterfaceBase>;


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

#endif  // SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_SHARED_H_