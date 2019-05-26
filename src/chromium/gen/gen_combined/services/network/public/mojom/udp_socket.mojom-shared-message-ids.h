// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1970045483 value is based on sha256(salt + "UDPSocket1").
constexpr uint32_t kUDPSocket_Bind_Name = 1970045483;
// The 2069657188 value is based on sha256(salt + "UDPSocket2").
constexpr uint32_t kUDPSocket_Connect_Name = 2069657188;
// The 136424913 value is based on sha256(salt + "UDPSocket3").
constexpr uint32_t kUDPSocket_SetBroadcast_Name = 136424913;
// The 1083908960 value is based on sha256(salt + "UDPSocket4").
constexpr uint32_t kUDPSocket_SetSendBufferSize_Name = 1083908960;
// The 1448404851 value is based on sha256(salt + "UDPSocket5").
constexpr uint32_t kUDPSocket_SetReceiveBufferSize_Name = 1448404851;
// The 96135610 value is based on sha256(salt + "UDPSocket6").
constexpr uint32_t kUDPSocket_JoinGroup_Name = 96135610;
// The 1289838077 value is based on sha256(salt + "UDPSocket7").
constexpr uint32_t kUDPSocket_LeaveGroup_Name = 1289838077;
// The 627975204 value is based on sha256(salt + "UDPSocket8").
constexpr uint32_t kUDPSocket_ReceiveMore_Name = 627975204;
// The 315208132 value is based on sha256(salt + "UDPSocket9").
constexpr uint32_t kUDPSocket_ReceiveMoreWithBufferSize_Name = 315208132;
// The 2032878277 value is based on sha256(salt + "UDPSocket10").
constexpr uint32_t kUDPSocket_SendTo_Name = 2032878277;
// The 710473763 value is based on sha256(salt + "UDPSocket11").
constexpr uint32_t kUDPSocket_Send_Name = 710473763;
// The 1346255452 value is based on sha256(salt + "UDPSocket12").
constexpr uint32_t kUDPSocket_Close_Name = 1346255452;
// The 1790319569 value is based on sha256(salt + "UDPSocketReceiver1").
constexpr uint32_t kUDPSocketReceiver_OnReceived_Name = 1790319569;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_