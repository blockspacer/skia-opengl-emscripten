// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/event_listener_options_or_boolean.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

EventListenerOptionsOrBoolean::EventListenerOptionsOrBoolean() : type_(SpecificType::kNone) {}

bool EventListenerOptionsOrBoolean::GetAsBoolean() const {
  DCHECK(IsBoolean());
  return boolean_;
}

void EventListenerOptionsOrBoolean::SetBoolean(bool value) {
  DCHECK(IsNull());
  boolean_ = value;
  type_ = SpecificType::kBoolean;
}

EventListenerOptionsOrBoolean EventListenerOptionsOrBoolean::FromBoolean(bool value) {
  EventListenerOptionsOrBoolean container;
  container.SetBoolean(value);
  return container;
}

EventListenerOptions* EventListenerOptionsOrBoolean::GetAsEventListenerOptions() const {
  DCHECK(IsEventListenerOptions());
  return event_listener_options_;
}

void EventListenerOptionsOrBoolean::SetEventListenerOptions(EventListenerOptions* value) {
  DCHECK(IsNull());
  event_listener_options_ = value;
  type_ = SpecificType::kEventListenerOptions;
}

EventListenerOptionsOrBoolean EventListenerOptionsOrBoolean::FromEventListenerOptions(EventListenerOptions* value) {
  EventListenerOptionsOrBoolean container;
  container.SetEventListenerOptions(value);
  return container;
}

EventListenerOptionsOrBoolean::EventListenerOptionsOrBoolean(const EventListenerOptionsOrBoolean&) = default;
EventListenerOptionsOrBoolean::~EventListenerOptionsOrBoolean() = default;
EventListenerOptionsOrBoolean& EventListenerOptionsOrBoolean::operator=(const EventListenerOptionsOrBoolean&) = default;

void EventListenerOptionsOrBoolean::Trace(blink::Visitor* visitor) {
  visitor->Trace(event_listener_options_);
}

void V8EventListenerOptionsOrBoolean::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    EventListenerOptionsOrBoolean& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    EventListenerOptions* cpp_value = NativeValueTraits<EventListenerOptions>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetEventListenerOptions(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    EventListenerOptions* cpp_value = NativeValueTraits<EventListenerOptions>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetEventListenerOptions(cpp_value);
    return;
  }

  if (v8_value->IsBoolean()) {
    impl.SetBoolean(v8_value.As<v8::Boolean>()->Value());
    return;
  }

  {
    impl.SetBoolean(v8_value->BooleanValue(isolate));
    return;
  }
}

v8::Local<v8::Value> ToV8(const EventListenerOptionsOrBoolean& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case EventListenerOptionsOrBoolean::SpecificType::kNone:
      return v8::Null(isolate);
    case EventListenerOptionsOrBoolean::SpecificType::kBoolean:
      return v8::Boolean::New(isolate, impl.GetAsBoolean());
    case EventListenerOptionsOrBoolean::SpecificType::kEventListenerOptions:
      return ToV8(impl.GetAsEventListenerOptions(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

EventListenerOptionsOrBoolean NativeValueTraits<EventListenerOptionsOrBoolean>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  EventListenerOptionsOrBoolean impl;
  V8EventListenerOptionsOrBoolean::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
