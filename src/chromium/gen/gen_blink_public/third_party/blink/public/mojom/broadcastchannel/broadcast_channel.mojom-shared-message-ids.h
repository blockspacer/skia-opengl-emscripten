// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 203527454 value is based on sha256(salt + "BroadcastChannelClient1").
constexpr uint32_t kBroadcastChannelClient_OnMessage_Name = 203527454;
// The 1065779461 value is based on sha256(salt + "BroadcastChannelProvider1").
constexpr uint32_t kBroadcastChannelProvider_ConnectToChannel_Name = 1065779461;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_SHARED_MESSAGE_IDS_H_