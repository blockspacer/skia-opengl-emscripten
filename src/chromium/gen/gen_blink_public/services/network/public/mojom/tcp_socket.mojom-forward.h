// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_FORWARD_H_

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
class TCPConnectedSocketOptionsDataView;

class TCPConnectedSocketOptions;
using TCPConnectedSocketOptionsPtr = mojo::InlinedStructPtr<TCPConnectedSocketOptions>;

class TCPBoundSocket;
using TCPBoundSocketPtr = mojo::InterfacePtr<TCPBoundSocket>;
using TCPBoundSocketPtrInfo = mojo::InterfacePtrInfo<TCPBoundSocket>;
using ThreadSafeTCPBoundSocketPtr =
    mojo::ThreadSafeInterfacePtr<TCPBoundSocket>;
using TCPBoundSocketRequest = mojo::InterfaceRequest<TCPBoundSocket>;
using TCPBoundSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<TCPBoundSocket>;
using ThreadSafeTCPBoundSocketAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TCPBoundSocket>;
using TCPBoundSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TCPBoundSocket>;
using TCPBoundSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TCPBoundSocket>;

class TCPConnectedSocket;
using TCPConnectedSocketPtr = mojo::InterfacePtr<TCPConnectedSocket>;
using TCPConnectedSocketPtrInfo = mojo::InterfacePtrInfo<TCPConnectedSocket>;
using ThreadSafeTCPConnectedSocketPtr =
    mojo::ThreadSafeInterfacePtr<TCPConnectedSocket>;
using TCPConnectedSocketRequest = mojo::InterfaceRequest<TCPConnectedSocket>;
using TCPConnectedSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<TCPConnectedSocket>;
using ThreadSafeTCPConnectedSocketAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TCPConnectedSocket>;
using TCPConnectedSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TCPConnectedSocket>;
using TCPConnectedSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TCPConnectedSocket>;

class SocketObserver;
using SocketObserverPtr = mojo::InterfacePtr<SocketObserver>;
using SocketObserverPtrInfo = mojo::InterfacePtrInfo<SocketObserver>;
using ThreadSafeSocketObserverPtr =
    mojo::ThreadSafeInterfacePtr<SocketObserver>;
using SocketObserverRequest = mojo::InterfaceRequest<SocketObserver>;
using SocketObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<SocketObserver>;
using ThreadSafeSocketObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SocketObserver>;
using SocketObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SocketObserver>;
using SocketObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SocketObserver>;

class TCPServerSocket;
using TCPServerSocketPtr = mojo::InterfacePtr<TCPServerSocket>;
using TCPServerSocketPtrInfo = mojo::InterfacePtrInfo<TCPServerSocket>;
using ThreadSafeTCPServerSocketPtr =
    mojo::ThreadSafeInterfacePtr<TCPServerSocket>;
using TCPServerSocketRequest = mojo::InterfaceRequest<TCPServerSocket>;
using TCPServerSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<TCPServerSocket>;
using ThreadSafeTCPServerSocketAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TCPServerSocket>;
using TCPServerSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TCPServerSocket>;
using TCPServerSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TCPServerSocket>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_FORWARD_H_