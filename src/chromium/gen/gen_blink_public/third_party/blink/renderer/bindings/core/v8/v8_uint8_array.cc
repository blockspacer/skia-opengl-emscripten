// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_array.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shared_array_buffer.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_uint8_array_wrapper_type_info = {
    gin::kEmbedderBlink,
    nullptr,
    nullptr,
    "Uint8Array",
    V8ArrayBufferView::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMUint8Array>::value,
    "DOMUint8Array inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMUint8Array::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMUint8Array is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

DOMUint8Array* V8Uint8Array::ToImpl(v8::Local<v8::Object> object) {
  DCHECK(object->IsUint8Array());
  ScriptWrappable* script_wrappable = ToScriptWrappable(object);
  if (script_wrappable)
    return script_wrappable->ToImpl<DOMUint8Array>();

  v8::Local<v8::Uint8Array> v8_view = object.As<v8::Uint8Array>();
  v8::Local<v8::Object> array_buffer = v8_view->Buffer();
  DOMUint8Array* typed_array = nullptr;
  if (array_buffer->IsArrayBuffer()) {
    typed_array = DOMUint8Array::Create(
        V8ArrayBuffer::ToImpl(array_buffer),
        v8_view->ByteOffset(),
        v8_view->Length());
  } else if (array_buffer->IsSharedArrayBuffer()) {
    typed_array = DOMUint8Array::Create(
        V8SharedArrayBuffer::ToImpl(array_buffer),
        v8_view->ByteOffset(),
        v8_view->Length());
  } else {
    NOTREACHED();
  }
  v8::Local<v8::Object> associated_wrapper =
        typed_array->AssociateWithWrapper(
            v8::Isolate::GetCurrent(), typed_array->GetWrapperTypeInfo(), object);
  DCHECK(associated_wrapper == object);

  return typed_array->ToImpl<DOMUint8Array>();
}

DOMUint8Array* V8Uint8Array::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return value->IsUint8Array() ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMUint8Array* NativeValueTraits<DOMUint8Array>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMUint8Array* native_value = V8Uint8Array::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Uint8Array"));
  }
  return native_value;
}

}  // namespace blink
