// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/echo.mojom-shared-internal.h"
#include "mojo/public/interfaces/bindings/tests/echo_import/echo_import.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace test {
namespace echo {
namespace mojom {


}  // namespace mojom
}  // namespace echo
}  // namespace test

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace test {
namespace echo {
namespace mojom {
// Interface base classes. They are used for type safety check.
class EchoInterfaceBase {};

using EchoPtrDataView =
    mojo::InterfacePtrDataView<EchoInterfaceBase>;
using EchoRequestDataView =
    mojo::InterfaceRequestDataView<EchoInterfaceBase>;
using EchoAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EchoInterfaceBase>;
using EchoAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EchoInterfaceBase>;


}  // namespace mojom
}  // namespace echo
}  // namespace test

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace test {
namespace echo {
namespace mojom {


}  // namespace mojom
}  // namespace echo
}  // namespace test

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_MOJOM_SHARED_H_