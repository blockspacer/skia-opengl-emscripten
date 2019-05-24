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


#include "media/mojo/interfaces/media_service.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/interface_factory.mojom-blink.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_BLINK_JUMBO_H_
#endif


namespace media {
namespace mojom {
namespace blink {


void MediaServiceInterceptorForTesting::CreateInterfaceFactory(::media::mojom::blink::InterfaceFactoryRequest factory, ::service_manager::mojom::blink::InterfaceProviderPtr host_interfaces) {
  GetForwardingInterface()->CreateInterfaceFactory(std::move(factory), std::move(host_interfaces));
}
MediaServiceAsyncWaiter::MediaServiceAsyncWaiter(
    MediaService* proxy) : proxy_(proxy) {}

MediaServiceAsyncWaiter::~MediaServiceAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif