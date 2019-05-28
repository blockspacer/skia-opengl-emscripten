// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_SHARED_MESSAGE_IDS_H_
#define UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ime {
namespace mojom {

namespace internal {


// The 1486231839 value is based on sha256(salt + "ImeEngineFactoryRegistry1").
constexpr uint32_t kImeEngineFactoryRegistry_ActivateFactory_Name = 1486231839;

}  // namespace internal
}  // namespace mojom
}  // namespace ime

#endif  // UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_SHARED_MESSAGE_IDS_H_