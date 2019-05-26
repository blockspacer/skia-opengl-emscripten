// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/mdns_responder.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_address.mojom-shared.h"

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
class MdnsResponderInterfaceBase {};

using MdnsResponderPtrDataView =
    mojo::InterfacePtrDataView<MdnsResponderInterfaceBase>;
using MdnsResponderRequestDataView =
    mojo::InterfaceRequestDataView<MdnsResponderInterfaceBase>;
using MdnsResponderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MdnsResponderInterfaceBase>;
using MdnsResponderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MdnsResponderInterfaceBase>;


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

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_SHARED_H_