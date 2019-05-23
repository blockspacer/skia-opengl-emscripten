// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_LIFECYCLE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_LIFECYCLE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/frame/lifecycle.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class FrameVisibility : int32_t {
  
  kRenderedOutOfViewport,
  
  kRenderedInViewport,
  
  kNotRendered,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FrameVisibility value);
inline bool IsKnownEnumValue(FrameVisibility value) {
  return internal::FrameVisibility_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FrameLifecycleState : int32_t {
  
  kRunning,
  
  kPaused,
  
  kFrozen,
  
  kFrozenAutoResumeMedia,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FrameLifecycleState value);
inline bool IsKnownEnumValue(FrameLifecycleState value) {
  return internal::FrameLifecycleState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::FrameVisibility>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FrameVisibility> {};

template <>
struct hash<::blink::mojom::FrameLifecycleState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FrameLifecycleState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::FrameVisibility, ::blink::mojom::FrameVisibility> {
  static ::blink::mojom::FrameVisibility ToMojom(::blink::mojom::FrameVisibility input) { return input; }
  static bool FromMojom(::blink::mojom::FrameVisibility input, ::blink::mojom::FrameVisibility* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FrameVisibility, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FrameVisibility, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FrameVisibility>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FrameLifecycleState, ::blink::mojom::FrameLifecycleState> {
  static ::blink::mojom::FrameLifecycleState ToMojom(::blink::mojom::FrameLifecycleState input) { return input; }
  static bool FromMojom(::blink::mojom::FrameLifecycleState input, ::blink::mojom::FrameLifecycleState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FrameLifecycleState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FrameLifecycleState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FrameLifecycleState>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_LIFECYCLE_MOJOM_SHARED_H_