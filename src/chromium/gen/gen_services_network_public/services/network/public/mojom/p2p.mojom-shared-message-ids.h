// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 204717449 value is based on sha256(salt + "P2PNetworkNotificationClient1").
constexpr uint32_t kP2PNetworkNotificationClient_NetworkListChanged_Name = 204717449;
// The 1196287645 value is based on sha256(salt + "P2PSocketManager1").
constexpr uint32_t kP2PSocketManager_StartNetworkNotifications_Name = 1196287645;
// The 168290900 value is based on sha256(salt + "P2PSocketManager2").
constexpr uint32_t kP2PSocketManager_GetHostAddress_Name = 168290900;
// The 1799545258 value is based on sha256(salt + "P2PSocketManager3").
constexpr uint32_t kP2PSocketManager_CreateSocket_Name = 1799545258;
// The 1150133929 value is based on sha256(salt + "P2PSocket1").
constexpr uint32_t kP2PSocket_Send_Name = 1150133929;
// The 1644491188 value is based on sha256(salt + "P2PSocket2").
constexpr uint32_t kP2PSocket_SetOption_Name = 1644491188;
// The 1519047197 value is based on sha256(salt + "P2PSocketClient1").
constexpr uint32_t kP2PSocketClient_SocketCreated_Name = 1519047197;
// The 1141853201 value is based on sha256(salt + "P2PSocketClient2").
constexpr uint32_t kP2PSocketClient_SendComplete_Name = 1141853201;
// The 206914983 value is based on sha256(salt + "P2PSocketClient3").
constexpr uint32_t kP2PSocketClient_IncomingTcpConnection_Name = 206914983;
// The 1507819335 value is based on sha256(salt + "P2PSocketClient4").
constexpr uint32_t kP2PSocketClient_DataReceived_Name = 1507819335;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_MESSAGE_IDS_H_