// Copyright 2019 The Chromium Authors. All rights reserved.
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


#include "services/network/public/mojom/tls_socket.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/network/public/mojom/ip_endpoint.mojom.h"
#include "services/network/public/mojom/ssl_config.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_JUMBO_H_
#endif


namespace network {
namespace mojom {


TLSClientSocketAsyncWaiter::TLSClientSocketAsyncWaiter(
    TLSClientSocket* proxy) : proxy_(proxy) {}

TLSClientSocketAsyncWaiter::~TLSClientSocketAsyncWaiter() = default;






}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif