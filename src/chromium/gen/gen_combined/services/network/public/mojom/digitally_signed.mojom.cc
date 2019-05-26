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

#include "services/network/public/mojom/digitally_signed.mojom.h"

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

#include "services/network/public/mojom/digitally_signed.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_JUMBO_H_
#include "services/network/public/cpp/digitally_signed_mojom_traits.h"
#endif
namespace network {
namespace mojom {
DigitallySigned::DigitallySigned()
    : hash_algorithm(),
      signature_algorithm(),
      signature() {}

DigitallySigned::DigitallySigned(
    net::ct::DigitallySigned::HashAlgorithm hash_algorithm_in,
    net::ct::DigitallySigned::SignatureAlgorithm signature_algorithm_in,
    const std::vector<uint8_t>& signature_in)
    : hash_algorithm(std::move(hash_algorithm_in)),
      signature_algorithm(std::move(signature_algorithm_in)),
      signature(std::move(signature_in)) {}

DigitallySigned::~DigitallySigned() = default;

bool DigitallySigned::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::DigitallySigned::DataView, ::network::mojom::DigitallySignedPtr>::Read(
    ::network::mojom::DigitallySigned::DataView input,
    ::network::mojom::DigitallySignedPtr* output) {
  bool success = true;
  ::network::mojom::DigitallySignedPtr result(::network::mojom::DigitallySigned::New());
  
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