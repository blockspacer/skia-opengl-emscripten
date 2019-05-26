// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_CONSTANTS_MOJOM_BLINK_FORWARD_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_CONSTANTS_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "third_party/blink/public/platform/web_common.h"


namespace media_session {
namespace mojom {
}  // namespace media_session
}  // namespace mojom


namespace media_session {
namespace mojom {
namespace blink {

BLINK_PLATFORM_EXPORT extern const char kServiceName[];

constexpr int32_t kDefaultSeekTimeSeconds = 5;



}  // namespace blink
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_CONSTANTS_MOJOM_BLINK_FORWARD_H_