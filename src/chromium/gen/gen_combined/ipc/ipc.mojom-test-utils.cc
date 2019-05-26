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


#include "ipc/ipc.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/big_buffer.mojom.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom.h"


#ifndef IPC_IPC_MOJOM_JUMBO_H_
#define IPC_IPC_MOJOM_JUMBO_H_
#include "ipc/message_mojom_traits.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#endif


namespace IPC {
namespace mojom {


GenericInterfaceAsyncWaiter::GenericInterfaceAsyncWaiter(
    GenericInterface* proxy) : proxy_(proxy) {}

GenericInterfaceAsyncWaiter::~GenericInterfaceAsyncWaiter() = default;




void ChannelInterceptorForTesting::SetPeerPid(int32_t pid) {
  GetForwardingInterface()->SetPeerPid(std::move(pid));
}
void ChannelInterceptorForTesting::Receive(IPC::MessageView message) {
  GetForwardingInterface()->Receive(std::move(message));
}
void ChannelInterceptorForTesting::GetAssociatedInterface(const std::string& name, GenericInterfaceAssociatedRequest request) {
  GetForwardingInterface()->GetAssociatedInterface(std::move(name), std::move(request));
}
ChannelAsyncWaiter::ChannelAsyncWaiter(
    Channel* proxy) : proxy_(proxy) {}

ChannelAsyncWaiter::~ChannelAsyncWaiter() = default;




ChannelBootstrapAsyncWaiter::ChannelBootstrapAsyncWaiter(
    ChannelBootstrap* proxy) : proxy_(proxy) {}

ChannelBootstrapAsyncWaiter::~ChannelBootstrapAsyncWaiter() = default;






}  // namespace mojom
}  // namespace IPC

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif