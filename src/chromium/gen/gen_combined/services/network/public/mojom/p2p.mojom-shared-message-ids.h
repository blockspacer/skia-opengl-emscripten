// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1492819807 value is based on sha256(salt + "P2PNetworkNotificationClient1").
constexpr uint32_t kP2PNetworkNotificationClient_NetworkListChanged_Name = 1492819807;
// The 1927598669 value is based on sha256(salt + "P2PSocketManager1").
constexpr uint32_t kP2PSocketManager_StartNetworkNotifications_Name = 1927598669;
// The 1623055595 value is based on sha256(salt + "P2PSocketManager2").
constexpr uint32_t kP2PSocketManager_GetHostAddress_Name = 1623055595;
// The 1358554922 value is based on sha256(salt + "P2PSocketManager3").
constexpr uint32_t kP2PSocketManager_CreateSocket_Name = 1358554922;
// The 220941788 value is based on sha256(salt + "P2PSocket1").
constexpr uint32_t kP2PSocket_Send_Name = 220941788;
// The 949599976 value is based on sha256(salt + "P2PSocket2").
constexpr uint32_t kP2PSocket_SetOption_Name = 949599976;
// The 1649280110 value is based on sha256(salt + "P2PSocketClient1").
constexpr uint32_t kP2PSocketClient_SocketCreated_Name = 1649280110;
// The 1778571382 value is based on sha256(salt + "P2PSocketClient2").
constexpr uint32_t kP2PSocketClient_SendComplete_Name = 1778571382;
// The 19518784 value is based on sha256(salt + "P2PSocketClient3").
constexpr uint32_t kP2PSocketClient_IncomingTcpConnection_Name = 19518784;
// The 1620837112 value is based on sha256(salt + "P2PSocketClient4").
constexpr uint32_t kP2PSocketClient_DataReceived_Name = 1620837112;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_MESSAGE_IDS_H_