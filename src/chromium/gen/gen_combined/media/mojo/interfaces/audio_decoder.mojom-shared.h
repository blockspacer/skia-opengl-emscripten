// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/audio_decoder.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"

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
class AudioDecoderInterfaceBase {};

using AudioDecoderPtrDataView =
    mojo::InterfacePtrDataView<AudioDecoderInterfaceBase>;
using AudioDecoderRequestDataView =
    mojo::InterfaceRequestDataView<AudioDecoderInterfaceBase>;
using AudioDecoderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioDecoderInterfaceBase>;
using AudioDecoderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioDecoderInterfaceBase>;
class AudioDecoderClientInterfaceBase {};

using AudioDecoderClientPtrDataView =
    mojo::InterfacePtrDataView<AudioDecoderClientInterfaceBase>;
using AudioDecoderClientRequestDataView =
    mojo::InterfaceRequestDataView<AudioDecoderClientInterfaceBase>;
using AudioDecoderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioDecoderClientInterfaceBase>;
using AudioDecoderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioDecoderClientInterfaceBase>;


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

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_H_