// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_OVERLAY_TRANSFORM_MOJOM_SHARED_H_
#define UI_GFX_MOJO_OVERLAY_TRANSFORM_MOJOM_SHARED_H_

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
#include "ui/gfx/mojo/overlay_transform.mojom-shared-internal.h"

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


enum class OverlayTransform : int32_t {
  
  OVERLAY_TRANSFORM_INVALID,
  
  OVERLAY_TRANSFORM_NONE,
  
  OVERLAY_TRANSFORM_FLIP_HORIZONTAL,
  
  OVERLAY_TRANSFORM_FLIP_VERTICAL,
  
  OVERLAY_TRANSFORM_ROTATE_90,
  
  OVERLAY_TRANSFORM_ROTATE_180,
  
  OVERLAY_TRANSFORM_ROTATE_270,
  
  OVERLAY_TRANSFORM_LAST = OverlayTransform::OVERLAY_TRANSFORM_ROTATE_270,
  kMinValue = 0,
  kMaxValue = 6,
};

 std::ostream& operator<<(std::ostream& os, OverlayTransform value);
inline bool IsKnownEnumValue(OverlayTransform value) {
  return internal::OverlayTransform_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace gfx

namespace std {

template <>
struct hash<::gfx::mojom::OverlayTransform>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::OverlayTransform> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gfx::mojom::OverlayTransform, ::gfx::mojom::OverlayTransform> {
  static ::gfx::mojom::OverlayTransform ToMojom(::gfx::mojom::OverlayTransform input) { return input; }
  static bool FromMojom(::gfx::mojom::OverlayTransform input, ::gfx::mojom::OverlayTransform* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::OverlayTransform, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::OverlayTransform, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::OverlayTransform>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {


}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_OVERLAY_TRANSFORM_MOJOM_SHARED_H_