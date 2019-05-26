// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1861899573 value is based on sha256(salt + "AuthenticationHandler1").
constexpr uint32_t kAuthenticationHandler_OnAuthRequired_Name = 1861899573;
// The 1448116213 value is based on sha256(salt + "WebSocketClient1").
constexpr uint32_t kWebSocketClient_OnFailChannel_Name = 1448116213;
// The 181590952 value is based on sha256(salt + "WebSocketClient2").
constexpr uint32_t kWebSocketClient_OnStartOpeningHandshake_Name = 181590952;
// The 1982743627 value is based on sha256(salt + "WebSocketClient3").
constexpr uint32_t kWebSocketClient_OnFinishOpeningHandshake_Name = 1982743627;
// The 1349442896 value is based on sha256(salt + "WebSocketClient4").
constexpr uint32_t kWebSocketClient_OnAddChannelResponse_Name = 1349442896;
// The 1834224831 value is based on sha256(salt + "WebSocketClient5").
constexpr uint32_t kWebSocketClient_OnDataFrame_Name = 1834224831;
// The 918140924 value is based on sha256(salt + "WebSocketClient6").
constexpr uint32_t kWebSocketClient_OnFlowControl_Name = 918140924;
// The 122497182 value is based on sha256(salt + "WebSocketClient7").
constexpr uint32_t kWebSocketClient_OnDropChannel_Name = 122497182;
// The 1947508179 value is based on sha256(salt + "WebSocketClient8").
constexpr uint32_t kWebSocketClient_OnClosingHandshake_Name = 1947508179;
// The 1071302620 value is based on sha256(salt + "WebSocket1").
constexpr uint32_t kWebSocket_AddChannelRequest_Name = 1071302620;
// The 510603572 value is based on sha256(salt + "WebSocket2").
constexpr uint32_t kWebSocket_SendFrame_Name = 510603572;
// The 1293935569 value is based on sha256(salt + "WebSocket3").
constexpr uint32_t kWebSocket_SendFlowControl_Name = 1293935569;
// The 217058431 value is based on sha256(salt + "WebSocket4").
constexpr uint32_t kWebSocket_StartClosingHandshake_Name = 217058431;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_