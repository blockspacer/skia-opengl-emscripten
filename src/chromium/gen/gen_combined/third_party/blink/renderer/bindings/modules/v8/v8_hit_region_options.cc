// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_hit_region_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8HitRegionOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "control",
    "fillRule",
    "id",
    "path",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8HitRegionOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, HitRegionOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8HitRegionOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> control_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&control_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (control_value.IsEmpty() || control_value->IsUndefined()) {
    // Do nothing.
  } else if (control_value->IsNull()) {
    impl->setControlToNull();
  } else {
    Element* control_cpp_value = V8Element::ToImplWithTypeCheck(isolate, control_value);
    if (!control_cpp_value) {
      exception_state.ThrowTypeError("member control is not of type Element.");
      return;
    }
    impl->setControl(control_cpp_value);
  }

  v8::Local<v8::Value> fill_rule_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&fill_rule_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fill_rule_value.IsEmpty() || fill_rule_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> fill_rule_cpp_value = fill_rule_value;
    if (!fill_rule_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "nonzero",
        "evenodd",
    };
    if (!IsValidEnum(fill_rule_cpp_value, kValidValues, base::size(kValidValues), "CanvasFillRule", exception_state))
      return;
    impl->setFillRule(fill_rule_cpp_value);
  }

  v8::Local<v8::Value> id_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (id_value.IsEmpty() || id_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> id_cpp_value = id_value;
    if (!id_cpp_value.Prepare(exception_state))
      return;
    impl->setId(id_cpp_value);
  }

  v8::Local<v8::Value> path_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&path_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (path_value.IsEmpty() || path_value->IsUndefined()) {
    // Do nothing.
  } else if (path_value->IsNull()) {
    impl->setPathToNull();
  } else {
    Path2D* path_cpp_value = V8Path2D::ToImplWithTypeCheck(isolate, path_value);
    if (!path_cpp_value) {
      exception_state.ThrowTypeError("member path is not of type Path2D.");
      return;
    }
    impl->setPath(path_cpp_value);
  }
}

v8::Local<v8::Value> HitRegionOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8HitRegionOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8HitRegionOptions(const HitRegionOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8HitRegionOptionsKeys(isolate);
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

  v8::Local<v8::Value> control_value;
  bool control_has_value_or_default = false;
  if (impl->hasControl()) {
    control_value = ToV8(impl->control(), creationContext, isolate);
    control_has_value_or_default = true;
  } else {
    control_value = v8::Null(isolate);
    control_has_value_or_default = true;
  }
  if (control_has_value_or_default &&
      !create_property(0, control_value)) {
    return false;
  }

  v8::Local<v8::Value> fill_rule_value;
  bool fill_rule_has_value_or_default = false;
  if (impl->hasFillRule()) {
    fill_rule_value = V8String(isolate, impl->fillRule());
    fill_rule_has_value_or_default = true;
  } else {
    fill_rule_value = V8String(isolate, "nonzero");
    fill_rule_has_value_or_default = true;
  }
  if (fill_rule_has_value_or_default &&
      !create_property(1, fill_rule_value)) {
    return false;
  }

  v8::Local<v8::Value> id_value;
  bool id_has_value_or_default = false;
  if (impl->hasId()) {
    id_value = V8String(isolate, impl->id());
    id_has_value_or_default = true;
  } else {
    id_value = V8String(isolate, WTF::g_empty_string);
    id_has_value_or_default = true;
  }
  if (id_has_value_or_default &&
      !create_property(2, id_value)) {
    return false;
  }

  v8::Local<v8::Value> path_value;
  bool path_has_value_or_default = false;
  if (impl->hasPath()) {
    path_value = ToV8(impl->path(), creationContext, isolate);
    path_has_value_or_default = true;
  } else {
    path_value = v8::Null(isolate);
    path_has_value_or_default = true;
  }
  if (path_has_value_or_default &&
      !create_property(3, path_value)) {
    return false;
  }

  return true;
}

HitRegionOptions* NativeValueTraits<HitRegionOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HitRegionOptions* impl = HitRegionOptions::Create();
  V8HitRegionOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
