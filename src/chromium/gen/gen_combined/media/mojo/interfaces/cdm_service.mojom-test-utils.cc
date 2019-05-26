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


#include "media/mojo/interfaces/cdm_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/content_decryption_module.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#endif


namespace media {
namespace mojom {


void CdmServiceInterceptorForTesting::LoadCdm(const base::FilePath& cdm_path) {
  GetForwardingInterface()->LoadCdm(std::move(cdm_path));
}
void CdmServiceInterceptorForTesting::CreateCdmFactory(::media::mojom::CdmFactoryRequest factory, ::service_manager::mojom::InterfaceProviderPtr host_interfaces) {
  GetForwardingInterface()->CreateCdmFactory(std::move(factory), std::move(host_interfaces));
}
CdmServiceAsyncWaiter::CdmServiceAsyncWaiter(
    CdmService* proxy) : proxy_(proxy) {}

CdmServiceAsyncWaiter::~CdmServiceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif