// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/page/display_cutout.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class DisplayCutoutSafeAreaDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::DisplayCutoutSafeAreaDataView> {
  using Data = ::blink::mojom::internal::DisplayCutoutSafeArea_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class ViewportFit : int32_t {
  
  kAuto,
  
  kContain,
  
  kCover,
  
  kCoverForcedByUserAgent,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ViewportFit value);
inline bool IsKnownEnumValue(ViewportFit value) {
  return internal::ViewportFit_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class DisplayCutoutHostInterfaceBase {};

using DisplayCutoutHostPtrDataView =
    mojo::InterfacePtrDataView<DisplayCutoutHostInterfaceBase>;
using DisplayCutoutHostRequestDataView =
    mojo::InterfaceRequestDataView<DisplayCutoutHostInterfaceBase>;
using DisplayCutoutHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DisplayCutoutHostInterfaceBase>;
using DisplayCutoutHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DisplayCutoutHostInterfaceBase>;
class DisplayCutoutClientInterfaceBase {};

using DisplayCutoutClientPtrDataView =
    mojo::InterfacePtrDataView<DisplayCutoutClientInterfaceBase>;
using DisplayCutoutClientRequestDataView =
    mojo::InterfaceRequestDataView<DisplayCutoutClientInterfaceBase>;
using DisplayCutoutClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DisplayCutoutClientInterfaceBase>;
using DisplayCutoutClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DisplayCutoutClientInterfaceBase>;
class DisplayCutoutSafeAreaDataView {
 public:
  DisplayCutoutSafeAreaDataView() {}

  DisplayCutoutSafeAreaDataView(
      internal::DisplayCutoutSafeArea_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t top() const {
    return data_->top;
  }
  int32_t left() const {
    return data_->left;
  }
  int32_t bottom() const {
    return data_->bottom;
  }
  int32_t right() const {
    return data_->right;
  }
 private:
  internal::DisplayCutoutSafeArea_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ViewportFit>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ViewportFit> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ViewportFit, ::blink::mojom::ViewportFit> {
  static ::blink::mojom::ViewportFit ToMojom(::blink::mojom::ViewportFit input) { return input; }
  static bool FromMojom(::blink::mojom::ViewportFit input, ::blink::mojom::ViewportFit* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ViewportFit, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ViewportFit, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ViewportFit>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DisplayCutoutSafeAreaDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DisplayCutoutSafeAreaDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DisplayCutoutSafeArea_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->top = Traits::top(input);
    (*output)->left = Traits::left(input);
    (*output)->bottom = Traits::bottom(input);
    (*output)->right = Traits::right(input);
  }

  static bool Deserialize(::blink::mojom::internal::DisplayCutoutSafeArea_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DisplayCutoutSafeAreaDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_SHARED_H_