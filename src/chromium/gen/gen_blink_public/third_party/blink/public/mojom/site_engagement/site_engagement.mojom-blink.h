// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SITE_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SITE_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "third_party/blink/public/mojom/site_engagement/site_engagement.mojom-shared.h"
#include "third_party/blink/public/mojom/site_engagement/site_engagement.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_EngagementLevel_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::EngagementLevel& value) {
    using utype = std::underlying_type<::blink::mojom::EngagementLevel>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::EngagementLevel& left, const ::blink::mojom::EngagementLevel& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::EngagementLevel>
    : public GenericHashTraits<::blink::mojom::EngagementLevel> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::EngagementLevel& value) {
    return value == static_cast<::blink::mojom::EngagementLevel>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::EngagementLevel& slot, bool) {
    slot = static_cast<::blink::mojom::EngagementLevel>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::EngagementLevel& value) {
    return value == static_cast<::blink::mojom::EngagementLevel>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SITE_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_BLINK_H_