// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_SWAP_RESULT_MOJOM_SHARED_H_
#define UI_GFX_MOJO_SWAP_RESULT_MOJOM_SHARED_H_

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
#include "ui/gfx/mojo/swap_result.mojom-shared-internal.h"

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


enum class SwapResult : int32_t {
  
  ACK,
  
  FAILED,
  
  NAK_RECREATE_BUFFERS,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, SwapResult value);
inline bool IsKnownEnumValue(SwapResult value) {
  return internal::SwapResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace gfx

namespace std {

template <>
struct hash<::gfx::mojom::SwapResult>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::SwapResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gfx::mojom::SwapResult, ::gfx::mojom::SwapResult> {
  static ::gfx::mojom::SwapResult ToMojom(::gfx::mojom::SwapResult input) { return input; }
  static bool FromMojom(::gfx::mojom::SwapResult input, ::gfx::mojom::SwapResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::SwapResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::SwapResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::SwapResult>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {


}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_SWAP_RESULT_MOJOM_SHARED_H_