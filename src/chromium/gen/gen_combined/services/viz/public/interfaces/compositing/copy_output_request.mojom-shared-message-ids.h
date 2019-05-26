// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 180622913 value is based on sha256(salt + "CopyOutputResultSender1").
constexpr uint32_t kCopyOutputResultSender_SendResult_Name = 180622913;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_SHARED_MESSAGE_IDS_H_