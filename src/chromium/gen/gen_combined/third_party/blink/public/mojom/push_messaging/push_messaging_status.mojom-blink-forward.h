// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_STATUS_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_STATUS_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class PushDeliveryStatus : int32_t;

enum class PushGetRegistrationStatus : int32_t;

enum class PushRegistrationStatus : int32_t;

enum class PushUnregistrationReason : int32_t;

enum class PushUnregistrationStatus : int32_t;

enum class PushUserVisibleStatus : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_PushDeliveryStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::PushDeliveryStatus> {
  using Hash = blink_mojom_internal_PushDeliveryStatus_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_PushGetRegistrationStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::PushGetRegistrationStatus> {
  using Hash = blink_mojom_internal_PushGetRegistrationStatus_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_PushRegistrationStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::PushRegistrationStatus> {
  using Hash = blink_mojom_internal_PushRegistrationStatus_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_PushUnregistrationReason_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::PushUnregistrationReason> {
  using Hash = blink_mojom_internal_PushUnregistrationReason_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_PushUnregistrationStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::PushUnregistrationStatus> {
  using Hash = blink_mojom_internal_PushUnregistrationStatus_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_PushUserVisibleStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::PushUserVisibleStatus> {
  using Hash = blink_mojom_internal_PushUserVisibleStatus_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using PushDeliveryStatus = PushDeliveryStatus;  // Alias for definition in the parent namespace.
using PushGetRegistrationStatus = PushGetRegistrationStatus;  // Alias for definition in the parent namespace.
using PushRegistrationStatus = PushRegistrationStatus;  // Alias for definition in the parent namespace.
using PushUnregistrationReason = PushUnregistrationReason;  // Alias for definition in the parent namespace.
using PushUnregistrationStatus = PushUnregistrationStatus;  // Alias for definition in the parent namespace.
using PushUserVisibleStatus = PushUserVisibleStatus;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_STATUS_MOJOM_BLINK_FORWARD_H_