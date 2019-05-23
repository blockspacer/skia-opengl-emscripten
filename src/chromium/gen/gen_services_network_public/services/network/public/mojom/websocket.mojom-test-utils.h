// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/websocket.mojom.h"


namespace network {
namespace mojom {


class  AuthenticationHandlerInterceptorForTesting : public AuthenticationHandler {
  virtual AuthenticationHandler* GetForwardingInterface() = 0;
  void OnAuthRequired(const net::AuthChallengeInfo& info, const scoped_refptr<net::HttpResponseHeaders>& headers, const net::IPEndPoint& remote_endpoint, OnAuthRequiredCallback callback) override;
};
class  AuthenticationHandlerAsyncWaiter {
 public:
  explicit AuthenticationHandlerAsyncWaiter(AuthenticationHandler* proxy);
  ~AuthenticationHandlerAsyncWaiter();
  void OnAuthRequired(
      const net::AuthChallengeInfo& info, const scoped_refptr<net::HttpResponseHeaders>& headers, const net::IPEndPoint& remote_endpoint, base::Optional<net::AuthCredentials>* out_credentials);

 private:
  AuthenticationHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AuthenticationHandlerAsyncWaiter);
};


class  WebSocketClientInterceptorForTesting : public WebSocketClient {
  virtual WebSocketClient* GetForwardingInterface() = 0;
  void OnFailChannel(const std::string& reason) override;
  void OnStartOpeningHandshake(WebSocketHandshakeRequestPtr request) override;
  void OnFinishOpeningHandshake(WebSocketHandshakeResponsePtr response) override;
  void OnAddChannelResponse(const std::string& selected_protocol, const std::string& extensions) override;
  void OnDataFrame(bool fin, WebSocketMessageType type, const std::vector<uint8_t>& data) override;
  void OnFlowControl(int64_t quota) override;
  void OnDropChannel(bool was_clean, uint16_t code, const std::string& reason) override;
  void OnClosingHandshake() override;
};
class  WebSocketClientAsyncWaiter {
 public:
  explicit WebSocketClientAsyncWaiter(WebSocketClient* proxy);
  ~WebSocketClientAsyncWaiter();

 private:
  WebSocketClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebSocketClientAsyncWaiter);
};


class  WebSocketInterceptorForTesting : public WebSocket {
  virtual WebSocket* GetForwardingInterface() = 0;
  void AddChannelRequest(const GURL& url, const std::vector<std::string>& requested_protocols, const GURL& first_party_for_cookies, std::vector<HttpHeaderPtr> additional_headers, WebSocketClientPtr client) override;
  void SendFrame(bool fin, WebSocketMessageType type, const std::vector<uint8_t>& data) override;
  void SendFlowControl(int64_t quota) override;
  void StartClosingHandshake(uint16_t code, const std::string& reason) override;
};
class  WebSocketAsyncWaiter {
 public:
  explicit WebSocketAsyncWaiter(WebSocket* proxy);
  ~WebSocketAsyncWaiter();

 private:
  WebSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebSocketAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_TEST_UTILS_H_