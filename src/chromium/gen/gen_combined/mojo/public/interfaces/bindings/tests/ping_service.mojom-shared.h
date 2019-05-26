// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/ping_service.mojom-shared-internal.h"

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
class PingServiceInterfaceBase {};

using PingServicePtrDataView =
    mojo::InterfacePtrDataView<PingServiceInterfaceBase>;
using PingServiceRequestDataView =
    mojo::InterfaceRequestDataView<PingServiceInterfaceBase>;
using PingServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PingServiceInterfaceBase>;
using PingServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PingServiceInterfaceBase>;
class EchoServiceInterfaceBase {};

using EchoServicePtrDataView =
    mojo::InterfacePtrDataView<EchoServiceInterfaceBase>;
using EchoServiceRequestDataView =
    mojo::InterfaceRequestDataView<EchoServiceInterfaceBase>;
using EchoServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EchoServiceInterfaceBase>;
using EchoServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EchoServiceInterfaceBase>;
class HandleTrampolineInterfaceBase {};

using HandleTrampolinePtrDataView =
    mojo::InterfacePtrDataView<HandleTrampolineInterfaceBase>;
using HandleTrampolineRequestDataView =
    mojo::InterfaceRequestDataView<HandleTrampolineInterfaceBase>;
using HandleTrampolineAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HandleTrampolineInterfaceBase>;
using HandleTrampolineAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HandleTrampolineInterfaceBase>;


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

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_SHARED_H_