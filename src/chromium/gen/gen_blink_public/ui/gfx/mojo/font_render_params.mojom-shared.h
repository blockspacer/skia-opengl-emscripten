// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_FONT_RENDER_PARAMS_MOJOM_SHARED_H_
#define UI_GFX_MOJO_FONT_RENDER_PARAMS_MOJOM_SHARED_H_

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
#include "ui/gfx/mojo/font_render_params.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {


}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace gfx {
namespace mojom {


enum class Hinting : int32_t {
  
  kNone,
  
  kSlight,
  
  kMedium,
  
  kFull,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, Hinting value);
inline bool IsKnownEnumValue(Hinting value) {
  return internal::Hinting_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SubpixelRendering : int32_t {
  
  kNone,
  
  kRGB,
  
  kBGR,
  
  kVRGB,
  
  kVBGR,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, SubpixelRendering value);
inline bool IsKnownEnumValue(SubpixelRendering value) {
  return internal::SubpixelRendering_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace gfx

namespace std {

template <>
struct hash<::gfx::mojom::Hinting>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::Hinting> {};

template <>
struct hash<::gfx::mojom::SubpixelRendering>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::SubpixelRendering> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gfx::mojom::Hinting, ::gfx::mojom::Hinting> {
  static ::gfx::mojom::Hinting ToMojom(::gfx::mojom::Hinting input) { return input; }
  static bool FromMojom(::gfx::mojom::Hinting input, ::gfx::mojom::Hinting* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::Hinting, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::Hinting, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::Hinting>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::gfx::mojom::SubpixelRendering, ::gfx::mojom::SubpixelRendering> {
  static ::gfx::mojom::SubpixelRendering ToMojom(::gfx::mojom::SubpixelRendering input) { return input; }
  static bool FromMojom(::gfx::mojom::SubpixelRendering input, ::gfx::mojom::SubpixelRendering* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::SubpixelRendering, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::SubpixelRendering, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::SubpixelRendering>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {


}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_FONT_RENDER_PARAMS_MOJOM_SHARED_H_