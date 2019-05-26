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


#include "media/mojo/interfaces/media_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/interface_factory.mojom.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_JUMBO_H_
#endif


namespace media {
namespace mojom {


void MediaServiceInterceptorForTesting::CreateInterfaceFactory(::media::mojom::InterfaceFactoryRequest factory, ::service_manager::mojom::InterfaceProviderPtr host_interfaces) {
  GetForwardingInterface()->CreateInterfaceFactory(std::move(factory), std::move(host_interfaces));
}
MediaServiceAsyncWaiter::MediaServiceAsyncWaiter(
    MediaService* proxy) : proxy_(proxy) {}

MediaServiceAsyncWaiter::~MediaServiceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif