// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/mdns_responder.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT MdnsResponderInterceptorForTesting : public MdnsResponder {
  virtual MdnsResponder* GetForwardingInterface() = 0;
  void CreateNameForAddress(::network::mojom::blink::IPAddressPtr address, CreateNameForAddressCallback callback) override;
  void RemoveNameForAddress(::network::mojom::blink::IPAddressPtr address, RemoveNameForAddressCallback callback) override;
};
class BLINK_PLATFORM_EXPORT MdnsResponderAsyncWaiter {
 public:
  explicit MdnsResponderAsyncWaiter(MdnsResponder* proxy);
  ~MdnsResponderAsyncWaiter();
  void CreateNameForAddress(
      ::network::mojom::blink::IPAddressPtr address, WTF::String* out_name, bool* out_announcement_scheduled);
  void RemoveNameForAddress(
      ::network::mojom::blink::IPAddressPtr address, bool* out_removed, bool* out_goodbye_scheduled);

 private:
  MdnsResponder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MdnsResponderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_BLINK_TEST_UTILS_H_