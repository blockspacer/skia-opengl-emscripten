// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_SHARED_H_
#define UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_SHARED_H_

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
#include "ui/platform_window/mojo/text_input_state.mojom-shared-internal.h"
#include "ui/base/ime/mojo/ime_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {
class TextInputStateDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::TextInputStateDataView> {
  using Data = ::ui::mojom::internal::TextInputState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {
class TextInputStateDataView {
 public:
  TextInputStateDataView() {}

  TextInputStateDataView(
      internal::TextInputState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::TextInputType>(
        data_value, output);
  }

  ::ui::mojom::TextInputType type() const {
    return static_cast<::ui::mojom::TextInputType>(data_->type);
  }
  int32_t flags() const {
    return data_->flags;
  }
  inline void GetTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t selection_start() const {
    return data_->selection_start;
  }
  int32_t selection_end() const {
    return data_->selection_end;
  }
  int32_t composition_start() const {
    return data_->composition_start;
  }
  int32_t composition_end() const {
    return data_->composition_end;
  }
  bool can_compose_inline() const {
    return data_->can_compose_inline;
  }
 private:
  internal::TextInputState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TextInputStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::TextInputStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::TextInputState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::TextInputType>(
        Traits::type(input), &(*output)->type);
    (*output)->flags = Traits::flags(input);
    decltype(Traits::text(input)) in_text = Traits::text(input);
    typename decltype((*output)->text)::BaseType::BufferWriter
        text_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_text, buffer, &text_writer, context);
    (*output)->text.Set(
        text_writer.is_null() ? nullptr : text_writer.data());
    (*output)->selection_start = Traits::selection_start(input);
    (*output)->selection_end = Traits::selection_end(input);
    (*output)->composition_start = Traits::composition_start(input);
    (*output)->composition_end = Traits::composition_end(input);
    (*output)->can_compose_inline = Traits::can_compose_inline(input);
  }

  static bool Deserialize(::ui::mojom::internal::TextInputState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::TextInputStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void TextInputStateDataView::GetTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->text.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_SHARED_H_