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

#include "services/network/public/mojom/digitally_signed.mojom-blink.h"

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

#include "services/network/public/mojom/digitally_signed.mojom-params-data.h"
#include "services/network/public/mojom/digitally_signed.mojom-shared-message-ids.h"

#include "services/network/public/mojom/digitally_signed.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
DigitallySigned::DigitallySigned()
    : hash_algorithm(),
      signature_algorithm(),
      signature() {}

DigitallySigned::DigitallySigned(
    HashAlgorithm hash_algorithm_in,
    SignatureAlgorithm signature_algorithm_in,
    const WTF::Vector<uint8_t>& signature_in)
    : hash_algorithm(std::move(hash_algorithm_in)),
      signature_algorithm(std::move(signature_algorithm_in)),
      signature(std::move(signature_in)) {}

DigitallySigned::~DigitallySigned() = default;

bool DigitallySigned::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::DigitallySigned::DataView, ::network::mojom::blink::DigitallySignedPtr>::Read(
    ::network::mojom::blink::DigitallySigned::DataView input,
    ::network::mojom::blink::DigitallySignedPtr* output) {
  bool success = true;
  ::network::mojom::blink::DigitallySignedPtr result(::network::mojom::blink::DigitallySigned::New());
  
      if (!input.ReadHashAlgorithm(&result->hash_algorithm))
        success = false;
      if (!input.ReadSignatureAlgorithm(&result->signature_algorithm))
        success = false;
      if (!input.ReadSignature(&result->signature))
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