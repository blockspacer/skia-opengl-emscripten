// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_FORWARD_H_

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
using AuthChallengeInfo = mojo::native::NativeStruct;
using AuthChallengeInfoPtr = mojo::native::NativeStructPtr;

using AuthCredentials = mojo::native::NativeStruct;
using AuthCredentialsPtr = mojo::native::NativeStructPtr;

using CertVerifyResult = mojo::native::NativeStruct;
using CertVerifyResultPtr = mojo::native::NativeStructPtr;

using CTVerifyResult = mojo::native::NativeStruct;
using CTVerifyResultPtr = mojo::native::NativeStructPtr;

using HttpResponseHeaders = mojo::native::NativeStruct;
using HttpResponseHeadersPtr = mojo::native::NativeStructPtr;

class HttpVersion;
using HttpVersionPtr = mojo::InlinedStructPtr<HttpVersion>;

using HostPortPair = mojo::native::NativeStruct;
using HostPortPairPtr = mojo::native::NativeStructPtr;

using X509Certificate = mojo::native::NativeStruct;
using X509CertificatePtr = mojo::native::NativeStructPtr;

using SSLCertRequestInfo = mojo::native::NativeStruct;
using SSLCertRequestInfoPtr = mojo::native::NativeStructPtr;

using SSLInfo = mojo::native::NativeStruct;
using SSLInfoPtr = mojo::native::NativeStructPtr;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_FORWARD_H_