// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_FETCH_API_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_FETCH_API_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/fetch_api.mojom-shared.h"
#include "services/network/public/mojom/fetch_api.mojom-blink-forward.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct network_mojom_internal_FetchRequestMode_DataHashFn {
  static unsigned GetHash(const ::network::mojom::FetchRequestMode& value) {
    using utype = std::underlying_type<::network::mojom::FetchRequestMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::FetchRequestMode& left, const ::network::mojom::FetchRequestMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::FetchRequestMode>
    : public GenericHashTraits<::network::mojom::FetchRequestMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::FetchRequestMode& value) {
    return value == static_cast<::network::mojom::FetchRequestMode>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::FetchRequestMode& slot, bool) {
    slot = static_cast<::network::mojom::FetchRequestMode>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::FetchRequestMode& value) {
    return value == static_cast<::network::mojom::FetchRequestMode>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_FetchRedirectMode_DataHashFn {
  static unsigned GetHash(const ::network::mojom::FetchRedirectMode& value) {
    using utype = std::underlying_type<::network::mojom::FetchRedirectMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::FetchRedirectMode& left, const ::network::mojom::FetchRedirectMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::FetchRedirectMode>
    : public GenericHashTraits<::network::mojom::FetchRedirectMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::FetchRedirectMode& value) {
    return value == static_cast<::network::mojom::FetchRedirectMode>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::FetchRedirectMode& slot, bool) {
    slot = static_cast<::network::mojom::FetchRedirectMode>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::FetchRedirectMode& value) {
    return value == static_cast<::network::mojom::FetchRedirectMode>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_FetchCredentialsMode_DataHashFn {
  static unsigned GetHash(const ::network::mojom::FetchCredentialsMode& value) {
    using utype = std::underlying_type<::network::mojom::FetchCredentialsMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::FetchCredentialsMode& left, const ::network::mojom::FetchCredentialsMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::FetchCredentialsMode>
    : public GenericHashTraits<::network::mojom::FetchCredentialsMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::FetchCredentialsMode& value) {
    return value == static_cast<::network::mojom::FetchCredentialsMode>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::FetchCredentialsMode& slot, bool) {
    slot = static_cast<::network::mojom::FetchCredentialsMode>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::FetchCredentialsMode& value) {
    return value == static_cast<::network::mojom::FetchCredentialsMode>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_FetchResponseType_DataHashFn {
  static unsigned GetHash(const ::network::mojom::FetchResponseType& value) {
    using utype = std::underlying_type<::network::mojom::FetchResponseType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::FetchResponseType& left, const ::network::mojom::FetchResponseType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::FetchResponseType>
    : public GenericHashTraits<::network::mojom::FetchResponseType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::FetchResponseType& value) {
    return value == static_cast<::network::mojom::FetchResponseType>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::FetchResponseType& slot, bool) {
    slot = static_cast<::network::mojom::FetchResponseType>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::FetchResponseType& value) {
    return value == static_cast<::network::mojom::FetchResponseType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_FetchResponseSource_DataHashFn {
  static unsigned GetHash(const ::network::mojom::FetchResponseSource& value) {
    using utype = std::underlying_type<::network::mojom::FetchResponseSource>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::FetchResponseSource& left, const ::network::mojom::FetchResponseSource& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::FetchResponseSource>
    : public GenericHashTraits<::network::mojom::FetchResponseSource> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::FetchResponseSource& value) {
    return value == static_cast<::network::mojom::FetchResponseSource>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::FetchResponseSource& slot, bool) {
    slot = static_cast<::network::mojom::FetchResponseSource>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::FetchResponseSource& value) {
    return value == static_cast<::network::mojom::FetchResponseSource>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_FETCH_API_MOJOM_BLINK_H_