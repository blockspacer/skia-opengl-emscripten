// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class NotificationDirection : int32_t;

enum class NotificationActionType : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_NotificationDirection_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::NotificationDirection> {
  using Hash = blink_mojom_internal_NotificationDirection_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_NotificationActionType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::NotificationActionType> {
  using Hash = blink_mojom_internal_NotificationActionType_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using NotificationDirection = NotificationDirection;  // Alias for definition in the parent namespace.
using NotificationActionType = NotificationActionType;  // Alias for definition in the parent namespace.
class NotificationAction;
using NotificationActionPtr = mojo::StructPtr<NotificationAction>;

class NotificationData;
using NotificationDataPtr = mojo::StructPtr<NotificationData>;

class NotificationResources;
using NotificationResourcesPtr = mojo::StructPtr<NotificationResources>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_BLINK_FORWARD_H_