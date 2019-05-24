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

#include "services/network/public/mojom/network_interface.mojom-blink.h"

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

#include "services/network/public/mojom/network_interface.mojom-params-data.h"
#include "services/network/public/mojom/network_interface.mojom-shared-message-ids.h"

#include "services/network/public/mojom/network_interface.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_INTERFACE_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_INTERFACE_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
NetworkInterface::NetworkInterface()
    : name(),
      friendly_name(),
      interface_index(),
      type(),
      address(),
      prefix_length(),
      ip_address_attributes() {}

NetworkInterface::NetworkInterface(
    const WTF::String& name_in,
    const WTF::String& friendly_name_in,
    uint32_t interface_index_in,
    ::network::mojom::blink::ConnectionType type_in,
    ::network::mojom::blink::IPAddressPtr address_in,
    uint32_t prefix_length_in,
    int32_t ip_address_attributes_in)
    : name(std::move(name_in)),
      friendly_name(std::move(friendly_name_in)),
      interface_index(std::move(interface_index_in)),
      type(std::move(type_in)),
      address(std::move(address_in)),
      prefix_length(std::move(prefix_length_in)),
      ip_address_attributes(std::move(ip_address_attributes_in)) {}

NetworkInterface::~NetworkInterface() = default;

bool NetworkInterface::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::NetworkInterface::DataView, ::network::mojom::blink::NetworkInterfacePtr>::Read(
    ::network::mojom::blink::NetworkInterface::DataView input,
    ::network::mojom::blink::NetworkInterfacePtr* output) {
  bool success = true;
  ::network::mojom::blink::NetworkInterfacePtr result(::network::mojom::blink::NetworkInterface::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadFriendlyName(&result->friendly_name))
        success = false;
      result->interface_index = input.interface_index();
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadAddress(&result->address))
        success = false;
      result->prefix_length = input.prefix_length();
      result->ip_address_attributes = input.ip_address_attributes();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif