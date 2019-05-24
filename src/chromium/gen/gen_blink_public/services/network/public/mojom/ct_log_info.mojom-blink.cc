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

#include "services/network/public/mojom/ct_log_info.mojom-blink.h"

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

#include "services/network/public/mojom/ct_log_info.mojom-params-data.h"
#include "services/network/public/mojom/ct_log_info.mojom-shared-message-ids.h"

#include "services/network/public/mojom/ct_log_info.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CT_LOG_INFO_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CT_LOG_INFO_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
CTLogInfo::CTLogInfo()
    : public_key(),
      name(),
      dns_api_endpoint() {}

CTLogInfo::CTLogInfo(
    const WTF::String& public_key_in,
    const WTF::String& name_in,
    const WTF::String& dns_api_endpoint_in)
    : public_key(std::move(public_key_in)),
      name(std::move(name_in)),
      dns_api_endpoint(std::move(dns_api_endpoint_in)) {}

CTLogInfo::~CTLogInfo() = default;
size_t CTLogInfo::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->public_key);
  seed = mojo::internal::WTFHash(seed, this->name);
  seed = mojo::internal::WTFHash(seed, this->dns_api_endpoint);
  return seed;
}

bool CTLogInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::CTLogInfo::DataView, ::network::mojom::blink::CTLogInfoPtr>::Read(
    ::network::mojom::blink::CTLogInfo::DataView input,
    ::network::mojom::blink::CTLogInfoPtr* output) {
  bool success = true;
  ::network::mojom::blink::CTLogInfoPtr result(::network::mojom::blink::CTLogInfo::New());
  
      if (!input.ReadPublicKey(&result->public_key))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadDnsApiEndpoint(&result->dns_api_endpoint))
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