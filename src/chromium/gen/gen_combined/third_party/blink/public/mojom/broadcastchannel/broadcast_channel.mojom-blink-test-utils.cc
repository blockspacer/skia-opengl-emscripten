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


#include "third_party/blink/public/mojom/broadcastchannel/broadcast_channel.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/public/mojom/messaging/cloneable_message.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/core/messaging/blink_cloneable_message_struct_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void BroadcastChannelClientInterceptorForTesting::OnMessage(::blink::BlinkCloneableMessage message) {
  GetForwardingInterface()->OnMessage(std::move(message));
}
BroadcastChannelClientAsyncWaiter::BroadcastChannelClientAsyncWaiter(
    BroadcastChannelClient* proxy) : proxy_(proxy) {}

BroadcastChannelClientAsyncWaiter::~BroadcastChannelClientAsyncWaiter() = default;




void BroadcastChannelProviderInterceptorForTesting::ConnectToChannel(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name, BroadcastChannelClientAssociatedPtrInfo receiver, BroadcastChannelClientAssociatedRequest sender) {
  GetForwardingInterface()->ConnectToChannel(std::move(origin), std::move(name), std::move(receiver), std::move(sender));
}
BroadcastChannelProviderAsyncWaiter::BroadcastChannelProviderAsyncWaiter(
    BroadcastChannelProvider* proxy) : proxy_(proxy) {}

BroadcastChannelProviderAsyncWaiter::~BroadcastChannelProviderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif