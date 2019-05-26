// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_security_policy_violation_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SecurityPolicyViolationEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "blockedURI",
    "columnNumber",
    "disposition",
    "documentURI",
    "effectiveDirective",
    "lineNumber",
    "originalPolicy",
    "referrer",
    "sample",
    "sourceFile",
    "statusCode",
    "violatedDirective",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8SecurityPolicyViolationEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, SecurityPolicyViolationEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): disposition, documentURI, effectiveDirective, originalPolicy, statusCode, violatedDirective.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8SecurityPolicyViolationEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> blocked_uri_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&blocked_uri_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (blocked_uri_value.IsEmpty() || blocked_uri_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> blocked_uri_cpp_value = blocked_uri_value;
    if (!blocked_uri_cpp_value.Prepare(exception_state))
      return;
    impl->setBlockedURI(blocked_uri_cpp_value);
  }

  v8::Local<v8::Value> column_number_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&column_number_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (column_number_value.IsEmpty() || column_number_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t column_number_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, column_number_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setColumnNumber(column_number_cpp_value);
  }

  v8::Local<v8::Value> disposition_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&disposition_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (disposition_value.IsEmpty() || disposition_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member disposition is undefined.");
    return;
  } else {
    V8StringResource<> disposition_cpp_value = disposition_value;
    if (!disposition_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "enforce",
        "report",
    };
    if (!IsValidEnum(disposition_cpp_value, kValidValues, base::size(kValidValues), "SecurityPolicyViolationEventDisposition", exception_state))
      return;
    impl->setDisposition(disposition_cpp_value);
  }

  v8::Local<v8::Value> document_uri_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&document_uri_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (document_uri_value.IsEmpty() || document_uri_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member documentURI is undefined.");
    return;
  } else {
    V8StringResource<> document_uri_cpp_value = document_uri_value;
    if (!document_uri_cpp_value.Prepare(exception_state))
      return;
    impl->setDocumentURI(document_uri_cpp_value);
  }

  v8::Local<v8::Value> effective_directive_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&effective_directive_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (effective_directive_value.IsEmpty() || effective_directive_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member effectiveDirective is undefined.");
    return;
  } else {
    V8StringResource<> effective_directive_cpp_value = effective_directive_value;
    if (!effective_directive_cpp_value.Prepare(exception_state))
      return;
    impl->setEffectiveDirective(effective_directive_cpp_value);
  }

  v8::Local<v8::Value> line_number_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&line_number_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (line_number_value.IsEmpty() || line_number_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t line_number_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, line_number_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLineNumber(line_number_cpp_value);
  }

  v8::Local<v8::Value> original_policy_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&original_policy_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (original_policy_value.IsEmpty() || original_policy_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member originalPolicy is undefined.");
    return;
  } else {
    V8StringResource<> original_policy_cpp_value = original_policy_value;
    if (!original_policy_cpp_value.Prepare(exception_state))
      return;
    impl->setOriginalPolicy(original_policy_cpp_value);
  }

  v8::Local<v8::Value> referrer_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&referrer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (referrer_value.IsEmpty() || referrer_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> referrer_cpp_value = referrer_value;
    if (!referrer_cpp_value.Prepare(exception_state))
      return;
    impl->setReferrer(referrer_cpp_value);
  }

  v8::Local<v8::Value> sample_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&sample_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sample_value.IsEmpty() || sample_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> sample_cpp_value = sample_value;
    if (!sample_cpp_value.Prepare(exception_state))
      return;
    impl->setSample(sample_cpp_value);
  }

  v8::Local<v8::Value> source_file_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&source_file_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (source_file_value.IsEmpty() || source_file_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> source_file_cpp_value = source_file_value;
    if (!source_file_cpp_value.Prepare(exception_state))
      return;
    impl->setSourceFile(source_file_cpp_value);
  }

  v8::Local<v8::Value> status_code_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&status_code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (status_code_value.IsEmpty() || status_code_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member statusCode is undefined.");
    return;
  } else {
    uint16_t status_code_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, status_code_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStatusCode(status_code_cpp_value);
  }

  v8::Local<v8::Value> violated_directive_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&violated_directive_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (violated_directive_value.IsEmpty() || violated_directive_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member violatedDirective is undefined.");
    return;
  } else {
    V8StringResource<> violated_directive_cpp_value = violated_directive_value;
    if (!violated_directive_cpp_value.Prepare(exception_state))
      return;
    impl->setViolatedDirective(violated_directive_cpp_value);
  }
}

