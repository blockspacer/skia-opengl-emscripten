// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_SHARED_H_
#define UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "ui/base/ime/mojo/ime_engine_factory_registry.mojom-shared-internal.h"
#include "ui/base/ime/mojo/ime.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ime {
namespace mojom {


}  // namespace mojom
}  // namespace ime

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ime {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ImeEngineFactoryRegistryInterfaceBase {};

using ImeEngineFactoryRegistryPtrDataView =
    mojo::InterfacePtrDataView<ImeEngineFactoryRegistryInterfaceBase>;
using ImeEngineFactoryRegistryRequestDataView =
    mojo::InterfaceRequestDataView<ImeEngineFactoryRegistryInterfaceBase>;
using ImeEngineFactoryRegistryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ImeEngineFactoryRegistryInterfaceBase>;
using ImeEngineFactoryRegistryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ImeEngineFactoryRegistryInterfaceBase>;


}  // namespace mojom
}  // namespace ime

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace ime {
namespace mojom {


}  // namespace mojom
}  // namespace ime

#endif  // UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_SHARED_H_