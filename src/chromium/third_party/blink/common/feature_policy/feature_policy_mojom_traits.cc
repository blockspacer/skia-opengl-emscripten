// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/common/feature_policy/feature_policy_mojom_traits.h"

#include "url/mojom/origin_mojom_traits.h"

namespace mojo {

bool StructTraits<blink::mojom::ParsedFeaturePolicyDeclarationDataView,
                  blink::ParsedFeaturePolicyDeclaration>::
    Read(blink::mojom::ParsedFeaturePolicyDeclarationDataView in,
         blink::ParsedFeaturePolicyDeclaration* out) {
  return in.ReadFeature(&out->feature) &&
         in.ReadFallbackValue(&out->fallback_value) &&
         in.ReadOpaqueValue(&out->opaque_value) && in.ReadValues(&out->values);
}

bool UnionTraits<blink::mojom::PolicyValueDataDataView, blink::PolicyValue>::
    Read(blink::mojom::PolicyValueDataDataView in, blink::PolicyValue* out) {
  switch (in.tag()) {
    case blink::mojom::PolicyValueDataDataView::Tag::BOOL_VALUE:
      out->SetType(blink::mojom::PolicyValueType::kBool);
      out->SetBoolValue(in.bool_value());
      return true;
    case blink::mojom::PolicyValueDataDataView::Tag::DEC_DOUBLE_VALUE:
      out->SetType(blink::mojom::PolicyValueType::kDecDouble);
      out->SetDoubleValue(in.dec_double_value());
      return true;
    case blink::mojom::PolicyValueDataDataView::Tag::NULL_VALUE:
      break;
  }
  NOTREACHED();
  return false;
}

bool StructTraits<blink::mojom::PolicyValueDataView, blink::PolicyValue>::Read(
    blink::mojom::PolicyValueDataView data,
    blink::PolicyValue* out) {
  return data.ReadData(out);
}

}  // namespace mojo
