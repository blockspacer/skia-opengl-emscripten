// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/choosers/date_time_chooser.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "ui/base/ime/mojo/ime_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class DateTimeSuggestionDataView;

class DateTimeDialogValueDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::DateTimeSuggestionDataView> {
  using Data = ::blink::mojom::internal::DateTimeSuggestion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::DateTimeDialogValueDataView> {
  using Data = ::blink::mojom::internal::DateTimeDialogValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class DateTimeChooserInterfaceBase {};

using DateTimeChooserPtrDataView =
    mojo::InterfacePtrDataView<DateTimeChooserInterfaceBase>;
using DateTimeChooserRequestDataView =
    mojo::InterfaceRequestDataView<DateTimeChooserInterfaceBase>;
using DateTimeChooserAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DateTimeChooserInterfaceBase>;
using DateTimeChooserAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DateTimeChooserInterfaceBase>;
class DateTimeSuggestionDataView {
 public:
  DateTimeSuggestionDataView() {}

  DateTimeSuggestionDataView(
      internal::DateTimeSuggestion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  double value() const {
    return data_->value;
  }
  inline void GetLocalizedValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalizedValue(UserType* output) {
    auto* pointer = data_->localized_value.Get();
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
 private:
  internal::DateTimeSuggestion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DateTimeDialogValueDataView {
 public:
  DateTimeDialogValueDataView() {}

  DateTimeDialogValueDataView(
      internal::DateTimeDialogValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDialogType(UserType* output) const {
    auto data_value = data_->dialog_type;
    return mojo::internal::Deserialize<::ui::mojom::TextInputType>(
        data_value, output);
  }

  ::ui::mojom::TextInputType dialog_type() const {
    return static_cast<::ui::mojom::TextInputType>(data_->dialog_type);
  }
  double dialog_value() const {
    return data_->dialog_value;
  }
  double minimum() const {
    return data_->minimum;
  }
  double maximum() const {
    return data_->maximum;
  }
  double step() const {
    return data_->step;
  }
  inline void GetSuggestionsDataView(
      mojo::ArrayDataView<DateTimeSuggestionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuggestions(UserType* output) {
    auto* pointer = data_->suggestions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::DateTimeSuggestionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::DateTimeDialogValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DateTimeSuggestionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DateTimeSuggestionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DateTimeSuggestion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->value = Traits::value(input);
    decltype(Traits::localized_value(input)) in_localized_value = Traits::localized_value(input);
    typename decltype((*output)->localized_value)::BaseType::BufferWriter
        localized_value_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_localized_value, buffer, &localized_value_writer, context);
    (*output)->localized_value.Set(
        localized_value_writer.is_null() ? nullptr : localized_value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->localized_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null localized_value in DateTimeSuggestion struct");
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
        "null label in DateTimeSuggestion struct");
  }

  static bool Deserialize(::blink::mojom::internal::DateTimeSuggestion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DateTimeSuggestionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DateTimeDialogValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DateTimeDialogValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DateTimeDialogValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::TextInputType>(
        Traits::dialog_type(input), &(*output)->dialog_type);
    (*output)->dialog_value = Traits::dialog_value(input);
    (*output)->minimum = Traits::minimum(input);
    (*output)->maximum = Traits::maximum(input);
    (*output)->step = Traits::step(input);
    decltype(Traits::suggestions(input)) in_suggestions = Traits::suggestions(input);
    typename decltype((*output)->suggestions)::BaseType::BufferWriter
        suggestions_writer;
    const mojo::internal::ContainerValidateParams suggestions_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::DateTimeSuggestionDataView>>(
        in_suggestions, buffer, &suggestions_writer, &suggestions_validate_params,
        context);
    (*output)->suggestions.Set(
        suggestions_writer.is_null() ? nullptr : suggestions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->suggestions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null suggestions in DateTimeDialogValue struct");
  }

  static bool Deserialize(::blink::mojom::internal::DateTimeDialogValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DateTimeDialogValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void DateTimeSuggestionDataView::GetLocalizedValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->localized_value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void DateTimeSuggestionDataView::GetLabelDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->label.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void DateTimeDialogValueDataView::GetSuggestionsDataView(
    mojo::ArrayDataView<DateTimeSuggestionDataView>* output) {
  auto pointer = data_->suggestions.Get();
  *output = mojo::ArrayDataView<DateTimeSuggestionDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_SHARED_H_