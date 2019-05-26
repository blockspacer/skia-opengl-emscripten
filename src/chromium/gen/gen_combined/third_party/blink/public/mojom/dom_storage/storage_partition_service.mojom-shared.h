// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/dom_storage/storage_partition_service.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-shared.h"
#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class StoragePartitionServiceInterfaceBase {};

using StoragePartitionServicePtrDataView =
    mojo::InterfacePtrDataView<StoragePartitionServiceInterfaceBase>;
using StoragePartitionServiceRequestDataView =
    mojo::InterfaceRequestDataView<StoragePartitionServiceInterfaceBase>;
using StoragePartitionServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<StoragePartitionServiceInterfaceBase>;
using StoragePartitionServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<StoragePartitionServiceInterfaceBase>;


}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_H_