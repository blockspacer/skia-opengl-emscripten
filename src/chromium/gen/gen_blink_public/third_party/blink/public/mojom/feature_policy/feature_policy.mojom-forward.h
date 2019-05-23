// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class PolicyValueDataView;

class ParsedFeaturePolicyDeclarationDataView;

class PolicyValueDataDataView;

enum class WebSandboxFlags : int32_t;

enum class FeaturePolicyFeature : int32_t;

enum class FeaturePolicyDisposition : int32_t;

enum class PolicyValueType : int32_t;
class PolicyValue;
using PolicyValuePtr = mojo::StructPtr<PolicyValue>;

class ParsedFeaturePolicyDeclaration;
using ParsedFeaturePolicyDeclarationPtr = mojo::StructPtr<ParsedFeaturePolicyDeclaration>;

class PolicyValueData;

typedef mojo::InlinedStructPtr<PolicyValueData> PolicyValueDataPtr;




}  // namespace mojom
}  // namespace blink
#include "third_party/blink/public/common/feature_policy/feature_policy.h"
#include "third_party/blink/public/common/feature_policy/policy_value.h"
#include "third_party/blink/public/common/frame/sandbox_flags.h"

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_FORWARD_H_