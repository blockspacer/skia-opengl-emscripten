// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/input/pointer_event_manager.h"

#include "base/auto_reset.h"
#include "base/metrics/field_trial_params.h"
#include "third_party/blink/public/platform/web_touch_event.h"
#include "third_party/blink/renderer/core/dom/element_traversal.h"
#include "third_party/blink/renderer/core/dom/events/event_path.h"
#include "third_party/blink/renderer/core/dom/flat_tree_traversal.h"
#include "third_party/blink/renderer/core/dom/user_gesture_indicator.h"
#include "third_party/blink/renderer/core/events/mouse_event.h"
#include "third_party/blink/renderer/core/frame/event_handler_registry.h"
#include "third_party/blink/renderer/core/frame/local_frame_view.h"
#include "third_party/blink/renderer/core/frame/settings.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/html/canvas/html_canvas_element.h"
#include "third_party/blink/renderer/core/input/event_handler.h"
#include "third_party/blink/renderer/core/input/event_handling_util.h"
#include "third_party/blink/renderer/core/input/mouse_event_manager.h"
#include "third_party/blink/renderer/core/input/touch_action_util.h"
#include "third_party/blink/renderer/core/layout/hit_test_canvas_result.h"
#include "third_party/blink/renderer/core/layout/layout_object.h"
#include "third_party/blink/renderer/core/page/chrome_client.h"
#include "third_party/blink/renderer/core/page/page.h"
#include "third_party/blink/renderer/core/page/pointer_lock_controller.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

namespace {

// Field trial name for skipping touch filtering
const char kSkipTouchEventFilterTrial[] = "SkipTouchEventFilter";
const char kSkipTouchEventFilterTrialProcessParamName[] =
    "skip_filtering_process";
const char kSkipTouchEventFilterTrialTypeParamName[] = "type";

size_t ToPointerTypeIndex(WebPointerProperties::PointerType t) {
  return static_cast<size_t>(t);
}
bool HasPointerEventListener(const EventHandlerRegistry& registry) {
  return registry.HasEventHandlers(EventHandlerRegistry::kPointerEvent) ||
         registry.HasEventHandlers(
             EventHandlerRegistry::kPointerRawUpdateEvent);
}

const AtomicString& MouseEventNameForPointerEventInputType(
    const WebInputEvent::Type& event_type) {
  switch (event_type) {
    case WebInputEvent::Type::kPointerDown:
      return event_type_names::kMousedown;
    case WebInputEvent::Type::kPointerUp:
      return event_type_names::kMouseup;
    case WebInputEvent::Type::kPointerMove:
      return event_type_names::kMousemove;
    default:
      NOTREACHED();
      return g_empty_atom;
  }
}

Element* GetPointerLockedElement(LocalFrame* frame) {
  if (Page* p = frame->GetPage()) {
    if (!p->GetPointerLockController().LockPending())
      return p->GetPointerLockController().GetElement();
  }
  return nullptr;
}

}  // namespace

PointerEventManager::PointerEventManager(LocalFrame& frame,
                                         MouseEventManager& mouse_event_manager)
    : frame_(frame),
      touch_event_manager_(MakeGarbageCollected<TouchEventManager>(frame)),
      mouse_event_manager_(mouse_event_manager) {
  Clear();
  if (RuntimeEnabledFeatures::SkipTouchEventFilterEnabled() &&
      base::GetFieldTrialParamValue(
          kSkipTouchEventFilterTrial,
          kSkipTouchEventFilterTrialProcessParamName) ==
          "browser_and_renderer") {
    skip_touch_filter_discrete_ = true;
    if (base::GetFieldTrialParamValue(
            kSkipTouchEventFilterTrial,
            kSkipTouchEventFilterTrialTypeParamName) == "all") {
      skip_touch_filter_all_ = true;
    }
  }
}

void PointerEventManager::Clear() {
  for (auto& entry : prevent_mouse_event_for_pointer_type_)
    entry = false;
  touch_event_manager_->Clear();
  non_hovering_pointers_canceled_ = false;
  pointer_event_factory_.Clear();
  touch_ids_for_canceled_pointerdowns_.clear();
  element_under_pointer_.clear();
  pointer_capture_target_.clear();
  pending_pointer_capture_target_.clear();
  user_gesture_holder_.reset();
  dispatching_pointer_id_ = 0;
}

void PointerEventManager::Trace(blink::Visitor* visitor) {
  visitor->Trace(frame_);
  visitor->Trace(element_under_pointer_);
  visitor->Trace(pointer_capture_target_);
  visitor->Trace(pending_pointer_capture_target_);
  visitor->Trace(touch_event_manager_);
  visitor->Trace(mouse_event_manager_);
}

PointerEventManager::PointerEventBoundaryEventDispatcher::
    PointerEventBoundaryEventDispatcher(
        PointerEventManager* pointer_event_manager,
        PointerEvent* pointer_event)
    : pointer_event_manager_(pointer_event_manager),
      pointer_event_(pointer_event) {}

void PointerEventManager::PointerEventBoundaryEventDispatcher::DispatchOut(
    EventTarget* target,
    EventTarget* related_target) {
  Dispatch(target, related_target, event_type_names::kPointerout, false);
}

void PointerEventManager::PointerEventBoundaryEventDispatcher::DispatchOver(
    EventTarget* target,
    EventTarget* related_target) {
  Dispatch(target, related_target, event_type_names::kPointerover, false);
}

