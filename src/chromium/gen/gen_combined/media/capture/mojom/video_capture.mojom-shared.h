// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_H_

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
#include "media/capture/mojom/video_capture.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

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


enum class VideoCaptureState : int32_t {
  
  STARTED,
  
  PAUSED,
  
  RESUMED,
  
  STOPPED,
  
  FAILED,
  
  ENDED,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, VideoCaptureState value);
inline bool IsKnownEnumValue(VideoCaptureState value) {
  return internal::VideoCaptureState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class VideoCaptureObserverInterfaceBase {};

using VideoCaptureObserverPtrDataView =
    mojo::InterfacePtrDataView<VideoCaptureObserverInterfaceBase>;
using VideoCaptureObserverRequestDataView =
    mojo::InterfaceRequestDataView<VideoCaptureObserverInterfaceBase>;
using VideoCaptureObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoCaptureObserverInterfaceBase>;
using VideoCaptureObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoCaptureObserverInterfaceBase>;
class VideoCaptureHostInterfaceBase {};

using VideoCaptureHostPtrDataView =
    mojo::InterfacePtrDataView<VideoCaptureHostInterfaceBase>;
using VideoCaptureHostRequestDataView =
    mojo::InterfaceRequestDataView<VideoCaptureHostInterfaceBase>;
using VideoCaptureHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoCaptureHostInterfaceBase>;
using VideoCaptureHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoCaptureHostInterfaceBase>;


}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::VideoCaptureState>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCaptureState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::VideoCaptureState, ::media::mojom::VideoCaptureState> {
  static ::media::mojom::VideoCaptureState ToMojom(::media::mojom::VideoCaptureState input) { return input; }
  static bool FromMojom(::media::mojom::VideoCaptureState input, ::media::mojom::VideoCaptureState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCaptureState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCaptureState>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_H_