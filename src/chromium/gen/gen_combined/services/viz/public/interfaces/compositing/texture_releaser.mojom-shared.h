// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/texture_releaser.mojom-shared-internal.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"

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
class TextureReleaserInterfaceBase {};

using TextureReleaserPtrDataView =
    mojo::InterfacePtrDataView<TextureReleaserInterfaceBase>;
using TextureReleaserRequestDataView =
    mojo::InterfaceRequestDataView<TextureReleaserInterfaceBase>;
using TextureReleaserAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TextureReleaserInterfaceBase>;
using TextureReleaserAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TextureReleaserInterfaceBase>;


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

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_SHARED_H_