void PointerEventManager::PointerEventBoundaryEventDispatcher::DispatchLeave(
    EventTarget* target,
    EventTarget* related_target,
    bool check_for_listener) {
  Dispatch(target, related_target, event_type_names::kPointerleave,
           check_for_listener);
}

void PointerEventManager::PointerEventBoundaryEventDispatcher::DispatchEnter(
    EventTarget* target,
    EventTarget* related_target,
    bool check_for_listener) {
  Dispatch(target, related_target, event_type_names::kPointerenter,
           check_for_listener);
}

AtomicString
PointerEventManager::PointerEventBoundaryEventDispatcher::GetLeaveEvent() {
  return event_type_names::kPointerleave;
}

AtomicString
PointerEventManager::PointerEventBoundaryEventDispatcher::GetEnterEvent() {
  return event_type_names::kPointerenter;
}

void PointerEventManager::PointerEventBoundaryEventDispatcher::Dispatch(
    EventTarget* target,
    EventTarget* related_target,
    const AtomicString& type,
    bool check_for_listener) {
  pointer_event_manager_->DispatchPointerEvent(
      target,
      pointer_event_manager_->pointer_event_factory_.CreatePointerBoundaryEvent(
          pointer_event_, type, related_target),
      check_for_listener);
}

WebInputEventResult PointerEventManager::DispatchPointerEvent(
    EventTarget* target,
    PointerEvent* pointer_event,
    bool check_for_listener) {
  if (!target)
    return WebInputEventResult::kNotHandled;

  const PointerId pointer_id = pointer_event->pointerId();
  const AtomicString& event_type = pointer_event->type();
  bool should_filter = ShouldFilterEvent(pointer_event);

  if (should_filter &&
      !HasPointerEventListener(frame_->GetEventHandlerRegistry()))
    return WebInputEventResult::kNotHandled;

  if (event_type == event_type_names::kPointerdown) {
    Node* node = target->ToNode();
    if (node && IsHTMLCanvasElement(*node) &&
        ToHTMLCanvasElement(*node).NeedsUnbufferedInputEvents()) {
      frame_->GetChromeClient().RequestUnbufferedInputEvents(frame_);
    }
  }

  bool listeners_exist =
      !check_for_listener || target->HasEventListeners(event_type);
  if (listeners_exist) {
    UseCounter::Count(frame_->GetDocument(), WebFeature::kPointerEventDispatch);
    if (event_type == event_type_names::kPointerdown) {
      UseCounter::Count(frame_->GetDocument(),
                        WebFeature::kPointerEventDispatchPointerDown);
    }
  }

  if (!should_filter || listeners_exist) {
    DCHECK(!dispatching_pointer_id_);
    base::AutoReset<PointerId> dispatch_holder(&dispatching_pointer_id_,
                                               pointer_id);
    DispatchEventResult dispatch_result = target->DispatchEvent(*pointer_event);
    return event_handling_util::ToWebInputEventResult(dispatch_result);
  }
  return WebInputEventResult::kNotHandled;
}

Element* PointerEventManager::GetEffectiveTargetForPointerEvent(
    Element* target,
    PointerId pointer_id) {
  if (Element* capturing_target = GetCapturingElement(pointer_id))
    return capturing_target;
  return target;
}

void PointerEventManager::SendMouseAndPointerBoundaryEvents(
    Element* entered_element,
    const String& canvas_region_id,
    const WebMouseEvent& mouse_event) {
  // Mouse event type does not matter as this pointerevent will only be used
  // to create boundary pointer events and its type will be overridden in
  // |sendBoundaryEvents| function.
  const WebPointerEvent web_pointer_event(WebInputEvent::kPointerMove,
                                          mouse_event);
  PointerEvent* dummy_pointer_event = pointer_event_factory_.Create(
      web_pointer_event, Vector<WebPointerEvent>(), Vector<WebPointerEvent>(),
      frame_->GetDocument()->domWindow());

  // TODO(crbug/545647): This state should reset with pointercancel too.
  // This function also gets called for compat mouse events of touch at this
  // stage. So if the event is not frame boundary transition it is only a
  // compatibility mouse event and we do not need to change pointer event
  // behavior regarding preventMouseEvent state in that case.
  if (dummy_pointer_event->buttons() == 0 && dummy_pointer_event->isPrimary()) {
    prevent_mouse_event_for_pointer_type_[ToPointerTypeIndex(
        mouse_event.pointer_type)] = false;
  }

  ProcessCaptureAndPositionOfPointerEvent(dummy_pointer_event, entered_element,
                                          canvas_region_id, &mouse_event);
}

void PointerEventManager::SendBoundaryEvents(EventTarget* exited_target,
                                             EventTarget* entered_target,
                                             PointerEvent* pointer_event) {
  PointerEventBoundaryEventDispatcher boundary_event_dispatcher(this,
                                                                pointer_event);
  boundary_event_dispatcher.SendBoundaryEvents(exited_target, entered_target);
}

void PointerEventManager::SetElementUnderPointer(PointerEvent* pointer_event,
                                                 Element* target) {
  if (element_under_pointer_.Contains(pointer_event->pointerId())) {
    EventTargetAttributes node =
        element_under_pointer_.at(pointer_event->pointerId());
    if (!target) {
      element_under_pointer_.erase(pointer_event->pointerId());
    } else if (target !=
               element_under_pointer_.at(pointer_event->pointerId()).target) {
      element_under_pointer_.Set(pointer_event->pointerId(),
                                 EventTargetAttributes(target));
    }
    SendBoundaryEvents(node.target, target, pointer_event);
  } else if (target) {
    element_under_pointer_.insert(pointer_event->pointerId(),
                                  EventTargetAttributes(target));
    SendBoundaryEvents(nullptr, target, pointer_event);
  }
}

void PointerEventManager::HandlePointerInterruption(
    const WebPointerEvent& web_pointer_event) {
  DCHECK(web_pointer_event.GetType() ==
         WebInputEvent::Type::kPointerCausedUaAction);

  HeapVector<Member<PointerEvent>> canceled_pointer_events;
  if (web_pointer_event.pointer_type ==
      WebPointerProperties::PointerType::kMouse) {
    canceled_pointer_events.push_back(
        pointer_event_factory_.CreatePointerCancelEvent(
            PointerEventFactory::kMouseId, web_pointer_event.TimeStamp()));
  } else {
    // TODO(nzolghadr): Maybe canceling all the non-hovering pointers is not
    // the best strategy here. See the github issue for more details:
    // https://github.com/w3c/pointerevents/issues/226

    // Cancel all non-hovering pointers if the pointer is not mouse.
    if (!non_hovering_pointers_canceled_) {
      Vector<PointerId> non_hovering_pointer_ids =
          pointer_event_factory_.GetPointerIdsOfNonHoveringPointers();

      for (PointerId pointer_id : non_hovering_pointer_ids) {
        canceled_pointer_events.push_back(
            pointer_event_factory_.CreatePointerCancelEvent(
                pointer_id, web_pointer_event.TimeStamp()));
      }

      non_hovering_pointers_canceled_ = true;
    }
  }

  for (auto pointer_event : canceled_pointer_events) {
    // If we are sending a pointercancel we have sent the pointerevent to some
    // target before.
    DCHECK(element_under_pointer_.Contains(pointer_event->pointerId()));
    Element* target =
        element_under_pointer_.at(pointer_event->pointerId()).target;

    DispatchPointerEvent(
        GetEffectiveTargetForPointerEvent(target, pointer_event->pointerId()),
        pointer_event);

    ReleasePointerCapture(pointer_event->pointerId());

    // Send the leave/out events and lostpointercapture if needed.
    // Note that for mouse due to the web compat we still don't send the
    // boundary events and for now only send lostpointercapture if needed.
    // Sending boundary events and possibly updating hover for mouse
    // in this case may cause some of the existing pages to break.
    if (web_pointer_event.pointer_type ==
        WebPointerProperties::PointerType::kMouse) {
      ProcessPendingPointerCapture(pointer_event);
    } else {
      ProcessCaptureAndPositionOfPointerEvent(pointer_event, nullptr);
    }

    RemovePointer(pointer_event);
  }
}

bool PointerEventManager::ShouldAdjustPointerEvent(
    const WebPointerEvent& pointer_event) const {
  if (frame_->GetSettings() &&
      !frame_->GetSettings()->GetTouchAdjustmentEnabled())
    return false;

  return RuntimeEnabledFeatures::UnifiedTouchAdjustmentEnabled() &&
         pointer_event.pointer_type ==
             WebPointerProperties::PointerType::kTouch &&
         pointer_event.GetType() == WebInputEvent::kPointerDown &&
         pointer_event_factory_.IsPrimary(pointer_event);
}

void PointerEventManager::AdjustTouchPointerEvent(
    WebPointerEvent& pointer_event) {
  DCHECK(pointer_event.pointer_type ==
         WebPointerProperties::PointerType::kTouch);

  LayoutSize hit_rect_size = GetHitTestRectForAdjustment(
      *frame_, LayoutSize(pointer_event.width, pointer_event.height));

  if (hit_rect_size.IsEmpty())
    return;

  HitTestRequest::HitTestRequestType hit_type =
      HitTestRequest::kTouchEvent | HitTestRequest::kReadOnly |
      HitTestRequest::kActive | HitTestRequest::kListBased;
  LocalFrame& root_frame = frame_->LocalFrameRoot();
  // TODO(szager): Shouldn't this be PositionInScreen() ?
  LayoutPoint hit_test_point((FloatPoint)pointer_event.PositionInWidget());
  hit_test_point.Move(-hit_rect_size * 0.5f);
  HitTestLocation location(LayoutRect(hit_test_point, hit_rect_size));
  HitTestResult hit_test_result =
      root_frame.GetEventHandler().HitTestResultAtLocation(location, hit_type);
  Node* adjusted_node = nullptr;
  IntPoint adjusted_point;
  bool adjusted = frame_->GetEventHandler().BestClickableNodeForHitTestResult(
      location, hit_test_result, adjusted_point, adjusted_node);

  if (adjusted)
    pointer_event.SetPositionInWidget(adjusted_point.X(), adjusted_point.Y());

  frame_->GetEventHandler().CacheTouchAdjustmentResult(
      pointer_event.unique_touch_event_id, pointer_event.PositionInWidget());
}

bool PointerEventManager::ShouldFilterEvent(PointerEvent* pointer_event) {
  // Filter as normal if the experiment is disabled.
  if (!skip_touch_filter_discrete_)
    return true;

  // If the experiment is enabled and the event is pointer up/down, do not
  // filter.
  if (pointer_event->type() == event_type_names::kPointerdown ||
      pointer_event->type() == event_type_names::kPointerup) {
    return false;
  }
  // If the experiment is "all", do not filter pointermove.
  if (skip_touch_filter_all_ &&
      pointer_event->type() == event_type_names::kPointermove)
    return false;

  // Continue filtering other types of events, even thought the experiment is
  // enabled.
  return true;
}

