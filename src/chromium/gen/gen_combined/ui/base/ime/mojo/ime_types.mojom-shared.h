// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_TYPES_MOJOM_SHARED_H_
#define UI_BASE_IME_MOJO_IME_TYPES_MOJOM_SHARED_H_

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
#include "ui/base/ime/mojo/ime_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "ui/gfx/range/mojo/range.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {
class ImeTextSpanDataView;

class CompositionTextDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::ImeTextSpanDataView> {
  using Data = ::ui::mojom::internal::ImeTextSpan_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::CompositionTextDataView> {
  using Data = ::ui::mojom::internal::CompositionText_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {


enum class TextInputType : int32_t {
  
  NONE,
  
  TEXT,
  
  PASSWORD,
  
  SEARCH,
  
  EMAIL,
  
  NUMBER,
  
  TELEPHONE,
  
  URL,
  
  DATE,
  
  DATE_TIME,
  
  DATE_TIME_LOCAL,
  
  MONTH,
  
  TIME,
  
  WEEK,
  
  TEXT_AREA,
  
  CONTENT_EDITABLE,
  
  DATE_TIME_FIELD,
  
  MAX = TextInputType::DATE_TIME_FIELD,
  kMinValue = 0,
  kMaxValue = 16,
};

 std::ostream& operator<<(std::ostream& os, TextInputType value);
inline bool IsKnownEnumValue(TextInputType value) {
  return internal::TextInputType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TextInputMode : int32_t {
  
  kDefault,
  
  kNone,
  
  kText,
  
  kTel,
  
  kUrl,
  
  kEmail,
  
  kNumeric,
  
  kDecimal,
  
  kSearch,
  kMinValue = 0,
  kMaxValue = 8,
};

 std::ostream& operator<<(std::ostream& os, TextInputMode value);
inline bool IsKnownEnumValue(TextInputMode value) {
  return internal::TextInputMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TextInputFlag : int32_t {
  
  NONE,
  
  AUTOCOMPLETE_ON = 0x001,
  
  AUTOCOMPLETE_OFF = 0x002,
  
  AUTOCORRECT_ON = 0x004,
  
  AUTOCORRECT_OFF = 0x008,
  
  SPELLCHECK_ON = 0x010,
  
  SPELLCHECK_OFF = 0x020,
  
  AUTOCAPITALIZE_NONE = 0x040,
  
  AUTOCAPITALIZE_CHARACTERS = 0x080,
  
  AUTOCAPITALIZE_WORDS = 0x100,
  
  AUTOCAPITALIZE_SENTENCES = 0x200,
  
  ALL = 0x3FF,
  kMinValue = 0,
  kMaxValue = 1023,
};

 std::ostream& operator<<(std::ostream& os, TextInputFlag value);
inline bool IsKnownEnumValue(TextInputFlag value) {
  return internal::TextInputFlag_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ImeTextSpanType : int32_t {
  
  kComposition,
  
  kSuggestion,
  
  kMisspellingSuggestion,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, ImeTextSpanType value);
inline bool IsKnownEnumValue(ImeTextSpanType value) {
  return internal::ImeTextSpanType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ImeTextSpanThickness : int32_t {
  
  kNone,
  
  kThin,
  
  kThick,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, ImeTextSpanThickness value);
inline bool IsKnownEnumValue(ImeTextSpanThickness value) {
  return internal::ImeTextSpanThickness_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FocusReason : int32_t {
  
  kNone,
  
  kMouse,
  
  kTouch,
  
  kPen,
  
  kOther,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, FocusReason value);
inline bool IsKnownEnumValue(FocusReason value) {
  return internal::FocusReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ImeTextSpanDataView {
 public:
  ImeTextSpanDataView() {}

  ImeTextSpanDataView(
      internal::ImeTextSpan_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ImeTextSpanType>(
        data_value, output);
  }

  ImeTextSpanType type() const {
    return static_cast<ImeTextSpanType>(data_->type);
  }
  uint32_t start_offset() const {
    return data_->start_offset;
  }
  uint32_t end_offset() const {
    return data_->end_offset;
  }
  uint32_t underline_color() const {
    return data_->underline_color;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadThickness(UserType* output) const {
    auto data_value = data_->thickness;
    return mojo::internal::Deserialize<::ui::mojom::ImeTextSpanThickness>(
        data_value, output);
  }

  ImeTextSpanThickness thickness() const {
    return static_cast<ImeTextSpanThickness>(data_->thickness);
  }
  uint32_t background_color() const {
    return data_->background_color;
  }
  uint32_t suggestion_highlight_color() const {
    return data_->suggestion_highlight_color;
  }
  bool remove_on_finish_composing() const {
    return data_->remove_on_finish_composing;
  }
  inline void GetSuggestionsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestions(UserType* output) {
    auto* pointer = data_->suggestions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ImeTextSpan_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositionTextDataView {
 public:
  CompositionTextDataView() {}

  CompositionTextDataView(
      internal::CompositionText_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetImeTextSpansDataView(
      mojo::ArrayDataView<ImeTextSpanDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImeTextSpans(UserType* output) {
    auto* pointer = data_->ime_text_spans.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>>(
        pointer, output, context_);
  }
  inline void GetSelectionDataView(
      ::gfx::mojom::RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSelection(UserType* output) {
    auto* pointer = data_->selection.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RangeDataView>(
        pointer, output, context_);
  }
 private:
  internal::CompositionText_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::TextInputType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::TextInputType> {};

template <>
struct hash<::ui::mojom::TextInputMode>
    : public mojo::internal::EnumHashImpl<::ui::mojom::TextInputMode> {};

template <>
struct hash<::ui::mojom::TextInputFlag>
    : public mojo::internal::EnumHashImpl<::ui::mojom::TextInputFlag> {};

template <>
struct hash<::ui::mojom::ImeTextSpanType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ImeTextSpanType> {};

template <>
struct hash<::ui::mojom::ImeTextSpanThickness>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ImeTextSpanThickness> {};

template <>
struct hash<::ui::mojom::FocusReason>
    : public mojo::internal::EnumHashImpl<::ui::mojom::FocusReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::TextInputType, ::ui::mojom::TextInputType> {
  static ::ui::mojom::TextInputType ToMojom(::ui::mojom::TextInputType input) { return input; }
  static bool FromMojom(::ui::mojom::TextInputType input, ::ui::mojom::TextInputType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TextInputType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::TextInputType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::TextInputType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::TextInputMode, ::ui::mojom::TextInputMode> {
  static ::ui::mojom::TextInputMode ToMojom(::ui::mojom::TextInputMode input) { return input; }
  static bool FromMojom(::ui::mojom::TextInputMode input, ::ui::mojom::TextInputMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TextInputMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::TextInputMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::TextInputMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::TextInputFlag, ::ui::mojom::TextInputFlag> {
  static ::ui::mojom::TextInputFlag ToMojom(::ui::mojom::TextInputFlag input) { return input; }
  static bool FromMojom(::ui::mojom::TextInputFlag input, ::ui::mojom::TextInputFlag* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TextInputFlag, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::TextInputFlag, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::TextInputFlag>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::ImeTextSpanType, ::ui::mojom::ImeTextSpanType> {
  static ::ui::mojom::ImeTextSpanType ToMojom(::ui::mojom::ImeTextSpanType input) { return input; }
  static bool FromMojom(::ui::mojom::ImeTextSpanType input, ::ui::mojom::ImeTextSpanType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ImeTextSpanType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ImeTextSpanType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::ImeTextSpanType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::ImeTextSpanThickness, ::ui::mojom::ImeTextSpanThickness> {
  static ::ui::mojom::ImeTextSpanThickness ToMojom(::ui::mojom::ImeTextSpanThickness input) { return input; }
  static bool FromMojom(::ui::mojom::ImeTextSpanThickness input, ::ui::mojom::ImeTextSpanThickness* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ImeTextSpanThickness, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ImeTextSpanThickness, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::ImeTextSpanThickness>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::FocusReason, ::ui::mojom::FocusReason> {
  static ::ui::mojom::FocusReason ToMojom(::ui::mojom::FocusReason input) { return input; }
  static bool FromMojom(::ui::mojom::FocusReason input, ::ui::mojom::FocusReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::FocusReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::FocusReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::FocusReason>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ImeTextSpanDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::ImeTextSpanDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::ImeTextSpan_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::ImeTextSpanType>(
        Traits::type(input), &(*output)->type);
    (*output)->start_offset = Traits::start_offset(input);
    (*output)->end_offset = Traits::end_offset(input);
    (*output)->underline_color = Traits::underline_color(input);
    mojo::internal::Serialize<::ui::mojom::ImeTextSpanThickness>(
        Traits::thickness(input), &(*output)->thickness);
    (*output)->background_color = Traits::background_color(input);
    (*output)->suggestion_highlight_color = Traits::suggestion_highlight_color(input);
    (*output)->remove_on_finish_composing = Traits::remove_on_finish_composing(input);
    decltype(Traits::suggestions(input)) in_suggestions = Traits::suggestions(input);
    typename decltype((*output)->suggestions)::BaseType::BufferWriter
        suggestions_writer;
    const mojo::internal::ContainerValidateParams suggestions_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_suggestions, buffer, &suggestions_writer, &suggestions_validate_params,
        context);
    (*output)->suggestions.Set(
        suggestions_writer.is_null() ? nullptr : suggestions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->suggestions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null suggestions in ImeTextSpan struct");
  }

  static bool Deserialize(::ui::mojom::internal::ImeTextSpan_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::ImeTextSpanDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CompositionTextDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::CompositionTextDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::CompositionText_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::text(input)) in_text = Traits::text(input);
    typename decltype((*output)->text)::BaseType::BufferWriter
        text_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_text, buffer, &text_writer, context);
    (*output)->text.Set(
        text_writer.is_null() ? nullptr : text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null text in CompositionText struct");
    decltype(Traits::ime_text_spans(input)) in_ime_text_spans = Traits::ime_text_spans(input);
    typename decltype((*output)->ime_text_spans)::BaseType::BufferWriter
        ime_text_spans_writer;
    const mojo::internal::ContainerValidateParams ime_text_spans_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>>(
        in_ime_text_spans, buffer, &ime_text_spans_writer, &ime_text_spans_validate_params,
        context);
    (*output)->ime_text_spans.Set(
        ime_text_spans_writer.is_null() ? nullptr : ime_text_spans_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ime_text_spans.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ime_text_spans in CompositionText struct");
    decltype(Traits::selection(input)) in_selection = Traits::selection(input);
    typename decltype((*output)->selection)::BaseType::BufferWriter
        selection_writer;
    mojo::internal::Serialize<::gfx::mojom::RangeDataView>(
        in_selection, buffer, &selection_writer, context);
    (*output)->selection.Set(
        selection_writer.is_null() ? nullptr : selection_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->selection.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null selection in CompositionText struct");
  }

  static bool Deserialize(::ui::mojom::internal::CompositionText_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::CompositionTextDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void ImeTextSpanDataView::GetSuggestionsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->suggestions.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void CompositionTextDataView::GetTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CompositionTextDataView::GetImeTextSpansDataView(
    mojo::ArrayDataView<ImeTextSpanDataView>* output) {
  auto pointer = data_->ime_text_spans.Get();
  *output = mojo::ArrayDataView<ImeTextSpanDataView>(pointer, context_);
}
inline void CompositionTextDataView::GetSelectionDataView(
    ::gfx::mojom::RangeDataView* output) {
  auto pointer = data_->selection.Get();
  *output = ::gfx::mojom::RangeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // UI_BASE_IME_MOJO_IME_TYPES_MOJOM_SHARED_H_