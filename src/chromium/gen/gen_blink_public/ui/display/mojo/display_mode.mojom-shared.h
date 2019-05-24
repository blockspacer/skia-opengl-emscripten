// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_MODE_MOJOM_SHARED_H_
#define UI_DISPLAY_MOJO_DISPLAY_MODE_MOJOM_SHARED_H_

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
#include "ui/display/mojo/display_mode.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace display {
namespace mojom {
class DisplayModeDataView;



}  // namespace mojom
}  // namespace display

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::display::mojom::DisplayModeDataView> {
  using Data = ::display::mojom::internal::DisplayMode_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace display {
namespace mojom {
class DisplayModeDataView {
 public:
  DisplayModeDataView() {}

  DisplayModeDataView(
      internal::DisplayMode_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSize(UserType* output) {
    auto* pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  bool is_interlaced() const {
    return data_->is_interlaced;
  }
  float refresh_rate() const {
    return data_->refresh_rate;
  }
 private:
  internal::DisplayMode_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace display

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::DisplayModeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::display::mojom::DisplayModeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::display::mojom::internal::DisplayMode_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::size(input)) in_size = Traits::size(input);
    typename decltype((*output)->size)::BaseType::BufferWriter
        size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_size, buffer, &size_writer, context);
    (*output)->size.Set(
        size_writer.is_null() ? nullptr : size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null size in DisplayMode struct");
    (*output)->is_interlaced = Traits::is_interlaced(input);
    (*output)->refresh_rate = Traits::refresh_rate(input);
  }

  static bool Deserialize(::display::mojom::internal::DisplayMode_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::display::mojom::DisplayModeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace display {
namespace mojom {

inline void DisplayModeDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_DISPLAY_MODE_MOJOM_SHARED_H_