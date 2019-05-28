// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 638713360 value is based on sha256(salt + "ScreenOrientation1").
constexpr uint32_t kScreenOrientation_LockOrientation_Name = 638713360;
// The 1728420221 value is based on sha256(salt + "ScreenOrientation2").
constexpr uint32_t kScreenOrientation_UnlockOrientation_Name = 1728420221;
// The 2128155361 value is based on sha256(salt + "ScreenOrientationListener1").
constexpr uint32_t kScreenOrientationListener_IsAutoRotateEnabledByUser_Name = 2128155361;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_MESSAGE_IDS_H_