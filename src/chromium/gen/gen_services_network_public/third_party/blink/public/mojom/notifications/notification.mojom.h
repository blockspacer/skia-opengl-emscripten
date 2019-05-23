// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_H_

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
#include "third_party/blink/public/mojom/notifications/notification.mojom-shared.h"
#include "third_party/blink/public/mojom/notifications/notification.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "url/mojom/url.mojom.h"
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
#include "third_party/blink/public/common/notifications/notification_resources.h"
#include "third_party/blink/public/common/notifications/platform_notification_data.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {










class BLINK_COMMON_EXPORT NotificationAction {
 public:
  using DataView = NotificationActionDataView;
  using Data_ = internal::NotificationAction_Data;

  template <typename... Args>
  static NotificationActionPtr New(Args&&... args) {
    return NotificationActionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NotificationActionPtr From(const U& u) {
    return mojo::TypeConverter<NotificationActionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NotificationAction>::Convert(*this);
  }


  NotificationAction();

  NotificationAction(
      NotificationActionType type,
      const std::string& action,
      const base::string16& title,
      const GURL& icon,
      const base::Optional<base::string16>& placeholder);

  ~NotificationAction();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NotificationActionPtr>
  NotificationActionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NotificationAction>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NotificationAction::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NotificationAction::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NotificationAction_UnserializedMessageContext<
            UserType, NotificationAction::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NotificationAction::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NotificationAction::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NotificationAction_UnserializedMessageContext<
            UserType, NotificationAction::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NotificationAction::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  NotificationActionType type;
  
  std::string action;
  
  base::string16 title;
  
  GURL icon;
  
  base::Optional<base::string16> placeholder;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT NotificationData {
 public:
  using DataView = NotificationDataDataView;
  using Data_ = internal::NotificationData_Data;
  
  static constexpr uint64_t kMaximumDeveloperDataSize = 1048576ULL;

  template <typename... Args>
  static NotificationDataPtr New(Args&&... args) {
    return NotificationDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NotificationDataPtr From(const U& u) {
    return mojo::TypeConverter<NotificationDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NotificationData>::Convert(*this);
  }


  NotificationData();

  NotificationData(
      const base::string16& title,
      NotificationDirection direction,
      const base::Optional<std::string>& lang,
      const base::string16& body,
      const std::string& tag,
      const GURL& image,
      const GURL& icon,
      const GURL& badge,
      const base::Optional<std::vector<int32_t>>& vibration_pattern,
      double timestamp,
      bool renotify,
      bool silent,
      bool require_interaction,
      const base::Optional<std::vector<uint8_t>>& data,
      base::Optional<std::vector<NotificationActionPtr>> actions,
      base::Optional<base::Time> show_trigger_timestamp);

  ~NotificationData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NotificationDataPtr>
  NotificationDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NotificationData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NotificationData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NotificationData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NotificationData_UnserializedMessageContext<
            UserType, NotificationData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NotificationData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NotificationData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NotificationData_UnserializedMessageContext<
            UserType, NotificationData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NotificationData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::string16 title;
  
  NotificationDirection direction;
  
  base::Optional<std::string> lang;
  
  base::string16 body;
  
  std::string tag;
  
  GURL image;
  
  GURL icon;
  
  GURL badge;
  
  base::Optional<std::vector<int32_t>> vibration_pattern;
  
  double timestamp;
  
  bool renotify;
  
  bool silent;
  
  bool require_interaction;
  
  base::Optional<std::vector<uint8_t>> data;
  
  base::Optional<std::vector<NotificationActionPtr>> actions;
  
  base::Optional<base::Time> show_trigger_timestamp;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NotificationData);
};





class BLINK_COMMON_EXPORT NotificationResources {
 public:
  using DataView = NotificationResourcesDataView;
  using Data_ = internal::NotificationResources_Data;

  template <typename... Args>
  static NotificationResourcesPtr New(Args&&... args) {
    return NotificationResourcesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NotificationResourcesPtr From(const U& u) {
    return mojo::TypeConverter<NotificationResourcesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NotificationResources>::Convert(*this);
  }


  NotificationResources();

  NotificationResources(
      const SkBitmap& image,
      const SkBitmap& icon,
      const SkBitmap& badge,
      const base::Optional<std::vector<SkBitmap>>& action_icons);

  ~NotificationResources();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NotificationResourcesPtr>
  NotificationResourcesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NotificationResources>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NotificationResources::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NotificationResources::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NotificationResources_UnserializedMessageContext<
            UserType, NotificationResources::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NotificationResources::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NotificationResources::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NotificationResources_UnserializedMessageContext<
            UserType, NotificationResources::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NotificationResources::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  SkBitmap image;
  
  SkBitmap icon;
  
  SkBitmap badge;
  
  base::Optional<std::vector<SkBitmap>> action_icons;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
NotificationActionPtr NotificationAction::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(action),
      mojo::Clone(title),
      mojo::Clone(icon),
      mojo::Clone(placeholder)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NotificationAction>::value>::type*>
bool NotificationAction::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->action, other_struct.action))
    return false;
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->icon, other_struct.icon))
    return false;
  if (!mojo::Equals(this->placeholder, other_struct.placeholder))
    return false;
  return true;
}
template <typename StructPtrType>
NotificationDataPtr NotificationData::Clone() const {
  return New(
      mojo::Clone(title),
      mojo::Clone(direction),
      mojo::Clone(lang),
      mojo::Clone(body),
      mojo::Clone(tag),
      mojo::Clone(image),
      mojo::Clone(icon),
      mojo::Clone(badge),
      mojo::Clone(vibration_pattern),
      mojo::Clone(timestamp),
      mojo::Clone(renotify),
      mojo::Clone(silent),
      mojo::Clone(require_interaction),
      mojo::Clone(data),
      mojo::Clone(actions),
      mojo::Clone(show_trigger_timestamp)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NotificationData>::value>::type*>
bool NotificationData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->direction, other_struct.direction))
    return false;
  if (!mojo::Equals(this->lang, other_struct.lang))
    return false;
  if (!mojo::Equals(this->body, other_struct.body))
    return false;
  if (!mojo::Equals(this->tag, other_struct.tag))
    return false;
  if (!mojo::Equals(this->image, other_struct.image))
    return false;
  if (!mojo::Equals(this->icon, other_struct.icon))
    return false;
  if (!mojo::Equals(this->badge, other_struct.badge))
    return false;
  if (!mojo::Equals(this->vibration_pattern, other_struct.vibration_pattern))
    return false;
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->renotify, other_struct.renotify))
    return false;
  if (!mojo::Equals(this->silent, other_struct.silent))
    return false;
  if (!mojo::Equals(this->require_interaction, other_struct.require_interaction))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  if (!mojo::Equals(this->actions, other_struct.actions))
    return false;
  if (!mojo::Equals(this->show_trigger_timestamp, other_struct.show_trigger_timestamp))
    return false;
  return true;
}
template <typename StructPtrType>
NotificationResourcesPtr NotificationResources::Clone() const {
  return New(
      mojo::Clone(image),
      mojo::Clone(icon),
      mojo::Clone(badge),
      mojo::Clone(action_icons)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NotificationResources>::value>::type*>
bool NotificationResources::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->image, other_struct.image))
    return false;
  if (!mojo::Equals(this->icon, other_struct.icon))
    return false;
  if (!mojo::Equals(this->badge, other_struct.badge))
    return false;
  if (!mojo::Equals(this->action_icons, other_struct.action_icons))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::NotificationAction::DataView,
                                         ::blink::mojom::NotificationActionPtr> {
  static bool IsNull(const ::blink::mojom::NotificationActionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::NotificationActionPtr* output) { output->reset(); }

  static decltype(::blink::mojom::NotificationAction::type) type(
      const ::blink::mojom::NotificationActionPtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::NotificationAction::action)& action(
      const ::blink::mojom::NotificationActionPtr& input) {
    return input->action;
  }

  static const decltype(::blink::mojom::NotificationAction::title)& title(
      const ::blink::mojom::NotificationActionPtr& input) {
    return input->title;
  }

  static const decltype(::blink::mojom::NotificationAction::icon)& icon(
      const ::blink::mojom::NotificationActionPtr& input) {
    return input->icon;
  }

  static const decltype(::blink::mojom::NotificationAction::placeholder)& placeholder(
      const ::blink::mojom::NotificationActionPtr& input) {
    return input->placeholder;
  }

  static bool Read(::blink::mojom::NotificationAction::DataView input, ::blink::mojom::NotificationActionPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::NotificationData::DataView,
                                         ::blink::mojom::NotificationDataPtr> {
  static bool IsNull(const ::blink::mojom::NotificationDataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::NotificationDataPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::NotificationData::title)& title(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->title;
  }

  static decltype(::blink::mojom::NotificationData::direction) direction(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->direction;
  }

  static const decltype(::blink::mojom::NotificationData::lang)& lang(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->lang;
  }

  static const decltype(::blink::mojom::NotificationData::body)& body(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->body;
  }

  static const decltype(::blink::mojom::NotificationData::tag)& tag(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->tag;
  }

  static const decltype(::blink::mojom::NotificationData::image)& image(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->image;
  }

  static const decltype(::blink::mojom::NotificationData::icon)& icon(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->icon;
  }

  static const decltype(::blink::mojom::NotificationData::badge)& badge(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->badge;
  }

  static const decltype(::blink::mojom::NotificationData::vibration_pattern)& vibration_pattern(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->vibration_pattern;
  }

  static decltype(::blink::mojom::NotificationData::timestamp) timestamp(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->timestamp;
  }

  static decltype(::blink::mojom::NotificationData::renotify) renotify(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->renotify;
  }

  static decltype(::blink::mojom::NotificationData::silent) silent(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->silent;
  }

  static decltype(::blink::mojom::NotificationData::require_interaction) require_interaction(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->require_interaction;
  }

  static const decltype(::blink::mojom::NotificationData::data)& data(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->data;
  }

  static const decltype(::blink::mojom::NotificationData::actions)& actions(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->actions;
  }

  static const decltype(::blink::mojom::NotificationData::show_trigger_timestamp)& show_trigger_timestamp(
      const ::blink::mojom::NotificationDataPtr& input) {
    return input->show_trigger_timestamp;
  }

  static bool Read(::blink::mojom::NotificationData::DataView input, ::blink::mojom::NotificationDataPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::NotificationResources::DataView,
                                         ::blink::mojom::NotificationResourcesPtr> {
  static bool IsNull(const ::blink::mojom::NotificationResourcesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::NotificationResourcesPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::NotificationResources::image)& image(
       ::blink::mojom::NotificationResourcesPtr& input) {
    return input->image;
  }

  static  decltype(::blink::mojom::NotificationResources::icon)& icon(
       ::blink::mojom::NotificationResourcesPtr& input) {
    return input->icon;
  }

  static  decltype(::blink::mojom::NotificationResources::badge)& badge(
       ::blink::mojom::NotificationResourcesPtr& input) {
    return input->badge;
  }

  static  decltype(::blink::mojom::NotificationResources::action_icons)& action_icons(
       ::blink::mojom::NotificationResourcesPtr& input) {
    return input->action_icons;
  }

  static bool Read(::blink::mojom::NotificationResources::DataView input, ::blink::mojom::NotificationResourcesPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_H_