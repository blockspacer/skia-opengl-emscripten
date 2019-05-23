// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_CONTEXT_RESULT_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_CONTEXT_RESULT_MOJOM_SHARED_H_

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
#include "gpu/ipc/common/context_result.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {


}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {


enum class ContextResult : int32_t {
  
  Success,
  
  TransientFailure,
  
  FatalFailure,
  
  SurfaceFailure,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, ContextResult value);
inline bool IsKnownEnumValue(ContextResult value) {
  return internal::ContextResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace gpu

namespace std {

template <>
struct hash<::gpu::mojom::ContextResult>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::ContextResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gpu::mojom::ContextResult, ::gpu::mojom::ContextResult> {
  static ::gpu::mojom::ContextResult ToMojom(::gpu::mojom::ContextResult input) { return input; }
  static bool FromMojom(::gpu::mojom::ContextResult input, ::gpu::mojom::ContextResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::ContextResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::ContextResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::ContextResult>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {


}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_CONTEXT_RESULT_MOJOM_SHARED_H_