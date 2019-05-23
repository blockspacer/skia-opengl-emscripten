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

#include "url/mojom/origin.mojom.h"

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

#include "url/mojom/origin.mojom-params-data.h"
#include "url/mojom/origin.mojom-shared-message-ids.h"

#include "url/mojom/origin.mojom-import-headers.h"


#ifndef URL_MOJOM_ORIGIN_MOJOM_JUMBO_H_
#define URL_MOJOM_ORIGIN_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif
namespace url {
namespace mojom {
Origin::Origin()
    : scheme(),
      host(),
      port(),
      nonce_if_opaque() {}

Origin::Origin(
    const std::string& scheme_in,
    const std::string& host_in,
    uint16_t port_in,
    const base::Optional<base::UnguessableToken>& nonce_if_opaque_in)
    : scheme(std::move(scheme_in)),
      host(std::move(host_in)),
      port(std::move(port_in)),
      nonce_if_opaque(std::move(nonce_if_opaque_in)) {}

Origin::~Origin() = default;

bool Origin::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace url

namespace mojo {


// static
bool StructTraits<::url::mojom::Origin::DataView, ::url::mojom::OriginPtr>::Read(
    ::url::mojom::Origin::DataView input,
    ::url::mojom::OriginPtr* output) {
  bool success = true;
  ::url::mojom::OriginPtr result(::url::mojom::Origin::New());
  
      if (!input.ReadScheme(&result->scheme))
        success = false;
      if (!input.ReadHost(&result->host))
        success = false;
      result->port = input.port();
      if (!input.ReadNonceIfOpaque(&result->nonce_if_opaque))
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