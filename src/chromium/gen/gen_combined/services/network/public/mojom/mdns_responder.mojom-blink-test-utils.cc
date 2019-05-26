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


#include "services/network/public/mojom/mdns_responder.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/network/public/mojom/ip_address.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_BLINK_JUMBO_H_
#endif


namespace network {
namespace mojom {
namespace blink {


void MdnsResponderInterceptorForTesting::CreateNameForAddress(::network::mojom::blink::IPAddressPtr address, CreateNameForAddressCallback callback) {
  GetForwardingInterface()->CreateNameForAddress(std::move(address), std::move(callback));
}
void MdnsResponderInterceptorForTesting::RemoveNameForAddress(::network::mojom::blink::IPAddressPtr address, RemoveNameForAddressCallback callback) {
  GetForwardingInterface()->RemoveNameForAddress(std::move(address), std::move(callback));
}
MdnsResponderAsyncWaiter::MdnsResponderAsyncWaiter(
    MdnsResponder* proxy) : proxy_(proxy) {}

MdnsResponderAsyncWaiter::~MdnsResponderAsyncWaiter() = default;

void MdnsResponderAsyncWaiter::CreateNameForAddress(
    ::network::mojom::blink::IPAddressPtr address, WTF::String* out_name, bool* out_announcement_scheduled) {
  base::RunLoop loop;
  proxy_->CreateNameForAddress(std::move(address),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::String* out_name
,
             bool* out_announcement_scheduled
,
             const WTF::String& name,
             bool announcement_scheduled) {*out_name = std::move(name);*out_announcement_scheduled = std::move(announcement_scheduled);
            loop->Quit();
          },
          &loop,
          out_name,
          out_announcement_scheduled));
  loop.Run();
}
void MdnsResponderAsyncWaiter::RemoveNameForAddress(
    ::network::mojom::blink::IPAddressPtr address, bool* out_removed, bool* out_goodbye_scheduled) {
  base::RunLoop loop;
  proxy_->RemoveNameForAddress(std::move(address),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_removed
,
             bool* out_goodbye_scheduled
,
             bool removed,
             bool goodbye_scheduled) {*out_removed = std::move(removed);*out_goodbye_scheduled = std::move(goodbye_scheduled);
            loop->Quit();
          },
          &loop,
          out_removed,
          out_goodbye_scheduled));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif