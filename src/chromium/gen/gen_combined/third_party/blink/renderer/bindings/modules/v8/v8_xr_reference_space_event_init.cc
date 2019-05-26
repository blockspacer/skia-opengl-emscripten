// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_reference_space_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_reference_space.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_rigid_transform.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8XRReferenceSpaceEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "referenceSpace",
    "transform",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8XRReferenceSpaceEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, XRReferenceSpaceEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): referenceSpace.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8XRReferenceSpaceEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> reference_space_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&reference_space_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (reference_space_value.IsEmpty() || reference_space_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member referenceSpace is undefined.");
    return;
  } else {
    XRReferenceSpace* reference_space_cpp_value = V8XRReferenceSpace::ToImplWithTypeCheck(isolate, reference_space_value);
    if (!reference_space_cpp_value) {
      exception_state.ThrowTypeError("member referenceSpace is not of type XRReferenceSpace.");
      return;
    }
    impl->setReferenceSpace(reference_space_cpp_value);
  }

  v8::Local<v8::Value> transform_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&transform_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (transform_value.IsEmpty() || transform_value->IsUndefined()) {
    // Do nothing.
  } else {
    XRRigidTransform* transform_cpp_value = V8XRRigidTransform::ToImplWithTypeCheck(isolate, transform_value);
    if (!transform_cpp_value) {
      exception_state.ThrowTypeError("member transform is not of type XRRigidTransform.");
      return;
    }
    impl->setTransform(transform_cpp_value);
  }
}

v8::Local<v8::Value> XRReferenceSpaceEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8XRReferenceSpaceEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8XRReferenceSpaceEventInit(const XRReferenceSpaceEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8XRReferenceSpaceEventInitKeys(isolate);
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

  v8::Local<v8::Value> reference_space_value;
  bool reference_space_has_value_or_default = false;
  if (impl->hasReferenceSpace()) {
    reference_space_value = ToV8(impl->referenceSpace(), creationContext, isolate);
    reference_space_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (reference_space_has_value_or_default &&
      !create_property(0, reference_space_value)) {
    return false;
  }

  v8::Local<v8::Value> transform_value;
  bool transform_has_value_or_default = false;
  if (impl->hasTransform()) {
    transform_value = ToV8(impl->transform(), creationContext, isolate);
    transform_has_value_or_default = true;
  }
  if (transform_has_value_or_default &&
      !create_property(1, transform_value)) {
    return false;
  }

  return true;
}

XRReferenceSpaceEventInit* NativeValueTraits<XRReferenceSpaceEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  XRReferenceSpaceEventInit* impl = XRReferenceSpaceEventInit::Create();
  V8XRReferenceSpaceEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
