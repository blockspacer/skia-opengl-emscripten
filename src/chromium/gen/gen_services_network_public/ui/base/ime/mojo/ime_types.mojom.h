// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_TYPES_MOJOM_H_
#define UI_BASE_IME_MOJO_IME_TYPES_MOJOM_H_

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
#include "ui/base/ime/mojo/ime_types.mojom-shared.h"
#include "ui/base/ime/mojo/ime_types.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "ui/gfx/range/mojo/range.mojom.h"
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
#include "ui/base/ime/composition_text.h"
#include "ui/base/ime/ime_text_span.h"
#include "ui/base/ime/text_input_client.h"
#include "ui/base/ime/text_input_mode.h"
#include "ui/base/ime/text_input_type.h"




namespace ui {
namespace mojom {









class  ImeTextSpan {
 public:
  using DataView = ImeTextSpanDataView;
  using Data_ = internal::ImeTextSpan_Data;

  template <typename... Args>
  static ImeTextSpanPtr New(Args&&... args) {
    return ImeTextSpanPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ImeTextSpanPtr From(const U& u) {
    return mojo::TypeConverter<ImeTextSpanPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ImeTextSpan>::Convert(*this);
  }


  ImeTextSpan();

  ImeTextSpan(
      ImeTextSpanType type,
      uint32_t start_offset,
      uint32_t end_offset,
      uint32_t underline_color,
      ui::ImeTextSpan::Thickness thickness,
      uint32_t background_color,
      uint32_t suggestion_highlight_color,
      bool remove_on_finish_composing,
      const std::vector<std::string>& suggestions);

  ~ImeTextSpan();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ImeTextSpanPtr>
  ImeTextSpanPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ImeTextSpan>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ImeTextSpan::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ImeTextSpan::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ImeTextSpan_UnserializedMessageContext<
            UserType, ImeTextSpan::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ImeTextSpan::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ImeTextSpan::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ImeTextSpan_UnserializedMessageContext<
            UserType, ImeTextSpan::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ImeTextSpan::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ImeTextSpanType type;
  
  uint32_t start_offset;
  
  uint32_t end_offset;
  
  uint32_t underline_color;
  
  ui::ImeTextSpan::Thickness thickness;
  
  uint32_t background_color;
  
  uint32_t suggestion_highlight_color;
  
  bool remove_on_finish_composing;
  
  std::vector<std::string> suggestions;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  CompositionText {
 public:
  using DataView = CompositionTextDataView;
  using Data_ = internal::CompositionText_Data;

  template <typename... Args>
  static CompositionTextPtr New(Args&&... args) {
    return CompositionTextPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CompositionTextPtr From(const U& u) {
    return mojo::TypeConverter<CompositionTextPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CompositionText>::Convert(*this);
  }


  CompositionText();

  CompositionText(
      const base::string16& text,
      const std::vector<ui::ImeTextSpan>& ime_text_spans,
      const gfx::Range& selection);

  ~CompositionText();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CompositionTextPtr>
  CompositionTextPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CompositionText>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CompositionText::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CompositionText::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CompositionText_UnserializedMessageContext<
            UserType, CompositionText::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CompositionText::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CompositionText::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CompositionText_UnserializedMessageContext<
            UserType, CompositionText::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CompositionText::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::string16 text;
  
  std::vector<ui::ImeTextSpan> ime_text_spans;
  
  gfx::Range selection;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ImeTextSpanPtr ImeTextSpan::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(start_offset),
      mojo::Clone(end_offset),
      mojo::Clone(underline_color),
      mojo::Clone(thickness),
      mojo::Clone(background_color),
      mojo::Clone(suggestion_highlight_color),
      mojo::Clone(remove_on_finish_composing),
      mojo::Clone(suggestions)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ImeTextSpan>::value>::type*>
bool ImeTextSpan::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->start_offset, other_struct.start_offset))
    return false;
  if (!mojo::Equals(this->end_offset, other_struct.end_offset))
    return false;
  if (!mojo::Equals(this->underline_color, other_struct.underline_color))
    return false;
  if (!mojo::Equals(this->thickness, other_struct.thickness))
    return false;
  if (!mojo::Equals(this->background_color, other_struct.background_color))
    return false;
  if (!mojo::Equals(this->suggestion_highlight_color, other_struct.suggestion_highlight_color))
    return false;
  if (!mojo::Equals(this->remove_on_finish_composing, other_struct.remove_on_finish_composing))
    return false;
  if (!mojo::Equals(this->suggestions, other_struct.suggestions))
    return false;
  return true;
}
template <typename StructPtrType>
CompositionTextPtr CompositionText::Clone() const {
  return New(
      mojo::Clone(text),
      mojo::Clone(ime_text_spans),
      mojo::Clone(selection)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CompositionText>::value>::type*>
bool CompositionText::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->text, other_struct.text))
    return false;
  if (!mojo::Equals(this->ime_text_spans, other_struct.ime_text_spans))
    return false;
  if (!mojo::Equals(this->selection, other_struct.selection))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::ImeTextSpan::DataView,
                                         ::ui::mojom::ImeTextSpanPtr> {
  static bool IsNull(const ::ui::mojom::ImeTextSpanPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::ImeTextSpanPtr* output) { output->reset(); }

  static decltype(::ui::mojom::ImeTextSpan::type) type(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->type;
  }

  static decltype(::ui::mojom::ImeTextSpan::start_offset) start_offset(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->start_offset;
  }

  static decltype(::ui::mojom::ImeTextSpan::end_offset) end_offset(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->end_offset;
  }

  static decltype(::ui::mojom::ImeTextSpan::underline_color) underline_color(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->underline_color;
  }

  static decltype(::ui::mojom::ImeTextSpan::thickness) thickness(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->thickness;
  }

  static decltype(::ui::mojom::ImeTextSpan::background_color) background_color(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->background_color;
  }

  static decltype(::ui::mojom::ImeTextSpan::suggestion_highlight_color) suggestion_highlight_color(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->suggestion_highlight_color;
  }

  static decltype(::ui::mojom::ImeTextSpan::remove_on_finish_composing) remove_on_finish_composing(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->remove_on_finish_composing;
  }

  static const decltype(::ui::mojom::ImeTextSpan::suggestions)& suggestions(
      const ::ui::mojom::ImeTextSpanPtr& input) {
    return input->suggestions;
  }

  static bool Read(::ui::mojom::ImeTextSpan::DataView input, ::ui::mojom::ImeTextSpanPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::CompositionText::DataView,
                                         ::ui::mojom::CompositionTextPtr> {
  static bool IsNull(const ::ui::mojom::CompositionTextPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::CompositionTextPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::CompositionText::text)& text(
      const ::ui::mojom::CompositionTextPtr& input) {
    return input->text;
  }

  static const decltype(::ui::mojom::CompositionText::ime_text_spans)& ime_text_spans(
      const ::ui::mojom::CompositionTextPtr& input) {
    return input->ime_text_spans;
  }

  static const decltype(::ui::mojom::CompositionText::selection)& selection(
      const ::ui::mojom::CompositionTextPtr& input) {
    return input->selection;
  }

  static bool Read(::ui::mojom::CompositionText::DataView input, ::ui::mojom::CompositionTextPtr* output);
};

}  // namespace mojo

#endif  // UI_BASE_IME_MOJO_IME_TYPES_MOJOM_H_