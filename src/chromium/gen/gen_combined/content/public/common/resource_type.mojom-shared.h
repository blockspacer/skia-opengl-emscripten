// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_RESOURCE_TYPE_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_RESOURCE_TYPE_MOJOM_SHARED_H_

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
#include "content/public/common/resource_type.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {


enum class ResourceType : int32_t {
  
  kMainFrame = 0,
  
  kSubFrame = 1,
  
  kStylesheet = 2,
  
  kScript = 3,
  
  kImage = 4,
  
  kFontResource = 5,
  
  kSubResource = 6,
  
  kObject = 7,
  
  kMedia = 8,
  
  kWorker = 9,
  
  kSharedWorker = 10,
  
  kPrefetch = 11,
  
  kFavicon = 12,
  
  kXhr = 13,
  
  kPing = 14,
  
  kServiceWorker = 15,
  
  kCspReport = 16,
  
  kPluginResource = 17,
  
  kNavigationPreload = 18,
  kMinValue = 0,
  kMaxValue = 18,
};

 std::ostream& operator<<(std::ostream& os, ResourceType value);
inline bool IsKnownEnumValue(ResourceType value) {
  return internal::ResourceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::ResourceType>
    : public mojo::internal::EnumHashImpl<::content::mojom::ResourceType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::ResourceType, ::content::mojom::ResourceType> {
  static ::content::mojom::ResourceType ToMojom(::content::mojom::ResourceType input) { return input; }
  static bool FromMojom(::content::mojom::ResourceType input, ::content::mojom::ResourceType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ResourceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::ResourceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::ResourceType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_RESOURCE_TYPE_MOJOM_SHARED_H_