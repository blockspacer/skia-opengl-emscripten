// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_subtle_crypto.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto_key.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_subtle_crypto_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SubtleCrypto::DomTemplate,
    nullptr,
    "SubtleCrypto",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SubtleCrypto.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SubtleCrypto::wrapper_type_info_ = v8_subtle_crypto_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SubtleCrypto>::value,
    "SubtleCrypto inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SubtleCrypto::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SubtleCrypto is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace subtle_crypto_v8_internal {

static void EncryptMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "encrypt");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* key;
  ArrayBufferOrArrayBufferView data;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[2], data, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->encrypt(script_state, algorithm, key, data);
  V8SetReturnValue(info, result.V8Value());
}

static void DecryptMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "decrypt");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* key;
  ArrayBufferOrArrayBufferView data;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[2], data, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->decrypt(script_state, algorithm, key, data);
  V8SetReturnValue(info, result.V8Value());
}

static void SignMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "sign");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* key;
  ArrayBufferOrArrayBufferView data;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[2], data, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->sign(script_state, algorithm, key, data);
  V8SetReturnValue(info, result.V8Value());
}

static void VerifyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "verify");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* key;
  ArrayBufferOrArrayBufferView signature;
  ArrayBufferOrArrayBufferView data;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[2], signature, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[3], data, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->verifySignature(script_state, algorithm, key, signature, data);
  V8SetReturnValue(info, result.V8Value());
}

static void DigestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "digest");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  ArrayBufferOrArrayBufferView data;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[1], data, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->digest(script_state, algorithm, data);
  V8SetReturnValue(info, result.V8Value());
}

static void GenerateKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "generateKey");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  bool extractable;
  Vector<String> key_usages;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  extractable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  key_usages = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->generateKey(script_state, algorithm, extractable, key_usages);
  V8SetReturnValue(info, result.V8Value());
}

static void DeriveKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "deriveKey");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* base_key;
  DictionaryOrString derived_key_type;
  bool extractable;
  Vector<String> key_usages;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  base_key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!base_key) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[2], derived_key_type, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  extractable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  key_usages = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->deriveKey(script_state, algorithm, base_key, derived_key_type, extractable, key_usages);
  V8SetReturnValue(info, result.V8Value());
}

static void DeriveBitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "deriveBits");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  DictionaryOrString algorithm;
  CryptoKey* base_key;
  uint32_t length;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  base_key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!base_key) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->deriveBits(script_state, algorithm, base_key, length);
  V8SetReturnValue(info, result.V8Value());
}

static void ImportKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "importKey");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  V8StringResource<> format;
  ArrayBufferOrArrayBufferViewOrDictionary key_data;
  DictionaryOrString algorithm;
  bool extractable;
  Vector<String> key_usages;
  format = info[0];
  if (!format.Prepare(exception_state))
    return;

  V8ArrayBufferOrArrayBufferViewOrDictionary::ToImpl(info.GetIsolate(), info[1], key_data, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[2], algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  extractable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  key_usages = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->importKey(script_state, format, key_data, algorithm, extractable, key_usages);
  V8SetReturnValue(info, result.V8Value());
}

static void ExportKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "exportKey");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> format;
  CryptoKey* key;
  format = info[0];
  if (!format.Prepare(exception_state))
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  ScriptPromise result = impl->exportKey(script_state, format, key);
  V8SetReturnValue(info, result.V8Value());
}

static void WrapKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "wrapKey");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  V8StringResource<> format;
  CryptoKey* key;
  CryptoKey* wrapping_key;
  DictionaryOrString wrap_algorithm;
  format = info[0];
  if (!format.Prepare(exception_state))
    return;

  key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!key) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'CryptoKey'.");
    return;
  }

  wrapping_key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!wrapping_key) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'CryptoKey'.");
    return;
  }

  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[3], wrap_algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->wrapKey(script_state, format, key, wrapping_key, wrap_algorithm);
  V8SetReturnValue(info, result.V8Value());
}

static void UnwrapKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SubtleCrypto", "unwrapKey");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8SubtleCrypto::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  SubtleCrypto* impl = V8SubtleCrypto::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 7)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

  V8StringResource<> format;
  ArrayBufferOrArrayBufferView wrapped_key;
  CryptoKey* unwrapping_key;
  DictionaryOrString unwrap_algorithm;
  DictionaryOrString unwrapped_key_algorithm;
  bool extractable;
  Vector<String> key_usages;
  format = info[0];
  if (!format.Prepare(exception_state))
    return;

  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[1], wrapped_key, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  unwrapping_key = V8CryptoKey::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!unwrapping_key) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'CryptoKey'.");
    return;
  }

  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[3], unwrap_algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[4], unwrapped_key_algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  extractable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  key_usages = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->unwrapKey(script_state, format, wrapped_key, unwrapping_key, unwrap_algorithm, unwrapped_key_algorithm, extractable, key_usages);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace subtle_crypto_v8_internal

void V8SubtleCrypto::EncryptMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_encrypt");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoEncrypt);
  subtle_crypto_v8_internal::EncryptMethod(info);
}

void V8SubtleCrypto::DecryptMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_decrypt");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoDecrypt);
  subtle_crypto_v8_internal::DecryptMethod(info);
}

void V8SubtleCrypto::SignMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_sign");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoSign);
  subtle_crypto_v8_internal::SignMethod(info);
}

void V8SubtleCrypto::VerifyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_verify");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoVerify);
  subtle_crypto_v8_internal::VerifyMethod(info);
}

void V8SubtleCrypto::DigestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_digest");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoDigest);
  subtle_crypto_v8_internal::DigestMethod(info);
}

void V8SubtleCrypto::GenerateKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_generateKey");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoGenerateKey);
  subtle_crypto_v8_internal::GenerateKeyMethod(info);
}

void V8SubtleCrypto::DeriveKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_deriveKey");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoDeriveKey);
  subtle_crypto_v8_internal::DeriveKeyMethod(info);
}

void V8SubtleCrypto::DeriveBitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_deriveBits");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoDeriveBits);
  subtle_crypto_v8_internal::DeriveBitsMethod(info);
}

void V8SubtleCrypto::ImportKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_importKey");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoImportKey);
  subtle_crypto_v8_internal::ImportKeyMethod(info);
}

void V8SubtleCrypto::ExportKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_exportKey");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoExportKey);
  subtle_crypto_v8_internal::ExportKeyMethod(info);
}

void V8SubtleCrypto::WrapKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_wrapKey");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoWrapKey);
  subtle_crypto_v8_internal::WrapKeyMethod(info);
}

void V8SubtleCrypto::UnwrapKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SubtleCrypto_unwrapKey");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSubtleCryptoUnwrapKey);
  subtle_crypto_v8_internal::UnwrapKeyMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8SubtleCryptoMethods[] = {
    {"encrypt", V8SubtleCrypto::EncryptMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"decrypt", V8SubtleCrypto::DecryptMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sign", V8SubtleCrypto::SignMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"verify", V8SubtleCrypto::VerifyMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"digest", V8SubtleCrypto::DigestMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"generateKey", V8SubtleCrypto::GenerateKeyMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deriveKey", V8SubtleCrypto::DeriveKeyMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deriveBits", V8SubtleCrypto::DeriveBitsMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"importKey", V8SubtleCrypto::ImportKeyMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"exportKey", V8SubtleCrypto::ExportKeyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"wrapKey", V8SubtleCrypto::WrapKeyMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unwrapKey", V8SubtleCrypto::UnwrapKeyMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SubtleCryptoTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SubtleCrypto::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8SubtleCrypto::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SubtleCryptoMethods, base::size(kV8SubtleCryptoMethods));

  // Custom signature

  V8SubtleCrypto::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SubtleCrypto::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8SubtleCrypto::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SubtleCrypto::GetWrapperTypeInfo()),
      InstallV8SubtleCryptoTemplate);
}

bool V8SubtleCrypto::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SubtleCrypto::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SubtleCrypto::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SubtleCrypto::GetWrapperTypeInfo(), v8_value);
}

SubtleCrypto* V8SubtleCrypto::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SubtleCrypto* NativeValueTraits<SubtleCrypto>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SubtleCrypto* native_value = V8SubtleCrypto::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SubtleCrypto"));
  }
  return native_value;
}

}  // namespace blink
