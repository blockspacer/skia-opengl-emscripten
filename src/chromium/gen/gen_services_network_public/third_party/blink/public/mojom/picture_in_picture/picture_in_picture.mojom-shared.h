// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

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
class PictureInPictureDelegateInterfaceBase {};

using PictureInPictureDelegatePtrDataView =
    mojo::InterfacePtrDataView<PictureInPictureDelegateInterfaceBase>;
using PictureInPictureDelegateRequestDataView =
    mojo::InterfaceRequestDataView<PictureInPictureDelegateInterfaceBase>;
using PictureInPictureDelegateAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PictureInPictureDelegateInterfaceBase>;
using PictureInPictureDelegateAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PictureInPictureDelegateInterfaceBase>;
class PictureInPictureServiceInterfaceBase {};

using PictureInPictureServicePtrDataView =
    mojo::InterfacePtrDataView<PictureInPictureServiceInterfaceBase>;
using PictureInPictureServiceRequestDataView =
    mojo::InterfaceRequestDataView<PictureInPictureServiceInterfaceBase>;
using PictureInPictureServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PictureInPictureServiceInterfaceBase>;
using PictureInPictureServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PictureInPictureServiceInterfaceBase>;


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

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_SHARED_H_