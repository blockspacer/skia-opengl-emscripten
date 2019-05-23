// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_BLINK_FORWARD_H_



#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {

enum class ConnectionType : int32_t;

enum class ConnectionSubtype : int32_t;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct network_mojom_internal_ConnectionType_DataHashFn;

template <>
struct DefaultHash<::network::mojom::ConnectionType> {
  using Hash = network_mojom_internal_ConnectionType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_ConnectionSubtype_DataHashFn;

template <>
struct DefaultHash<::network::mojom::ConnectionSubtype> {
  using Hash = network_mojom_internal_ConnectionSubtype_DataHashFn;
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using ConnectionType = ConnectionType;  // Alias for definition in the parent namespace.
using ConnectionSubtype = ConnectionSubtype;  // Alias for definition in the parent namespace.
class NetworkChangeManagerClient;
using NetworkChangeManagerClientPtr = mojo::InterfacePtr<NetworkChangeManagerClient>;
using NetworkChangeManagerClientPtrInfo = mojo::InterfacePtrInfo<NetworkChangeManagerClient>;
using ThreadSafeNetworkChangeManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<NetworkChangeManagerClient>;
using NetworkChangeManagerClientRequest = mojo::InterfaceRequest<NetworkChangeManagerClient>;
using NetworkChangeManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkChangeManagerClient>;
using ThreadSafeNetworkChangeManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkChangeManagerClient>;
using NetworkChangeManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkChangeManagerClient>;
using NetworkChangeManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkChangeManagerClient>;

class NetworkChangeManager;
using NetworkChangeManagerPtr = mojo::InterfacePtr<NetworkChangeManager>;
using NetworkChangeManagerPtrInfo = mojo::InterfacePtrInfo<NetworkChangeManager>;
using ThreadSafeNetworkChangeManagerPtr =
    mojo::ThreadSafeInterfacePtr<NetworkChangeManager>;
using NetworkChangeManagerRequest = mojo::InterfaceRequest<NetworkChangeManager>;
using NetworkChangeManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkChangeManager>;
using ThreadSafeNetworkChangeManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkChangeManager>;
using NetworkChangeManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkChangeManager>;
using NetworkChangeManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkChangeManager>;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_BLINK_FORWARD_H_