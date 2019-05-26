// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/url_loader_factory.mojom.h"


namespace network {
namespace mojom {


class  URLLoaderFactoryInterceptorForTesting : public URLLoaderFactory {
  virtual URLLoaderFactory* GetForwardingInterface() = 0;
  void CreateLoaderAndStart(::network::mojom::URLLoaderRequest loader, int32_t routing_id, int32_t request_id, uint32_t options, const network::ResourceRequest& request, ::network::mojom::URLLoaderClientPtr client, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation) override;
  void Clone(URLLoaderFactoryRequest factory) override;
};
class  URLLoaderFactoryAsyncWaiter {
 public:
  explicit URLLoaderFactoryAsyncWaiter(URLLoaderFactory* proxy);
  ~URLLoaderFactoryAsyncWaiter();

 private:
  URLLoaderFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderFactoryAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_TEST_UTILS_H_