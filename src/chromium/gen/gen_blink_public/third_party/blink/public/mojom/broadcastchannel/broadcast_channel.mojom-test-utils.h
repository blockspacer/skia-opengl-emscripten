// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/broadcastchannel/broadcast_channel.mojom.h"
#include "content/common/content_export.h"


namespace blink {
namespace mojom {


class CONTENT_EXPORT BroadcastChannelClientInterceptorForTesting : public BroadcastChannelClient {
  virtual BroadcastChannelClient* GetForwardingInterface() = 0;
  void OnMessage(::blink::CloneableMessage message) override;
};
class CONTENT_EXPORT BroadcastChannelClientAsyncWaiter {
 public:
  explicit BroadcastChannelClientAsyncWaiter(BroadcastChannelClient* proxy);
  ~BroadcastChannelClientAsyncWaiter();

 private:
  BroadcastChannelClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BroadcastChannelClientAsyncWaiter);
};


class CONTENT_EXPORT BroadcastChannelProviderInterceptorForTesting : public BroadcastChannelProvider {
  virtual BroadcastChannelProvider* GetForwardingInterface() = 0;
  void ConnectToChannel(const url::Origin& origin, const std::string& name, BroadcastChannelClientAssociatedPtrInfo receiver, BroadcastChannelClientAssociatedRequest sender) override;
};
class CONTENT_EXPORT BroadcastChannelProviderAsyncWaiter {
 public:
  explicit BroadcastChannelProviderAsyncWaiter(BroadcastChannelProvider* proxy);
  ~BroadcastChannelProviderAsyncWaiter();

 private:
  BroadcastChannelProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BroadcastChannelProviderAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_TEST_UTILS_H_