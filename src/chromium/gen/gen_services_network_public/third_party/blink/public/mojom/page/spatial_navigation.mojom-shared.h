// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/page/spatial_navigation.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SpatialNavigationStateDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SpatialNavigationStateDataView> {
  using Data = ::blink::mojom::internal::SpatialNavigationState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SpatialNavigationHostInterfaceBase {};

using SpatialNavigationHostPtrDataView =
    mojo::InterfacePtrDataView<SpatialNavigationHostInterfaceBase>;
using SpatialNavigationHostRequestDataView =
    mojo::InterfaceRequestDataView<SpatialNavigationHostInterfaceBase>;
using SpatialNavigationHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SpatialNavigationHostInterfaceBase>;
using SpatialNavigationHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SpatialNavigationHostInterfaceBase>;
class SpatialNavigationStateDataView {
 public:
  SpatialNavigationStateDataView() {}

  SpatialNavigationStateDataView(
      internal::SpatialNavigationState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool can_exit_focus() const {
    return data_->can_exit_focus;
  }
  bool can_select_element() const {
    return data_->can_select_element;
  }
  bool has_next_form_element() const {
    return data_->has_next_form_element;
  }
  bool has_default_video_controls() const {
    return data_->has_default_video_controls;
  }
 private:
  internal::SpatialNavigationState_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SpatialNavigationStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SpatialNavigationStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SpatialNavigationState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->can_exit_focus = Traits::can_exit_focus(input);
    (*output)->can_select_element = Traits::can_select_element(input);
    (*output)->has_next_form_element = Traits::has_next_form_element(input);
    (*output)->has_default_video_controls = Traits::has_default_video_controls(input);
  }

  static bool Deserialize(::blink::mojom::internal::SpatialNavigationState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SpatialNavigationStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_SHARED_H_