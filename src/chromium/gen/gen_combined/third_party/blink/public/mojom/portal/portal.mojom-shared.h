// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/portal/portal.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
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
class PortalInterfaceBase {};

using PortalPtrDataView =
    mojo::InterfacePtrDataView<PortalInterfaceBase>;
using PortalRequestDataView =
    mojo::InterfaceRequestDataView<PortalInterfaceBase>;
using PortalAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PortalInterfaceBase>;
using PortalAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PortalInterfaceBase>;
class PortalClientInterfaceBase {};

using PortalClientPtrDataView =
    mojo::InterfacePtrDataView<PortalClientInterfaceBase>;
using PortalClientRequestDataView =
    mojo::InterfaceRequestDataView<PortalClientInterfaceBase>;
using PortalClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PortalClientInterfaceBase>;
using PortalClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PortalClientInterfaceBase>;
class PortalHostInterfaceBase {};

using PortalHostPtrDataView =
    mojo::InterfacePtrDataView<PortalHostInterfaceBase>;
using PortalHostRequestDataView =
    mojo::InterfaceRequestDataView<PortalHostInterfaceBase>;
using PortalHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PortalHostInterfaceBase>;
using PortalHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PortalHostInterfaceBase>;


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

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_SHARED_H_