event_handling_util::PointerEventTarget
PointerEventManager::ComputePointerEventTarget(
    const WebPointerEvent& web_pointer_event) {
  event_handling_util::PointerEventTarget pointer_event_target;

  PointerId pointer_id =
      pointer_event_factory_.GetPointerEventId(web_pointer_event);
  // Do the hit test either when the touch first starts or when the touch
  // is not captured. |m_pendingPointerCaptureTarget| indicates the target
  // that will be capturing this event. |m_pointerCaptureTarget| may not
  // have this target yet since the processing of that will be done right
  // before firing the event.
  if (web_pointer_event.GetType() == WebInputEvent::kPointerDown ||
      !pending_pointer_capture_target_.Contains(pointer_id)) {
    HitTestRequest::HitTestRequestType hit_type = HitTestRequest::kTouchEvent |
                                                  HitTestRequest::kReadOnly |
                                                  HitTestRequest::kActive;
    HitTestLocation location(frame_->View()->ConvertFromRootFrame(
        LayoutPoint(web_pointer_event.PositionInWidget())));
    HitTestResult hit_test_tesult =
        frame_->GetEventHandler().HitTestResultAtLocation(location, hit_type);
    Element* target = hit_test_tesult.InnerElement();
    if (target) {
      pointer_event_target.target_frame = target->GetDocument().GetFrame();
      if (auto* canvas = ToHTMLCanvasElementOrNull(target)) {
        HitTestCanvasResult* hit_test_canvas_result =
            canvas->GetControlAndIdIfHitRegionExists(
                hit_test_tesult.PointInInnerNodeFrame());
        if (hit_test_canvas_result->GetControl())
          target = hit_test_canvas_result->GetControl();
        pointer_event_target.region = hit_test_canvas_result->GetId();
      }
      pointer_event_target.target_element = target;
    }
  } else {
    // Set the target of pointer event to the captured element as this
    // pointer is captured otherwise it would have gone to the if block
    // and perform a hit-test.
    pointer_event_target.target_element =
        pending_pointer_capture_target_.at(pointer_id);
    pointer_event_target.target_frame =
        pointer_event_target.target_element->GetDocument().GetFrame();
  }
  return pointer_event_target;
}

WebInputEventResult PointerEventManager::DispatchTouchPointerEvent(
    const WebPointerEvent& web_pointer_event,
    const Vector<WebPointerEvent>& coalesced_events,
    const Vector<WebPointerEvent>& predicted_events,
    const event_handling_util::PointerEventTarget& pointer_event_target) {
  DCHECK_NE(web_pointer_event.GetType(),
            WebInputEvent::Type::kPointerCausedUaAction);

  WebInputEventResult result = WebInputEventResult::kHandledSystem;
  if (pointer_event_target.target_element &&
      pointer_event_target.target_frame && !non_hovering_pointers_canceled_) {
    PointerEvent* pointer_event = pointer_event_factory_.Create(
        web_pointer_event, coalesced_events, predicted_events,
        pointer_event_target.target_element
            ? pointer_event_target.target_element->GetDocument().domWindow()
            : nullptr);

    result = SendTouchPointerEvent(pointer_event_target.target_element,
                                   pointer_event, web_pointer_event.hovering);

    // If a pointerdown has been canceled, queue the unique id to allow
    // suppressing mouse events from gesture events. For mouse events
    // fired from GestureTap & GestureLongPress (which are triggered by
    // single touches only), it is enough to queue the ids only for
    // primary pointers.
    // TODO(mustaq): What about other cases (e.g. GestureTwoFingerTap)?
    if (result != WebInputEventResult::kNotHandled &&
        pointer_event->type() == event_type_names::kPointerdown &&
        pointer_event->isPrimary()) {
      touch_ids_for_canceled_pointerdowns_.push_back(
          web_pointer_event.unique_touch_event_id);
    }
  }
  return result;
}

WebInputEventResult PointerEventManager::SendTouchPointerEvent(
    Element* target,
    PointerEvent* pointer_event,
    bool hovering) {
  if (non_hovering_pointers_canceled_)
    return WebInputEventResult::kNotHandled;

  ProcessCaptureAndPositionOfPointerEvent(pointer_event, target);

  // Setting the implicit capture for touch
  if (pointer_event->type() == event_type_names::kPointerdown)
    SetPointerCapture(pointer_event->pointerId(), target);

  WebInputEventResult result = DispatchPointerEvent(
      GetEffectiveTargetForPointerEvent(target, pointer_event->pointerId()),
      pointer_event);

  if (pointer_event->type() == event_type_names::kPointerup ||
      pointer_event->type() == event_type_names::kPointercancel) {
    ReleasePointerCapture(pointer_event->pointerId());

    // If the pointer is not hovering it implies that pointerup also means
    // leaving the screen and the end of the stream for that pointer. So
    // we should send boundary events as well.
    if (!hovering) {
      // Sending the leave/out events and lostpointercapture because the next
      // touch event will have a different id.
      ProcessCaptureAndPositionOfPointerEvent(pointer_event, nullptr);

      RemovePointer(pointer_event);
    }
  }

  return result;
}

WebInputEventResult PointerEventManager::FlushEvents() {
  WebInputEventResult result = touch_event_manager_->FlushEvents();
  user_gesture_holder_.reset();
  return result;
}

