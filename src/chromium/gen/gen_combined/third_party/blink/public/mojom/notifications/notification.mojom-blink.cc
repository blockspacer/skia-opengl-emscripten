// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/notifications/notification.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/notifications/notification.mojom-params-data.h"
#include "third_party/blink/public/mojom/notifications/notification.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/notifications/notification.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
constexpr uint64_t NotificationData::kMaximumDeveloperDataSize;
NotificationAction::NotificationAction()
    : type(),
      action(),
      title(),
      icon(),
      placeholder() {}

NotificationAction::NotificationAction(
    NotificationActionType type_in,
    const WTF::String& action_in,
    const WTF::String& title_in,
    const ::blink::KURL& icon_in,
    const WTF::String& placeholder_in)
    : type(std::move(type_in)),
      action(std::move(action_in)),
      title(std::move(title_in)),
      icon(std::move(icon_in)),
      placeholder(std::move(placeholder_in)) {}

NotificationAction::~NotificationAction() = default;

bool NotificationAction::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NotificationData::NotificationData()
    : title(),
      direction(NotificationDirection::LEFT_TO_RIGHT),
      lang(),
      body(),
      tag(),
      image(),
      icon(),
      badge(),
      vibration_pattern(),
      timestamp(0),
      renotify(false),
      silent(false),
      require_interaction(false),
      data(),
      actions(),
      show_trigger_timestamp() {}

NotificationData::NotificationData(
    const WTF::String& title_in,
    NotificationDirection direction_in,
    const WTF::String& lang_in,
    const WTF::String& body_in,
    const WTF::String& tag_in,
    const ::blink::KURL& image_in,
    const ::blink::KURL& icon_in,
    const ::blink::KURL& badge_in,
    const base::Optional<WTF::Vector<int32_t>>& vibration_pattern_in,
    double timestamp_in,
    bool renotify_in,
    bool silent_in,
    bool require_interaction_in,
    const base::Optional<WTF::Vector<uint8_t>>& data_in,
    base::Optional<WTF::Vector<NotificationActionPtr>> actions_in,
    base::Optional<base::Time> show_trigger_timestamp_in)
    : title(std::move(title_in)),
      direction(std::move(direction_in)),
      lang(std::move(lang_in)),
      body(std::move(body_in)),
      tag(std::move(tag_in)),
      image(std::move(image_in)),
      icon(std::move(icon_in)),
      badge(std::move(badge_in)),
      vibration_pattern(std::move(vibration_pattern_in)),
      timestamp(std::move(timestamp_in)),
      renotify(std::move(renotify_in)),
      silent(std::move(silent_in)),
      require_interaction(std::move(require_interaction_in)),
      data(std::move(data_in)),
      actions(std::move(actions_in)),
      show_trigger_timestamp(std::move(show_trigger_timestamp_in)) {}

NotificationData::~NotificationData() = default;

bool NotificationData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NotificationResources::NotificationResources()
    : image(),
      icon(),
      badge(),
      action_icons() {}

NotificationResources::NotificationResources(
    const SkBitmap& image_in,
    const SkBitmap& icon_in,
    const SkBitmap& badge_in,
    const base::Optional<WTF::Vector<SkBitmap>>& action_icons_in)
    : image(std::move(image_in)),
      icon(std::move(icon_in)),
      badge(std::move(badge_in)),
      action_icons(std::move(action_icons_in)) {}

NotificationResources::~NotificationResources() = default;

bool NotificationResources::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::NotificationAction::DataView, ::blink::mojom::blink::NotificationActionPtr>::Read(
    ::blink::mojom::blink::NotificationAction::DataView input,
    ::blink::mojom::blink::NotificationActionPtr* output) {
  bool success = true;
  ::blink::mojom::blink::NotificationActionPtr result(::blink::mojom::blink::NotificationAction::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadAction(&result->action))
        success = false;
      if (!input.ReadTitle(&result->title))
        success = false;
      if (!input.ReadIcon(&result->icon))
        success = false;
      if (!input.ReadPlaceholder(&result->placeholder))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::NotificationData::DataView, ::blink::mojom::blink::NotificationDataPtr>::Read(
    ::blink::mojom::blink::NotificationData::DataView input,
    ::blink::mojom::blink::NotificationDataPtr* output) {
  bool success = true;
  ::blink::mojom::blink::NotificationDataPtr result(::blink::mojom::blink::NotificationData::New());
  
      if (!input.ReadTitle(&result->title))
        success = false;
      if (!input.ReadDirection(&result->direction))
        success = false;
      if (!input.ReadLang(&result->lang))
        success = false;
      if (!input.ReadBody(&result->body))
        success = false;
      if (!input.ReadTag(&result->tag))
        success = false;
      if (!input.ReadImage(&result->image))
        success = false;
      if (!input.ReadIcon(&result->icon))
        success = false;
      if (!input.ReadBadge(&result->badge))
        success = false;
      if (!input.ReadVibrationPattern(&result->vibration_pattern))
        success = false;
      result->timestamp = input.timestamp();
      result->renotify = input.renotify();
      result->silent = input.silent();
      result->require_interaction = input.require_interaction();
      if (!input.ReadData(&result->data))
        success = false;
      if (!input.ReadActions(&result->actions))
        success = false;
      if (!input.ReadShowTriggerTimestamp(&result->show_trigger_timestamp))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::NotificationResources::DataView, ::blink::mojom::blink::NotificationResourcesPtr>::Read(
    ::blink::mojom::blink::NotificationResources::DataView input,
    ::blink::mojom::blink::NotificationResourcesPtr* output) {
  bool success = true;
  ::blink::mojom::blink::NotificationResourcesPtr result(::blink::mojom::blink::NotificationResources::New());
  
      if (!input.ReadImage(&result->image))
        success = false;
      if (!input.ReadIcon(&result->icon))
        success = false;
      if (!input.ReadBadge(&result->badge))
        success = false;
      if (!input.ReadActionIcons(&result->action_icons))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif