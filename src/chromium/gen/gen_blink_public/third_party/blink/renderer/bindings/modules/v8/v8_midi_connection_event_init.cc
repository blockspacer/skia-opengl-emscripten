// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_connection_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_port.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MIDIConnectionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "port",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MIDIConnectionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MIDIConnectionEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8MIDIConnectionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> port_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&port_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (port_value.IsEmpty() || port_value->IsUndefined()) {
    // Do nothing.
  } else if (port_value->IsNull()) {
    impl->setPortToNull();
  } else {
    MIDIPort* port_cpp_value = V8MIDIPort::ToImplWithTypeCheck(isolate, port_value);
    if (!port_cpp_value) {
      exception_state.ThrowTypeError("member port is not of type MIDIPort.");
      return;
    }
    impl->setPort(port_cpp_value);
  }
}

v8::Local<v8::Value> MIDIConnectionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MIDIConnectionEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MIDIConnectionEventInit(const MIDIConnectionEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MIDIConnectionEventInitKeys(isolate);
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

  v8::Local<v8::Value> port_value;
  bool port_has_value_or_default = false;
  if (impl->hasPort()) {
    port_value = ToV8(impl->port(), creationContext, isolate);
    port_has_value_or_default = true;
  }
  if (port_has_value_or_default &&
      !create_property(0, port_value)) {
    return false;
  }

  return true;
}

MIDIConnectionEventInit* NativeValueTraits<MIDIConnectionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MIDIConnectionEventInit* impl = MIDIConnectionEventInit::Create();
  V8MIDIConnectionEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
