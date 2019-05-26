// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/audio_input_stream.mojom-shared-internal.h"
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


enum class AudioInputStreamObserver_DisconnectReason : int32_t {
  
  kDefault = 0,
  
  kPlatformError = 1,
  
  kTerminatedByClient = 2,
  
  kStreamCreationFailed = 3,
  
  kDocumentDestroyed = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, AudioInputStreamObserver_DisconnectReason value);
inline bool IsKnownEnumValue(AudioInputStreamObserver_DisconnectReason value) {
  return internal::AudioInputStreamObserver_DisconnectReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AudioInputStreamInterfaceBase {};

using AudioInputStreamPtrDataView =
    mojo::InterfacePtrDataView<AudioInputStreamInterfaceBase>;
using AudioInputStreamRequestDataView =
    mojo::InterfaceRequestDataView<AudioInputStreamInterfaceBase>;
using AudioInputStreamAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioInputStreamInterfaceBase>;
using AudioInputStreamAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioInputStreamInterfaceBase>;
class AudioInputStreamClientInterfaceBase {};

using AudioInputStreamClientPtrDataView =
    mojo::InterfacePtrDataView<AudioInputStreamClientInterfaceBase>;
using AudioInputStreamClientRequestDataView =
    mojo::InterfaceRequestDataView<AudioInputStreamClientInterfaceBase>;
using AudioInputStreamClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioInputStreamClientInterfaceBase>;
using AudioInputStreamClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioInputStreamClientInterfaceBase>;
class AudioInputStreamObserverInterfaceBase {};

using AudioInputStreamObserverPtrDataView =
    mojo::InterfacePtrDataView<AudioInputStreamObserverInterfaceBase>;
using AudioInputStreamObserverRequestDataView =
    mojo::InterfaceRequestDataView<AudioInputStreamObserverInterfaceBase>;
using AudioInputStreamObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioInputStreamObserverInterfaceBase>;
using AudioInputStreamObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioInputStreamObserverInterfaceBase>;


}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::AudioInputStreamObserver_DisconnectReason>
    : public mojo::internal::EnumHashImpl<::media::mojom::AudioInputStreamObserver_DisconnectReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::AudioInputStreamObserver_DisconnectReason, ::media::mojom::AudioInputStreamObserver_DisconnectReason> {
  static ::media::mojom::AudioInputStreamObserver_DisconnectReason ToMojom(::media::mojom::AudioInputStreamObserver_DisconnectReason input) { return input; }
  static bool FromMojom(::media::mojom::AudioInputStreamObserver_DisconnectReason input, ::media::mojom::AudioInputStreamObserver_DisconnectReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::AudioInputStreamObserver_DisconnectReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::AudioInputStreamObserver_DisconnectReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::AudioInputStreamObserver_DisconnectReason>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_H_