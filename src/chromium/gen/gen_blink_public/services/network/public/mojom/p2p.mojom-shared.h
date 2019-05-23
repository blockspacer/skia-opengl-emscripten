// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/p2p.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/network/public/mojom/network_interface.mojom-shared.h"
#include "services/network/public/mojom/ip_address.mojom-shared.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
using P2PHostAndIPEndPointDataView = mojo::native::NativeStructDataView;

using P2PPacketInfoDataView = mojo::native::NativeStructDataView;

using P2PPortRangeDataView = mojo::native::NativeStructDataView;

using P2PSendPacketMetricsDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
using P2PSocketType = mojo::NativeEnum;
using P2PSocketOption = mojo::NativeEnum;
// Interface base classes. They are used for type safety check.
class P2PNetworkNotificationClientInterfaceBase {};

using P2PNetworkNotificationClientPtrDataView =
    mojo::InterfacePtrDataView<P2PNetworkNotificationClientInterfaceBase>;
using P2PNetworkNotificationClientRequestDataView =
    mojo::InterfaceRequestDataView<P2PNetworkNotificationClientInterfaceBase>;
using P2PNetworkNotificationClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<P2PNetworkNotificationClientInterfaceBase>;
using P2PNetworkNotificationClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<P2PNetworkNotificationClientInterfaceBase>;
class P2PSocketManagerInterfaceBase {};

using P2PSocketManagerPtrDataView =
    mojo::InterfacePtrDataView<P2PSocketManagerInterfaceBase>;
using P2PSocketManagerRequestDataView =
    mojo::InterfaceRequestDataView<P2PSocketManagerInterfaceBase>;
using P2PSocketManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<P2PSocketManagerInterfaceBase>;
using P2PSocketManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<P2PSocketManagerInterfaceBase>;
class P2PSocketInterfaceBase {};

using P2PSocketPtrDataView =
    mojo::InterfacePtrDataView<P2PSocketInterfaceBase>;
using P2PSocketRequestDataView =
    mojo::InterfaceRequestDataView<P2PSocketInterfaceBase>;
using P2PSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<P2PSocketInterfaceBase>;
using P2PSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<P2PSocketInterfaceBase>;
class P2PSocketClientInterfaceBase {};

using P2PSocketClientPtrDataView =
    mojo::InterfacePtrDataView<P2PSocketClientInterfaceBase>;
using P2PSocketClientRequestDataView =
    mojo::InterfaceRequestDataView<P2PSocketClientInterfaceBase>;
using P2PSocketClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<P2PSocketClientInterfaceBase>;
using P2PSocketClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<P2PSocketClientInterfaceBase>;


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

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_H_