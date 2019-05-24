// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_H_
#define SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_H_

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
#include "services/ws/public/mojom/ime/ime.mojom-shared-internal.h"
#include "mojo/public/mojom/base/text_direction.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "ui/base/ime/mojo/ime_types.mojom-shared.h"
#include "ui/events/mojo/event.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/range/mojo/range.mojom-shared.h"
#include "ui/platform_window/mojo/text_input_state.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ws {
namespace mojom {
class CandidateWindowPropertiesDataView;

class CandidateWindowEntryDataView;

class TextInputStateDataView;

class TextInputClientDataDataView;

class SessionDetailsDataView;



}  // namespace mojom
}  // namespace ws

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ws::mojom::CandidateWindowPropertiesDataView> {
  using Data = ::ws::mojom::internal::CandidateWindowProperties_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ws::mojom::CandidateWindowEntryDataView> {
  using Data = ::ws::mojom::internal::CandidateWindowEntry_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ws::mojom::TextInputStateDataView> {
  using Data = ::ws::mojom::internal::TextInputState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ws::mojom::TextInputClientDataDataView> {
  using Data = ::ws::mojom::internal::TextInputClientData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ws::mojom::SessionDetailsDataView> {
  using Data = ::ws::mojom::internal::SessionDetails_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ws {
namespace mojom {


enum class CandidateWindowPosition : int32_t {
  
  kCursor,
  
  kComposition,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, CandidateWindowPosition value);
inline bool IsKnownEnumValue(CandidateWindowPosition value) {
  return internal::CandidateWindowPosition_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class IMEDriverInterfaceBase {};

using IMEDriverPtrDataView =
    mojo::InterfacePtrDataView<IMEDriverInterfaceBase>;
using IMEDriverRequestDataView =
    mojo::InterfaceRequestDataView<IMEDriverInterfaceBase>;
using IMEDriverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IMEDriverInterfaceBase>;
using IMEDriverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IMEDriverInterfaceBase>;
class IMERegistrarInterfaceBase {};

using IMERegistrarPtrDataView =
    mojo::InterfacePtrDataView<IMERegistrarInterfaceBase>;
using IMERegistrarRequestDataView =
    mojo::InterfaceRequestDataView<IMERegistrarInterfaceBase>;
using IMERegistrarAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IMERegistrarInterfaceBase>;
using IMERegistrarAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IMERegistrarInterfaceBase>;
class InputMethodInterfaceBase {};

using InputMethodPtrDataView =
    mojo::InterfacePtrDataView<InputMethodInterfaceBase>;
using InputMethodRequestDataView =
    mojo::InterfaceRequestDataView<InputMethodInterfaceBase>;
using InputMethodAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InputMethodInterfaceBase>;
using InputMethodAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InputMethodInterfaceBase>;
class TextInputClientInterfaceBase {};

using TextInputClientPtrDataView =
    mojo::InterfacePtrDataView<TextInputClientInterfaceBase>;
using TextInputClientRequestDataView =
    mojo::InterfaceRequestDataView<TextInputClientInterfaceBase>;
using TextInputClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TextInputClientInterfaceBase>;
using TextInputClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TextInputClientInterfaceBase>;
class CandidateWindowPropertiesDataView {
 public:
  CandidateWindowPropertiesDataView() {}

  CandidateWindowPropertiesDataView(
      internal::CandidateWindowProperties_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t page_size() const {
    return data_->page_size;
  }
  bool vertical() const {
    return data_->vertical;
  }
  inline void GetAuxiliaryTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuxiliaryText(UserType* output) {
    auto* pointer = data_->auxiliary_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool auxiliary_text_visible() const {
    return data_->auxiliary_text_visible;
  }
  int32_t cursor_position() const {
    return data_->cursor_position;
  }
  bool cursor_visible() const {
    return data_->cursor_visible;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWindowPosition(UserType* output) const {
    auto data_value = data_->window_position;
    return mojo::internal::Deserialize<::ws::mojom::CandidateWindowPosition>(
        data_value, output);
  }

  CandidateWindowPosition window_position() const {
    return static_cast<CandidateWindowPosition>(data_->window_position);
  }
 private:
  internal::CandidateWindowProperties_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CandidateWindowEntryDataView {
 public:
  CandidateWindowEntryDataView() {}

  CandidateWindowEntryDataView(
      internal::CandidateWindowEntry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetLabelDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetAnnotationDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAnnotation(UserType* output) {
    auto* pointer = data_->annotation.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptionTitle(UserType* output) {
    auto* pointer = data_->description_title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionBodyDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptionBody(UserType* output) {
    auto* pointer = data_->description_body.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::CandidateWindowEntry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TextInputStateDataView {
 public:
  TextInputStateDataView() {}

  TextInputStateDataView(
      internal::TextInputState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextInputType(UserType* output) const {
    auto data_value = data_->text_input_type;
    return mojo::internal::Deserialize<::ui::mojom::TextInputType>(
        data_value, output);
  }

  ::ui::mojom::TextInputType text_input_type() const {
    return static_cast<::ui::mojom::TextInputType>(data_->text_input_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextInputMode(UserType* output) const {
    auto data_value = data_->text_input_mode;
    return mojo::internal::Deserialize<::ui::mojom::TextInputMode>(
        data_value, output);
  }

  ::ui::mojom::TextInputMode text_input_mode() const {
    return static_cast<::ui::mojom::TextInputMode>(data_->text_input_mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextDirection(UserType* output) const {
    auto data_value = data_->text_direction;
    return mojo::internal::Deserialize<::mojo_base::mojom::TextDirection>(
        data_value, output);
  }

  ::mojo_base::mojom::TextDirection text_direction() const {
    return static_cast<::mojo_base::mojom::TextDirection>(data_->text_direction);
  }
  int32_t text_input_flags() const {
    return data_->text_input_flags;
  }
 private:
  internal::TextInputState_Data* data_ = nullptr;
};

class TextInputClientDataDataView {
 public:
  TextInputClientDataDataView() {}

  TextInputClientDataDataView(
      internal::TextInputClientData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextRangeDataView(
      ::gfx::mojom::RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextRange(UserType* output) {
    auto* pointer = data_->text_range.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool has_composition_text() const {
    return data_->has_composition_text;
  }
  inline void GetCompositionTextRangeDataView(
      ::gfx::mojom::RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCompositionTextRange(UserType* output) {
    auto* pointer = data_->composition_text_range.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetEditableSelectionRangeDataView(
      ::gfx::mojom::RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEditableSelectionRange(UserType* output) {
    auto* pointer = data_->editable_selection_range.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetEditCommandEnabledDataView(
      mojo::ArrayDataView<bool>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEditCommandEnabled(UserType* output) {
    auto* pointer = data_->edit_command_enabled.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<bool>>(
        pointer, output, context_);
  }
 private:
  internal::TextInputClientData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SessionDetailsDataView {
 public:
  SessionDetailsDataView() {}

  SessionDetailsDataView(
      internal::SessionDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStateDataView(
      TextInputStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::ws::mojom::TextInputStateDataView>(
        pointer, output, context_);
  }
  inline void GetCaretBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaretBounds(UserType* output) {
    auto* pointer = data_->caret_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      TextInputClientDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::ws::mojom::TextInputClientDataDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFocusReason(UserType* output) const {
    auto data_value = data_->focus_reason;
    return mojo::internal::Deserialize<::ui::mojom::FocusReason>(
        data_value, output);
  }

  ::ui::mojom::FocusReason focus_reason() const {
    return static_cast<::ui::mojom::FocusReason>(data_->focus_reason);
  }
  int64_t client_source_for_metrics() const {
    return data_->client_source_for_metrics;
  }
  bool should_do_learning() const {
    return data_->should_do_learning;
  }
 private:
  internal::SessionDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ws

namespace std {

template <>
struct hash<::ws::mojom::CandidateWindowPosition>
    : public mojo::internal::EnumHashImpl<::ws::mojom::CandidateWindowPosition> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ws::mojom::CandidateWindowPosition, ::ws::mojom::CandidateWindowPosition> {
  static ::ws::mojom::CandidateWindowPosition ToMojom(::ws::mojom::CandidateWindowPosition input) { return input; }
  static bool FromMojom(::ws::mojom::CandidateWindowPosition input, ::ws::mojom::CandidateWindowPosition* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::CandidateWindowPosition, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ws::mojom::CandidateWindowPosition, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ws::mojom::CandidateWindowPosition>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::CandidateWindowPropertiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ws::mojom::CandidateWindowPropertiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ws::mojom::internal::CandidateWindowProperties_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->page_size = Traits::page_size(input);
    (*output)->vertical = Traits::vertical(input);
    decltype(Traits::auxiliary_text(input)) in_auxiliary_text = Traits::auxiliary_text(input);
    typename decltype((*output)->auxiliary_text)::BaseType::BufferWriter
        auxiliary_text_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_auxiliary_text, buffer, &auxiliary_text_writer, context);
    (*output)->auxiliary_text.Set(
        auxiliary_text_writer.is_null() ? nullptr : auxiliary_text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->auxiliary_text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null auxiliary_text in CandidateWindowProperties struct");
    (*output)->auxiliary_text_visible = Traits::auxiliary_text_visible(input);
    (*output)->cursor_position = Traits::cursor_position(input);
    (*output)->cursor_visible = Traits::cursor_visible(input);
    mojo::internal::Serialize<::ws::mojom::CandidateWindowPosition>(
        Traits::window_position(input), &(*output)->window_position);
  }

  static bool Deserialize(::ws::mojom::internal::CandidateWindowProperties_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ws::mojom::CandidateWindowPropertiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::CandidateWindowEntryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ws::mojom::CandidateWindowEntryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ws::mojom::internal::CandidateWindowEntry_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in CandidateWindowEntry struct");
    decltype(Traits::label(input)) in_label = Traits::label(input);
    typename decltype((*output)->label)::BaseType::BufferWriter
        label_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_label, buffer, &label_writer, context);
    (*output)->label.Set(
        label_writer.is_null() ? nullptr : label_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->label.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null label in CandidateWindowEntry struct");
    decltype(Traits::annotation(input)) in_annotation = Traits::annotation(input);
    typename decltype((*output)->annotation)::BaseType::BufferWriter
        annotation_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_annotation, buffer, &annotation_writer, context);
    (*output)->annotation.Set(
        annotation_writer.is_null() ? nullptr : annotation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->annotation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null annotation in CandidateWindowEntry struct");
    decltype(Traits::description_title(input)) in_description_title = Traits::description_title(input);
    typename decltype((*output)->description_title)::BaseType::BufferWriter
        description_title_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_description_title, buffer, &description_title_writer, context);
    (*output)->description_title.Set(
        description_title_writer.is_null() ? nullptr : description_title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description_title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description_title in CandidateWindowEntry struct");
    decltype(Traits::description_body(input)) in_description_body = Traits::description_body(input);
    typename decltype((*output)->description_body)::BaseType::BufferWriter
        description_body_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_description_body, buffer, &description_body_writer, context);
    (*output)->description_body.Set(
        description_body_writer.is_null() ? nullptr : description_body_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description_body.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description_body in CandidateWindowEntry struct");
  }

  static bool Deserialize(::ws::mojom::internal::CandidateWindowEntry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ws::mojom::CandidateWindowEntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::TextInputStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ws::mojom::TextInputStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ws::mojom::internal::TextInputState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::TextInputType>(
        Traits::text_input_type(input), &(*output)->text_input_type);
    mojo::internal::Serialize<::ui::mojom::TextInputMode>(
        Traits::text_input_mode(input), &(*output)->text_input_mode);
    mojo::internal::Serialize<::mojo_base::mojom::TextDirection>(
        Traits::text_direction(input), &(*output)->text_direction);
    (*output)->text_input_flags = Traits::text_input_flags(input);
  }

  static bool Deserialize(::ws::mojom::internal::TextInputState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ws::mojom::TextInputStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::TextInputClientDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ws::mojom::TextInputClientDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ws::mojom::internal::TextInputClientData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::text_range(input)) in_text_range = Traits::text_range(input);
    typename decltype((*output)->text_range)::BaseType::BufferWriter
        text_range_writer;
    mojo::internal::Serialize<::gfx::mojom::RangeDataView>(
        in_text_range, buffer, &text_range_writer, context);
    (*output)->text_range.Set(
        text_range_writer.is_null() ? nullptr : text_range_writer.data());
    decltype(Traits::text(input)) in_text = Traits::text(input);
    typename decltype((*output)->text)::BaseType::BufferWriter
        text_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_text, buffer, &text_writer, context);
    (*output)->text.Set(
        text_writer.is_null() ? nullptr : text_writer.data());
    (*output)->has_composition_text = Traits::has_composition_text(input);
    decltype(Traits::composition_text_range(input)) in_composition_text_range = Traits::composition_text_range(input);
    typename decltype((*output)->composition_text_range)::BaseType::BufferWriter
        composition_text_range_writer;
    mojo::internal::Serialize<::gfx::mojom::RangeDataView>(
        in_composition_text_range, buffer, &composition_text_range_writer, context);
    (*output)->composition_text_range.Set(
        composition_text_range_writer.is_null() ? nullptr : composition_text_range_writer.data());
    decltype(Traits::editable_selection_range(input)) in_editable_selection_range = Traits::editable_selection_range(input);
    typename decltype((*output)->editable_selection_range)::BaseType::BufferWriter
        editable_selection_range_writer;
    mojo::internal::Serialize<::gfx::mojom::RangeDataView>(
        in_editable_selection_range, buffer, &editable_selection_range_writer, context);
    (*output)->editable_selection_range.Set(
        editable_selection_range_writer.is_null() ? nullptr : editable_selection_range_writer.data());
    decltype(Traits::edit_command_enabled(input)) in_edit_command_enabled = Traits::edit_command_enabled(input);
    typename decltype((*output)->edit_command_enabled)::BaseType::BufferWriter
        edit_command_enabled_writer;
    const mojo::internal::ContainerValidateParams edit_command_enabled_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<bool>>(
        in_edit_command_enabled, buffer, &edit_command_enabled_writer, &edit_command_enabled_validate_params,
        context);
    (*output)->edit_command_enabled.Set(
        edit_command_enabled_writer.is_null() ? nullptr : edit_command_enabled_writer.data());
  }

  static bool Deserialize(::ws::mojom::internal::TextInputClientData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ws::mojom::TextInputClientDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::SessionDetailsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ws::mojom::SessionDetailsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ws::mojom::internal::SessionDetails_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::state(input)) in_state = Traits::state(input);
    typename decltype((*output)->state)::BaseType::BufferWriter
        state_writer;
    mojo::internal::Serialize<::ws::mojom::TextInputStateDataView>(
        in_state, buffer, &state_writer, context);
    (*output)->state.Set(
        state_writer.is_null() ? nullptr : state_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->state.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null state in SessionDetails struct");
    decltype(Traits::caret_bounds(input)) in_caret_bounds = Traits::caret_bounds(input);
    typename decltype((*output)->caret_bounds)::BaseType::BufferWriter
        caret_bounds_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_caret_bounds, buffer, &caret_bounds_writer, context);
    (*output)->caret_bounds.Set(
        caret_bounds_writer.is_null() ? nullptr : caret_bounds_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->caret_bounds.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null caret_bounds in SessionDetails struct");
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    mojo::internal::Serialize<::ws::mojom::TextInputClientDataDataView>(
        in_data, buffer, &data_writer, context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in SessionDetails struct");
    mojo::internal::Serialize<::ui::mojom::FocusReason>(
        Traits::focus_reason(input), &(*output)->focus_reason);
    (*output)->client_source_for_metrics = Traits::client_source_for_metrics(input);
    (*output)->should_do_learning = Traits::should_do_learning(input);
  }

  static bool Deserialize(::ws::mojom::internal::SessionDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ws::mojom::SessionDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ws {
namespace mojom {

inline void CandidateWindowPropertiesDataView::GetAuxiliaryTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->auxiliary_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CandidateWindowEntryDataView::GetValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CandidateWindowEntryDataView::GetLabelDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->label.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CandidateWindowEntryDataView::GetAnnotationDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->annotation.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CandidateWindowEntryDataView::GetDescriptionTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->description_title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CandidateWindowEntryDataView::GetDescriptionBodyDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->description_body.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void TextInputClientDataDataView::GetTextRangeDataView(
    ::gfx::mojom::RangeDataView* output) {
  auto pointer = data_->text_range.Get();
  *output = ::gfx::mojom::RangeDataView(pointer, context_);
}
inline void TextInputClientDataDataView::GetTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void TextInputClientDataDataView::GetCompositionTextRangeDataView(
    ::gfx::mojom::RangeDataView* output) {
  auto pointer = data_->composition_text_range.Get();
  *output = ::gfx::mojom::RangeDataView(pointer, context_);
}
inline void TextInputClientDataDataView::GetEditableSelectionRangeDataView(
    ::gfx::mojom::RangeDataView* output) {
  auto pointer = data_->editable_selection_range.Get();
  *output = ::gfx::mojom::RangeDataView(pointer, context_);
}
inline void TextInputClientDataDataView::GetEditCommandEnabledDataView(
    mojo::ArrayDataView<bool>* output) {
  auto pointer = data_->edit_command_enabled.Get();
  *output = mojo::ArrayDataView<bool>(pointer, context_);
}


inline void SessionDetailsDataView::GetStateDataView(
    TextInputStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = TextInputStateDataView(pointer, context_);
}
inline void SessionDetailsDataView::GetCaretBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->caret_bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void SessionDetailsDataView::GetDataDataView(
    TextInputClientDataDataView* output) {
  auto pointer = data_->data.Get();
  *output = TextInputClientDataDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_H_