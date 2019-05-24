// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/broadcastchannel/broadcast_channel.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT BroadcastChannelClientInterceptorForTesting : public BroadcastChannelClient {
  virtual BroadcastChannelClient* GetForwardingInterface() = 0;
  void OnMessage(::blink::BlinkCloneableMessage message) override;
};
class CORE_EXPORT BroadcastChannelClientAsyncWaiter {
 public:
  explicit BroadcastChannelClientAsyncWaiter(BroadcastChannelClient* proxy);
  ~BroadcastChannelClientAsyncWaiter();

 private:
  BroadcastChannelClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BroadcastChannelClientAsyncWaiter);
};


class CORE_EXPORT BroadcastChannelProviderInterceptorForTesting : public BroadcastChannelProvider {
  virtual BroadcastChannelProvider* GetForwardingInterface() = 0;
  void ConnectToChannel(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name, BroadcastChannelClientAssociatedPtrInfo receiver, BroadcastChannelClientAssociatedRequest sender) override;
};
class CORE_EXPORT BroadcastChannelProviderAsyncWaiter {
 public:
  explicit BroadcastChannelProviderAsyncWaiter(BroadcastChannelProvider* proxy);
  ~BroadcastChannelProviderAsyncWaiter();

 private:
  BroadcastChannelProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BroadcastChannelProviderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_BLINK_TEST_UTILS_H_