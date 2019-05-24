// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/test_sync_methods.mojom-shared-internal.h"

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
class TestSyncCodeGenerationInterfaceBase {};

using TestSyncCodeGenerationPtrDataView =
    mojo::InterfacePtrDataView<TestSyncCodeGenerationInterfaceBase>;
using TestSyncCodeGenerationRequestDataView =
    mojo::InterfaceRequestDataView<TestSyncCodeGenerationInterfaceBase>;
using TestSyncCodeGenerationAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TestSyncCodeGenerationInterfaceBase>;
using TestSyncCodeGenerationAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TestSyncCodeGenerationInterfaceBase>;
class TestSyncInterfaceBase {};

using TestSyncPtrDataView =
    mojo::InterfacePtrDataView<TestSyncInterfaceBase>;
using TestSyncRequestDataView =
    mojo::InterfaceRequestDataView<TestSyncInterfaceBase>;
using TestSyncAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TestSyncInterfaceBase>;
using TestSyncAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TestSyncInterfaceBase>;
class TestSyncMasterInterfaceBase {};

using TestSyncMasterPtrDataView =
    mojo::InterfacePtrDataView<TestSyncMasterInterfaceBase>;
using TestSyncMasterRequestDataView =
    mojo::InterfaceRequestDataView<TestSyncMasterInterfaceBase>;
using TestSyncMasterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TestSyncMasterInterfaceBase>;
using TestSyncMasterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TestSyncMasterInterfaceBase>;


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

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_SHARED_H_