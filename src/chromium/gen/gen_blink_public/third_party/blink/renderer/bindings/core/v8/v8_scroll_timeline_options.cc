// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_timeline_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ScrollTimelineOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "endScrollOffset",
    "fill",
    "orientation",
    "scrollSource",
    "startScrollOffset",
    "timeRange",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ScrollTimelineOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ScrollTimelineOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollTimelineOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> end_scroll_offset_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&end_scroll_offset_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (end_scroll_offset_value.IsEmpty() || end_scroll_offset_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> end_scroll_offset_cpp_value = end_scroll_offset_value;
    if (!end_scroll_offset_cpp_value.Prepare(exception_state))
      return;
    impl->setEndScrollOffset(end_scroll_offset_cpp_value);
  }

  v8::Local<v8::Value> fill_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&fill_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fill_value.IsEmpty() || fill_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> fill_cpp_value = fill_value;
    if (!fill_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "none",
        "forwards",
        "backwards",
        "both",
        "auto",
    };
    if (!IsValidEnum(fill_cpp_value, kValidValues, base::size(kValidValues), "FillMode", exception_state))
      return;
    impl->setFill(fill_cpp_value);
  }

  v8::Local<v8::Value> orientation_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&orientation_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (orientation_value.IsEmpty() || orientation_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> orientation_cpp_value = orientation_value;
    if (!orientation_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "block",
        "inline",
        "horizontal",
        "vertical",
    };
    if (!IsValidEnum(orientation_cpp_value, kValidValues, base::size(kValidValues), "ScrollDirection", exception_state))
      return;
    impl->setOrientation(orientation_cpp_value);
  }

  v8::Local<v8::Value> scroll_source_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&scroll_source_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (scroll_source_value.IsEmpty() || scroll_source_value->IsUndefined()) {
    // Do nothing.
  } else if (scroll_source_value->IsNull()) {
    impl->setScrollSourceToNull();
  } else {
    Element* scroll_source_cpp_value = V8Element::ToImplWithTypeCheck(isolate, scroll_source_value);
    if (!scroll_source_cpp_value) {
      exception_state.ThrowTypeError("member scrollSource is not of type Element.");
      return;
    }
    impl->setScrollSource(scroll_source_cpp_value);
  }

  v8::Local<v8::Value> start_scroll_offset_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&start_scroll_offset_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (start_scroll_offset_value.IsEmpty() || start_scroll_offset_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> start_scroll_offset_cpp_value = start_scroll_offset_value;
    if (!start_scroll_offset_cpp_value.Prepare(exception_state))
      return;
    impl->setStartScrollOffset(start_scroll_offset_cpp_value);
  }

  v8::Local<v8::Value> time_range_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&time_range_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (time_range_value.IsEmpty() || time_range_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrScrollTimelineAutoKeyword time_range_cpp_value;
    V8DoubleOrScrollTimelineAutoKeyword::ToImpl(isolate, time_range_value, time_range_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTimeRange(time_range_cpp_value);
  }
}

v8::Local<v8::Value> ScrollTimelineOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ScrollTimelineOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ScrollTimelineOptions(const ScrollTimelineOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ScrollTimelineOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> end_scroll_offset_value;
  bool end_scroll_offset_has_value_or_default = false;
  if (impl->hasEndScrollOffset()) {
    end_scroll_offset_value = V8String(isolate, impl->endScrollOffset());
    end_scroll_offset_has_value_or_default = true;
  } else {
    end_scroll_offset_value = V8String(isolate, "auto");
    end_scroll_offset_has_value_or_default = true;
  }
  if (end_scroll_offset_has_value_or_default &&
      !create_property(0, end_scroll_offset_value)) {
    return false;
  }

  v8::Local<v8::Value> fill_value;
  bool fill_has_value_or_default = false;
  if (impl->hasFill()) {
    fill_value = V8String(isolate, impl->fill());
    fill_has_value_or_default = true;
  } else {
    fill_value = V8String(isolate, "none");
    fill_has_value_or_default = true;
  }
  if (fill_has_value_or_default &&
      !create_property(1, fill_value)) {
    return false;
  }

  v8::Local<v8::Value> orientation_value;
  bool orientation_has_value_or_default = false;
  if (impl->hasOrientation()) {
    orientation_value = V8String(isolate, impl->orientation());
    orientation_has_value_or_default = true;
  } else {
    orientation_value = V8String(isolate, "block");
    orientation_has_value_or_default = true;
  }
  if (orientation_has_value_or_default &&
      !create_property(2, orientation_value)) {
    return false;
  }

  v8::Local<v8::Value> scroll_source_value;
  bool scroll_source_has_value_or_default = false;
  if (impl->hasScrollSource()) {
    scroll_source_value = ToV8(impl->scrollSource(), creationContext, isolate);
    scroll_source_has_value_or_default = true;
  } else {
    scroll_source_value = v8::Null(isolate);
    scroll_source_has_value_or_default = true;
  }
  if (scroll_source_has_value_or_default &&
      !create_property(3, scroll_source_value)) {
    return false;
  }

  v8::Local<v8::Value> start_scroll_offset_value;
  bool start_scroll_offset_has_value_or_default = false;
  if (impl->hasStartScrollOffset()) {
    start_scroll_offset_value = V8String(isolate, impl->startScrollOffset());
    start_scroll_offset_has_value_or_default = true;
  } else {
    start_scroll_offset_value = V8String(isolate, "auto");
    start_scroll_offset_has_value_or_default = true;
  }
  if (start_scroll_offset_has_value_or_default &&
      !create_property(4, start_scroll_offset_value)) {
    return false;
  }

  v8::Local<v8::Value> time_range_value;
  bool time_range_has_value_or_default = false;
  if (impl->hasTimeRange()) {
    time_range_value = ToV8(impl->timeRange(), creationContext, isolate);
    time_range_has_value_or_default = true;
  } else {
    time_range_value = ToV8(DoubleOrScrollTimelineAutoKeyword::FromScrollTimelineAutoKeyword("auto"), creationContext, isolate);
    time_range_has_value_or_default = true;
  }
  if (time_range_has_value_or_default &&
      !create_property(5, time_range_value)) {
    return false;
  }

  return true;
}

ScrollTimelineOptions* NativeValueTraits<ScrollTimelineOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ScrollTimelineOptions* impl = ScrollTimelineOptions::Create();
  V8ScrollTimelineOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
