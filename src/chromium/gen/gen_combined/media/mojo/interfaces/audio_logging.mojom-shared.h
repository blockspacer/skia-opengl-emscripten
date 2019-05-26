// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/audio_logging.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"

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


enum class AudioLogComponent : int32_t {
  
  kInputController,
  
  kOutputController,
  
  kOutputStream,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, AudioLogComponent value);
inline bool IsKnownEnumValue(AudioLogComponent value) {
  return internal::AudioLogComponent_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AudioLogInterfaceBase {};

using AudioLogPtrDataView =
    mojo::InterfacePtrDataView<AudioLogInterfaceBase>;
using AudioLogRequestDataView =
    mojo::InterfaceRequestDataView<AudioLogInterfaceBase>;
using AudioLogAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioLogInterfaceBase>;
using AudioLogAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioLogInterfaceBase>;
class AudioLogFactoryInterfaceBase {};

using AudioLogFactoryPtrDataView =
    mojo::InterfacePtrDataView<AudioLogFactoryInterfaceBase>;
using AudioLogFactoryRequestDataView =
    mojo::InterfaceRequestDataView<AudioLogFactoryInterfaceBase>;
using AudioLogFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioLogFactoryInterfaceBase>;
using AudioLogFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioLogFactoryInterfaceBase>;


}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::AudioLogComponent>
    : public mojo::internal::EnumHashImpl<::media::mojom::AudioLogComponent> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::AudioLogComponent, ::media::mojom::AudioLogComponent> {
  static ::media::mojom::AudioLogComponent ToMojom(::media::mojom::AudioLogComponent input) { return input; }
  static bool FromMojom(::media::mojom::AudioLogComponent input, ::media::mojom::AudioLogComponent* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::AudioLogComponent, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::AudioLogComponent, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::AudioLogComponent>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_H_