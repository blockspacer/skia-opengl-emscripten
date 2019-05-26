// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kRemoteObjectHost_GetObject_Name = 0;
constexpr uint32_t kRemoteObjectHost_ReleaseObject_Name = 1;
constexpr uint32_t kRemoteObject_HasMethod_Name = 0;
constexpr uint32_t kRemoteObject_GetMethods_Name = 1;
constexpr uint32_t kRemoteObject_InvokeMethod_Name = 2;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_SHARED_MESSAGE_IDS_H_