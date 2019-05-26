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


#include "services/network/public/mojom/url_loader_factory.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink.h"
#include "services/network/public/mojom/url_loader.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "third_party/blink/renderer/platform/network/encoded_form_data_mojom_traits.h"
#include "third_party/blink/renderer/platform/network/http_request_headers_mojom_traits.h"
#endif


namespace network {
namespace mojom {
namespace blink {


void URLLoaderFactoryInterceptorForTesting::CreateLoaderAndStart(::network::mojom::blink::URLLoaderRequest loader, int32_t routing_id, int32_t request_id, uint32_t options, ::network::mojom::blink::URLRequestPtr request, ::network::mojom::blink::URLLoaderClientPtr client, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation) {
  GetForwardingInterface()->CreateLoaderAndStart(std::move(loader), std::move(routing_id), std::move(request_id), std::move(options), std::move(request), std::move(client), std::move(traffic_annotation));
}
void URLLoaderFactoryInterceptorForTesting::Clone(URLLoaderFactoryRequest factory) {
  GetForwardingInterface()->Clone(std::move(factory));
}
URLLoaderFactoryAsyncWaiter::URLLoaderFactoryAsyncWaiter(
    URLLoaderFactory* proxy) : proxy_(proxy) {}

URLLoaderFactoryAsyncWaiter::~URLLoaderFactoryAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif