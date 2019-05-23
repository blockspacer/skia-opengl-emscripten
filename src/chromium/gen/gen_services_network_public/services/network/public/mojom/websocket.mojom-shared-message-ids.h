// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 714438858 value is based on sha256(salt + "AuthenticationHandler1").
constexpr uint32_t kAuthenticationHandler_OnAuthRequired_Name = 714438858;
// The 1350814078 value is based on sha256(salt + "WebSocketClient1").
constexpr uint32_t kWebSocketClient_OnFailChannel_Name = 1350814078;
// The 1565041396 value is based on sha256(salt + "WebSocketClient2").
constexpr uint32_t kWebSocketClient_OnStartOpeningHandshake_Name = 1565041396;
// The 1802083724 value is based on sha256(salt + "WebSocketClient3").
constexpr uint32_t kWebSocketClient_OnFinishOpeningHandshake_Name = 1802083724;
// The 961461138 value is based on sha256(salt + "WebSocketClient4").
constexpr uint32_t kWebSocketClient_OnAddChannelResponse_Name = 961461138;
// The 577125643 value is based on sha256(salt + "WebSocketClient5").
constexpr uint32_t kWebSocketClient_OnDataFrame_Name = 577125643;
// The 1962655978 value is based on sha256(salt + "WebSocketClient6").
constexpr uint32_t kWebSocketClient_OnFlowControl_Name = 1962655978;
// The 564381355 value is based on sha256(salt + "WebSocketClient7").
constexpr uint32_t kWebSocketClient_OnDropChannel_Name = 564381355;
// The 1518268878 value is based on sha256(salt + "WebSocketClient8").
constexpr uint32_t kWebSocketClient_OnClosingHandshake_Name = 1518268878;
// The 532009828 value is based on sha256(salt + "WebSocket1").
constexpr uint32_t kWebSocket_AddChannelRequest_Name = 532009828;
// The 1300588888 value is based on sha256(salt + "WebSocket2").
constexpr uint32_t kWebSocket_SendFrame_Name = 1300588888;
// The 1313671845 value is based on sha256(salt + "WebSocket3").
constexpr uint32_t kWebSocket_SendFlowControl_Name = 1313671845;
// The 84500620 value is based on sha256(salt + "WebSocket4").
constexpr uint32_t kWebSocket_StartClosingHandshake_Name = 84500620;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_