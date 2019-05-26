// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/broadcastchannel/broadcast_channel.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/messaging/cloneable_message.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

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
class BroadcastChannelClientInterfaceBase {};

using BroadcastChannelClientPtrDataView =
    mojo::InterfacePtrDataView<BroadcastChannelClientInterfaceBase>;
using BroadcastChannelClientRequestDataView =
    mojo::InterfaceRequestDataView<BroadcastChannelClientInterfaceBase>;
using BroadcastChannelClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BroadcastChannelClientInterfaceBase>;
using BroadcastChannelClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BroadcastChannelClientInterfaceBase>;
class BroadcastChannelProviderInterfaceBase {};

using BroadcastChannelProviderPtrDataView =
    mojo::InterfacePtrDataView<BroadcastChannelProviderInterfaceBase>;
using BroadcastChannelProviderRequestDataView =
    mojo::InterfaceRequestDataView<BroadcastChannelProviderInterfaceBase>;
using BroadcastChannelProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BroadcastChannelProviderInterfaceBase>;
using BroadcastChannelProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BroadcastChannelProviderInterfaceBase>;


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

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_SHARED_H_