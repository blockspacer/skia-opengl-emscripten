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


#include "services/network/public/mojom/url_loader_factory.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom.h"
#include "services/network/public/mojom/url_loader.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/http_request_headers_mojom_traits.h"
#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void URLLoaderFactoryInterceptorForTesting::CreateLoaderAndStart(::network::mojom::URLLoaderRequest loader, int32_t routing_id, int32_t request_id, uint32_t options, const network::ResourceRequest& request, ::network::mojom::URLLoaderClientPtr client, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation) {
  GetForwardingInterface()->CreateLoaderAndStart(std::move(loader), std::move(routing_id), std::move(request_id), std::move(options), std::move(request), std::move(client), std::move(traffic_annotation));
}
void URLLoaderFactoryInterceptorForTesting::Clone(URLLoaderFactoryRequest factory) {
  GetForwardingInterface()->Clone(std::move(factory));
}
URLLoaderFactoryAsyncWaiter::URLLoaderFactoryAsyncWaiter(
    URLLoaderFactory* proxy) : proxy_(proxy) {}

URLLoaderFactoryAsyncWaiter::~URLLoaderFactoryAsyncWaiter() = default;






}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif