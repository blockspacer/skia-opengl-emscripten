// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_H_

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
#include "components/services/filesystem/public/interfaces/file.mojom-shared-internal.h"
#include "components/services/filesystem/public/interfaces/types.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_error.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace filesystem {
namespace mojom {


}  // namespace mojom
}  // namespace filesystem

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace filesystem {
namespace mojom {
// Interface base classes. They are used for type safety check.
class FileInterfaceBase {};

using FilePtrDataView =
    mojo::InterfacePtrDataView<FileInterfaceBase>;
using FileRequestDataView =
    mojo::InterfaceRequestDataView<FileInterfaceBase>;
using FileAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FileInterfaceBase>;
using FileAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FileInterfaceBase>;


}  // namespace mojom
}  // namespace filesystem

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace filesystem {
namespace mojom {


}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_H_