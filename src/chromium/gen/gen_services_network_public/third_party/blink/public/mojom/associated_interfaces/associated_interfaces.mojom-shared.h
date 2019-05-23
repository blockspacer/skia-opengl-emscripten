// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-shared-internal.h"

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
class AssociatedInterfaceInterfaceBase {};

using AssociatedInterfacePtrDataView =
    mojo::InterfacePtrDataView<AssociatedInterfaceInterfaceBase>;
using AssociatedInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<AssociatedInterfaceInterfaceBase>;
using AssociatedInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AssociatedInterfaceInterfaceBase>;
using AssociatedInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AssociatedInterfaceInterfaceBase>;
class AssociatedInterfaceProviderInterfaceBase {};

using AssociatedInterfaceProviderPtrDataView =
    mojo::InterfacePtrDataView<AssociatedInterfaceProviderInterfaceBase>;
using AssociatedInterfaceProviderRequestDataView =
    mojo::InterfaceRequestDataView<AssociatedInterfaceProviderInterfaceBase>;
using AssociatedInterfaceProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AssociatedInterfaceProviderInterfaceBase>;
using AssociatedInterfaceProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AssociatedInterfaceProviderInterfaceBase>;


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

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_SHARED_H_