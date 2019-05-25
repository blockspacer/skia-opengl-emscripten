// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 837438973 value is based on sha256(salt + "TCPBoundSocket1").
constexpr uint32_t kTCPBoundSocket_Listen_Name = 837438973;
// The 158983135 value is based on sha256(salt + "TCPBoundSocket2").
constexpr uint32_t kTCPBoundSocket_Connect_Name = 158983135;
// The 2034718940 value is based on sha256(salt + "TCPConnectedSocket1").
constexpr uint32_t kTCPConnectedSocket_UpgradeToTLS_Name = 2034718940;
// The 850521750 value is based on sha256(salt + "TCPConnectedSocket2").
constexpr uint32_t kTCPConnectedSocket_SetSendBufferSize_Name = 850521750;
// The 1034200581 value is based on sha256(salt + "TCPConnectedSocket3").
constexpr uint32_t kTCPConnectedSocket_SetReceiveBufferSize_Name = 1034200581;
// The 1435921516 value is based on sha256(salt + "TCPConnectedSocket4").
constexpr uint32_t kTCPConnectedSocket_SetNoDelay_Name = 1435921516;
// The 1993307502 value is based on sha256(salt + "TCPConnectedSocket5").
constexpr uint32_t kTCPConnectedSocket_SetKeepAlive_Name = 1993307502;
// The 1823520953 value is based on sha256(salt + "SocketObserver1").
constexpr uint32_t kSocketObserver_OnReadError_Name = 1823520953;
// The 899994472 value is based on sha256(salt + "SocketObserver2").
constexpr uint32_t kSocketObserver_OnWriteError_Name = 899994472;
// The 776110420 value is based on sha256(salt + "TCPServerSocket1").
constexpr uint32_t kTCPServerSocket_Accept_Name = 776110420;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_