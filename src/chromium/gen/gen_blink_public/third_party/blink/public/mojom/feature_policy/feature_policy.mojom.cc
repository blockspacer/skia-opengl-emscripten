// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-params-data.h"
#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
PolicyValue::PolicyValue()
    : data() {}

PolicyValue::PolicyValue(
    PolicyValueDataPtr data_in)
    : data(std::move(data_in)) {}

PolicyValue::~PolicyValue() = default;
size_t PolicyValue::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->data);
  return seed;
}

bool PolicyValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ParsedFeaturePolicyDeclaration::ParsedFeaturePolicyDeclaration()
    : feature(),
      values(),
      fallback_value(),
      opaque_value() {}

ParsedFeaturePolicyDeclaration::ParsedFeaturePolicyDeclaration(
    FeaturePolicyFeature feature_in,
    base::flat_map<url::Origin, PolicyValuePtr> values_in,
    PolicyValuePtr fallback_value_in,
    PolicyValuePtr opaque_value_in)
    : feature(std::move(feature_in)),
      values(std::move(values_in)),
      fallback_value(std::move(fallback_value_in)),
      opaque_value(std::move(opaque_value_in)) {}

ParsedFeaturePolicyDeclaration::~ParsedFeaturePolicyDeclaration() = default;

bool ParsedFeaturePolicyDeclaration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PolicyValueData::PolicyValueData() : tag_(Tag::NULL_VALUE) {
  data_.null_value = bool();
}

PolicyValueData::~PolicyValueData() {
  DestroyActive();
}


void PolicyValueData::set_null_value(
    bool null_value) {
  if (tag_ != Tag::NULL_VALUE) {
    DestroyActive();
    tag_ = Tag::NULL_VALUE;
  }
  data_.null_value = null_value;
}
void PolicyValueData::set_bool_value(
    bool bool_value) {
  if (tag_ != Tag::BOOL_VALUE) {
    DestroyActive();
    tag_ = Tag::BOOL_VALUE;
  }
  data_.bool_value = bool_value;
}
void PolicyValueData::set_dec_double_value(
    double dec_double_value) {
  if (tag_ != Tag::DEC_DOUBLE_VALUE) {
    DestroyActive();
    tag_ = Tag::DEC_DOUBLE_VALUE;
  }
  data_.dec_double_value = dec_double_value;
}

void PolicyValueData::DestroyActive() {
  switch (tag_) {

    case Tag::NULL_VALUE:

      break;
    case Tag::BOOL_VALUE:

      break;
    case Tag::DEC_DOUBLE_VALUE:

      break;
  }
}
size_t PolicyValueData::Hash(size_t seed) const {
  seed = mojo::internal::HashCombine(seed, static_cast<uint32_t>(tag_));
  switch (tag_) {

    case Tag::NULL_VALUE:
      return mojo::internal::Hash(seed, data_.null_value);
    case Tag::BOOL_VALUE:
      return mojo::internal::Hash(seed, data_.bool_value);
    case Tag::DEC_DOUBLE_VALUE:
      return mojo::internal::Hash(seed, data_.dec_double_value);
    default:
      NOTREACHED();
      return seed;
  }
}

bool PolicyValueData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::PolicyValue::DataView, ::blink::mojom::PolicyValuePtr>::Read(
    ::blink::mojom::PolicyValue::DataView input,
    ::blink::mojom::PolicyValuePtr* output) {
  bool success = true;
  ::blink::mojom::PolicyValuePtr result(::blink::mojom::PolicyValue::New());
  
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ParsedFeaturePolicyDeclaration::DataView, ::blink::mojom::ParsedFeaturePolicyDeclarationPtr>::Read(
    ::blink::mojom::ParsedFeaturePolicyDeclaration::DataView input,
    ::blink::mojom::ParsedFeaturePolicyDeclarationPtr* output) {
  bool success = true;
  ::blink::mojom::ParsedFeaturePolicyDeclarationPtr result(::blink::mojom::ParsedFeaturePolicyDeclaration::New());
  
      if (!input.ReadFeature(&result->feature))
        success = false;
      if (!input.ReadValues(&result->values))
        success = false;
      if (!input.ReadFallbackValue(&result->fallback_value))
        success = false;
      if (!input.ReadOpaqueValue(&result->opaque_value))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::PolicyValueData::DataView, ::blink::mojom::PolicyValueDataPtr>::Read(
    ::blink::mojom::PolicyValueData::DataView input,
    ::blink::mojom::PolicyValueDataPtr* output) {
  using UnionType = ::blink::mojom::PolicyValueData;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::NULL_VALUE: {
      *output = UnionType::NewNullValue(input.null_value());
      break;
    }
    case Tag::BOOL_VALUE: {
      *output = UnionType::NewBoolValue(input.bool_value());
      break;
    }
    case Tag::DEC_DOUBLE_VALUE: {
      *output = UnionType::NewDecDoubleValue(input.dec_double_value());
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif