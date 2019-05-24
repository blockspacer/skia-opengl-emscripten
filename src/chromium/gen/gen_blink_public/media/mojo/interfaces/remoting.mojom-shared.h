// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/remoting.mojom-shared-internal.h"
#include "media/mojo/interfaces/remoting_common.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class RemoterFactoryInterfaceBase {};

using RemoterFactoryPtrDataView =
    mojo::InterfacePtrDataView<RemoterFactoryInterfaceBase>;
using RemoterFactoryRequestDataView =
    mojo::InterfaceRequestDataView<RemoterFactoryInterfaceBase>;
using RemoterFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemoterFactoryInterfaceBase>;
using RemoterFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemoterFactoryInterfaceBase>;
class RemotingDataStreamSenderInterfaceBase {};

using RemotingDataStreamSenderPtrDataView =
    mojo::InterfacePtrDataView<RemotingDataStreamSenderInterfaceBase>;
using RemotingDataStreamSenderRequestDataView =
    mojo::InterfaceRequestDataView<RemotingDataStreamSenderInterfaceBase>;
using RemotingDataStreamSenderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemotingDataStreamSenderInterfaceBase>;
using RemotingDataStreamSenderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemotingDataStreamSenderInterfaceBase>;
class RemoterInterfaceBase {};

using RemoterPtrDataView =
    mojo::InterfacePtrDataView<RemoterInterfaceBase>;
using RemoterRequestDataView =
    mojo::InterfaceRequestDataView<RemoterInterfaceBase>;
using RemoterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemoterInterfaceBase>;
using RemoterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemoterInterfaceBase>;
class RemotingSourceInterfaceBase {};

using RemotingSourcePtrDataView =
    mojo::InterfacePtrDataView<RemotingSourceInterfaceBase>;
using RemotingSourceRequestDataView =
    mojo::InterfaceRequestDataView<RemotingSourceInterfaceBase>;
using RemotingSourceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemotingSourceInterfaceBase>;
using RemotingSourceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemotingSourceInterfaceBase>;


}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_H_