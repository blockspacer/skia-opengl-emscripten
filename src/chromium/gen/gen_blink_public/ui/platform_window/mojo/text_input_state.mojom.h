// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_H_
#define UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "ui/platform_window/mojo/text_input_state.mojom-shared.h"
#include "ui/platform_window/mojo/text_input_state.mojom-forward.h"
#include "ui/base/ime/mojo/ime_types.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {








class  TextInputState {
 public:
  using DataView = TextInputStateDataView;
  using Data_ = internal::TextInputState_Data;

  template <typename... Args>
  static TextInputStatePtr New(Args&&... args) {
    return TextInputStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TextInputStatePtr From(const U& u) {
    return mojo::TypeConverter<TextInputStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TextInputState>::Convert(*this);
  }


  TextInputState();

  TextInputState(
      ui::TextInputType type,
      int32_t flags,
      const base::Optional<std::string>& text,
      int32_t selection_start,
      int32_t selection_end,
      int32_t composition_start,
      int32_t composition_end,
      bool can_compose_inline);

  ~TextInputState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TextInputStatePtr>
  TextInputStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TextInputState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TextInputState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TextInputState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TextInputState_UnserializedMessageContext<
            UserType, TextInputState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TextInputState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TextInputState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TextInputState_UnserializedMessageContext<
            UserType, TextInputState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TextInputState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ui::TextInputType type;
  
  int32_t flags;
  
  base::Optional<std::string> text;
  
  int32_t selection_start;
  
  int32_t selection_end;
  
  int32_t composition_start;
  
  int32_t composition_end;
  
  bool can_compose_inline;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
TextInputStatePtr TextInputState::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(flags),
      mojo::Clone(text),
      mojo::Clone(selection_start),
      mojo::Clone(selection_end),
      mojo::Clone(composition_start),
      mojo::Clone(composition_end),
      mojo::Clone(can_compose_inline)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TextInputState>::value>::type*>
bool TextInputState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  if (!mojo::Equals(this->text, other_struct.text))
    return false;
  if (!mojo::Equals(this->selection_start, other_struct.selection_start))
    return false;
  if (!mojo::Equals(this->selection_end, other_struct.selection_end))
    return false;
  if (!mojo::Equals(this->composition_start, other_struct.composition_start))
    return false;
  if (!mojo::Equals(this->composition_end, other_struct.composition_end))
    return false;
  if (!mojo::Equals(this->can_compose_inline, other_struct.can_compose_inline))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::TextInputState::DataView,
                                         ::ui::mojom::TextInputStatePtr> {
  static bool IsNull(const ::ui::mojom::TextInputStatePtr& input) { return !input; }
  static void SetToNull(::ui::mojom::TextInputStatePtr* output) { output->reset(); }

  static decltype(::ui::mojom::TextInputState::type) type(
      const ::ui::mojom::TextInputStatePtr& input) {
    return input->type;
  }

  static decltype(::ui::mojom::TextInputState::flags) flags(
      const ::ui::mojom::TextInputStatePtr& input) {
    return input->flags;
  }

  static const decltype(::ui::mojom::TextInputState::text)& text(
      const ::ui::mojom::TextInputStatePtr& input) {
    return input->text;
  }

  static decltype(::ui::mojom::TextInputState::selection_start) selection_start(
      const ::ui::mojom::TextInputStatePtr& input) {
    return input->selection_start;
  }

  static decltype(::ui::mojom::TextInputState::selection_end) selection_end(
      const ::ui::mojom::TextInputStatePtr& input) {
    return input->selection_end;
  }

  static decltype(::ui::mojom::TextInputState::composition_start) composition_start(
      const ::ui::mojom::TextInputStatePtr& input) {
    return input->composition_start;
  }

  static decltype(::ui::mojom::TextInputState::composition_end) composition_end(
      const ::ui::mojom::TextInputStatePtr& input) {
    return input->composition_end;
  }

  static decltype(::ui::mojom::TextInputState::can_compose_inline) can_compose_inline(
      const ::ui::mojom::TextInputStatePtr& input) {
    return input->can_compose_inline;
  }

  static bool Read(::ui::mojom::TextInputState::DataView input, ::ui::mojom::TextInputStatePtr* output);
};

}  // namespace mojo

#endif  // UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_H_