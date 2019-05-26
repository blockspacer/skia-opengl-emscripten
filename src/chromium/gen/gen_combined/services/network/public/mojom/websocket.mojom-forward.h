// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_FORWARD_H_

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
class HttpHeaderDataView;

class WebSocketHandshakeRequestDataView;

class WebSocketHandshakeResponseDataView;


enum class WebSocketMessageType : int32_t;
class HttpHeader;
using HttpHeaderPtr = mojo::InlinedStructPtr<HttpHeader>;

class WebSocketHandshakeRequest;
using WebSocketHandshakeRequestPtr = mojo::StructPtr<WebSocketHandshakeRequest>;

class WebSocketHandshakeResponse;
using WebSocketHandshakeResponsePtr = mojo::StructPtr<WebSocketHandshakeResponse>;

class AuthenticationHandler;
using AuthenticationHandlerPtr = mojo::InterfacePtr<AuthenticationHandler>;
using AuthenticationHandlerPtrInfo = mojo::InterfacePtrInfo<AuthenticationHandler>;
using ThreadSafeAuthenticationHandlerPtr =
    mojo::ThreadSafeInterfacePtr<AuthenticationHandler>;
using AuthenticationHandlerRequest = mojo::InterfaceRequest<AuthenticationHandler>;
using AuthenticationHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<AuthenticationHandler>;
using ThreadSafeAuthenticationHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AuthenticationHandler>;
using AuthenticationHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AuthenticationHandler>;
using AuthenticationHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AuthenticationHandler>;

class WebSocketClient;
using WebSocketClientPtr = mojo::InterfacePtr<WebSocketClient>;
using WebSocketClientPtrInfo = mojo::InterfacePtrInfo<WebSocketClient>;
using ThreadSafeWebSocketClientPtr =
    mojo::ThreadSafeInterfacePtr<WebSocketClient>;
using WebSocketClientRequest = mojo::InterfaceRequest<WebSocketClient>;
using WebSocketClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebSocketClient>;
using ThreadSafeWebSocketClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebSocketClient>;
using WebSocketClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebSocketClient>;
using WebSocketClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebSocketClient>;

class WebSocket;
using WebSocketPtr = mojo::InterfacePtr<WebSocket>;
using WebSocketPtrInfo = mojo::InterfacePtrInfo<WebSocket>;
using ThreadSafeWebSocketPtr =
    mojo::ThreadSafeInterfacePtr<WebSocket>;
using WebSocketRequest = mojo::InterfaceRequest<WebSocket>;
using WebSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebSocket>;
using ThreadSafeWebSocketAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebSocket>;
using WebSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebSocket>;
using WebSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebSocket>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_FORWARD_H_