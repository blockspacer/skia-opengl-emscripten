// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 159155465 value is based on sha256(salt + "PreviewsResourceLoadingHintsReceiver1").
constexpr uint32_t kPreviewsResourceLoadingHintsReceiver_SetResourceLoadingHints_Name = 159155465;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_SHARED_MESSAGE_IDS_H_