v8::Local<v8::Value> SecurityPolicyViolationEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SecurityPolicyViolationEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SecurityPolicyViolationEventInit(const SecurityPolicyViolationEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8SecurityPolicyViolationEventInitKeys(isolate);
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

  v8::Local<v8::Value> blocked_uri_value;
  bool blocked_uri_has_value_or_default = false;
  if (impl->hasBlockedURI()) {
    blocked_uri_value = V8String(isolate, impl->blockedURI());
    blocked_uri_has_value_or_default = true;
  }
  if (blocked_uri_has_value_or_default &&
      !create_property(0, blocked_uri_value)) {
    return false;
  }

  v8::Local<v8::Value> column_number_value;
  bool column_number_has_value_or_default = false;
  if (impl->hasColumnNumber()) {
    column_number_value = v8::Integer::New(isolate, impl->columnNumber());
    column_number_has_value_or_default = true;
  }
  if (column_number_has_value_or_default &&
      !create_property(1, column_number_value)) {
    return false;
  }

  v8::Local<v8::Value> disposition_value;
  bool disposition_has_value_or_default = false;
  if (impl->hasDisposition()) {
    disposition_value = V8String(isolate, impl->disposition());
    disposition_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (disposition_has_value_or_default &&
      !create_property(2, disposition_value)) {
    return false;
  }

  v8::Local<v8::Value> document_uri_value;
  bool document_uri_has_value_or_default = false;
  if (impl->hasDocumentURI()) {
    document_uri_value = V8String(isolate, impl->documentURI());
    document_uri_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (document_uri_has_value_or_default &&
      !create_property(3, document_uri_value)) {
    return false;
  }

  v8::Local<v8::Value> effective_directive_value;
  bool effective_directive_has_value_or_default = false;
  if (impl->hasEffectiveDirective()) {
    effective_directive_value = V8String(isolate, impl->effectiveDirective());
    effective_directive_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (effective_directive_has_value_or_default &&
      !create_property(4, effective_directive_value)) {
    return false;
  }

  v8::Local<v8::Value> line_number_value;
  bool line_number_has_value_or_default = false;
  if (impl->hasLineNumber()) {
    line_number_value = v8::Integer::New(isolate, impl->lineNumber());
    line_number_has_value_or_default = true;
  }
  if (line_number_has_value_or_default &&
      !create_property(5, line_number_value)) {
    return false;
  }

  v8::Local<v8::Value> original_policy_value;
  bool original_policy_has_value_or_default = false;
  if (impl->hasOriginalPolicy()) {
    original_policy_value = V8String(isolate, impl->originalPolicy());
    original_policy_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (original_policy_has_value_or_default &&
      !create_property(6, original_policy_value)) {
    return false;
  }

  v8::Local<v8::Value> referrer_value;
  bool referrer_has_value_or_default = false;
  if (impl->hasReferrer()) {
    referrer_value = V8String(isolate, impl->referrer());
    referrer_has_value_or_default = true;
  }
  if (referrer_has_value_or_default &&
      !create_property(7, referrer_value)) {
    return false;
  }

  v8::Local<v8::Value> sample_value;
  bool sample_has_value_or_default = false;
  if (impl->hasSample()) {
    sample_value = V8String(isolate, impl->sample());
    sample_has_value_or_default = true;
  }
  if (sample_has_value_or_default &&
      !create_property(8, sample_value)) {
    return false;
  }

  v8::Local<v8::Value> source_file_value;
  bool source_file_has_value_or_default = false;
  if (impl->hasSourceFile()) {
    source_file_value = V8String(isolate, impl->sourceFile());
    source_file_has_value_or_default = true;
  }
  if (source_file_has_value_or_default &&
      !create_property(9, source_file_value)) {
    return false;
  }

  v8::Local<v8::Value> status_code_value;
  bool status_code_has_value_or_default = false;
  if (impl->hasStatusCode()) {
    status_code_value = v8::Integer::NewFromUnsigned(isolate, impl->statusCode());
    status_code_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (status_code_has_value_or_default &&
      !create_property(10, status_code_value)) {
    return false;
  }

  v8::Local<v8::Value> violated_directive_value;
  bool violated_directive_has_value_or_default = false;
  if (impl->hasViolatedDirective()) {
    violated_directive_value = V8String(isolate, impl->violatedDirective());
    violated_directive_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (violated_directive_has_value_or_default &&
      !create_property(11, violated_directive_value)) {
    return false;
  }

  return true;
}

SecurityPolicyViolationEventInit* NativeValueTraits<SecurityPolicyViolationEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SecurityPolicyViolationEventInit* impl = SecurityPolicyViolationEventInit::Create();
  V8SecurityPolicyViolationEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
