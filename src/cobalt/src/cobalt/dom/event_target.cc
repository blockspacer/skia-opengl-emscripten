// Copyright 2015 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <memory>

#include "cobalt/dom/event_target.h"

#include "base/bind.h"
#include "base/bind_helpers.h"
#include "base/memory/ptr_util.h"
#include "base/message_loop/message_loop.h"
#include "base/trace_event/trace_event.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/global_stats.h"
#if defined(ENABLE_XHR)
#include "cobalt/xhr/xml_http_request_event_target.h"
#endif
#include "nb/memory_scope.h"

namespace cobalt {
namespace dom {

void EventTarget::AddEventListener(const std::string& type,
                                   const EventListenerScriptValue& listener,
                                   bool use_capture) {
  // Do nothing if listener is null.
  if (listener.IsNull()) {
    return;
  }

  std::unique_ptr<GenericEventHandlerReference> listener_reference(
      new GenericEventHandlerReference(this, listener));

  AddEventListenerInternal(base::CobToken(type), std::move(listener_reference),
                           use_capture, kNotAttribute);
}

void EventTarget::RemoveEventListener(const std::string& type,
                                      const EventListenerScriptValue& listener,
                                      bool use_capture) {
  // Do nothing if listener is null.
  if (listener.IsNull()) {
    return;
  }

  for (EventListenerInfos::iterator iter = event_listener_infos_.begin();
       iter != event_listener_infos_.end(); ++iter) {
    if ((*iter)->listener_type == kNotAttribute &&
        (*iter)->type == type.c_str() && (*iter)->listener->EqualTo(listener) &&
        (*iter)->use_capture == use_capture) {
      event_listener_infos_.erase(iter);
      return;
    }
  }
}

// Dispatch event to a single event target outside the DOM tree. The event
// propagation in the DOM tree is implemented inside Node::DispatchEvent().
bool EventTarget::DispatchEvent(const scoped_refptr<Event>& event,
                                script::ExceptionState* exception_state) {
  if (!event || event->IsBeingDispatched() || !event->initialized_flag()) {
    DOMException::Raise(DOMException::kInvalidStateErr, exception_state);
    // Return value will be ignored.
    return false;
  }

  return DispatchEvent(event);
}

bool EventTarget::DispatchEvent(const scoped_refptr<Event>& event) {
  DCHECK(event);
  DCHECK(!event->IsBeingDispatched());
  DCHECK(event->initialized_flag());
  TRACE_EVENT1("cobalt::dom", "EventTarget::DispatchEvent", "event",
               event->type().c_str());
  if (!event || event->IsBeingDispatched() || !event->initialized_flag()) {
    return false;
  }

  // The event is now being dispatched. Track it in the global stats.
  GlobalStats::GetInstance()->StartJavaScriptEvent();

  event->set_target(this);
  event->set_event_phase(Event::kAtTarget);
  FireEventOnListeners(event);
  event->set_event_phase(Event::kNone);

  // The event has completed being dispatched. Stop tracking it in the global
  // stats.
  GlobalStats::GetInstance()->StopJavaScriptEvent();

  return !event->default_prevented();
}

void EventTarget::DispatchEventAndRunCallback(
    const scoped_refptr<Event>& event,
    const base::Closure& dispatched_callback) {
  DispatchEvent(event);
  if (!dispatched_callback.is_null()) {
    dispatched_callback.Run();
  }
}

void EventTarget::DispatchEventNameAndRunCallback(
    base::CobToken event_name, const base::Closure& dispatched_callback) {
    printf("DispatchEventNameAndRunCallback 1\n");
  DispatchEvent(base::WrapRefCounted(new Event(event_name)));
    printf("DispatchEventNameAndRunCallback 2\n");
  if (!dispatched_callback.is_null()) {
    printf("DispatchEventNameAndRunCallback 3\n");
    dispatched_callback.Run();
  }
    printf("DispatchEventNameAndRunCallback 4\n");
}

void EventTarget::PostToDispatchEventName(const base::Location& location,
                                          base::CobToken event_name) {
  PostToDispatchEventNameAndRunCallback(location, event_name, base::Closure());
}

void EventTarget::PostToDispatchEvent(const base::Location& location,
                                      const scoped_refptr<Event>& event) {
  PostToDispatchEventAndRunCallback(location, event, base::Closure());
}

void EventTarget::PostToDispatchEventAndRunCallback(
    const base::Location& location, const scoped_refptr<Event>& event,
    const base::Closure& callback) {
    printf("PostToDispatchEventAndRunCallback 1\n");
  /*if (!base::MessageLoop::current()) {
    return;
  }*/
#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  std::move(base::Bind(base::IgnoreResult(&EventTarget::DispatchEventAndRunCallback),
                   base::AsWeakPtr<EventTarget>(this), event, callback)).Run();
  return;
#endif

