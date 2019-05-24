// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_TYPES_MOJOM_BLINK_H_
#define UI_BASE_IME_MOJO_IME_TYPES_MOJOM_BLINK_H_

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
#include "ui/base/ime/mojo/ime_types.mojom-blink-forward.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "ui/gfx/range/mojo/range.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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




namespace WTF {
struct ui_mojom_internal_TextInputType_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::TextInputType& value) {
    using utype = std::underlying_type<::ui::mojom::TextInputType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::TextInputType& left, const ::ui::mojom::TextInputType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::TextInputType>
    : public GenericHashTraits<::ui::mojom::TextInputType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::TextInputType& value) {
    return value == static_cast<::ui::mojom::TextInputType>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::TextInputType& slot, bool) {
    slot = static_cast<::ui::mojom::TextInputType>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::TextInputType& value) {
    return value == static_cast<::ui::mojom::TextInputType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_TextInputMode_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::TextInputMode& value) {
    using utype = std::underlying_type<::ui::mojom::TextInputMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::TextInputMode& left, const ::ui::mojom::TextInputMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::TextInputMode>
    : public GenericHashTraits<::ui::mojom::TextInputMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::TextInputMode& value) {
    return value == static_cast<::ui::mojom::TextInputMode>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::TextInputMode& slot, bool) {
    slot = static_cast<::ui::mojom::TextInputMode>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::TextInputMode& value) {
    return value == static_cast<::ui::mojom::TextInputMode>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_TextInputFlag_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::TextInputFlag& value) {
    using utype = std::underlying_type<::ui::mojom::TextInputFlag>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::TextInputFlag& left, const ::ui::mojom::TextInputFlag& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::TextInputFlag>
    : public GenericHashTraits<::ui::mojom::TextInputFlag> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::TextInputFlag& value) {
    return value == static_cast<::ui::mojom::TextInputFlag>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::TextInputFlag& slot, bool) {
    slot = static_cast<::ui::mojom::TextInputFlag>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::TextInputFlag& value) {
    return value == static_cast<::ui::mojom::TextInputFlag>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_ImeTextSpanType_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::ImeTextSpanType& value) {
    using utype = std::underlying_type<::ui::mojom::ImeTextSpanType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::ImeTextSpanType& left, const ::ui::mojom::ImeTextSpanType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::ImeTextSpanType>
    : public GenericHashTraits<::ui::mojom::ImeTextSpanType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::ImeTextSpanType& value) {
    return value == static_cast<::ui::mojom::ImeTextSpanType>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::ImeTextSpanType& slot, bool) {
    slot = static_cast<::ui::mojom::ImeTextSpanType>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::ImeTextSpanType& value) {
    return value == static_cast<::ui::mojom::ImeTextSpanType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_ImeTextSpanThickness_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::ImeTextSpanThickness& value) {
    using utype = std::underlying_type<::ui::mojom::ImeTextSpanThickness>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::ImeTextSpanThickness& left, const ::ui::mojom::ImeTextSpanThickness& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::ImeTextSpanThickness>
    : public GenericHashTraits<::ui::mojom::ImeTextSpanThickness> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::ImeTextSpanThickness& value) {
    return value == static_cast<::ui::mojom::ImeTextSpanThickness>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::ImeTextSpanThickness& slot, bool) {
    slot = static_cast<::ui::mojom::ImeTextSpanThickness>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::ImeTextSpanThickness& value) {
    return value == static_cast<::ui::mojom::ImeTextSpanThickness>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_FocusReason_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::FocusReason& value) {
    using utype = std::underlying_type<::ui::mojom::FocusReason>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::FocusReason& left, const ::ui::mojom::FocusReason& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::FocusReason>
    : public GenericHashTraits<::ui::mojom::FocusReason> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::FocusReason& value) {
    return value == static_cast<::ui::mojom::FocusReason>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::FocusReason& slot, bool) {
    slot = static_cast<::ui::mojom::FocusReason>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::FocusReason& value) {
    return value == static_cast<::ui::mojom::FocusReason>(-1000001);
  }
};
}  // namespace WTF


namespace ui {
namespace mojom {
namespace blink {









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
      ImeTextSpanThickness thickness,
      uint32_t background_color,
      uint32_t suggestion_highlight_color,
      bool remove_on_finish_composing,
      const WTF::Vector<WTF::String>& suggestions);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ImeTextSpan::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
  
  ImeTextSpanThickness thickness;
  
  uint32_t background_color;
  
  uint32_t suggestion_highlight_color;
  
  bool remove_on_finish_composing;
  
  WTF::Vector<WTF::String> suggestions;

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
      const WTF::String& text,
      WTF::Vector<ImeTextSpanPtr> ime_text_spans,
      ::gfx::mojom::blink::RangePtr selection);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CompositionText::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::String text;
  
  WTF::Vector<ImeTextSpanPtr> ime_text_spans;
  
  ::gfx::mojom::blink::RangePtr selection;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CompositionText);
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


}  // namespace blink
}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::blink::ImeTextSpan::DataView,
                                         ::ui::mojom::blink::ImeTextSpanPtr> {
  static bool IsNull(const ::ui::mojom::blink::ImeTextSpanPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::blink::ImeTextSpanPtr* output) { output->reset(); }

  static decltype(::ui::mojom::blink::ImeTextSpan::type) type(
      const ::ui::mojom::blink::ImeTextSpanPtr& input) {
    return input->type;
  }

  static decltype(::ui::mojom::blink::ImeTextSpan::start_offset) start_offset(
      const ::ui::mojom::blink::ImeTextSpanPtr& input) {
    return input->start_offset;
  }

  static decltype(::ui::mojom::blink::ImeTextSpan::end_offset) end_offset(
      const ::ui::mojom::blink::ImeTextSpanPtr& input) {
    return input->end_offset;
  }

  static decltype(::ui::mojom::blink::ImeTextSpan::underline_color) underline_color(
      const ::ui::mojom::blink::ImeTextSpanPtr& input) {
    return input->underline_color;
  }

  static decltype(::ui::mojom::blink::ImeTextSpan::thickness) thickness(
      const ::ui::mojom::blink::ImeTextSpanPtr& input) {
    return input->thickness;
  }

  static decltype(::ui::mojom::blink::ImeTextSpan::background_color) background_color(
      const ::ui::mojom::blink::ImeTextSpanPtr& input) {
    return input->background_color;
  }

  static decltype(::ui::mojom::blink::ImeTextSpan::suggestion_highlight_color) suggestion_highlight_color(
      const ::ui::mojom::blink::ImeTextSpanPtr& input) {
    return input->suggestion_highlight_color;
  }

  static decltype(::ui::mojom::blink::ImeTextSpan::remove_on_finish_composing) remove_on_finish_composing(
      const ::ui::mojom::blink::ImeTextSpanPtr& input) {
    return input->remove_on_finish_composing;
  }

  static const decltype(::ui::mojom::blink::ImeTextSpan::suggestions)& suggestions(
      const ::ui::mojom::blink::ImeTextSpanPtr& input) {
    return input->suggestions;
  }

  static bool Read(::ui::mojom::blink::ImeTextSpan::DataView input, ::ui::mojom::blink::ImeTextSpanPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::blink::CompositionText::DataView,
                                         ::ui::mojom::blink::CompositionTextPtr> {
  static bool IsNull(const ::ui::mojom::blink::CompositionTextPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::blink::CompositionTextPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::blink::CompositionText::text)& text(
      const ::ui::mojom::blink::CompositionTextPtr& input) {
    return input->text;
  }

  static const decltype(::ui::mojom::blink::CompositionText::ime_text_spans)& ime_text_spans(
      const ::ui::mojom::blink::CompositionTextPtr& input) {
    return input->ime_text_spans;
  }

  static const decltype(::ui::mojom::blink::CompositionText::selection)& selection(
      const ::ui::mojom::blink::CompositionTextPtr& input) {
    return input->selection;
  }

  static bool Read(::ui::mojom::blink::CompositionText::DataView input, ::ui::mojom::blink::CompositionTextPtr* output);
};

}  // namespace mojo

#endif  // UI_BASE_IME_MOJO_IME_TYPES_MOJOM_BLINK_H_