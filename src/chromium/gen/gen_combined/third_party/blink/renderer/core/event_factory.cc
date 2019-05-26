// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/event_factory.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/events/event_interface_aliases.json5
//   gen/third_party/blink/renderer/core/event_interface_names.json5


#include "third_party/blink/renderer/core/events/event_factory.h"

#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/css/font_face_set_load_event.h"
#include "third_party/blink/renderer/core/css/media_query_list_event.h"
#include "third_party/blink/renderer/core/display_lock/before_activate_event.h"
#include "third_party/blink/renderer/core/dom/events/custom_event.h"
#include "third_party/blink/renderer/core/dom/events/event.h"
#include "third_party/blink/renderer/core/events/animation_event.h"
#include "third_party/blink/renderer/core/events/animation_playback_event.h"
#include "third_party/blink/renderer/core/events/application_cache_error_event.h"
#include "third_party/blink/renderer/core/events/before_unload_event.h"
#include "third_party/blink/renderer/core/events/clipboard_event.h"
#include "third_party/blink/renderer/core/events/composition_event.h"
#include "third_party/blink/renderer/core/events/drag_event.h"
#include "third_party/blink/renderer/core/events/error_event.h"
#include "third_party/blink/renderer/core/events/focus_event.h"
#include "third_party/blink/renderer/core/events/hash_change_event.h"
#include "third_party/blink/renderer/core/events/input_event.h"
#include "third_party/blink/renderer/core/events/keyboard_event.h"
#include "third_party/blink/renderer/core/events/message_event.h"
#include "third_party/blink/renderer/core/events/mouse_event.h"
#include "third_party/blink/renderer/core/events/mutation_event.h"
#include "third_party/blink/renderer/core/events/overscroll_event.h"
#include "third_party/blink/renderer/core/events/page_transition_event.h"
#include "third_party/blink/renderer/core/events/pointer_event.h"
#include "third_party/blink/renderer/core/events/pop_state_event.h"
#include "third_party/blink/renderer/core/events/progress_event.h"
#include "third_party/blink/renderer/core/events/promise_rejection_event.h"
#include "third_party/blink/renderer/core/events/resource_progress_event.h"
#include "third_party/blink/renderer/core/events/security_policy_violation_event.h"
#include "third_party/blink/renderer/core/events/text_event.h"
#include "third_party/blink/renderer/core/events/touch_event.h"
#include "third_party/blink/renderer/core/events/transition_event.h"
#include "third_party/blink/renderer/core/events/ui_event.h"
#include "third_party/blink/renderer/core/events/wheel_event.h"
#include "third_party/blink/renderer/core/html/forms/form_data_event.h"
#include "third_party/blink/renderer/core/html/track/track_event.h"
#include "third_party/blink/renderer/core/invisible_dom/activate_invisible_event.h"
#include "third_party/blink/renderer/core/mojo/test/mojo_interface_request_event.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

Event* EventFactory::Create(ExecutionContext* executionContext, const String& type) {
  if (DeprecatedEqualIgnoringCase(type, "CustomEvent")) {
    return CustomEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "Event")) {
    return Event::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "AnimationEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventAnimationEvent);
    return AnimationEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "BeforeUnloadEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventBeforeUnloadEvent);
    return BeforeUnloadEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "CompositionEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventCompositionEvent);
    return CompositionEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "DragEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventDragEvent);
    return DragEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "ErrorEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventErrorEvent);
    return ErrorEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "FocusEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventFocusEvent);
    return FocusEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "HashChangeEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventHashChangeEvent);
    return HashChangeEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "KeyboardEvent")) {
    return KeyboardEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "MessageEvent")) {
    return MessageEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "MouseEvent")) {
    return MouseEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "MutationEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventMutationEvent);
    return MutationEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "PageTransitionEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventPageTransitionEvent);
    return PageTransitionEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "PopStateEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventPopStateEvent);
    return PopStateEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "TextEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventTextEvent);
    return TextEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "TouchEvent")) {
    return TouchEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "TransitionEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventTransitionEvent);
    return TransitionEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "UIEvent")) {
    return UIEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "WheelEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventWheelEvent);
    return WheelEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "TrackEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventTrackEvent);
    return TrackEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "Events")) {
    return Event::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "HTMLEvents")) {
    return Event::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "KeyboardEvents")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventKeyboardEvents);
    return KeyboardEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "MouseEvents")) {
    return MouseEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "MutationEvents")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventMutationEvents);
    return MutationEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "SVGEvents")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventSVGEvents);
    return Event::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "UIEvents")) {
    return UIEvent::Create();
  }
  return nullptr;
}

} // namespace blink
