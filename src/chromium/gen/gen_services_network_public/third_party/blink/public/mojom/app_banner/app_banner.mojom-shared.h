// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/app_banner/app_banner.mojom-shared-internal.h"

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


enum class AppBannerPromptReply : int32_t {
  
  NONE,
  
  CANCEL,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, AppBannerPromptReply value);
inline bool IsKnownEnumValue(AppBannerPromptReply value) {
  return internal::AppBannerPromptReply_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AppBannerControllerInterfaceBase {};

using AppBannerControllerPtrDataView =
    mojo::InterfacePtrDataView<AppBannerControllerInterfaceBase>;
using AppBannerControllerRequestDataView =
    mojo::InterfaceRequestDataView<AppBannerControllerInterfaceBase>;
using AppBannerControllerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AppBannerControllerInterfaceBase>;
using AppBannerControllerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AppBannerControllerInterfaceBase>;
class AppBannerEventInterfaceBase {};

using AppBannerEventPtrDataView =
    mojo::InterfacePtrDataView<AppBannerEventInterfaceBase>;
using AppBannerEventRequestDataView =
    mojo::InterfaceRequestDataView<AppBannerEventInterfaceBase>;
using AppBannerEventAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AppBannerEventInterfaceBase>;
using AppBannerEventAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AppBannerEventInterfaceBase>;
class AppBannerServiceInterfaceBase {};

using AppBannerServicePtrDataView =
    mojo::InterfacePtrDataView<AppBannerServiceInterfaceBase>;
using AppBannerServiceRequestDataView =
    mojo::InterfaceRequestDataView<AppBannerServiceInterfaceBase>;
using AppBannerServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AppBannerServiceInterfaceBase>;
using AppBannerServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AppBannerServiceInterfaceBase>;


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::AppBannerPromptReply>
    : public mojo::internal::EnumHashImpl<::blink::mojom::AppBannerPromptReply> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::AppBannerPromptReply, ::blink::mojom::AppBannerPromptReply> {
  static ::blink::mojom::AppBannerPromptReply ToMojom(::blink::mojom::AppBannerPromptReply input) { return input; }
  static bool FromMojom(::blink::mojom::AppBannerPromptReply input, ::blink::mojom::AppBannerPromptReply* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AppBannerPromptReply, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::AppBannerPromptReply, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::AppBannerPromptReply>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_SHARED_H_