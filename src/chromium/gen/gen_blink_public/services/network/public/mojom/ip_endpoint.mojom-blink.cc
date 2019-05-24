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

#include "services/network/public/mojom/ip_endpoint.mojom-blink.h"

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

#include "services/network/public/mojom/ip_endpoint.mojom-params-data.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared-message-ids.h"

#include "services/network/public/mojom/ip_endpoint.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_IP_ENDPOINT_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_IP_ENDPOINT_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
IPEndPoint::IPEndPoint()
    : address(),
      port() {}

IPEndPoint::IPEndPoint(
    ::network::mojom::blink::IPAddressPtr address_in,
    uint16_t port_in)
    : address(std::move(address_in)),
      port(std::move(port_in)) {}

IPEndPoint::~IPEndPoint() = default;

bool IPEndPoint::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::IPEndPoint::DataView, ::network::mojom::blink::IPEndPointPtr>::Read(
    ::network::mojom::blink::IPEndPoint::DataView input,
    ::network::mojom::blink::IPEndPointPtr* output) {
  bool success = true;
  ::network::mojom::blink::IPEndPointPtr result(::network::mojom::blink::IPEndPoint::New());
  
      if (!input.ReadAddress(&result->address))
        success = false;
      result->port = input.port();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif