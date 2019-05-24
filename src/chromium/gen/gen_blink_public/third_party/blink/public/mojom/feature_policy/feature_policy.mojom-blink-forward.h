// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class WebSandboxFlags : int32_t;

enum class FeaturePolicyFeature : int32_t;

enum class FeaturePolicyDisposition : int32_t;

enum class PolicyValueType : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_WebSandboxFlags_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::WebSandboxFlags> {
  using Hash = blink_mojom_internal_WebSandboxFlags_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_FeaturePolicyFeature_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::FeaturePolicyFeature> {
  using Hash = blink_mojom_internal_FeaturePolicyFeature_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_FeaturePolicyDisposition_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::FeaturePolicyDisposition> {
  using Hash = blink_mojom_internal_FeaturePolicyDisposition_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_PolicyValueType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::PolicyValueType> {
  using Hash = blink_mojom_internal_PolicyValueType_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using WebSandboxFlags = WebSandboxFlags;  // Alias for definition in the parent namespace.
using FeaturePolicyFeature = FeaturePolicyFeature;  // Alias for definition in the parent namespace.
using FeaturePolicyDisposition = FeaturePolicyDisposition;  // Alias for definition in the parent namespace.
using PolicyValueType = PolicyValueType;  // Alias for definition in the parent namespace.
class PolicyValue;
using PolicyValuePtr = mojo::StructPtr<PolicyValue>;

class ParsedFeaturePolicyDeclaration;
using ParsedFeaturePolicyDeclarationPtr = mojo::StructPtr<ParsedFeaturePolicyDeclaration>;

class PolicyValueData;

typedef mojo::InlinedStructPtr<PolicyValueData> PolicyValueDataPtr;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_BLINK_FORWARD_H_