WebInputEventResult PointerEventManager::HandlePointerEvent(
    const WebPointerEvent& event,
    const Vector<WebPointerEvent>& coalesced_events,
    const Vector<WebPointerEvent>& predicted_events) {
  if (event.GetType() == WebInputEvent::Type::kPointerRawUpdate) {
    if (!RuntimeEnabledFeatures::PointerRawUpdateEnabled() ||
        !frame_->GetEventHandlerRegistry().HasEventHandlers(
            EventHandlerRegistry::kPointerRawUpdateEvent))
      return WebInputEventResult::kHandledSystem;

    // If the page has pointer lock active and the event was from
    // mouse use the locked target as the target.
    // TODO(nzolghadr): Consideration for locked element might fit
    // better in ComputerPointerEventTarget but at this point it is
    // not quite possible as we haven't merged the locked event
    // dispatch with this path.
    Node* target;
    Element* pointer_locked_element = GetPointerLockedElement(frame_);
    if (pointer_locked_element &&
        event.pointer_type == WebPointerProperties::PointerType::kMouse) {
      // The locked element could be in another frame. So we need to delegate
      // sending the event to that frame.
      LocalFrame* target_frame =
          pointer_locked_element->GetDocument().GetFrame();
      if (!target_frame)
        return WebInputEventResult::kHandledSystem;
      if (target_frame != frame_) {
        target_frame->GetEventHandler().HandlePointerEvent(
            event, coalesced_events, predicted_events);
        return WebInputEventResult::kHandledSystem;
      }
      target = pointer_locked_element;
    } else {
      target = ComputePointerEventTarget(event).target_element;
    }

    PointerEvent* pointer_event =
        pointer_event_factory_.Create(event, coalesced_events, predicted_events,
                                      frame_->GetDocument()->domWindow());
    DispatchPointerEvent(target, pointer_event);
    return WebInputEventResult::kHandledSystem;
  }

  if (event.GetType() == WebInputEvent::Type::kPointerCausedUaAction) {
    HandlePointerInterruption(event);
    return WebInputEventResult::kHandledSystem;
  }

  if (!event.hovering) {
    if (!touch_event_manager_->IsAnyTouchActive()) {
      non_hovering_pointers_canceled_ = false;
    }
  }

  // The rest of this function does not handle hovering
  // (i.e. mouse like) events yet.

  WebPointerEvent pointer_event = event.WebPointerEventInRootFrame();
  if (ShouldAdjustPointerEvent(event))
    AdjustTouchPointerEvent(pointer_event);
  event_handling_util::PointerEventTarget pointer_event_target =
      ComputePointerEventTarget(pointer_event);

  // Any finger lifting is a user gesture only when it wasn't associated with a
  // scroll.
  // https://docs.google.com/document/d/1oF1T3O7_E4t1PYHV6gyCwHxOi3ystm0eSL5xZu7nvOg/edit#
  // Re-use the same UserGesture for touchend and pointerup (but not for the
  // mouse events generated by GestureTap).
  // For the rare case of multi-finger scenarios spanning documents, it
  // seems extremely unlikely to matter which document the gesture is
  // associated with so just pick the pointer event that comes.
  if (event.GetType() == WebInputEvent::kPointerUp &&
      !non_hovering_pointers_canceled_ && pointer_event_target.target_frame) {
    user_gesture_holder_ =
        LocalFrame::NotifyUserActivation(pointer_event_target.target_frame);
  }

  WebInputEventResult result = DispatchTouchPointerEvent(
      event, coalesced_events, predicted_events, pointer_event_target);

  touch_event_manager_->HandleTouchPoint(event, coalesced_events,
                                         pointer_event_target);

  return result;
}

WebInputEventResult PointerEventManager::CreateAndDispatchPointerEvent(
    Element* target,
    const AtomicString& mouse_event_name,
    const WebMouseEvent& mouse_event,
    const Vector<WebMouseEvent>& coalesced_events,
    const Vector<WebMouseEvent>& predicted_events) {
  WebInputEvent::Type event_type;
  // TODO(crbug.com/665924): The following ifs skip the mouseover/leave cases,
  // we should fixed them when further merge the code path.
  if (mouse_event_name == event_type_names::kMousemove)
    event_type = WebInputEvent::kPointerMove;
  else if (mouse_event_name == event_type_names::kMousedown)
    event_type = WebInputEvent::kPointerDown;
  else if (mouse_event_name == event_type_names::kMouseup)
    event_type = WebInputEvent::kPointerUp;
  else
    return WebInputEventResult::kNotHandled;

  const WebPointerEvent web_pointer_event(event_type, mouse_event);
  Vector<WebPointerEvent> pointer_coalesced_events;
  for (const WebMouseEvent& e : coalesced_events)
    pointer_coalesced_events.push_back(WebPointerEvent(event_type, e));
  Vector<WebPointerEvent> pointer_predicted_events;
  for (const WebMouseEvent& e : predicted_events)
    pointer_predicted_events.push_back(WebPointerEvent(event_type, e));

  PointerEvent* pointer_event = pointer_event_factory_.Create(
      web_pointer_event, pointer_coalesced_events, pointer_predicted_events,
      target->GetDocument().domWindow());
  return DispatchPointerEvent(target, pointer_event);
}

// TODO(crbug.com/665924): Because this code path might have boundary events,
// it is different from SendMousePointerEvent. We should merge them.
WebInputEventResult PointerEventManager::DirectDispatchMousePointerEvent(
    Element* target,
    const WebMouseEvent& event,
    const AtomicString& mouse_event_type,
    const Vector<WebMouseEvent>& coalesced_events,
    const Vector<WebMouseEvent>& predicted_events,
    const String& canvas_region_id) {
  // Fetch the last_mouse_position for creating MouseEvent before
  // pointer_event_factory updates it.
  FloatPoint last_mouse_position =
      pointer_event_factory_.GetLastPointerPosition(
          PointerEventFactory::kMouseId, event);
  WebInputEventResult result = CreateAndDispatchPointerEvent(
      target, mouse_event_type, event, coalesced_events, predicted_events);

  result = event_handling_util::MergeEventResult(
      result, mouse_event_manager_->DispatchMouseEvent(
                  target, mouse_event_type, event, canvas_region_id,
                  &last_mouse_position, nullptr));

  return result;
}

WebInputEventResult PointerEventManager::SendMousePointerEvent(
    Element* target,
    const String& canvas_region_id,
    const WebInputEvent::Type event_type,
    const WebMouseEvent& mouse_event,
    const Vector<WebMouseEvent>& coalesced_events,
    const Vector<WebMouseEvent>& predicted_events,
    bool skip_click_dispatch) {
  DCHECK(event_type == WebInputEvent::kPointerDown ||
         event_type == WebInputEvent::kPointerMove ||
         event_type == WebInputEvent::kPointerUp);

  const WebPointerEvent web_pointer_event(event_type, mouse_event);
  Vector<WebPointerEvent> pointer_coalesced_events;
  for (const WebMouseEvent& e : coalesced_events)
    pointer_coalesced_events.push_back(WebPointerEvent(event_type, e));
  Vector<WebPointerEvent> pointer_predicted_events;
  for (const WebMouseEvent& e : predicted_events)
    pointer_predicted_events.push_back(WebPointerEvent(event_type, e));

  // Fetch the last_mouse_position for creating MouseEvent before
  // pointer_event_factory updates it.
  FloatPoint last_mouse_position =
      pointer_event_factory_.GetLastPointerPosition(
          PointerEventFactory::kMouseId, mouse_event);

  PointerEvent* pointer_event = pointer_event_factory_.Create(
      web_pointer_event, pointer_coalesced_events, pointer_predicted_events,
      frame_->GetDocument()->domWindow());

  bool fake_event = (web_pointer_event.GetModifiers() &
                     WebInputEvent::Modifiers::kRelativeMotionEvent);

  // Fake events should only be move events.
  DCHECK(!fake_event || event_type == WebInputEvent::kPointerMove);

  // This is for when the mouse is released outside of the page.
  if (!fake_event && event_type == WebInputEvent::kPointerMove &&
      !pointer_event->buttons()) {
    ReleasePointerCapture(pointer_event->pointerId());
    // Send got/lostpointercapture rightaway if necessary.
    ProcessPendingPointerCapture(pointer_event);

    if (pointer_event->isPrimary()) {
      prevent_mouse_event_for_pointer_type_[ToPointerTypeIndex(
          web_pointer_event.pointer_type)] = false;
    }
  }

  Element* pointer_event_target = ProcessCaptureAndPositionOfPointerEvent(
      pointer_event, target, canvas_region_id, &mouse_event);

  // Don't send fake mouse event to the DOM.
  if (fake_event)
    return WebInputEventResult::kHandledSuppressed;

  Element* effective_target = GetEffectiveTargetForPointerEvent(
      pointer_event_target, pointer_event->pointerId());

  if ((event_type == WebInputEvent::kPointerDown ||
       event_type == WebInputEvent::kPointerUp) &&
      pointer_event->type() == event_type_names::kPointermove &&
      RuntimeEnabledFeatures::PointerRawUpdateEnabled() &&
      frame_->GetEventHandlerRegistry().HasEventHandlers(
          EventHandlerRegistry::kPointerRawUpdateEvent)) {
    // This is a chorded button move event. We need to also send a
    // pointerrawupdate for it.
    DispatchPointerEvent(
        effective_target,
        pointer_event_factory_.CreatePointerRawUpdateEvent(pointer_event));
  }
  WebInputEventResult result =
      DispatchPointerEvent(effective_target, pointer_event);

  if (result != WebInputEventResult::kNotHandled &&
      pointer_event->type() == event_type_names::kPointerdown &&
      pointer_event->isPrimary()) {
    prevent_mouse_event_for_pointer_type_[ToPointerTypeIndex(
        mouse_event.pointer_type)] = true;
  }

  // Only calculate mouse target if either mouse compatibility event or click
  // should be sent.
  if (pointer_event->isPrimary() &&
      (!prevent_mouse_event_for_pointer_type_[ToPointerTypeIndex(
           mouse_event.pointer_type)] ||
       (!skip_click_dispatch && event_type == WebInputEvent::kPointerUp))) {
    Element* mouse_target = effective_target;
    // Event path could be null if the pointer event is not dispatched.
    if (!event_handling_util::IsInDocument(mouse_target) &&
        pointer_event->HasEventPath()) {
      for (const auto& context :
           pointer_event->GetEventPath().NodeEventContexts()) {
        if (context.GetNode().IsElementNode() &&
            event_handling_util::IsInDocument(&context.GetNode())) {
          mouse_target = ToElement(&context.GetNode());
          break;
        }
      }
    }
    if (!prevent_mouse_event_for_pointer_type_[ToPointerTypeIndex(
            mouse_event.pointer_type)]) {
      result = event_handling_util::MergeEventResult(
          result,
          mouse_event_manager_->DispatchMouseEvent(
              mouse_target, MouseEventNameForPointerEventInputType(event_type),
              mouse_event, canvas_region_id, &last_mouse_position, nullptr));
    }
    if (!skip_click_dispatch && mouse_target &&
        event_type == WebInputEvent::kPointerUp) {
      mouse_event_manager_->DispatchMouseClickIfNeeded(
          mouse_target, mouse_event, canvas_region_id);
    }
  }

  if (pointer_event->type() == event_type_names::kPointerup ||
      pointer_event->type() == event_type_names::kPointercancel) {
    ReleasePointerCapture(pointer_event->pointerId());

    // Send got/lostpointercapture rightaway if necessary.
    if (pointer_event->type() == event_type_names::kPointerup) {
      // If pointerup releases the capture we also send boundary events
      // rightaway when the pointer that supports hover. Perform a hit
      // test to find the new target.
      if (RuntimeEnabledFeatures::UnifiedPointerCaptureInBlinkEnabled()) {
        if (pointer_capture_target_.find(pointer_event->pointerId()) !=
            pointer_capture_target_.end()) {
          HitTestRequest::HitTestRequestType hit_type =
              HitTestRequest::kRelease;
          HitTestRequest request(hit_type);
          MouseEventWithHitTestResults mev =
              event_handling_util::PerformMouseEventHitTest(frame_, request,
                                                            mouse_event);
          target = mev.InnerElement();
        }
      }
      ProcessCaptureAndPositionOfPointerEvent(pointer_event, target,
                                              canvas_region_id, &mouse_event);
    } else {
      // Don't send out/leave events in this case as it is a little tricky.
      // This case happens for the drag operation and currently we don't
      // let the page know that the pointer left the page while dragging.
      ProcessPendingPointerCapture(pointer_event);
    }

    if (pointer_event->isPrimary()) {
      prevent_mouse_event_for_pointer_type_[ToPointerTypeIndex(
          mouse_event.pointer_type)] = false;
    }
  }

  if (mouse_event.GetType() == WebInputEvent::kMouseLeave &&
      mouse_event.pointer_type == WebPointerProperties::PointerType::kPen) {
    pointer_event_factory_.Remove(pointer_event->pointerId());
  }
  return result;
}

bool PointerEventManager::GetPointerCaptureState(
    PointerId pointer_id,
    Element** pointer_capture_target,
    Element** pending_pointer_capture_target) {
  PointerCapturingMap::const_iterator it;

  it = pointer_capture_target_.find(pointer_id);
  Element* pointer_capture_target_temp =
      (it != pointer_capture_target_.end()) ? it->value : nullptr;
  it = pending_pointer_capture_target_.find(pointer_id);
  Element* pending_pointercapture_target_temp =
      (it != pending_pointer_capture_target_.end()) ? it->value : nullptr;

  if (pointer_capture_target)
    *pointer_capture_target = pointer_capture_target_temp;
  if (pending_pointer_capture_target)
    *pending_pointer_capture_target = pending_pointercapture_target_temp;

  return pointer_capture_target_temp != pending_pointercapture_target_temp;
}

Element* PointerEventManager::ProcessCaptureAndPositionOfPointerEvent(
    PointerEvent* pointer_event,
    Element* hit_test_target,
    const String& canvas_region_id,
    const WebMouseEvent* mouse_event) {
  ProcessPendingPointerCapture(pointer_event);

  PointerCapturingMap::const_iterator it =
      pointer_capture_target_.find(pointer_event->pointerId());
  if (Element* pointercapture_target =
          (it != pointer_capture_target_.end()) ? it->value : nullptr)
    hit_test_target = pointercapture_target;

  SetElementUnderPointer(pointer_event, hit_test_target);
  if (mouse_event) {
    mouse_event_manager_->SetElementUnderMouse(hit_test_target,
                                               canvas_region_id, *mouse_event);
  }
  return hit_test_target;
}

void PointerEventManager::ProcessPendingPointerCapture(
    PointerEvent* pointer_event) {
  Element* pointer_capture_target;
  Element* pending_pointer_capture_target;
  const PointerId pointer_id = pointer_event->pointerId();
  const bool is_capture_changed = GetPointerCaptureState(
      pointer_id, &pointer_capture_target, &pending_pointer_capture_target);

  if (!is_capture_changed)
    return;

  // We have to check whether the pointerCaptureTarget is null or not because
  // we are checking whether it is still connected to its document or not.
  if (pointer_capture_target) {
    // Re-target lostpointercapture to the document when the element is
    // no longer participating in the tree.
    EventTarget* target = pointer_capture_target;
    if (!pointer_capture_target->isConnected()) {
      target = pointer_capture_target->ownerDocument();
    }
    DispatchPointerEvent(
        target, pointer_event_factory_.CreatePointerCaptureEvent(
                    pointer_event, event_type_names::kLostpointercapture));
  }

  if (pending_pointer_capture_target) {
    SetElementUnderPointer(pointer_event, pending_pointer_capture_target);
    DispatchPointerEvent(
        pending_pointer_capture_target,
        pointer_event_factory_.CreatePointerCaptureEvent(
            pointer_event, event_type_names::kGotpointercapture));
    pointer_capture_target_.Set(pointer_id, pending_pointer_capture_target);
  } else {
    pointer_capture_target_.erase(pointer_id);
  }
}