  if (!base::MessageLoopCurrent::Get()) {
    return;
  }
    printf("PostToDispatchEventAndRunCallback 2\n");
    DCHECK(base::MessageLoopCurrent::Get()); // TODO
  base::MessageLoopCurrent::Get()->task_runner()->PostTask(
      location,
      base::Bind(base::IgnoreResult(&EventTarget::DispatchEventAndRunCallback),
                 base::AsWeakPtr<EventTarget>(this), event, callback));
    printf("PostToDispatchEventAndRunCallback 3\n");
}

void EventTarget::PostToDispatchEventNameAndRunCallback(
    const base::Location& location, base::CobToken event_name,
    const base::Closure& callback) {
    printf("PostToDispatchEventNameAndRunCallback 1\n");
#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  std::move(
    base::Bind(
              base::IgnoreResult(&EventTarget::DispatchEventNameAndRunCallback),
              base::AsWeakPtr<EventTarget>(this), event_name, callback)
  ).Run();
  return;
#endif

  if (!base::MessageLoopCurrent::Get()) {
    return;
  }
    printf("PostToDispatchEventNameAndRunCallback 2\n");
  base::MessageLoopCurrent::Get()->task_runner()->PostTask(
      location,
      base::Bind(
          base::IgnoreResult(&EventTarget::DispatchEventNameAndRunCallback),
          base::AsWeakPtr<EventTarget>(this), event_name, callback));
    printf("PostToDispatchEventNameAndRunCallback 3\n");
}

void EventTarget::SetAttributeEventListener(
    base::CobToken type, const EventListenerScriptValue& listener) {
  DCHECK(!unpack_onerror_events_ || type != base::Tokens::error());

  std::unique_ptr<GenericEventHandlerReference> listener_reference(
      new GenericEventHandlerReference(this, listener));
  SetAttributeEventListenerInternal(type, std::move(listener_reference));
}

const EventTarget::EventListenerScriptValue*
EventTarget::GetAttributeEventListener(base::CobToken type) const {
  DCHECK(!unpack_onerror_events_ || type != base::Tokens::error());

  GenericEventHandlerReference* handler =
      GetAttributeEventListenerInternal(type);
  return handler ? handler->event_listener_value() : NULL;
}

void EventTarget::SetAttributeOnErrorEventListener(
    base::CobToken type, const OnErrorEventListenerScriptValue& listener) {
  DCHECK_EQ(base::Tokens::error(), type);

  std::unique_ptr<GenericEventHandlerReference> listener_reference(
      new GenericEventHandlerReference(this, listener));
  SetAttributeEventListenerInternal(type, std::move(listener_reference));
}

const EventTarget::OnErrorEventListenerScriptValue*
EventTarget::GetAttributeOnErrorEventListener(base::CobToken type) const {
  DCHECK_EQ(base::Tokens::error(), type);

  GenericEventHandlerReference* handler =
      GetAttributeEventListenerInternal(type);
  return handler ? handler->on_error_event_listener_value() : NULL;
}

bool EventTarget::HasOneOrMoreAttributeEventListener() const {
  for (EventListenerInfos::const_iterator iter = event_listener_infos_.begin();
       iter != event_listener_infos_.end(); ++iter) {
    if ((*iter)->listener_type == kAttribute) {
      return true;
    }
  }
  return false;
}

