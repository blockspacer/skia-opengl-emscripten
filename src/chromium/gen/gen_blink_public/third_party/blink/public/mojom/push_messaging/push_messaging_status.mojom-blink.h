// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_STATUS_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_STATUS_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/push_messaging/push_messaging_status.mojom-shared.h"
#include "third_party/blink/public/mojom/push_messaging/push_messaging_status.mojom-blink-forward.h"

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
struct blink_mojom_internal_PushDeliveryStatus_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PushDeliveryStatus& value) {
    using utype = std::underlying_type<::blink::mojom::PushDeliveryStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PushDeliveryStatus& left, const ::blink::mojom::PushDeliveryStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::PushDeliveryStatus>
    : public GenericHashTraits<::blink::mojom::PushDeliveryStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PushDeliveryStatus& value) {
    return value == static_cast<::blink::mojom::PushDeliveryStatus>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PushDeliveryStatus& slot, bool) {
    slot = static_cast<::blink::mojom::PushDeliveryStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PushDeliveryStatus& value) {
    return value == static_cast<::blink::mojom::PushDeliveryStatus>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_PushGetRegistrationStatus_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PushGetRegistrationStatus& value) {
    using utype = std::underlying_type<::blink::mojom::PushGetRegistrationStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PushGetRegistrationStatus& left, const ::blink::mojom::PushGetRegistrationStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::PushGetRegistrationStatus>
    : public GenericHashTraits<::blink::mojom::PushGetRegistrationStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PushGetRegistrationStatus& value) {
    return value == static_cast<::blink::mojom::PushGetRegistrationStatus>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PushGetRegistrationStatus& slot, bool) {
    slot = static_cast<::blink::mojom::PushGetRegistrationStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PushGetRegistrationStatus& value) {
    return value == static_cast<::blink::mojom::PushGetRegistrationStatus>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_PushRegistrationStatus_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PushRegistrationStatus& value) {
    using utype = std::underlying_type<::blink::mojom::PushRegistrationStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PushRegistrationStatus& left, const ::blink::mojom::PushRegistrationStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::PushRegistrationStatus>
    : public GenericHashTraits<::blink::mojom::PushRegistrationStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PushRegistrationStatus& value) {
    return value == static_cast<::blink::mojom::PushRegistrationStatus>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PushRegistrationStatus& slot, bool) {
    slot = static_cast<::blink::mojom::PushRegistrationStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PushRegistrationStatus& value) {
    return value == static_cast<::blink::mojom::PushRegistrationStatus>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_PushUnregistrationReason_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PushUnregistrationReason& value) {
    using utype = std::underlying_type<::blink::mojom::PushUnregistrationReason>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PushUnregistrationReason& left, const ::blink::mojom::PushUnregistrationReason& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::PushUnregistrationReason>
    : public GenericHashTraits<::blink::mojom::PushUnregistrationReason> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PushUnregistrationReason& value) {
    return value == static_cast<::blink::mojom::PushUnregistrationReason>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PushUnregistrationReason& slot, bool) {
    slot = static_cast<::blink::mojom::PushUnregistrationReason>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PushUnregistrationReason& value) {
    return value == static_cast<::blink::mojom::PushUnregistrationReason>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_PushUnregistrationStatus_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PushUnregistrationStatus& value) {
    using utype = std::underlying_type<::blink::mojom::PushUnregistrationStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PushUnregistrationStatus& left, const ::blink::mojom::PushUnregistrationStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::PushUnregistrationStatus>
    : public GenericHashTraits<::blink::mojom::PushUnregistrationStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PushUnregistrationStatus& value) {
    return value == static_cast<::blink::mojom::PushUnregistrationStatus>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PushUnregistrationStatus& slot, bool) {
    slot = static_cast<::blink::mojom::PushUnregistrationStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PushUnregistrationStatus& value) {
    return value == static_cast<::blink::mojom::PushUnregistrationStatus>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_PushUserVisibleStatus_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PushUserVisibleStatus& value) {
    using utype = std::underlying_type<::blink::mojom::PushUserVisibleStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PushUserVisibleStatus& left, const ::blink::mojom::PushUserVisibleStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::PushUserVisibleStatus>
    : public GenericHashTraits<::blink::mojom::PushUserVisibleStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PushUserVisibleStatus& value) {
    return value == static_cast<::blink::mojom::PushUserVisibleStatus>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PushUserVisibleStatus& slot, bool) {
    slot = static_cast<::blink::mojom::PushUserVisibleStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PushUserVisibleStatus& value) {
    return value == static_cast<::blink::mojom::PushUserVisibleStatus>(-1000001);
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

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_STATUS_MOJOM_BLINK_H_