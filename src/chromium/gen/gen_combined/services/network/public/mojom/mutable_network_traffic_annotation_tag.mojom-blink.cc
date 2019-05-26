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

#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink.h"

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

#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-params-data.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-message-ids.h"

#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
MutableNetworkTrafficAnnotationTag::MutableNetworkTrafficAnnotationTag()
    : unique_id_hash_code() {}

MutableNetworkTrafficAnnotationTag::MutableNetworkTrafficAnnotationTag(
    uint32_t unique_id_hash_code_in)
    : unique_id_hash_code(std::move(unique_id_hash_code_in)) {}

MutableNetworkTrafficAnnotationTag::~MutableNetworkTrafficAnnotationTag() = default;
size_t MutableNetworkTrafficAnnotationTag::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->unique_id_hash_code);
  return seed;
}

bool MutableNetworkTrafficAnnotationTag::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::MutableNetworkTrafficAnnotationTag::DataView, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr>::Read(
    ::network::mojom::blink::MutableNetworkTrafficAnnotationTag::DataView input,
    ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr* output) {
  bool success = true;
  ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr result(::network::mojom::blink::MutableNetworkTrafficAnnotationTag::New());
  
      result->unique_id_hash_code = input.unique_id_hash_code();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif