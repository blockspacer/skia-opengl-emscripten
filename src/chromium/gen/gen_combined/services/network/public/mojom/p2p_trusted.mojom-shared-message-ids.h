// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1948049663 value is based on sha256(salt + "P2PTrustedSocketManagerClient1").
constexpr uint32_t kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name = 1948049663;
// The 1248490464 value is based on sha256(salt + "P2PTrustedSocketManagerClient2").
constexpr uint32_t kP2PTrustedSocketManagerClient_DumpPacket_Name = 1248490464;
// The 1896681314 value is based on sha256(salt + "P2PTrustedSocketManager1").
constexpr uint32_t kP2PTrustedSocketManager_StartRtpDump_Name = 1896681314;
// The 1858255510 value is based on sha256(salt + "P2PTrustedSocketManager2").
constexpr uint32_t kP2PTrustedSocketManager_StopRtpDump_Name = 1858255510;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_SHARED_MESSAGE_IDS_H_