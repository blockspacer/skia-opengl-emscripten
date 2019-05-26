// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
}  // namespace network
}  // namespace mojom


namespace network {
namespace mojom {
namespace blink {
class ProxyResolvingSocketOptions;
using ProxyResolvingSocketOptionsPtr = mojo::InlinedStructPtr<ProxyResolvingSocketOptions>;

class ProxyResolvingSocket;
using ProxyResolvingSocketPtr = mojo::InterfacePtr<ProxyResolvingSocket>;
using ProxyResolvingSocketPtrInfo = mojo::InterfacePtrInfo<ProxyResolvingSocket>;
using ThreadSafeProxyResolvingSocketPtr =
    mojo::ThreadSafeInterfacePtr<ProxyResolvingSocket>;
using ProxyResolvingSocketRequest = mojo::InterfaceRequest<ProxyResolvingSocket>;
using ProxyResolvingSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyResolvingSocket>;
using ThreadSafeProxyResolvingSocketAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProxyResolvingSocket>;
using ProxyResolvingSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyResolvingSocket>;
using ProxyResolvingSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProxyResolvingSocket>;

class ProxyResolvingSocketFactory;
using ProxyResolvingSocketFactoryPtr = mojo::InterfacePtr<ProxyResolvingSocketFactory>;
using ProxyResolvingSocketFactoryPtrInfo = mojo::InterfacePtrInfo<ProxyResolvingSocketFactory>;
using ThreadSafeProxyResolvingSocketFactoryPtr =
    mojo::ThreadSafeInterfacePtr<ProxyResolvingSocketFactory>;
using ProxyResolvingSocketFactoryRequest = mojo::InterfaceRequest<ProxyResolvingSocketFactory>;
using ProxyResolvingSocketFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyResolvingSocketFactory>;
using ThreadSafeProxyResolvingSocketFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProxyResolvingSocketFactory>;
using ProxyResolvingSocketFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyResolvingSocketFactory>;
using ProxyResolvingSocketFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProxyResolvingSocketFactory>;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_BLINK_FORWARD_H_