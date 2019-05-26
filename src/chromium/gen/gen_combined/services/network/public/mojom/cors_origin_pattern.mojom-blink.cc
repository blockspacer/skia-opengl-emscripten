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

#include "services/network/public/mojom/cors_origin_pattern.mojom-blink.h"

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

#include "services/network/public/mojom/cors_origin_pattern.mojom-params-data.h"
#include "services/network/public/mojom/cors_origin_pattern.mojom-shared-message-ids.h"

#include "services/network/public/mojom/cors_origin_pattern.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
CorsOriginPattern::CorsOriginPattern()
    : protocol(),
      domain(),
      mode(),
      priority() {}

CorsOriginPattern::CorsOriginPattern(
    const WTF::String& protocol_in,
    const WTF::String& domain_in,
    CorsOriginAccessMatchMode mode_in,
    CorsOriginAccessMatchPriority priority_in)
    : protocol(std::move(protocol_in)),
      domain(std::move(domain_in)),
      mode(std::move(mode_in)),
      priority(std::move(priority_in)) {}

CorsOriginPattern::~CorsOriginPattern() = default;
size_t CorsOriginPattern::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->protocol);
  seed = mojo::internal::WTFHash(seed, this->domain);
  seed = mojo::internal::WTFHash(seed, this->mode);
  seed = mojo::internal::WTFHash(seed, this->priority);
  return seed;
}

bool CorsOriginPattern::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CorsOriginAccessPatterns::CorsOriginAccessPatterns()
    : source_origin(),
      allow_patterns(),
      block_patterns() {}

CorsOriginAccessPatterns::CorsOriginAccessPatterns(
    const WTF::String& source_origin_in,
    WTF::Vector<CorsOriginPatternPtr> allow_patterns_in,
    WTF::Vector<CorsOriginPatternPtr> block_patterns_in)
    : source_origin(std::move(source_origin_in)),
      allow_patterns(std::move(allow_patterns_in)),
      block_patterns(std::move(block_patterns_in)) {}

CorsOriginAccessPatterns::~CorsOriginAccessPatterns() = default;

bool CorsOriginAccessPatterns::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::CorsOriginPattern::DataView, ::network::mojom::blink::CorsOriginPatternPtr>::Read(
    ::network::mojom::blink::CorsOriginPattern::DataView input,
    ::network::mojom::blink::CorsOriginPatternPtr* output) {
  bool success = true;
  ::network::mojom::blink::CorsOriginPatternPtr result(::network::mojom::blink::CorsOriginPattern::New());
  
      if (!input.ReadProtocol(&result->protocol))
        success = false;
      if (!input.ReadDomain(&result->domain))
        success = false;
      if (!input.ReadMode(&result->mode))
        success = false;
      if (!input.ReadPriority(&result->priority))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::CorsOriginAccessPatterns::DataView, ::network::mojom::blink::CorsOriginAccessPatternsPtr>::Read(
    ::network::mojom::blink::CorsOriginAccessPatterns::DataView input,
    ::network::mojom::blink::CorsOriginAccessPatternsPtr* output) {
  bool success = true;
  ::network::mojom::blink::CorsOriginAccessPatternsPtr result(::network::mojom::blink::CorsOriginAccessPatterns::New());
  
      if (!input.ReadSourceOrigin(&result->source_origin))
        success = false;
      if (!input.ReadAllowPatterns(&result->allow_patterns))
        success = false;
      if (!input.ReadBlockPatterns(&result->block_patterns))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif