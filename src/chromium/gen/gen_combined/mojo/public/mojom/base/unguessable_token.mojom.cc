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

#include "mojo/public/mojom/base/unguessable_token.mojom.h"

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

#include "mojo/public/mojom/base/unguessable_token.mojom-params-data.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-message-ids.h"

#include "mojo/public/mojom/base/unguessable_token.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_MOJOM_BASE_UNGUESSABLE_TOKEN_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_MOJOM_BASE_UNGUESSABLE_TOKEN_MOJOM_JUMBO_H_
#endif
namespace mojo_base {
namespace mojom {
UnguessableToken::UnguessableToken()
    : high(),
      low() {}

UnguessableToken::UnguessableToken(
    uint64_t high_in,
    uint64_t low_in)
    : high(std::move(high_in)),
      low(std::move(low_in)) {}

UnguessableToken::~UnguessableToken() = default;

bool UnguessableToken::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


// static
bool StructTraits<::mojo_base::mojom::UnguessableToken::DataView, ::mojo_base::mojom::UnguessableTokenPtr>::Read(
    ::mojo_base::mojom::UnguessableToken::DataView input,
    ::mojo_base::mojom::UnguessableTokenPtr* output) {
  bool success = true;
  ::mojo_base::mojom::UnguessableTokenPtr result(::mojo_base::mojom::UnguessableToken::New());
  
      result->high = input.high();
      result->low = input.low();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif