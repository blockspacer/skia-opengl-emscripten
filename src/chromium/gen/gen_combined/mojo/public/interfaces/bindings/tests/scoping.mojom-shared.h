// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/scoping.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace mojo {
namespace test {


}  // namespace test
}  // namespace mojo

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace test {
// Interface base classes. They are used for type safety check.
class AInterfaceBase {};

using APtrDataView =
    mojo::InterfacePtrDataView<AInterfaceBase>;
using ARequestDataView =
    mojo::InterfaceRequestDataView<AInterfaceBase>;
using AAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AInterfaceBase>;
using AAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AInterfaceBase>;
class BInterfaceBase {};

using BPtrDataView =
    mojo::InterfacePtrDataView<BInterfaceBase>;
using BRequestDataView =
    mojo::InterfaceRequestDataView<BInterfaceBase>;
using BAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BInterfaceBase>;
using BAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BInterfaceBase>;
class CInterfaceBase {};

using CPtrDataView =
    mojo::InterfacePtrDataView<CInterfaceBase>;
using CRequestDataView =
    mojo::InterfaceRequestDataView<CInterfaceBase>;
using CAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CInterfaceBase>;
using CAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CInterfaceBase>;


}  // namespace test
}  // namespace mojo

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace mojo {
namespace test {


}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_SHARED_H_