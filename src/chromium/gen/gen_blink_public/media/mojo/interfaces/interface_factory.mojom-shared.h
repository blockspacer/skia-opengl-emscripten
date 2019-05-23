// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/interface_factory.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_decoder.mojom-shared.h"
#include "media/mojo/interfaces/cdm_proxy.mojom-shared.h"
#include "media/mojo/interfaces/decryptor.mojom-shared.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-shared.h"
#include "media/mojo/interfaces/renderer.mojom-shared.h"
#include "media/mojo/interfaces/renderer_extensions.mojom-shared.h"
#include "media/mojo/interfaces/video_decoder.mojom-shared.h"
#include "mojo/public/mojom/base/token.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"

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
class InterfaceFactoryInterfaceBase {};

using InterfaceFactoryPtrDataView =
    mojo::InterfacePtrDataView<InterfaceFactoryInterfaceBase>;
using InterfaceFactoryRequestDataView =
    mojo::InterfaceRequestDataView<InterfaceFactoryInterfaceBase>;
using InterfaceFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InterfaceFactoryInterfaceBase>;
using InterfaceFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InterfaceFactoryInterfaceBase>;


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

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_H_