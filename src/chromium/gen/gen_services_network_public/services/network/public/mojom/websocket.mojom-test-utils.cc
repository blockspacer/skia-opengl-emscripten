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


#include "services/network/public/mojom/websocket.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "url/mojom/url.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "services/network/public/mojom/ip_endpoint.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_JUMBO_H_
#include "services/network/public/cpp/ip_address_mojom_traits.h"
#include "services/network/public/cpp/ip_endpoint_mojom_traits.h"
#include "services/network/public/cpp/net_ipc_param_traits.h"
#include "services/network/public/cpp/network_param_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void AuthenticationHandlerInterceptorForTesting::OnAuthRequired(const net::AuthChallengeInfo& info, const scoped_refptr<net::HttpResponseHeaders>& headers, const net::IPEndPoint& remote_endpoint, OnAuthRequiredCallback callback) {
  GetForwardingInterface()->OnAuthRequired(std::move(info), std::move(headers), std::move(remote_endpoint), std::move(callback));
}
AuthenticationHandlerAsyncWaiter::AuthenticationHandlerAsyncWaiter(
    AuthenticationHandler* proxy) : proxy_(proxy) {}

AuthenticationHandlerAsyncWaiter::~AuthenticationHandlerAsyncWaiter() = default;

void AuthenticationHandlerAsyncWaiter::OnAuthRequired(
    const net::AuthChallengeInfo& info, const scoped_refptr<net::HttpResponseHeaders>& headers, const net::IPEndPoint& remote_endpoint, base::Optional<net::AuthCredentials>* out_credentials) {
  base::RunLoop loop;
  proxy_->OnAuthRequired(std::move(info),std::move(headers),std::move(remote_endpoint),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<net::AuthCredentials>* out_credentials
,
             const base::Optional<net::AuthCredentials>& credentials) {*out_credentials = std::move(credentials);
            loop->Quit();
          },
          &loop,
          out_credentials));
  loop.Run();
}



void WebSocketClientInterceptorForTesting::OnFailChannel(const std::string& reason) {
  GetForwardingInterface()->OnFailChannel(std::move(reason));
}
void WebSocketClientInterceptorForTesting::OnStartOpeningHandshake(WebSocketHandshakeRequestPtr request) {
  GetForwardingInterface()->OnStartOpeningHandshake(std::move(request));
}
void WebSocketClientInterceptorForTesting::OnFinishOpeningHandshake(WebSocketHandshakeResponsePtr response) {
  GetForwardingInterface()->OnFinishOpeningHandshake(std::move(response));
}
void WebSocketClientInterceptorForTesting::OnAddChannelResponse(const std::string& selected_protocol, const std::string& extensions) {
  GetForwardingInterface()->OnAddChannelResponse(std::move(selected_protocol), std::move(extensions));
}
void WebSocketClientInterceptorForTesting::OnDataFrame(bool fin, WebSocketMessageType type, const std::vector<uint8_t>& data) {
  GetForwardingInterface()->OnDataFrame(std::move(fin), std::move(type), std::move(data));
}
void WebSocketClientInterceptorForTesting::OnFlowControl(int64_t quota) {
  GetForwardingInterface()->OnFlowControl(std::move(quota));
}
void WebSocketClientInterceptorForTesting::OnDropChannel(bool was_clean, uint16_t code, const std::string& reason) {
  GetForwardingInterface()->OnDropChannel(std::move(was_clean), std::move(code), std::move(reason));
}
void WebSocketClientInterceptorForTesting::OnClosingHandshake() {
  GetForwardingInterface()->OnClosingHandshake();
}
WebSocketClientAsyncWaiter::WebSocketClientAsyncWaiter(
    WebSocketClient* proxy) : proxy_(proxy) {}

WebSocketClientAsyncWaiter::~WebSocketClientAsyncWaiter() = default;




void WebSocketInterceptorForTesting::AddChannelRequest(const GURL& url, const std::vector<std::string>& requested_protocols, const GURL& first_party_for_cookies, std::vector<HttpHeaderPtr> additional_headers, WebSocketClientPtr client) {
  GetForwardingInterface()->AddChannelRequest(std::move(url), std::move(requested_protocols), std::move(first_party_for_cookies), std::move(additional_headers), std::move(client));
}
void WebSocketInterceptorForTesting::SendFrame(bool fin, WebSocketMessageType type, const std::vector<uint8_t>& data) {
  GetForwardingInterface()->SendFrame(std::move(fin), std::move(type), std::move(data));
}
void WebSocketInterceptorForTesting::SendFlowControl(int64_t quota) {
  GetForwardingInterface()->SendFlowControl(std::move(quota));
}
void WebSocketInterceptorForTesting::StartClosingHandshake(uint16_t code, const std::string& reason) {
  GetForwardingInterface()->StartClosingHandshake(std::move(code), std::move(reason));
}
WebSocketAsyncWaiter::WebSocketAsyncWaiter(
    WebSocket* proxy) : proxy_(proxy) {}

WebSocketAsyncWaiter::~WebSocketAsyncWaiter() = default;






}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif