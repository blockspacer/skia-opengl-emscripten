// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_frame.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8XRInputSourceEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "buttonIndex",
    "frame",
    "inputSource",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8XRInputSourceEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, XRInputSourceEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): frame, inputSource.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8XRInputSourceEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> button_index_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&button_index_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (button_index_value.IsEmpty() || button_index_value->IsUndefined()) {
    // Do nothing.
  } else if (button_index_value->IsNull()) {
    impl->setButtonIndexToNull();
  } else {
    int32_t button_index_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, button_index_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setButtonIndex(button_index_cpp_value);
  }

  v8::Local<v8::Value> frame_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&frame_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (frame_value.IsEmpty() || frame_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member frame is undefined.");
    return;
  } else {
    XRFrame* frame_cpp_value = V8XRFrame::ToImplWithTypeCheck(isolate, frame_value);
    if (!frame_cpp_value) {
      exception_state.ThrowTypeError("member frame is not of type XRFrame.");
      return;
    }
    impl->setFrame(frame_cpp_value);
  }

  v8::Local<v8::Value> input_source_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&input_source_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (input_source_value.IsEmpty() || input_source_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member inputSource is undefined.");
    return;
  } else {
    XRInputSource* input_source_cpp_value = V8XRInputSource::ToImplWithTypeCheck(isolate, input_source_value);
    if (!input_source_cpp_value) {
      exception_state.ThrowTypeError("member inputSource is not of type XRInputSource.");
      return;
    }
    impl->setInputSource(input_source_cpp_value);
  }
}

v8::Local<v8::Value> XRInputSourceEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8XRInputSourceEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8XRInputSourceEventInit(const XRInputSourceEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8XRInputSourceEventInitKeys(isolate);
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

  v8::Local<v8::Value> button_index_value;
  bool button_index_has_value_or_default = false;
  if (impl->hasButtonIndex()) {
    button_index_value = v8::Integer::New(isolate, impl->buttonIndex());
    button_index_has_value_or_default = true;
  } else {
    button_index_value = v8::Null(isolate);
    button_index_has_value_or_default = true;
  }
  if (button_index_has_value_or_default &&
      !create_property(0, button_index_value)) {
    return false;
  }

  v8::Local<v8::Value> frame_value;
  bool frame_has_value_or_default = false;
  if (impl->hasFrame()) {
    frame_value = ToV8(impl->frame(), creationContext, isolate);
    frame_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (frame_has_value_or_default &&
      !create_property(1, frame_value)) {
    return false;
  }

  v8::Local<v8::Value> input_source_value;
  bool input_source_has_value_or_default = false;
  if (impl->hasInputSource()) {
    input_source_value = ToV8(impl->inputSource(), creationContext, isolate);
    input_source_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (input_source_has_value_or_default &&
      !create_property(2, input_source_value)) {
    return false;
  }

  return true;
}

XRInputSourceEventInit* NativeValueTraits<XRInputSourceEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  XRInputSourceEventInit* impl = XRInputSourceEventInit::Create();
  V8XRInputSourceEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
