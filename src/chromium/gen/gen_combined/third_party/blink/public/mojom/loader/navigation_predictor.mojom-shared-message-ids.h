// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 934338084 value is based on sha256(salt + "AnchorElementMetricsHost1").
constexpr uint32_t kAnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Name = 934338084;
// The 1146168942 value is based on sha256(salt + "AnchorElementMetricsHost2").
constexpr uint32_t kAnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Name = 1146168942;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_SHARED_MESSAGE_IDS_H_