// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "services/network/public/mojom/p2p_trusted.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/network/public/mojom/p2p.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_JUMBO_H_
#endif


namespace network {
namespace mojom {


void P2PTrustedSocketManagerClientInterceptorForTesting::InvalidSocketPortRangeRequested() {
  GetForwardingInterface()->InvalidSocketPortRangeRequested();
}
void P2PTrustedSocketManagerClientInterceptorForTesting::DumpPacket(const std::vector<uint8_t>& packet_header, uint64_t packet_length, bool incoming) {
  GetForwardingInterface()->DumpPacket(std::move(packet_header), std::move(packet_length), std::move(incoming));
}
P2PTrustedSocketManagerClientAsyncWaiter::P2PTrustedSocketManagerClientAsyncWaiter(
    P2PTrustedSocketManagerClient* proxy) : proxy_(proxy) {}

P2PTrustedSocketManagerClientAsyncWaiter::~P2PTrustedSocketManagerClientAsyncWaiter() = default;




void P2PTrustedSocketManagerInterceptorForTesting::StartRtpDump(bool incoming, bool outgoing) {
  GetForwardingInterface()->StartRtpDump(std::move(incoming), std::move(outgoing));
}
void P2PTrustedSocketManagerInterceptorForTesting::StopRtpDump(bool incoming, bool outgoing) {
  GetForwardingInterface()->StopRtpDump(std::move(incoming), std::move(outgoing));
}
P2PTrustedSocketManagerAsyncWaiter::P2PTrustedSocketManagerAsyncWaiter(
    P2PTrustedSocketManager* proxy) : proxy_(proxy) {}

P2PTrustedSocketManagerAsyncWaiter::~P2PTrustedSocketManagerAsyncWaiter() = default;






}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif