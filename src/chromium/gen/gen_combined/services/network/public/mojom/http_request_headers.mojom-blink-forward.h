// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
}  // namespace network
}  // namespace mojom


namespace network {
namespace mojom {
namespace blink {
class HttpRequestHeaderKeyValuePair;
using HttpRequestHeaderKeyValuePairPtr = mojo::InlinedStructPtr<HttpRequestHeaderKeyValuePair>;

class HttpRequestHeaders;
using HttpRequestHeadersPtr = mojo::StructPtr<HttpRequestHeaders>;




}  // namespace blink
}  // namespace mojom
}  // namespace network
#include "third_party/blink/renderer/platform/network/http_header_map.h"

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_BLINK_FORWARD_H_