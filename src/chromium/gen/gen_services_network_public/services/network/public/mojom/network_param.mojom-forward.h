// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
using AuthChallengeInfoDataView = mojo::native::NativeStructDataView;

using AuthCredentialsDataView = mojo::native::NativeStructDataView;

using CertVerifyResultDataView = mojo::native::NativeStructDataView;

using CTVerifyResultDataView = mojo::native::NativeStructDataView;

using HttpResponseHeadersDataView = mojo::native::NativeStructDataView;

class HttpVersionDataView;

using HostPortPairDataView = mojo::native::NativeStructDataView;

using X509CertificateDataView = mojo::native::NativeStructDataView;

using SSLCertRequestInfoDataView = mojo::native::NativeStructDataView;

using SSLInfoDataView = mojo::native::NativeStructDataView;

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




}  // namespace mojom
}  // namespace network
#include "net/base/auth.h"
#include "net/base/host_port_pair.h"
#include "net/cert/cert_verify_result.h"
#include "net/cert/ct_verify_result.h"
#include "net/cert/x509_certificate.h"
#include "net/http/http_request_headers.h"
#include "net/http/http_response_headers.h"
#include "net/http/http_version.h"
#include "net/ssl/ssl_cert_request_info.h"
#include "net/ssl/ssl_info.h"

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_FORWARD_H_