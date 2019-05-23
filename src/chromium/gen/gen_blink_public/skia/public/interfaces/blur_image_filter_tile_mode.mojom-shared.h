// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_BLUR_IMAGE_FILTER_TILE_MODE_MOJOM_SHARED_H_
#define SKIA_PUBLIC_INTERFACES_BLUR_IMAGE_FILTER_TILE_MODE_MOJOM_SHARED_H_

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
#include "skia/public/interfaces/blur_image_filter_tile_mode.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace skia {
namespace mojom {


}  // namespace mojom
}  // namespace skia

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace skia {
namespace mojom {


enum class BlurTileMode : int32_t {
  
  CLAMP,
  
  REPEAT,
  
  CLAMP_TO_BLACK,
  
  BLUR_TILE_MODE_LAST = BlurTileMode::CLAMP_TO_BLACK,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, BlurTileMode value);
inline bool IsKnownEnumValue(BlurTileMode value) {
  return internal::BlurTileMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace skia

namespace std {

template <>
struct hash<::skia::mojom::BlurTileMode>
    : public mojo::internal::EnumHashImpl<::skia::mojom::BlurTileMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::skia::mojom::BlurTileMode, ::skia::mojom::BlurTileMode> {
  static ::skia::mojom::BlurTileMode ToMojom(::skia::mojom::BlurTileMode input) { return input; }
  static bool FromMojom(::skia::mojom::BlurTileMode input, ::skia::mojom::BlurTileMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::BlurTileMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::skia::mojom::BlurTileMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::skia::mojom::BlurTileMode>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace skia {
namespace mojom {


}  // namespace mojom
}  // namespace skia

#endif  // SKIA_PUBLIC_INTERFACES_BLUR_IMAGE_FILTER_TILE_MODE_MOJOM_SHARED_H_