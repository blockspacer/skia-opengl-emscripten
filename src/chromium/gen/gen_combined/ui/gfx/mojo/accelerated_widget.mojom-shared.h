// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_SHARED_H_
#define UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_SHARED_H_

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
#include "ui/gfx/mojo/accelerated_widget.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class AcceleratedWidgetDataView;



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gfx::mojom::AcceleratedWidgetDataView> {
  using Data = ::gfx::mojom::internal::AcceleratedWidget_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gfx {
namespace mojom {
class AcceleratedWidgetDataView {
 public:
  AcceleratedWidgetDataView() {}

  AcceleratedWidgetDataView(
      internal::AcceleratedWidget_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t widget() const {
    return data_->widget;
  }
 private:
  internal::AcceleratedWidget_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::AcceleratedWidgetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::AcceleratedWidgetDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::AcceleratedWidget_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->widget = Traits::widget(input);
  }

  static bool Deserialize(::gfx::mojom::internal::AcceleratedWidget_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::AcceleratedWidgetDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {




}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_SHARED_H_