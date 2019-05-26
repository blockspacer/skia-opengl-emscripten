// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/window_features/window_features.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class WindowFeaturesDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::WindowFeaturesDataView> {
  using Data = ::blink::mojom::internal::WindowFeatures_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class WindowFeaturesDataView {
 public:
  WindowFeaturesDataView() {}

  WindowFeaturesDataView(
      internal::WindowFeatures_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  bool has_x() const {
    return data_->has_x;
  }
  float y() const {
    return data_->y;
  }
  bool has_y() const {
    return data_->has_y;
  }
  float width() const {
    return data_->width;
  }
  bool has_width() const {
    return data_->has_width;
  }
  float height() const {
    return data_->height;
  }
  bool has_height() const {
    return data_->has_height;
  }
  bool menu_bar_visible() const {
    return data_->menu_bar_visible;
  }
  bool status_bar_visible() const {
    return data_->status_bar_visible;
  }
  bool tool_bar_visible() const {
    return data_->tool_bar_visible;
  }
  bool scrollbars_visible() const {
    return data_->scrollbars_visible;
  }
 private:
  internal::WindowFeatures_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WindowFeaturesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WindowFeaturesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WindowFeatures_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->has_x = Traits::has_x(input);
    (*output)->y = Traits::y(input);
    (*output)->has_y = Traits::has_y(input);
    (*output)->width = Traits::width(input);
    (*output)->has_width = Traits::has_width(input);
    (*output)->height = Traits::height(input);
    (*output)->has_height = Traits::has_height(input);
    (*output)->menu_bar_visible = Traits::menu_bar_visible(input);
    (*output)->status_bar_visible = Traits::status_bar_visible(input);
    (*output)->tool_bar_visible = Traits::tool_bar_visible(input);
    (*output)->scrollbars_visible = Traits::scrollbars_visible(input);
  }

  static bool Deserialize(::blink::mojom::internal::WindowFeatures_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WindowFeaturesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_SHARED_H_