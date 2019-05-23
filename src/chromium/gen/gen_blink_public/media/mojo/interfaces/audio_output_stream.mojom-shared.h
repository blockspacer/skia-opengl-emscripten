// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/audio_output_stream.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"
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


enum class AudioOutputStreamObserver_DisconnectReason : int32_t {
  
  kDefault = 0,
  
  kPlatformError = 1,
  
  kTerminatedByClient = 2,
  
  kStreamCreationFailed = 3,
  
  kDocumentDestroyed = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, AudioOutputStreamObserver_DisconnectReason value);
inline bool IsKnownEnumValue(AudioOutputStreamObserver_DisconnectReason value) {
  return internal::AudioOutputStreamObserver_DisconnectReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AudioOutputStreamInterfaceBase {};

using AudioOutputStreamPtrDataView =
    mojo::InterfacePtrDataView<AudioOutputStreamInterfaceBase>;
using AudioOutputStreamRequestDataView =
    mojo::InterfaceRequestDataView<AudioOutputStreamInterfaceBase>;
using AudioOutputStreamAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioOutputStreamInterfaceBase>;
using AudioOutputStreamAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioOutputStreamInterfaceBase>;
class AudioOutputStreamObserverInterfaceBase {};

using AudioOutputStreamObserverPtrDataView =
    mojo::InterfacePtrDataView<AudioOutputStreamObserverInterfaceBase>;
using AudioOutputStreamObserverRequestDataView =
    mojo::InterfaceRequestDataView<AudioOutputStreamObserverInterfaceBase>;
using AudioOutputStreamObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioOutputStreamObserverInterfaceBase>;
using AudioOutputStreamObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioOutputStreamObserverInterfaceBase>;
class AudioOutputStreamProviderInterfaceBase {};

using AudioOutputStreamProviderPtrDataView =
    mojo::InterfacePtrDataView<AudioOutputStreamProviderInterfaceBase>;
using AudioOutputStreamProviderRequestDataView =
    mojo::InterfaceRequestDataView<AudioOutputStreamProviderInterfaceBase>;
using AudioOutputStreamProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioOutputStreamProviderInterfaceBase>;
using AudioOutputStreamProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioOutputStreamProviderInterfaceBase>;
class AudioOutputStreamProviderClientInterfaceBase {};

using AudioOutputStreamProviderClientPtrDataView =
    mojo::InterfacePtrDataView<AudioOutputStreamProviderClientInterfaceBase>;
using AudioOutputStreamProviderClientRequestDataView =
    mojo::InterfaceRequestDataView<AudioOutputStreamProviderClientInterfaceBase>;
using AudioOutputStreamProviderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioOutputStreamProviderClientInterfaceBase>;
using AudioOutputStreamProviderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioOutputStreamProviderClientInterfaceBase>;


}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::AudioOutputStreamObserver_DisconnectReason>
    : public mojo::internal::EnumHashImpl<::media::mojom::AudioOutputStreamObserver_DisconnectReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::AudioOutputStreamObserver_DisconnectReason, ::media::mojom::AudioOutputStreamObserver_DisconnectReason> {
  static ::media::mojom::AudioOutputStreamObserver_DisconnectReason ToMojom(::media::mojom::AudioOutputStreamObserver_DisconnectReason input) { return input; }
  static bool FromMojom(::media::mojom::AudioOutputStreamObserver_DisconnectReason input, ::media::mojom::AudioOutputStreamObserver_DisconnectReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::AudioOutputStreamObserver_DisconnectReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::AudioOutputStreamObserver_DisconnectReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::AudioOutputStreamObserver_DisconnectReason>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_H_