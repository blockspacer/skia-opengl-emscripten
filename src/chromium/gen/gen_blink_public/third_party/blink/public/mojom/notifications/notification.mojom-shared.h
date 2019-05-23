// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/notifications/notification.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class NotificationActionDataView;

class NotificationDataDataView;

class NotificationResourcesDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::NotificationActionDataView> {
  using Data = ::blink::mojom::internal::NotificationAction_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::NotificationDataDataView> {
  using Data = ::blink::mojom::internal::NotificationData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::NotificationResourcesDataView> {
  using Data = ::blink::mojom::internal::NotificationResources_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class NotificationDirection : int32_t {
  
  LEFT_TO_RIGHT,
  
  RIGHT_TO_LEFT,
  
  AUTO,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, NotificationDirection value);
inline bool IsKnownEnumValue(NotificationDirection value) {
  return internal::NotificationDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class NotificationActionType : int32_t {
  
  BUTTON,
  
  TEXT,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, NotificationActionType value);
inline bool IsKnownEnumValue(NotificationActionType value) {
  return internal::NotificationActionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class NotificationActionDataView {
 public:
  NotificationActionDataView() {}

  NotificationActionDataView(
      internal::NotificationAction_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::NotificationActionType>(
        data_value, output);
  }

  NotificationActionType type() const {
    return static_cast<NotificationActionType>(data_->type);
  }
  inline void GetActionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) {
    auto* pointer = data_->action.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPlaceholderDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlaceholder(UserType* output) {
    auto* pointer = data_->placeholder.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::NotificationAction_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationDataDataView {
 public:
  NotificationDataDataView() {}

  NotificationDataDataView(
      internal::NotificationData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirection(UserType* output) const {
    auto data_value = data_->direction;
    return mojo::internal::Deserialize<::blink::mojom::NotificationDirection>(
        data_value, output);
  }

  NotificationDirection direction() const {
    return static_cast<NotificationDirection>(data_->direction);
  }
  inline void GetLangDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLang(UserType* output) {
    auto* pointer = data_->lang.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetBodyDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBody(UserType* output) {
    auto* pointer = data_->body.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetTagDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTag(UserType* output) {
    auto* pointer = data_->tag.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetImageDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImage(UserType* output) {
    auto* pointer = data_->image.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetBadgeDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBadge(UserType* output) {
    auto* pointer = data_->badge.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetVibrationPatternDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVibrationPattern(UserType* output) {
    auto* pointer = data_->vibration_pattern.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
  double timestamp() const {
    return data_->timestamp;
  }
  bool renotify() const {
    return data_->renotify;
  }
  bool silent() const {
    return data_->silent;
  }
  bool require_interaction() const {
    return data_->require_interaction;
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetActionsDataView(
      mojo::ArrayDataView<NotificationActionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActions(UserType* output) {
    auto* pointer = data_->actions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::NotificationActionDataView>>(
        pointer, output, context_);
  }
  inline void GetShowTriggerTimestampDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShowTriggerTimestamp(UserType* output) {
    auto* pointer = data_->show_trigger_timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::NotificationData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationResourcesDataView {
 public:
  NotificationResourcesDataView() {}

  NotificationResourcesDataView(
      internal::NotificationResources_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImageDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImage(UserType* output) {
    auto* pointer = data_->image.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
  inline void GetBadgeDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBadge(UserType* output) {
    auto* pointer = data_->badge.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
  inline void GetActionIconsDataView(
      mojo::ArrayDataView<::skia::mojom::BitmapDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActionIcons(UserType* output) {
    auto* pointer = data_->action_icons.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::skia::mojom::BitmapDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NotificationResources_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::NotificationDirection>
    : public mojo::internal::EnumHashImpl<::blink::mojom::NotificationDirection> {};

template <>
struct hash<::blink::mojom::NotificationActionType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::NotificationActionType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::NotificationDirection, ::blink::mojom::NotificationDirection> {
  static ::blink::mojom::NotificationDirection ToMojom(::blink::mojom::NotificationDirection input) { return input; }
  static bool FromMojom(::blink::mojom::NotificationDirection input, ::blink::mojom::NotificationDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NotificationDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::NotificationDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::NotificationDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::NotificationActionType, ::blink::mojom::NotificationActionType> {
  static ::blink::mojom::NotificationActionType ToMojom(::blink::mojom::NotificationActionType input) { return input; }
  static bool FromMojom(::blink::mojom::NotificationActionType input, ::blink::mojom::NotificationActionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NotificationActionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::NotificationActionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::NotificationActionType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NotificationActionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::NotificationActionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::NotificationAction_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::NotificationActionType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::action(input)) in_action = Traits::action(input);
    typename decltype((*output)->action)::BaseType::BufferWriter
        action_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_action, buffer, &action_writer, context);
    (*output)->action.Set(
        action_writer.is_null() ? nullptr : action_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->action.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null action in NotificationAction struct");
    decltype(Traits::title(input)) in_title = Traits::title(input);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in NotificationAction struct");
    decltype(Traits::icon(input)) in_icon = Traits::icon(input);
    typename decltype((*output)->icon)::BaseType::BufferWriter
        icon_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_icon, buffer, &icon_writer, context);
    (*output)->icon.Set(
        icon_writer.is_null() ? nullptr : icon_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->icon.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null icon in NotificationAction struct");
    decltype(Traits::placeholder(input)) in_placeholder = Traits::placeholder(input);
    typename decltype((*output)->placeholder)::BaseType::BufferWriter
        placeholder_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_placeholder, buffer, &placeholder_writer, context);
    (*output)->placeholder.Set(
        placeholder_writer.is_null() ? nullptr : placeholder_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::NotificationAction_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::NotificationActionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NotificationDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::NotificationDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::NotificationData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::title(input)) in_title = Traits::title(input);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in NotificationData struct");
    mojo::internal::Serialize<::blink::mojom::NotificationDirection>(
        Traits::direction(input), &(*output)->direction);
    decltype(Traits::lang(input)) in_lang = Traits::lang(input);
    typename decltype((*output)->lang)::BaseType::BufferWriter
        lang_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_lang, buffer, &lang_writer, context);
    (*output)->lang.Set(
        lang_writer.is_null() ? nullptr : lang_writer.data());
    decltype(Traits::body(input)) in_body = Traits::body(input);
    typename decltype((*output)->body)::BaseType::BufferWriter
        body_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_body, buffer, &body_writer, context);
    (*output)->body.Set(
        body_writer.is_null() ? nullptr : body_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->body.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null body in NotificationData struct");
    decltype(Traits::tag(input)) in_tag = Traits::tag(input);
    typename decltype((*output)->tag)::BaseType::BufferWriter
        tag_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_tag, buffer, &tag_writer, context);
    (*output)->tag.Set(
        tag_writer.is_null() ? nullptr : tag_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->tag.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null tag in NotificationData struct");
    decltype(Traits::image(input)) in_image = Traits::image(input);
    typename decltype((*output)->image)::BaseType::BufferWriter
        image_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_image, buffer, &image_writer, context);
    (*output)->image.Set(
        image_writer.is_null() ? nullptr : image_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->image.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image in NotificationData struct");
    decltype(Traits::icon(input)) in_icon = Traits::icon(input);
    typename decltype((*output)->icon)::BaseType::BufferWriter
        icon_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_icon, buffer, &icon_writer, context);
    (*output)->icon.Set(
        icon_writer.is_null() ? nullptr : icon_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->icon.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null icon in NotificationData struct");
    decltype(Traits::badge(input)) in_badge = Traits::badge(input);
    typename decltype((*output)->badge)::BaseType::BufferWriter
        badge_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_badge, buffer, &badge_writer, context);
    (*output)->badge.Set(
        badge_writer.is_null() ? nullptr : badge_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->badge.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null badge in NotificationData struct");
    decltype(Traits::vibration_pattern(input)) in_vibration_pattern = Traits::vibration_pattern(input);
    typename decltype((*output)->vibration_pattern)::BaseType::BufferWriter
        vibration_pattern_writer;
    const mojo::internal::ContainerValidateParams vibration_pattern_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
        in_vibration_pattern, buffer, &vibration_pattern_writer, &vibration_pattern_validate_params,
        context);
    (*output)->vibration_pattern.Set(
        vibration_pattern_writer.is_null() ? nullptr : vibration_pattern_writer.data());
    (*output)->timestamp = Traits::timestamp(input);
    (*output)->renotify = Traits::renotify(input);
    (*output)->silent = Traits::silent(input);
    (*output)->require_interaction = Traits::require_interaction(input);
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    const mojo::internal::ContainerValidateParams data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_data, buffer, &data_writer, &data_validate_params,
        context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    decltype(Traits::actions(input)) in_actions = Traits::actions(input);
    typename decltype((*output)->actions)::BaseType::BufferWriter
        actions_writer;
    const mojo::internal::ContainerValidateParams actions_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::NotificationActionDataView>>(
        in_actions, buffer, &actions_writer, &actions_validate_params,
        context);
    (*output)->actions.Set(
        actions_writer.is_null() ? nullptr : actions_writer.data());
    decltype(Traits::show_trigger_timestamp(input)) in_show_trigger_timestamp = Traits::show_trigger_timestamp(input);
    typename decltype((*output)->show_trigger_timestamp)::BaseType::BufferWriter
        show_trigger_timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_show_trigger_timestamp, buffer, &show_trigger_timestamp_writer, context);
    (*output)->show_trigger_timestamp.Set(
        show_trigger_timestamp_writer.is_null() ? nullptr : show_trigger_timestamp_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::NotificationData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::NotificationDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NotificationResourcesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::NotificationResourcesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::NotificationResources_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::image(input)) in_image = Traits::image(input);
    typename decltype((*output)->image)::BaseType::BufferWriter
        image_writer;
    mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
        in_image, buffer, &image_writer, context);
    (*output)->image.Set(
        image_writer.is_null() ? nullptr : image_writer.data());
    decltype(Traits::icon(input)) in_icon = Traits::icon(input);
    typename decltype((*output)->icon)::BaseType::BufferWriter
        icon_writer;
    mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
        in_icon, buffer, &icon_writer, context);
    (*output)->icon.Set(
        icon_writer.is_null() ? nullptr : icon_writer.data());
    decltype(Traits::badge(input)) in_badge = Traits::badge(input);
    typename decltype((*output)->badge)::BaseType::BufferWriter
        badge_writer;
    mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
        in_badge, buffer, &badge_writer, context);
    (*output)->badge.Set(
        badge_writer.is_null() ? nullptr : badge_writer.data());
    decltype(Traits::action_icons(input)) in_action_icons = Traits::action_icons(input);
    typename decltype((*output)->action_icons)::BaseType::BufferWriter
        action_icons_writer;
    const mojo::internal::ContainerValidateParams action_icons_validate_params(
        0, true, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::skia::mojom::BitmapDataView>>(
        in_action_icons, buffer, &action_icons_writer, &action_icons_validate_params,
        context);
    (*output)->action_icons.Set(
        action_icons_writer.is_null() ? nullptr : action_icons_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::NotificationResources_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::NotificationResourcesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void NotificationActionDataView::GetActionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->action.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationActionDataView::GetTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void NotificationActionDataView::GetIconDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NotificationActionDataView::GetPlaceholderDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->placeholder.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void NotificationDataDataView::GetTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void NotificationDataDataView::GetLangDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->lang.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationDataDataView::GetBodyDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->body.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void NotificationDataDataView::GetTagDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tag.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationDataDataView::GetImageDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->image.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NotificationDataDataView::GetIconDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NotificationDataDataView::GetBadgeDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->badge.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NotificationDataDataView::GetVibrationPatternDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->vibration_pattern.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}
inline void NotificationDataDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void NotificationDataDataView::GetActionsDataView(
    mojo::ArrayDataView<NotificationActionDataView>* output) {
  auto pointer = data_->actions.Get();
  *output = mojo::ArrayDataView<NotificationActionDataView>(pointer, context_);
}
inline void NotificationDataDataView::GetShowTriggerTimestampDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->show_trigger_timestamp.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void NotificationResourcesDataView::GetImageDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->image.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}
inline void NotificationResourcesDataView::GetIconDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}
inline void NotificationResourcesDataView::GetBadgeDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->badge.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}
inline void NotificationResourcesDataView::GetActionIconsDataView(
    mojo::ArrayDataView<::skia::mojom::BitmapDataView>* output) {
  auto pointer = data_->action_icons.Get();
  *output = mojo::ArrayDataView<::skia::mojom::BitmapDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_H_