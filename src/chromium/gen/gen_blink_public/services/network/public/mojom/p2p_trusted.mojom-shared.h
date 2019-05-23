// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/p2p_trusted.mojom-shared-internal.h"
#include "services/network/public/mojom/p2p.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class P2PTrustedSocketManagerClientInterfaceBase {};

using P2PTrustedSocketManagerClientPtrDataView =
    mojo::InterfacePtrDataView<P2PTrustedSocketManagerClientInterfaceBase>;
using P2PTrustedSocketManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<P2PTrustedSocketManagerClientInterfaceBase>;
using P2PTrustedSocketManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<P2PTrustedSocketManagerClientInterfaceBase>;
using P2PTrustedSocketManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<P2PTrustedSocketManagerClientInterfaceBase>;
class P2PTrustedSocketManagerInterfaceBase {};

using P2PTrustedSocketManagerPtrDataView =
    mojo::InterfacePtrDataView<P2PTrustedSocketManagerInterfaceBase>;
using P2PTrustedSocketManagerRequestDataView =
    mojo::InterfaceRequestDataView<P2PTrustedSocketManagerInterfaceBase>;
using P2PTrustedSocketManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<P2PTrustedSocketManagerInterfaceBase>;
using P2PTrustedSocketManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<P2PTrustedSocketManagerInterfaceBase>;


}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_SHARED_H_