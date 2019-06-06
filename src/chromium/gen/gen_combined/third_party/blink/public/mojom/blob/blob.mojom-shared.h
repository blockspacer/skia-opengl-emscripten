// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/blob/blob.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/data_pipe_getter.mojom-shared.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared.h"
#endif // ENABLE_GNET

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
class BlobReaderClientInterfaceBase {};

using BlobReaderClientPtrDataView =
    mojo::InterfacePtrDataView<BlobReaderClientInterfaceBase>;
using BlobReaderClientRequestDataView =
    mojo::InterfaceRequestDataView<BlobReaderClientInterfaceBase>;
using BlobReaderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BlobReaderClientInterfaceBase>;
using BlobReaderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BlobReaderClientInterfaceBase>;
class BlobInterfaceBase {};

using BlobPtrDataView =
    mojo::InterfacePtrDataView<BlobInterfaceBase>;
using BlobRequestDataView =
    mojo::InterfaceRequestDataView<BlobInterfaceBase>;
using BlobAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BlobInterfaceBase>;
using BlobAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BlobInterfaceBase>;


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

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_H_
