// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 844955653 value is based on sha256(salt + "DevToolsFrontend1").
constexpr uint32_t kDevToolsFrontend_SetupDevToolsFrontend_Name = 844955653;
// The 253013798 value is based on sha256(salt + "DevToolsFrontend2").
constexpr uint32_t kDevToolsFrontend_SetupDevToolsExtensionAPI_Name = 253013798;
// The 1392929724 value is based on sha256(salt + "DevToolsFrontendHost1").
constexpr uint32_t kDevToolsFrontendHost_DispatchEmbedderMessage_Name = 1392929724;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_SHARED_MESSAGE_IDS_H_