// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/p2p_trusted.mojom.h"


namespace network {
namespace mojom {


class  P2PTrustedSocketManagerClientInterceptorForTesting : public P2PTrustedSocketManagerClient {
  virtual P2PTrustedSocketManagerClient* GetForwardingInterface() = 0;
  void InvalidSocketPortRangeRequested() override;
  void DumpPacket(const std::vector<uint8_t>& packet_header, uint64_t packet_length, bool incoming) override;
};
class  P2PTrustedSocketManagerClientAsyncWaiter {
 public:
  explicit P2PTrustedSocketManagerClientAsyncWaiter(P2PTrustedSocketManagerClient* proxy);
  ~P2PTrustedSocketManagerClientAsyncWaiter();

 private:
  P2PTrustedSocketManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(P2PTrustedSocketManagerClientAsyncWaiter);
};


class  P2PTrustedSocketManagerInterceptorForTesting : public P2PTrustedSocketManager {
  virtual P2PTrustedSocketManager* GetForwardingInterface() = 0;
  void StartRtpDump(bool incoming, bool outgoing) override;
  void StopRtpDump(bool incoming, bool outgoing) override;
};
class  P2PTrustedSocketManagerAsyncWaiter {
 public:
  explicit P2PTrustedSocketManagerAsyncWaiter(P2PTrustedSocketManager* proxy);
  ~P2PTrustedSocketManagerAsyncWaiter();

 private:
  P2PTrustedSocketManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(P2PTrustedSocketManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_TEST_UTILS_H_