// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SITE_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SITE_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class EngagementLevel : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_EngagementLevel_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::EngagementLevel> {
  using Hash = blink_mojom_internal_EngagementLevel_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using EngagementLevel = EngagementLevel;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SITE_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_BLINK_FORWARD_H_