void EventTarget::SetAttributeEventListenerInternal(
    base::CobToken type,
    std::unique_ptr<GenericEventHandlerReference> event_handler) {
  // Remove existing attribute listener of the same type.
  for (EventListenerInfos::iterator iter = event_listener_infos_.begin();
       iter != event_listener_infos_.end(); ++iter) {
    if ((*iter)->listener_type == kAttribute && (*iter)->type == type) {
      event_listener_infos_.erase(iter);
      break;
    }
  }

  AddEventListenerInternal(type, std::move(event_handler), false, kAttribute);
}

GenericEventHandlerReference* EventTarget::GetAttributeEventListenerInternal(
    base::CobToken type) const {
  for (EventListenerInfos::const_iterator iter = event_listener_infos_.begin();
       iter != event_listener_infos_.end(); ++iter) {
    if ((*iter)->listener_type == kAttribute && (*iter)->type == type) {
      return (*iter)->listener.get();
    }
  }
  return NULL;
}

void EventTarget::FireEventOnListeners(const scoped_refptr<Event>& event) {
  DCHECK(event->IsBeingDispatched());
  DCHECK(event->target());
  DCHECK(!event->current_target());

  event->set_current_target(this);

  EventListenerInfos event_listener_infos;
  for (EventListenerInfos::iterator iter = event_listener_infos_.begin();
       iter != event_listener_infos_.end(); ++iter) {
    if ((*iter)->type == event->type()) {
      event_listener_infos.emplace_back(new EventListenerInfo(
          (*iter)->type,
          base::WrapUnique(
              new GenericEventHandlerReference(this, *(*iter)->listener)),
          (*iter)->use_capture, (*iter)->listener_type));
    }
  }

  for (EventListenerInfos::iterator iter = event_listener_infos.begin();
       iter != event_listener_infos.end(); ++iter) {
    if (event->immediate_propagation_stopped()) {
      continue;
    }
    // Only call listeners marked as capture during capturing phase.
    if (event->event_phase() == Event::kCapturingPhase &&
        !(*iter)->use_capture) {
      continue;
    }
    // Don't call any listeners marked as capture during bubbling phase.
    if (event->event_phase() == Event::kBubblingPhase && (*iter)->use_capture) {
      continue;
    }

    (*iter)->listener->HandleEvent(event, (*iter)->listener_type == kAttribute,
                                   unpack_onerror_events_);
  }

  event->set_current_target(NULL);
}

void EventTarget::TraceMembers(script::Tracer* tracer) {
  SB_UNREFERENCED_PARAMETER(tracer);
  // TODO: EventListenerInfo references can be removed and logically live here
  // instead.
}

void EventTarget::AddEventListenerInternal(
    base::CobToken type, std::unique_ptr<GenericEventHandlerReference> listener,
    bool use_capture, Type listener_type) {
  TRACK_MEMORY_SCOPE("DOM");

  if (listener->IsNull()) {
    return;
  }

  for (EventListenerInfos::iterator iter = event_listener_infos_.begin();
       iter != event_listener_infos_.end(); ++iter) {
    if ((*iter)->type == type && (*iter)->listener->EqualTo(*listener) &&
        (*iter)->use_capture == use_capture &&
        (*iter)->listener_type == listener_type) {
      // Attribute listeners should have already been removed.
      DCHECK_EQ(listener_type, kNotAttribute);
      return;
    }
  }

  event_listener_infos_.emplace_back(new EventListenerInfo(
      type, std::move(listener), use_capture, listener_type));
}

bool EventTarget::HasEventListener(base::CobToken type) {
  TRACK_MEMORY_SCOPE("DOM");

  for (EventListenerInfos::iterator iter = event_listener_infos_.begin();
       iter != event_listener_infos_.end(); ++iter) {
    if ((*iter)->type == type) {
      return true;
    }
  }
  return false;
}

EventTarget::EventListenerInfo::EventListenerInfo(
    base::CobToken type, std::unique_ptr<GenericEventHandlerReference> listener,
    bool use_capture, Type listener_type)
    : type(type),
      listener(std::move(listener)),
      use_capture(use_capture),
      listener_type(listener_type) {
  GlobalStats::GetInstance()->AddEventListener();
}

EventTarget::EventListenerInfo::~EventListenerInfo() {
  GlobalStats::GetInstance()->RemoveEventListener();
}

}  // namespace dom
}  // namespace cobalt
