// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/devtools/devtools_frontend.mojom-shared-internal.h"

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
class DevToolsFrontendInterfaceBase {};

using DevToolsFrontendPtrDataView =
    mojo::InterfacePtrDataView<DevToolsFrontendInterfaceBase>;
using DevToolsFrontendRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsFrontendInterfaceBase>;
using DevToolsFrontendAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsFrontendInterfaceBase>;
using DevToolsFrontendAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsFrontendInterfaceBase>;
class DevToolsFrontendHostInterfaceBase {};

using DevToolsFrontendHostPtrDataView =
    mojo::InterfacePtrDataView<DevToolsFrontendHostInterfaceBase>;
using DevToolsFrontendHostRequestDataView =
    mojo::InterfaceRequestDataView<DevToolsFrontendHostInterfaceBase>;
using DevToolsFrontendHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DevToolsFrontendHostInterfaceBase>;
using DevToolsFrontendHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DevToolsFrontendHostInterfaceBase>;


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

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_SHARED_H_