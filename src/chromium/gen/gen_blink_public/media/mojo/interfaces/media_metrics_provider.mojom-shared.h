// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/media_metrics_provider.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-shared.h"
#include "media/mojo/interfaces/watch_time_recorder.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
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


enum class MediaURLScheme : int32_t {
  
  kUnknown = 0,
  
  kMissing,
  
  kHttp,
  
  kHttps,
  
  kFtp,
  
  kChromeExtension,
  
  kJavascript,
  
  kFile,
  
  kBlob,
  
  kData,
  
  kFileSystem,
  
  kChrome,
  
  kContent,
  
  kContentId,
  kMinValue = 0,
  kMaxValue = 13,
};

 std::ostream& operator<<(std::ostream& os, MediaURLScheme value);
inline bool IsKnownEnumValue(MediaURLScheme value) {
  return internal::MediaURLScheme_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class MediaMetricsProviderInterfaceBase {};

using MediaMetricsProviderPtrDataView =
    mojo::InterfacePtrDataView<MediaMetricsProviderInterfaceBase>;
using MediaMetricsProviderRequestDataView =
    mojo::InterfaceRequestDataView<MediaMetricsProviderInterfaceBase>;
using MediaMetricsProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaMetricsProviderInterfaceBase>;
using MediaMetricsProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaMetricsProviderInterfaceBase>;


}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::MediaURLScheme>
    : public mojo::internal::EnumHashImpl<::media::mojom::MediaURLScheme> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::MediaURLScheme, ::media::mojom::MediaURLScheme> {
  static ::media::mojom::MediaURLScheme ToMojom(::media::mojom::MediaURLScheme input) { return input; }
  static bool FromMojom(::media::mojom::MediaURLScheme input, ::media::mojom::MediaURLScheme* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::MediaURLScheme, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::MediaURLScheme, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::MediaURLScheme>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_H_