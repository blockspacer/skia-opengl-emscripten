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

#include "services/network/public/mojom/signed_tree_head.mojom-blink.h"

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

#include "services/network/public/mojom/signed_tree_head.mojom-params-data.h"
#include "services/network/public/mojom/signed_tree_head.mojom-shared-message-ids.h"

#include "services/network/public/mojom/signed_tree_head.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace network {
namespace mojom {
namespace blink {
SignedTreeHead::SignedTreeHead()
    : version(),
      timestamp(),
      tree_size(),
      sha256_root_hash(),
      signature(),
      log_id() {}

SignedTreeHead::SignedTreeHead(
    SignedTreeHeadVersion version_in,
    base::Time timestamp_in,
    uint64_t tree_size_in,
    const WTF::Vector<uint8_t>& sha256_root_hash_in,
    ::network::mojom::blink::DigitallySignedPtr signature_in,
    const WTF::String& log_id_in)
    : version(std::move(version_in)),
      timestamp(std::move(timestamp_in)),
      tree_size(std::move(tree_size_in)),
      sha256_root_hash(std::move(sha256_root_hash_in)),
      signature(std::move(signature_in)),
      log_id(std::move(log_id_in)) {}

SignedTreeHead::~SignedTreeHead() = default;

bool SignedTreeHead::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::SignedTreeHead::DataView, ::network::mojom::blink::SignedTreeHeadPtr>::Read(
    ::network::mojom::blink::SignedTreeHead::DataView input,
    ::network::mojom::blink::SignedTreeHeadPtr* output) {
  bool success = true;
  ::network::mojom::blink::SignedTreeHeadPtr result(::network::mojom::blink::SignedTreeHead::New());
  
      if (!input.ReadVersion(&result->version))
        success = false;
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      result->tree_size = input.tree_size();
      if (!input.ReadSha256RootHash(&result->sha256_root_hash))
        success = false;
      if (!input.ReadSignature(&result->signature))
        success = false;
      if (!input.ReadLogId(&result->log_id))
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