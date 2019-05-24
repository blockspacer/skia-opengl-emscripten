// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_SHARED_H_
#define SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_SHARED_H_

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
#include "services/ws/public/mojom/screen_provider_observer.mojom-shared-internal.h"
#include "services/ws/public/mojom/window_tree_constants.mojom-shared.h"

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
class ScreenProviderObserverInterfaceBase {};

using ScreenProviderObserverPtrDataView =
    mojo::InterfacePtrDataView<ScreenProviderObserverInterfaceBase>;
using ScreenProviderObserverRequestDataView =
    mojo::InterfaceRequestDataView<ScreenProviderObserverInterfaceBase>;
using ScreenProviderObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ScreenProviderObserverInterfaceBase>;
using ScreenProviderObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ScreenProviderObserverInterfaceBase>;


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

#endif  // SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_SHARED_H_