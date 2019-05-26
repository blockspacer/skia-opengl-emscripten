// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/mdns_responder.mojom.h"


namespace network {
namespace mojom {


class  MdnsResponderInterceptorForTesting : public MdnsResponder {
  virtual MdnsResponder* GetForwardingInterface() = 0;
  void CreateNameForAddress(const net::IPAddress& address, CreateNameForAddressCallback callback) override;
  void RemoveNameForAddress(const net::IPAddress& address, RemoveNameForAddressCallback callback) override;
};
class  MdnsResponderAsyncWaiter {
 public:
  explicit MdnsResponderAsyncWaiter(MdnsResponder* proxy);
  ~MdnsResponderAsyncWaiter();
  void CreateNameForAddress(
      const net::IPAddress& address, std::string* out_name, bool* out_announcement_scheduled);
  void RemoveNameForAddress(
      const net::IPAddress& address, bool* out_removed, bool* out_goodbye_scheduled);

 private:
  MdnsResponder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MdnsResponderAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_TEST_UTILS_H_