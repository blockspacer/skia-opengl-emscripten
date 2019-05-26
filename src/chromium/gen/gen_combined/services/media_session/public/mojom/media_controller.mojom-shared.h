// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_SHARED_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_SHARED_H_

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
#include "services/media_session/public/mojom/media_controller.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/media_session/public/mojom/media_session.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media_session {
namespace mojom {


}  // namespace mojom
}  // namespace media_session

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media_session {
namespace mojom {
// Interface base classes. They are used for type safety check.
class MediaControllerManagerInterfaceBase {};

using MediaControllerManagerPtrDataView =
    mojo::InterfacePtrDataView<MediaControllerManagerInterfaceBase>;
using MediaControllerManagerRequestDataView =
    mojo::InterfaceRequestDataView<MediaControllerManagerInterfaceBase>;
using MediaControllerManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaControllerManagerInterfaceBase>;
using MediaControllerManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaControllerManagerInterfaceBase>;
class MediaControllerInterfaceBase {};

using MediaControllerPtrDataView =
    mojo::InterfacePtrDataView<MediaControllerInterfaceBase>;
using MediaControllerRequestDataView =
    mojo::InterfaceRequestDataView<MediaControllerInterfaceBase>;
using MediaControllerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaControllerInterfaceBase>;
using MediaControllerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaControllerInterfaceBase>;
class MediaControllerObserverInterfaceBase {};

using MediaControllerObserverPtrDataView =
    mojo::InterfacePtrDataView<MediaControllerObserverInterfaceBase>;
using MediaControllerObserverRequestDataView =
    mojo::InterfaceRequestDataView<MediaControllerObserverInterfaceBase>;
using MediaControllerObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaControllerObserverInterfaceBase>;
using MediaControllerObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaControllerObserverInterfaceBase>;
class MediaControllerImageObserverInterfaceBase {};

using MediaControllerImageObserverPtrDataView =
    mojo::InterfacePtrDataView<MediaControllerImageObserverInterfaceBase>;
using MediaControllerImageObserverRequestDataView =
    mojo::InterfaceRequestDataView<MediaControllerImageObserverInterfaceBase>;
using MediaControllerImageObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaControllerImageObserverInterfaceBase>;
using MediaControllerImageObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaControllerImageObserverInterfaceBase>;


}  // namespace mojom
}  // namespace media_session

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media_session {
namespace mojom {


}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_SHARED_H_