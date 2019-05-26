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


#include "ui/base/ime/mojo/ime_engine_factory_registry.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "ui/base/ime/mojo/ime.mojom.h"


#ifndef UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_JUMBO_H_
#define UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_JUMBO_H_
#endif


namespace ime {
namespace mojom {


void ImeEngineFactoryRegistryInterceptorForTesting::ActivateFactory(::ime::mojom::ImeEngineFactoryPtr factory) {
  GetForwardingInterface()->ActivateFactory(std::move(factory));
}
ImeEngineFactoryRegistryAsyncWaiter::ImeEngineFactoryRegistryAsyncWaiter(
    ImeEngineFactoryRegistry* proxy) : proxy_(proxy) {}

ImeEngineFactoryRegistryAsyncWaiter::~ImeEngineFactoryRegistryAsyncWaiter() = default;






}  // namespace mojom
}  // namespace ime

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif