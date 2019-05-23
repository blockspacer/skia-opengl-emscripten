// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_FORWARD_H_

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
class UDPSocketOptionsDataView;

class UDPSocketOptions;
using UDPSocketOptionsPtr = mojo::StructPtr<UDPSocketOptions>;

class UDPSocket;
using UDPSocketPtr = mojo::InterfacePtr<UDPSocket>;
using UDPSocketPtrInfo = mojo::InterfacePtrInfo<UDPSocket>;
using ThreadSafeUDPSocketPtr =
    mojo::ThreadSafeInterfacePtr<UDPSocket>;
using UDPSocketRequest = mojo::InterfaceRequest<UDPSocket>;
using UDPSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<UDPSocket>;
using ThreadSafeUDPSocketAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UDPSocket>;
using UDPSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UDPSocket>;
using UDPSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UDPSocket>;

class UDPSocketReceiver;
using UDPSocketReceiverPtr = mojo::InterfacePtr<UDPSocketReceiver>;
using UDPSocketReceiverPtrInfo = mojo::InterfacePtrInfo<UDPSocketReceiver>;
using ThreadSafeUDPSocketReceiverPtr =
    mojo::ThreadSafeInterfacePtr<UDPSocketReceiver>;
using UDPSocketReceiverRequest = mojo::InterfaceRequest<UDPSocketReceiver>;
using UDPSocketReceiverAssociatedPtr =
    mojo::AssociatedInterfacePtr<UDPSocketReceiver>;
using ThreadSafeUDPSocketReceiverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UDPSocketReceiver>;
using UDPSocketReceiverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UDPSocketReceiver>;
using UDPSocketReceiverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UDPSocketReceiver>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_FORWARD_H_