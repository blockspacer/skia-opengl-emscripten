// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/websocket.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT AuthenticationHandlerInterceptorForTesting : public AuthenticationHandler {
  virtual AuthenticationHandler* GetForwardingInterface() = 0;
  void OnAuthRequired(::network::mojom::blink::AuthChallengeInfoPtr info, ::network::mojom::blink::HttpResponseHeadersPtr headers, ::network::mojom::blink::IPEndPointPtr remote_endpoint, OnAuthRequiredCallback callback) override;
};
class BLINK_PLATFORM_EXPORT AuthenticationHandlerAsyncWaiter {
 public:
  explicit AuthenticationHandlerAsyncWaiter(AuthenticationHandler* proxy);
  ~AuthenticationHandlerAsyncWaiter();
  void OnAuthRequired(
      ::network::mojom::blink::AuthChallengeInfoPtr info, ::network::mojom::blink::HttpResponseHeadersPtr headers, ::network::mojom::blink::IPEndPointPtr remote_endpoint, ::network::mojom::blink::AuthCredentialsPtr* out_credentials);

 private:
  AuthenticationHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AuthenticationHandlerAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT WebSocketClientInterceptorForTesting : public WebSocketClient {
  virtual WebSocketClient* GetForwardingInterface() = 0;
  void OnFailChannel(const WTF::String& reason) override;
  void OnStartOpeningHandshake(WebSocketHandshakeRequestPtr request) override;
  void OnFinishOpeningHandshake(WebSocketHandshakeResponsePtr response) override;
  void OnAddChannelResponse(const WTF::String& selected_protocol, const WTF::String& extensions) override;
  void OnDataFrame(bool fin, WebSocketMessageType type, const WTF::Vector<uint8_t>& data) override;
  void OnFlowControl(int64_t quota) override;
  void OnDropChannel(bool was_clean, uint16_t code, const WTF::String& reason) override;
  void OnClosingHandshake() override;
};
class BLINK_PLATFORM_EXPORT WebSocketClientAsyncWaiter {
 public:
  explicit WebSocketClientAsyncWaiter(WebSocketClient* proxy);
  ~WebSocketClientAsyncWaiter();

 private:
  WebSocketClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebSocketClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT WebSocketInterceptorForTesting : public WebSocket {
  virtual WebSocket* GetForwardingInterface() = 0;
  void AddChannelRequest(const ::blink::KURL& url, const WTF::Vector<WTF::String>& requested_protocols, const ::blink::KURL& first_party_for_cookies, WTF::Vector<HttpHeaderPtr> additional_headers, WebSocketClientPtr client) override;
  void SendFrame(bool fin, WebSocketMessageType type, const WTF::Vector<uint8_t>& data) override;
  void SendFlowControl(int64_t quota) override;
  void StartClosingHandshake(uint16_t code, const WTF::String& reason) override;
};
class BLINK_PLATFORM_EXPORT WebSocketAsyncWaiter {
 public:
  explicit WebSocketAsyncWaiter(WebSocket* proxy);
  ~WebSocketAsyncWaiter();

 private:
  WebSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebSocketAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_BLINK_TEST_UTILS_H_