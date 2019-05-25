// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 326780772 value is based on sha256(salt + "BroadcastChannelClient1").
constexpr uint32_t kBroadcastChannelClient_OnMessage_Name = 326780772;
// The 1690551443 value is based on sha256(salt + "BroadcastChannelProvider1").
constexpr uint32_t kBroadcastChannelProvider_ConnectToChannel_Name = 1690551443;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_SHARED_MESSAGE_IDS_H_