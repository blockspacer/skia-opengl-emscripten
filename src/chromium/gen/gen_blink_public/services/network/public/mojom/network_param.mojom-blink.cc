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

#include "services/network/public/mojom/network_param.mojom-blink.h"

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

#include "services/network/public/mojom/network_param.mojom-params-data.h"
#include "services/network/public/mojom/network_param.mojom-shared-message-ids.h"

#include "services/network/public/mojom/network_param.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
HttpVersion::HttpVersion()
    : major_value(),
      minor_value() {}

HttpVersion::HttpVersion(
    uint16_t major_value_in,
    uint16_t minor_value_in)
    : major_value(std::move(major_value_in)),
      minor_value(std::move(minor_value_in)) {}

HttpVersion::~HttpVersion() = default;
size_t HttpVersion::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->major_value);
  seed = mojo::internal::WTFHash(seed, this->minor_value);
  return seed;
}

bool HttpVersion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::HttpVersion::DataView, ::network::mojom::blink::HttpVersionPtr>::Read(
    ::network::mojom::blink::HttpVersion::DataView input,
    ::network::mojom::blink::HttpVersionPtr* output) {
  bool success = true;
  ::network::mojom::blink::HttpVersionPtr result(::network::mojom::blink::HttpVersion::New());
  
      result->major_value = input.major_value();
      result->minor_value = input.minor_value();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif