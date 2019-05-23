// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 990893751 value is based on sha256(salt + "UDPSocket1").
constexpr uint32_t kUDPSocket_Bind_Name = 990893751;
// The 1937253605 value is based on sha256(salt + "UDPSocket2").
constexpr uint32_t kUDPSocket_Connect_Name = 1937253605;
// The 869070112 value is based on sha256(salt + "UDPSocket3").
constexpr uint32_t kUDPSocket_SetBroadcast_Name = 869070112;
// The 1547913554 value is based on sha256(salt + "UDPSocket4").
constexpr uint32_t kUDPSocket_SetSendBufferSize_Name = 1547913554;
// The 668595027 value is based on sha256(salt + "UDPSocket5").
constexpr uint32_t kUDPSocket_SetReceiveBufferSize_Name = 668595027;
// The 219661415 value is based on sha256(salt + "UDPSocket6").
constexpr uint32_t kUDPSocket_JoinGroup_Name = 219661415;
// The 1540057690 value is based on sha256(salt + "UDPSocket7").
constexpr uint32_t kUDPSocket_LeaveGroup_Name = 1540057690;
// The 1661104501 value is based on sha256(salt + "UDPSocket8").
constexpr uint32_t kUDPSocket_ReceiveMore_Name = 1661104501;
// The 1161176830 value is based on sha256(salt + "UDPSocket9").
constexpr uint32_t kUDPSocket_ReceiveMoreWithBufferSize_Name = 1161176830;
// The 906741375 value is based on sha256(salt + "UDPSocket10").
constexpr uint32_t kUDPSocket_SendTo_Name = 906741375;
// The 643194598 value is based on sha256(salt + "UDPSocket11").
constexpr uint32_t kUDPSocket_Send_Name = 643194598;
// The 2036217969 value is based on sha256(salt + "UDPSocket12").
constexpr uint32_t kUDPSocket_Close_Name = 2036217969;
// The 1255584045 value is based on sha256(salt + "UDPSocketReceiver1").
constexpr uint32_t kUDPSocketReceiver_OnReceived_Name = 1255584045;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_