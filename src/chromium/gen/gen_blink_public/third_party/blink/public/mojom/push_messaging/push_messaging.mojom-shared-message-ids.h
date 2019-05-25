// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1941645304 value is based on sha256(salt + "PushMessaging1").
constexpr uint32_t kPushMessaging_Subscribe_Name = 1941645304;
// The 1850581324 value is based on sha256(salt + "PushMessaging2").
constexpr uint32_t kPushMessaging_Unsubscribe_Name = 1850581324;
// The 975647723 value is based on sha256(salt + "PushMessaging3").
constexpr uint32_t kPushMessaging_GetSubscription_Name = 975647723;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_SHARED_MESSAGE_IDS_H_