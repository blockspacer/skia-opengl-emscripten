// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_LOCK_TYPES_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_LOCK_TYPES_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {

enum class ScreenOrientationLockResult : int32_t;

enum class ScreenOrientationLockType : int32_t;
}  // namespace device
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct device_mojom_internal_ScreenOrientationLockResult_DataHashFn;

template <>
struct DefaultHash<::device::mojom::ScreenOrientationLockResult> {
  using Hash = device_mojom_internal_ScreenOrientationLockResult_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_ScreenOrientationLockType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::ScreenOrientationLockType> {
  using Hash = device_mojom_internal_ScreenOrientationLockType_DataHashFn;
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using ScreenOrientationLockResult = ScreenOrientationLockResult;  // Alias for definition in the parent namespace.
using ScreenOrientationLockType = ScreenOrientationLockType;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace device
#include "third_party/blink/public/common/screen_orientation/web_screen_orientation_lock_type.h"

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_LOCK_TYPES_MOJOM_BLINK_FORWARD_H_