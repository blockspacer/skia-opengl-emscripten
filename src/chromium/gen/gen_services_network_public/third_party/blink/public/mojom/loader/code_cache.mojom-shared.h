// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/loader/code_cache.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

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


enum class CodeCacheType : int32_t {
  
  kJavascript,
  
  kWebAssembly,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, CodeCacheType value);
inline bool IsKnownEnumValue(CodeCacheType value) {
  return internal::CodeCacheType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CodeCacheHostInterfaceBase {};

using CodeCacheHostPtrDataView =
    mojo::InterfacePtrDataView<CodeCacheHostInterfaceBase>;
using CodeCacheHostRequestDataView =
    mojo::InterfaceRequestDataView<CodeCacheHostInterfaceBase>;
using CodeCacheHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CodeCacheHostInterfaceBase>;
using CodeCacheHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CodeCacheHostInterfaceBase>;


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::CodeCacheType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::CodeCacheType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::CodeCacheType, ::blink::mojom::CodeCacheType> {
  static ::blink::mojom::CodeCacheType ToMojom(::blink::mojom::CodeCacheType input) { return input; }
  static bool FromMojom(::blink::mojom::CodeCacheType input, ::blink::mojom::CodeCacheType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CodeCacheType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::CodeCacheType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::CodeCacheType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_SHARED_H_