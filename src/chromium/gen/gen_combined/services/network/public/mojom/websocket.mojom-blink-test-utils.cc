// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "services/network/public/mojom/websocket.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "url/mojom/url.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace network {
namespace mojom {
namespace blink {


void AuthenticationHandlerInterceptorForTesting::OnAuthRequired(::network::mojom::blink::AuthChallengeInfoPtr info, ::network::mojom::blink::HttpResponseHeadersPtr headers, ::network::mojom::blink::IPEndPointPtr remote_endpoint, OnAuthRequiredCallback callback) {
  GetForwardingInterface()->OnAuthRequired(std::move(info), std::move(headers), std::move(remote_endpoint), std::move(callback));
}
AuthenticationHandlerAsyncWaiter::AuthenticationHandlerAsyncWaiter(
    AuthenticationHandler* proxy) : proxy_(proxy) {}

AuthenticationHandlerAsyncWaiter::~AuthenticationHandlerAsyncWaiter() = default;

void AuthenticationHandlerAsyncWaiter::OnAuthRequired(
    ::network::mojom::blink::AuthChallengeInfoPtr info, ::network::mojom::blink::HttpResponseHeadersPtr headers, ::network::mojom::blink::IPEndPointPtr remote_endpoint, ::network::mojom::blink::AuthCredentialsPtr* out_credentials) {
  base::RunLoop loop;
  proxy_->OnAuthRequired(std::move(info),std::move(headers),std::move(remote_endpoint),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::network::mojom::blink::AuthCredentialsPtr* out_credentials
,
             ::network::mojom::blink::AuthCredentialsPtr credentials) {*out_credentials = std::move(credentials);
            loop->Quit();
          },
          &loop,
          out_credentials));
  loop.Run();
}



void WebSocketClientInterceptorForTesting::OnFailChannel(const WTF::String& reason) {
  GetForwardingInterface()->OnFailChannel(std::move(reason));
}
void WebSocketClientInterceptorForTesting::OnStartOpeningHandshake(WebSocketHandshakeRequestPtr request) {
  GetForwardingInterface()->OnStartOpeningHandshake(std::move(request));
}
void WebSocketClientInterceptorForTesting::OnFinishOpeningHandshake(WebSocketHandshakeResponsePtr response) {
  GetForwardingInterface()->OnFinishOpeningHandshake(std::move(response));
}
void WebSocketClientInterceptorForTesting::OnAddChannelResponse(const WTF::String& selected_protocol, const WTF::String& extensions) {
  GetForwardingInterface()->OnAddChannelResponse(std::move(selected_protocol), std::move(extensions));
}
void WebSocketClientInterceptorForTesting::OnDataFrame(bool fin, WebSocketMessageType type, const WTF::Vector<uint8_t>& data) {
  GetForwardingInterface()->OnDataFrame(std::move(fin), std::move(type), std::move(data));
}
void WebSocketClientInterceptorForTesting::OnFlowControl(int64_t quota) {
  GetForwardingInterface()->OnFlowControl(std::move(quota));
}
void WebSocketClientInterceptorForTesting::OnDropChannel(bool was_clean, uint16_t code, const WTF::String& reason) {
  GetForwardingInterface()->OnDropChannel(std::move(was_clean), std::move(code), std::move(reason));
}
void WebSocketClientInterceptorForTesting::OnClosingHandshake() {
  GetForwardingInterface()->OnClosingHandshake();
}
WebSocketClientAsyncWaiter::WebSocketClientAsyncWaiter(
    WebSocketClient* proxy) : proxy_(proxy) {}

WebSocketClientAsyncWaiter::~WebSocketClientAsyncWaiter() = default;




void WebSocketInterceptorForTesting::AddChannelRequest(const ::blink::KURL& url, const WTF::Vector<WTF::String>& requested_protocols, const ::blink::KURL& first_party_for_cookies, WTF::Vector<HttpHeaderPtr> additional_headers, WebSocketClientPtr client) {
  GetForwardingInterface()->AddChannelRequest(std::move(url), std::move(requested_protocols), std::move(first_party_for_cookies), std::move(additional_headers), std::move(client));
}
void WebSocketInterceptorForTesting::SendFrame(bool fin, WebSocketMessageType type, const WTF::Vector<uint8_t>& data) {
  GetForwardingInterface()->SendFrame(std::move(fin), std::move(type), std::move(data));
}
void WebSocketInterceptorForTesting::SendFlowControl(int64_t quota) {
  GetForwardingInterface()->SendFlowControl(std::move(quota));
}
void WebSocketInterceptorForTesting::StartClosingHandshake(uint16_t code, const WTF::String& reason) {
  GetForwardingInterface()->StartClosingHandshake(std::move(code), std::move(reason));
}
WebSocketAsyncWaiter::WebSocketAsyncWaiter(
    WebSocket* proxy) : proxy_(proxy) {}

WebSocketAsyncWaiter::~WebSocketAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif