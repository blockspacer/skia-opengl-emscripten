// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_event_modifier_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_ui_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8EventModifierInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "altKey",
    "ctrlKey",
    "metaKey",
    "modifierAltGraph",
    "modifierCapsLock",
    "modifierFn",
    "modifierNumLock",
    "modifierScrollLock",
    "modifierSymbol",
    "shiftKey",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8EventModifierInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, EventModifierInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8UIEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8EventModifierInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alt_key_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&alt_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (alt_key_value.IsEmpty() || alt_key_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool alt_key_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, alt_key_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAltKey(alt_key_cpp_value);
  }

  v8::Local<v8::Value> ctrl_key_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&ctrl_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ctrl_key_value.IsEmpty() || ctrl_key_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool ctrl_key_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ctrl_key_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCtrlKey(ctrl_key_cpp_value);
  }

  v8::Local<v8::Value> meta_key_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&meta_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (meta_key_value.IsEmpty() || meta_key_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool meta_key_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, meta_key_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMetaKey(meta_key_cpp_value);
  }

  v8::Local<v8::Value> modifier_alt_graph_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&modifier_alt_graph_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifier_alt_graph_value.IsEmpty() || modifier_alt_graph_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifier_alt_graph_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifier_alt_graph_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setModifierAltGraph(modifier_alt_graph_cpp_value);
  }

  v8::Local<v8::Value> modifier_caps_lock_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&modifier_caps_lock_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifier_caps_lock_value.IsEmpty() || modifier_caps_lock_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifier_caps_lock_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifier_caps_lock_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setModifierCapsLock(modifier_caps_lock_cpp_value);
  }

  v8::Local<v8::Value> modifier_fn_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&modifier_fn_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifier_fn_value.IsEmpty() || modifier_fn_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifier_fn_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifier_fn_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setModifierFn(modifier_fn_cpp_value);
  }

  v8::Local<v8::Value> modifier_num_lock_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&modifier_num_lock_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifier_num_lock_value.IsEmpty() || modifier_num_lock_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifier_num_lock_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifier_num_lock_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setModifierNumLock(modifier_num_lock_cpp_value);
  }

  v8::Local<v8::Value> modifier_scroll_lock_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&modifier_scroll_lock_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifier_scroll_lock_value.IsEmpty() || modifier_scroll_lock_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifier_scroll_lock_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifier_scroll_lock_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setModifierScrollLock(modifier_scroll_lock_cpp_value);
  }

  v8::Local<v8::Value> modifier_symbol_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&modifier_symbol_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifier_symbol_value.IsEmpty() || modifier_symbol_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool modifier_symbol_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, modifier_symbol_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setModifierSymbol(modifier_symbol_cpp_value);
  }

  v8::Local<v8::Value> shift_key_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&shift_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (shift_key_value.IsEmpty() || shift_key_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool shift_key_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, shift_key_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setShiftKey(shift_key_cpp_value);
  }
}

v8::Local<v8::Value> EventModifierInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8EventModifierInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8EventModifierInit(const EventModifierInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8UIEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8EventModifierInitKeys(isolate);
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

  v8::Local<v8::Value> alt_key_value;
  bool alt_key_has_value_or_default = false;
  if (impl->hasAltKey()) {
    alt_key_value = v8::Boolean::New(isolate, impl->altKey());
    alt_key_has_value_or_default = true;
  } else {
    alt_key_value = v8::Boolean::New(isolate, false);
    alt_key_has_value_or_default = true;
  }
  if (alt_key_has_value_or_default &&
      !create_property(0, alt_key_value)) {
    return false;
  }

  v8::Local<v8::Value> ctrl_key_value;
  bool ctrl_key_has_value_or_default = false;
  if (impl->hasCtrlKey()) {
    ctrl_key_value = v8::Boolean::New(isolate, impl->ctrlKey());
    ctrl_key_has_value_or_default = true;
  } else {
    ctrl_key_value = v8::Boolean::New(isolate, false);
    ctrl_key_has_value_or_default = true;
  }
  if (ctrl_key_has_value_or_default &&
      !create_property(1, ctrl_key_value)) {
    return false;
  }

  v8::Local<v8::Value> meta_key_value;
  bool meta_key_has_value_or_default = false;
  if (impl->hasMetaKey()) {
    meta_key_value = v8::Boolean::New(isolate, impl->metaKey());
    meta_key_has_value_or_default = true;
  } else {
    meta_key_value = v8::Boolean::New(isolate, false);
    meta_key_has_value_or_default = true;
  }
  if (meta_key_has_value_or_default &&
      !create_property(2, meta_key_value)) {
    return false;
  }

  v8::Local<v8::Value> modifier_alt_graph_value;
  bool modifier_alt_graph_has_value_or_default = false;
  if (impl->hasModifierAltGraph()) {
    modifier_alt_graph_value = v8::Boolean::New(isolate, impl->modifierAltGraph());
    modifier_alt_graph_has_value_or_default = true;
  } else {
    modifier_alt_graph_value = v8::Boolean::New(isolate, false);
    modifier_alt_graph_has_value_or_default = true;
  }
  if (modifier_alt_graph_has_value_or_default &&
      !create_property(3, modifier_alt_graph_value)) {
    return false;
  }

  v8::Local<v8::Value> modifier_caps_lock_value;
  bool modifier_caps_lock_has_value_or_default = false;
  if (impl->hasModifierCapsLock()) {
    modifier_caps_lock_value = v8::Boolean::New(isolate, impl->modifierCapsLock());
    modifier_caps_lock_has_value_or_default = true;
  } else {
    modifier_caps_lock_value = v8::Boolean::New(isolate, false);
    modifier_caps_lock_has_value_or_default = true;
  }
  if (modifier_caps_lock_has_value_or_default &&
      !create_property(4, modifier_caps_lock_value)) {
    return false;
  }

  v8::Local<v8::Value> modifier_fn_value;
  bool modifier_fn_has_value_or_default = false;
  if (impl->hasModifierFn()) {
    modifier_fn_value = v8::Boolean::New(isolate, impl->modifierFn());
    modifier_fn_has_value_or_default = true;
  } else {
    modifier_fn_value = v8::Boolean::New(isolate, false);
    modifier_fn_has_value_or_default = true;
  }
  if (modifier_fn_has_value_or_default &&
      !create_property(5, modifier_fn_value)) {
    return false;
  }

  v8::Local<v8::Value> modifier_num_lock_value;
  bool modifier_num_lock_has_value_or_default = false;
  if (impl->hasModifierNumLock()) {
    modifier_num_lock_value = v8::Boolean::New(isolate, impl->modifierNumLock());
    modifier_num_lock_has_value_or_default = true;
  } else {
    modifier_num_lock_value = v8::Boolean::New(isolate, false);
    modifier_num_lock_has_value_or_default = true;
  }
  if (modifier_num_lock_has_value_or_default &&
      !create_property(6, modifier_num_lock_value)) {
    return false;
  }

  v8::Local<v8::Value> modifier_scroll_lock_value;
  bool modifier_scroll_lock_has_value_or_default = false;
  if (impl->hasModifierScrollLock()) {
    modifier_scroll_lock_value = v8::Boolean::New(isolate, impl->modifierScrollLock());
    modifier_scroll_lock_has_value_or_default = true;
  } else {
    modifier_scroll_lock_value = v8::Boolean::New(isolate, false);
    modifier_scroll_lock_has_value_or_default = true;
  }
  if (modifier_scroll_lock_has_value_or_default &&
      !create_property(7, modifier_scroll_lock_value)) {
    return false;
  }

  v8::Local<v8::Value> modifier_symbol_value;
  bool modifier_symbol_has_value_or_default = false;
  if (impl->hasModifierSymbol()) {
    modifier_symbol_value = v8::Boolean::New(isolate, impl->modifierSymbol());
    modifier_symbol_has_value_or_default = true;
  } else {
    modifier_symbol_value = v8::Boolean::New(isolate, false);
    modifier_symbol_has_value_or_default = true;
  }
  if (modifier_symbol_has_value_or_default &&
      !create_property(8, modifier_symbol_value)) {
    return false;
  }

  v8::Local<v8::Value> shift_key_value;
  bool shift_key_has_value_or_default = false;
  if (impl->hasShiftKey()) {
    shift_key_value = v8::Boolean::New(isolate, impl->shiftKey());
    shift_key_has_value_or_default = true;
  } else {
    shift_key_value = v8::Boolean::New(isolate, false);
    shift_key_has_value_or_default = true;
  }
  if (shift_key_has_value_or_default &&
      !create_property(9, shift_key_value)) {
    return false;
  }

  return true;
}

EventModifierInit* NativeValueTraits<EventModifierInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  EventModifierInit* impl = EventModifierInit::Create();
  V8EventModifierInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
