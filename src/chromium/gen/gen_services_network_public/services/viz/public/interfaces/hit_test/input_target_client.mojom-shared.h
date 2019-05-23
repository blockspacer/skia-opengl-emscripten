// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/hit_test/input_target_client.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

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
class InputTargetClientInterfaceBase {};

using InputTargetClientPtrDataView =
    mojo::InterfacePtrDataView<InputTargetClientInterfaceBase>;
using InputTargetClientRequestDataView =
    mojo::InterfaceRequestDataView<InputTargetClientInterfaceBase>;
using InputTargetClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InputTargetClientInterfaceBase>;
using InputTargetClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InputTargetClientInterfaceBase>;


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

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_SHARED_H_