void PointerEventManager::ProcessPendingPointerCaptureForPointerLock(
    const WebMouseEvent& mouse_event) {
  PointerEvent* pointer_event = pointer_event_factory_.Create(
      WebPointerEvent(WebInputEvent::kPointerMove, mouse_event),
      Vector<WebPointerEvent>(), Vector<WebPointerEvent>(),
      frame_->GetDocument()->domWindow());
  ProcessPendingPointerCapture(pointer_event);
}

void PointerEventManager::RemoveTargetFromPointerCapturingMapping(
    PointerCapturingMap& map,
    const Element* target) {
  // We could have kept a reverse mapping to make this deletion possibly
  // faster but it adds some code complication which might not be worth of
  // the performance improvement considering there might not be a lot of
  // active pointer or pointer captures at the same time.
  PointerCapturingMap tmp = map;
  for (PointerCapturingMap::iterator it = tmp.begin(); it != tmp.end(); ++it) {
    if (it->value == target)
      map.erase(it->key);
  }
}

Element* PointerEventManager::GetCapturingElement(PointerId pointer_id) {
  if (pointer_capture_target_.Contains(pointer_id))
    return pointer_capture_target_.at(pointer_id);
  return nullptr;
}

void PointerEventManager::RemovePointer(PointerEvent* pointer_event) {
  PointerId pointer_id = pointer_event->pointerId();
  if (pointer_event_factory_.Remove(pointer_id)) {
    pending_pointer_capture_target_.erase(pointer_id);
    pointer_capture_target_.erase(pointer_id);
    element_under_pointer_.erase(pointer_id);
  }
}

void PointerEventManager::ElementRemoved(Element* target) {
  RemoveTargetFromPointerCapturingMapping(pending_pointer_capture_target_,
                                          target);
}

bool PointerEventManager::SetPointerCapture(PointerId pointer_id,
                                            Element* target) {
  UseCounter::Count(frame_->GetDocument(), WebFeature::kPointerEventSetCapture);
  if (pointer_event_factory_.IsActiveButtonsState(pointer_id)) {
    if (pointer_id != dispatching_pointer_id_) {
      UseCounter::Count(frame_->GetDocument(),
                        WebFeature::kPointerEventSetCaptureOutsideDispatch);
    }
    pending_pointer_capture_target_.Set(pointer_id, target);
    return true;
  }
  return false;
}

bool PointerEventManager::ReleasePointerCapture(PointerId pointer_id,
                                                Element* target) {
  // Only the element that is going to get the next pointer event can release
  // the capture. Note that this might be different from
  // |m_pointercaptureTarget|. |m_pointercaptureTarget| holds the element
  // that had the capture until now and has been receiving the pointerevents
  // but |m_pendingPointerCaptureTarget| indicated the element that gets the
  // very next pointer event. They will be the same if there was no change in
  // capturing of a particular |pointerId|. See crbug.com/614481.
  if (pending_pointer_capture_target_.at(pointer_id) == target) {
    ReleasePointerCapture(pointer_id);
    return true;
  }
  return false;
}

void PointerEventManager::ReleaseMousePointerCapture() {
  ReleasePointerCapture(PointerEventFactory::kMouseId);
}

bool PointerEventManager::HasPointerCapture(PointerId pointer_id,
                                            const Element* target) const {
  return pending_pointer_capture_target_.at(pointer_id) == target;
}

void PointerEventManager::ReleasePointerCapture(PointerId pointer_id) {
  pending_pointer_capture_target_.erase(pointer_id);
}

Element* PointerEventManager::GetMouseCaptureTarget() {
  if (pending_pointer_capture_target_.Contains(PointerEventFactory::kMouseId))
    return pending_pointer_capture_target_.at(PointerEventFactory::kMouseId);
  return nullptr;
}

bool PointerEventManager::IsActive(const PointerId pointer_id) const {
  return pointer_event_factory_.IsActive(pointer_id);
}

// This function checks the type of the pointer event to be touch as touch
// pointer events are the only ones that are directly dispatched from the main
// page managers to their target (event if target is in an iframe) and only
// those managers will keep track of these pointer events.
bool PointerEventManager::IsTouchPointerIdActiveOnFrame(
    PointerId pointer_id,
    LocalFrame* frame) const {
  if (pointer_event_factory_.GetPointerType(pointer_id) !=
      WebPointerProperties::PointerType::kTouch)
    return false;
  Element* last_element_receiving_event =
      element_under_pointer_.Contains(pointer_id)
          ? element_under_pointer_.at(pointer_id).target
          : nullptr;
  return last_element_receiving_event &&
         last_element_receiving_event->GetDocument().GetFrame() == frame;
}

bool PointerEventManager::IsAnyTouchActive() const {
  return touch_event_manager_->IsAnyTouchActive();
}

bool PointerEventManager::PrimaryPointerdownCanceled(
    uint32_t unique_touch_event_id) {
  // It's safe to assume that uniqueTouchEventIds won't wrap back to 0 from
  // 2^32-1 (>4.2 billion): even with a generous 100 unique ids per touch
  // sequence & one sequence per 10 second, it takes 13+ years to wrap back.
  while (!touch_ids_for_canceled_pointerdowns_.IsEmpty()) {
    uint32_t first_id = touch_ids_for_canceled_pointerdowns_.front();
    if (first_id > unique_touch_event_id)
      return false;
    touch_ids_for_canceled_pointerdowns_.TakeFirst();
    if (first_id == unique_touch_event_id)
      return true;
  }
  return false;
}

void PointerEventManager::RemoveLastMousePosition() {
  pointer_event_factory_.RemoveLastPosition(PointerEventFactory::kMouseId);
}

}  // namespace blink
