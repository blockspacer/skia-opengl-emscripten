// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class StorageType : int32_t;

enum class QuotaStatusCode : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_StorageType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::StorageType> {
  using Hash = blink_mojom_internal_StorageType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_QuotaStatusCode_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::QuotaStatusCode> {
  using Hash = blink_mojom_internal_QuotaStatusCode_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using StorageType = StorageType;  // Alias for definition in the parent namespace.
using QuotaStatusCode = QuotaStatusCode;  // Alias for definition in the parent namespace.
class UsageBreakdown;
using UsageBreakdownPtr = mojo::StructPtr<UsageBreakdown>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_BLINK_FORWARD_H_