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

#include "third_party/blink/public/mojom/notifications/notification.mojom.h"

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

#include "third_party/blink/public/mojom/notifications/notification.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
constexpr uint64_t NotificationData::kMaximumDeveloperDataSize;
NotificationAction::NotificationAction()
    : type(),
      action(),
      title(),
      icon(),
      placeholder() {}

NotificationAction::NotificationAction(
    NotificationActionType type_in,
    const std::string& action_in,
    const base::string16& title_in,
    const GURL& icon_in,
    const base::Optional<base::string16>& placeholder_in)
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
    const base::string16& title_in,
    NotificationDirection direction_in,
    const base::Optional<std::string>& lang_in,
    const base::string16& body_in,
    const std::string& tag_in,
    const GURL& image_in,
    const GURL& icon_in,
    const GURL& badge_in,
    const base::Optional<std::vector<int32_t>>& vibration_pattern_in,
    double timestamp_in,
    bool renotify_in,
    bool silent_in,
    bool require_interaction_in,
    const base::Optional<std::vector<uint8_t>>& data_in,
    base::Optional<std::vector<NotificationActionPtr>> actions_in,
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
    const base::Optional<std::vector<SkBitmap>>& action_icons_in)
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
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::NotificationAction::DataView, ::blink::mojom::NotificationActionPtr>::Read(
    ::blink::mojom::NotificationAction::DataView input,
    ::blink::mojom::NotificationActionPtr* output) {
  bool success = true;
  ::blink::mojom::NotificationActionPtr result(::blink::mojom::NotificationAction::New());
  
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
bool StructTraits<::blink::mojom::NotificationData::DataView, ::blink::mojom::NotificationDataPtr>::Read(
    ::blink::mojom::NotificationData::DataView input,
    ::blink::mojom::NotificationDataPtr* output) {
  bool success = true;
  ::blink::mojom::NotificationDataPtr result(::blink::mojom::NotificationData::New());
  
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
bool StructTraits<::blink::mojom::NotificationResources::DataView, ::blink::mojom::NotificationResourcesPtr>::Read(
    ::blink::mojom::NotificationResources::DataView input,
    ::blink::mojom::NotificationResourcesPtr* output) {
  bool success = true;
  ::blink::mojom::NotificationResourcesPtr result(::blink::mojom::NotificationResources::New());
  
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