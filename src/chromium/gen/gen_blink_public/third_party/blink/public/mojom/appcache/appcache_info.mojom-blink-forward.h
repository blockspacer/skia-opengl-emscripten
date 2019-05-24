// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_INFO_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_INFO_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class AppCacheStatus : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_AppCacheStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::AppCacheStatus> {
  using Hash = blink_mojom_internal_AppCacheStatus_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using AppCacheStatus = AppCacheStatus;  // Alias for definition in the parent namespace.

constexpr int64_t kAppCacheNoCacheId = 0;

constexpr int64_t kAppCacheNoResponseId = 0;

constexpr int64_t kAppCacheUnknownCacheId = -1;
class AppCacheInfo;
using AppCacheInfoPtr = mojo::StructPtr<AppCacheInfo>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_INFO_MOJOM_BLINK_FORWARD_H_