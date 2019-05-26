// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 271579260 value is based on sha256(salt + "OomInterventionHost1").
constexpr uint32_t kOomInterventionHost_OnHighMemoryUsage_Name = 271579260;
// The 1407632760 value is based on sha256(salt + "OomIntervention1").
constexpr uint32_t kOomIntervention_StartDetection_Name = 1407632760;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_SHARED_MESSAGE_IDS_H_