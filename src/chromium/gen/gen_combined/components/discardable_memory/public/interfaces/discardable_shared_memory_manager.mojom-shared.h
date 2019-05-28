// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_SHARED_H_
#define COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_SHARED_H_

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
#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom-shared-internal.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace discardable_memory {
namespace mojom {


}  // namespace mojom
}  // namespace discardable_memory

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace discardable_memory {
namespace mojom {
// Interface base classes. They are used for type safety check.
class DiscardableSharedMemoryManagerInterfaceBase {};

using DiscardableSharedMemoryManagerPtrDataView =
    mojo::InterfacePtrDataView<DiscardableSharedMemoryManagerInterfaceBase>;
using DiscardableSharedMemoryManagerRequestDataView =
    mojo::InterfaceRequestDataView<DiscardableSharedMemoryManagerInterfaceBase>;
using DiscardableSharedMemoryManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DiscardableSharedMemoryManagerInterfaceBase>;
using DiscardableSharedMemoryManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DiscardableSharedMemoryManagerInterfaceBase>;


}  // namespace mojom
}  // namespace discardable_memory

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace discardable_memory {
namespace mojom {


}  // namespace mojom
}  // namespace discardable_memory

#endif  // COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_SHARED_H_