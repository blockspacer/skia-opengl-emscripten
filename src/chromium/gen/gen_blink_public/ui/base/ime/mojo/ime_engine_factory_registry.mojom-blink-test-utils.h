// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_
#define UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_

#include "ui/base/ime/mojo/ime_engine_factory_registry.mojom-blink.h"


namespace ime {
namespace mojom {
namespace blink {


class  ImeEngineFactoryRegistryInterceptorForTesting : public ImeEngineFactoryRegistry {
  virtual ImeEngineFactoryRegistry* GetForwardingInterface() = 0;
  void ActivateFactory(::ime::mojom::blink::ImeEngineFactoryPtr factory) override;
};
class  ImeEngineFactoryRegistryAsyncWaiter {
 public:
  explicit ImeEngineFactoryRegistryAsyncWaiter(ImeEngineFactoryRegistry* proxy);
  ~ImeEngineFactoryRegistryAsyncWaiter();

 private:
  ImeEngineFactoryRegistry* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ImeEngineFactoryRegistryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace ime

#endif  // UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_