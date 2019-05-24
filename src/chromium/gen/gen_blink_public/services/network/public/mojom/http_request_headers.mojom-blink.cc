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

#include "services/network/public/mojom/http_request_headers.mojom-blink.h"

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

#include "services/network/public/mojom/http_request_headers.mojom-params-data.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared-message-ids.h"

#include "services/network/public/mojom/http_request_headers.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
HttpRequestHeaderKeyValuePair::HttpRequestHeaderKeyValuePair()
    : key(),
      value() {}

HttpRequestHeaderKeyValuePair::HttpRequestHeaderKeyValuePair(
    const WTF::String& key_in,
    const WTF::String& value_in)
    : key(std::move(key_in)),
      value(std::move(value_in)) {}

HttpRequestHeaderKeyValuePair::~HttpRequestHeaderKeyValuePair() = default;
size_t HttpRequestHeaderKeyValuePair::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->key);
  seed = mojo::internal::WTFHash(seed, this->value);
  return seed;
}

bool HttpRequestHeaderKeyValuePair::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HttpRequestHeaders::HttpRequestHeaders()
    : headers() {}

HttpRequestHeaders::HttpRequestHeaders(
    WTF::Vector<HttpRequestHeaderKeyValuePairPtr> headers_in)
    : headers(std::move(headers_in)) {}

HttpRequestHeaders::~HttpRequestHeaders() = default;

bool HttpRequestHeaders::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::HttpRequestHeaderKeyValuePair::DataView, ::network::mojom::blink::HttpRequestHeaderKeyValuePairPtr>::Read(
    ::network::mojom::blink::HttpRequestHeaderKeyValuePair::DataView input,
    ::network::mojom::blink::HttpRequestHeaderKeyValuePairPtr* output) {
  bool success = true;
  ::network::mojom::blink::HttpRequestHeaderKeyValuePairPtr result(::network::mojom::blink::HttpRequestHeaderKeyValuePair::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::HttpRequestHeaders::DataView, ::network::mojom::blink::HttpRequestHeadersPtr>::Read(
    ::network::mojom::blink::HttpRequestHeaders::DataView input,
    ::network::mojom::blink::HttpRequestHeadersPtr* output) {
  bool success = true;
  ::network::mojom::blink::HttpRequestHeadersPtr result(::network::mojom::blink::HttpRequestHeaders::New());
  
      if (!input.ReadHeaders(&result->headers))
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