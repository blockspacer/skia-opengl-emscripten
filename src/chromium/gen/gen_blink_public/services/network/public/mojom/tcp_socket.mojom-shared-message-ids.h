// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1149785435 value is based on sha256(salt + "TCPBoundSocket1").
constexpr uint32_t kTCPBoundSocket_Listen_Name = 1149785435;
// The 549291232 value is based on sha256(salt + "TCPBoundSocket2").
constexpr uint32_t kTCPBoundSocket_Connect_Name = 549291232;
// The 222091456 value is based on sha256(salt + "TCPConnectedSocket1").
constexpr uint32_t kTCPConnectedSocket_UpgradeToTLS_Name = 222091456;
// The 1010698013 value is based on sha256(salt + "TCPConnectedSocket2").
constexpr uint32_t kTCPConnectedSocket_SetSendBufferSize_Name = 1010698013;
// The 829638241 value is based on sha256(salt + "TCPConnectedSocket3").
constexpr uint32_t kTCPConnectedSocket_SetReceiveBufferSize_Name = 829638241;
// The 961988454 value is based on sha256(salt + "TCPConnectedSocket4").
constexpr uint32_t kTCPConnectedSocket_SetNoDelay_Name = 961988454;
// The 1267517943 value is based on sha256(salt + "TCPConnectedSocket5").
constexpr uint32_t kTCPConnectedSocket_SetKeepAlive_Name = 1267517943;
// The 304199780 value is based on sha256(salt + "SocketObserver1").
constexpr uint32_t kSocketObserver_OnReadError_Name = 304199780;
// The 1535746334 value is based on sha256(salt + "SocketObserver2").
constexpr uint32_t kSocketObserver_OnWriteError_Name = 1535746334;
// The 1896386637 value is based on sha256(salt + "TCPServerSocket1").
constexpr uint32_t kTCPServerSocket_Accept_Name = 1896386637;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_