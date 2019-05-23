// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

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


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
using P2PHostAndIPEndPointDataView = mojo::native::NativeStructDataView;

using P2PPacketInfoDataView = mojo::native::NativeStructDataView;

using P2PPortRangeDataView = mojo::native::NativeStructDataView;

using P2PSendPacketMetricsDataView = mojo::native::NativeStructDataView;

using P2PSocketType = mojo::NativeEnum;
using P2PSocketOption = mojo::NativeEnum;
using P2PHostAndIPEndPoint = mojo::native::NativeStruct;
using P2PHostAndIPEndPointPtr = mojo::native::NativeStructPtr;

using P2PPacketInfo = mojo::native::NativeStruct;
using P2PPacketInfoPtr = mojo::native::NativeStructPtr;

using P2PPortRange = mojo::native::NativeStruct;
using P2PPortRangePtr = mojo::native::NativeStructPtr;

using P2PSendPacketMetrics = mojo::native::NativeStruct;
using P2PSendPacketMetricsPtr = mojo::native::NativeStructPtr;

class P2PNetworkNotificationClient;
using P2PNetworkNotificationClientPtr = mojo::InterfacePtr<P2PNetworkNotificationClient>;
using P2PNetworkNotificationClientPtrInfo = mojo::InterfacePtrInfo<P2PNetworkNotificationClient>;
using ThreadSafeP2PNetworkNotificationClientPtr =
    mojo::ThreadSafeInterfacePtr<P2PNetworkNotificationClient>;
using P2PNetworkNotificationClientRequest = mojo::InterfaceRequest<P2PNetworkNotificationClient>;
using P2PNetworkNotificationClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<P2PNetworkNotificationClient>;
using ThreadSafeP2PNetworkNotificationClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<P2PNetworkNotificationClient>;
using P2PNetworkNotificationClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<P2PNetworkNotificationClient>;
using P2PNetworkNotificationClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<P2PNetworkNotificationClient>;

class P2PSocketManager;
using P2PSocketManagerPtr = mojo::InterfacePtr<P2PSocketManager>;
using P2PSocketManagerPtrInfo = mojo::InterfacePtrInfo<P2PSocketManager>;
using ThreadSafeP2PSocketManagerPtr =
    mojo::ThreadSafeInterfacePtr<P2PSocketManager>;
using P2PSocketManagerRequest = mojo::InterfaceRequest<P2PSocketManager>;
using P2PSocketManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<P2PSocketManager>;
using ThreadSafeP2PSocketManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<P2PSocketManager>;
using P2PSocketManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<P2PSocketManager>;
using P2PSocketManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<P2PSocketManager>;

class P2PSocket;
using P2PSocketPtr = mojo::InterfacePtr<P2PSocket>;
using P2PSocketPtrInfo = mojo::InterfacePtrInfo<P2PSocket>;
using ThreadSafeP2PSocketPtr =
    mojo::ThreadSafeInterfacePtr<P2PSocket>;
using P2PSocketRequest = mojo::InterfaceRequest<P2PSocket>;
using P2PSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<P2PSocket>;
using ThreadSafeP2PSocketAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<P2PSocket>;
using P2PSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<P2PSocket>;
using P2PSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<P2PSocket>;

class P2PSocketClient;
using P2PSocketClientPtr = mojo::InterfacePtr<P2PSocketClient>;
using P2PSocketClientPtrInfo = mojo::InterfacePtrInfo<P2PSocketClient>;
using ThreadSafeP2PSocketClientPtr =
    mojo::ThreadSafeInterfacePtr<P2PSocketClient>;
using P2PSocketClientRequest = mojo::InterfaceRequest<P2PSocketClient>;
using P2PSocketClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<P2PSocketClient>;
using ThreadSafeP2PSocketClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<P2PSocketClient>;
using P2PSocketClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<P2PSocketClient>;
using P2PSocketClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<P2PSocketClient>;




}  // namespace mojom
}  // namespace network
#include "services/network/public/cpp/p2p_socket_type.h"

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_FORWARD_H_