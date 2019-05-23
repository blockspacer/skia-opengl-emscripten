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

#include "services/network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom.h"

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

#include "services/network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom-params-data.h"
#include "services/network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom-shared-message-ids.h"

#include "services/network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_PARTIAL_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_PARTIAL_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_JUMBO_H_
#endif
namespace network {
namespace mojom {
MutablePartialNetworkTrafficAnnotationTag::MutablePartialNetworkTrafficAnnotationTag()
    : unique_id_hash_code(),
      completing_id_hash_code() {}

MutablePartialNetworkTrafficAnnotationTag::MutablePartialNetworkTrafficAnnotationTag(
    uint32_t unique_id_hash_code_in,
    uint32_t completing_id_hash_code_in)
    : unique_id_hash_code(std::move(unique_id_hash_code_in)),
      completing_id_hash_code(std::move(completing_id_hash_code_in)) {}

MutablePartialNetworkTrafficAnnotationTag::~MutablePartialNetworkTrafficAnnotationTag() = default;

bool MutablePartialNetworkTrafficAnnotationTag::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::MutablePartialNetworkTrafficAnnotationTag::DataView, ::network::mojom::MutablePartialNetworkTrafficAnnotationTagPtr>::Read(
    ::network::mojom::MutablePartialNetworkTrafficAnnotationTag::DataView input,
    ::network::mojom::MutablePartialNetworkTrafficAnnotationTagPtr* output) {
  bool success = true;
  ::network::mojom::MutablePartialNetworkTrafficAnnotationTagPtr result(::network::mojom::MutablePartialNetworkTrafficAnnotationTag::New());
  
      result->unique_id_hash_code = input.unique_id_hash_code();
      result->completing_id_hash_code = input.completing_id_hash_code();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif