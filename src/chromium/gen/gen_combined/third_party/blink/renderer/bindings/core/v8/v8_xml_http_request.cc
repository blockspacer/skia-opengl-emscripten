// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url_search_params.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_upload.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_xml_http_request_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8XMLHttpRequest::DomTemplate,
    nullptr,
    "XMLHttpRequest",
    V8XMLHttpRequestEventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XMLHttpRequest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XMLHttpRequest::wrapper_type_info_ = v8_xml_http_request_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, XMLHttpRequest>::value,
    "XMLHttpRequest does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&XMLHttpRequest::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XMLHttpRequest is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace xml_http_request_v8_internal {

static void OnreadystatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onreadystatechange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnreadystatechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnreadystatechange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void ReadyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->readyState());
}

static void TimeoutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->timeout());
}

static void TimeoutAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "XMLHttpRequest", "timeout");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTimeout(cpp_value, exception_state);
}

static void WithCredentialsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->withCredentials());
}

static void WithCredentialsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "XMLHttpRequest", "withCredentials");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setWithCredentials(cpp_value, exception_state);
}

static void UploadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  XMLHttpRequestUpload* cpp_value(WTF::GetPtr(impl->upload()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#XMLHttpRequest#upload")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ResponseURLAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueString(info, impl->responseURL(), info.GetIsolate());
}

static void StatusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->status());
}

static void StatusTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueString(info, impl->statusText(), info.GetIsolate());
}

static void ResponseTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueString(info, impl->responseType(), info.GetIsolate());
}

static void ResponseTypeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "XMLHttpRequest", "responseType");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "",
      "arraybuffer",
      "blob",
      "document",
      "json",
      "text",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "XMLHttpRequestResponseType", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setResponseType(cpp_value, exception_state);
}

static void ResponseXMLAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "XMLHttpRequest", "responseXML");

  Document* cpp_value(impl->responseXML(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueFast(info, cpp_value, impl);
}

static void Open1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "open");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  V8StringResource<> method;
  V8StringResource<> url;
  method = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->open(method, url, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Open2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "open");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  V8StringResource<> method;
  V8StringResource<> url;
  bool async;
  V8StringResource<kTreatNullAndUndefinedAsNullString> username;
  V8StringResource<kTreatNullAndUndefinedAsNullString> password;
  method = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  async = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    username = NativeValueTraits<IDLUSVStringOrNull>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    username = nullptr;
  }
  if (!info[4]->IsUndefined()) {
    password = NativeValueTraits<IDLUSVStringOrNull>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    password = nullptr;
  }

  impl->open(method, url, async, username, password, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void OpenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(5, info.Length())) {
    case 2:
      if (true) {
        Open1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        Open2Method(info);
        return;
      }
      break;
    case 4:
      if (true) {
        Open2Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        Open2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "open");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void SetRequestHeaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "setRequestHeader");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> name;
  V8StringResource<> value;
  name = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  value = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setRequestHeader(name, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SendMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "send");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormDataOrURLSearchParams body;
  if (!info[0]->IsUndefined()) {
    V8ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormDataOrURLSearchParams::ToImpl(info.GetIsolate(), info[0], body, UnionTypeConversionMode::kNullable, exception_state);
    if (exception_state.HadException())
      return;
  } else {
    /* null default value */;
  }

  impl->send(body, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AbortMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  impl->abort();
}

static void GetResponseHeaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "getResponseHeader");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> name;
  name = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueStringOrNull(info, impl->getResponseHeader(name), info.GetIsolate());
}

static void GetAllResponseHeadersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->getAllResponseHeaders(), info.GetIsolate());
}

static void OverrideMimeTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "overrideMimeType");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> mime;
  mime = info[0];
  if (!mime.Prepare())
    return;

  impl->overrideMimeType(mime, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_ConstructorCallback");

  ScriptState* script_state = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  XMLHttpRequest* impl = XMLHttpRequest::Create(script_state);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8XMLHttpRequest::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("XMLHttpRequest"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  xml_http_request_v8_internal::Constructor(info);
}

}  // namespace xml_http_request_v8_internal

void V8XMLHttpRequest::OnreadystatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_onreadystatechange_Getter");

  xml_http_request_v8_internal::OnreadystatechangeAttributeGetter(info);
}

void V8XMLHttpRequest::OnreadystatechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_onreadystatechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_v8_internal::OnreadystatechangeAttributeSetter(v8_value, info);
}

void V8XMLHttpRequest::ReadyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_readyState_Getter");

  xml_http_request_v8_internal::ReadyStateAttributeGetter(info);
}

void V8XMLHttpRequest::TimeoutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_timeout_Getter");

  xml_http_request_v8_internal::TimeoutAttributeGetter(info);
}

void V8XMLHttpRequest::TimeoutAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_timeout_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_v8_internal::TimeoutAttributeSetter(v8_value, info);
}

void V8XMLHttpRequest::WithCredentialsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_withCredentials_Getter");

  xml_http_request_v8_internal::WithCredentialsAttributeGetter(info);
}

void V8XMLHttpRequest::WithCredentialsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_withCredentials_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_v8_internal::WithCredentialsAttributeSetter(v8_value, info);
}

void V8XMLHttpRequest::UploadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_upload_Getter");

  xml_http_request_v8_internal::UploadAttributeGetter(info);
}

void V8XMLHttpRequest::ResponseURLAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_responseURL_Getter");

  xml_http_request_v8_internal::ResponseURLAttributeGetter(info);
}

void V8XMLHttpRequest::StatusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_status_Getter");

  xml_http_request_v8_internal::StatusAttributeGetter(info);
}

void V8XMLHttpRequest::StatusTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_statusText_Getter");

  xml_http_request_v8_internal::StatusTextAttributeGetter(info);
}

void V8XMLHttpRequest::ResponseTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_responseType_Getter");

  xml_http_request_v8_internal::ResponseTypeAttributeGetter(info);
}

void V8XMLHttpRequest::ResponseTypeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_responseType_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_v8_internal::ResponseTypeAttributeSetter(v8_value, info);
}

void V8XMLHttpRequest::ResponseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_response_Getter");

  V8XMLHttpRequest::ResponseAttributeGetterCustom(info);
}

void V8XMLHttpRequest::ResponseTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_responseText_Getter");

  V8XMLHttpRequest::ResponseTextAttributeGetterCustom(info);
}

void V8XMLHttpRequest::ResponseXMLAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_responseXML_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kXMLHttpRequestResponseXML);

  xml_http_request_v8_internal::ResponseXMLAttributeGetter(info);
}

void V8XMLHttpRequest::OpenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_open");

  xml_http_request_v8_internal::OpenMethod(info);
}

void V8XMLHttpRequest::SetRequestHeaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_setRequestHeader");

  xml_http_request_v8_internal::SetRequestHeaderMethod(info);
}

void V8XMLHttpRequest::SendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_send");

  xml_http_request_v8_internal::SendMethod(info);
}

void V8XMLHttpRequest::AbortMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_abort");

  xml_http_request_v8_internal::AbortMethod(info);
}

void V8XMLHttpRequest::GetResponseHeaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_getResponseHeader");

  xml_http_request_v8_internal::GetResponseHeaderMethod(info);
}

void V8XMLHttpRequest::GetAllResponseHeadersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_getAllResponseHeaders");

  xml_http_request_v8_internal::GetAllResponseHeadersMethod(info);
}

void V8XMLHttpRequest::OverrideMimeTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_overrideMimeType");

  xml_http_request_v8_internal::OverrideMimeTypeMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8XMLHttpRequestAccessors[] = {
    { "onreadystatechange", V8XMLHttpRequest::OnreadystatechangeAttributeGetterCallback, V8XMLHttpRequest::OnreadystatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readyState", V8XMLHttpRequest::ReadyStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "timeout", V8XMLHttpRequest::TimeoutAttributeGetterCallback, V8XMLHttpRequest::TimeoutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "withCredentials", V8XMLHttpRequest::WithCredentialsAttributeGetterCallback, V8XMLHttpRequest::WithCredentialsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "upload", V8XMLHttpRequest::UploadAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "responseURL", V8XMLHttpRequest::ResponseURLAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "status", V8XMLHttpRequest::StatusAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "statusText", V8XMLHttpRequest::StatusTextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "responseType", V8XMLHttpRequest::ResponseTypeAttributeGetterCallback, V8XMLHttpRequest::ResponseTypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "response", V8XMLHttpRequest::ResponseAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "responseText", V8XMLHttpRequest::ResponseTextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "responseXML", V8XMLHttpRequest::ResponseXMLAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8XMLHttpRequestMethods[] = {
    {"open", V8XMLHttpRequest::OpenMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setRequestHeader", V8XMLHttpRequest::SetRequestHeaderMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"send", V8XMLHttpRequest::SendMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"abort", V8XMLHttpRequest::AbortMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getResponseHeader", V8XMLHttpRequest::GetResponseHeaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAllResponseHeaders", V8XMLHttpRequest::GetAllResponseHeadersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"overrideMimeType", V8XMLHttpRequest::OverrideMimeTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8XMLHttpRequestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8XMLHttpRequest::GetWrapperTypeInfo()->interface_name, V8XMLHttpRequestEventTarget::DomTemplate(isolate, world), V8XMLHttpRequest::kInternalFieldCount);
  interface_template->SetCallHandler(xml_http_request_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"UNSENT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"OPENED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"HEADERS_RECEIVED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"LOADING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"DONE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == XMLHttpRequest::kUnsent, "the value of XMLHttpRequest_kUnsent does not match with implementation");
  static_assert(1 == XMLHttpRequest::kOpened, "the value of XMLHttpRequest_kOpened does not match with implementation");
  static_assert(2 == XMLHttpRequest::kHeadersReceived, "the value of XMLHttpRequest_kHeadersReceived does not match with implementation");
  static_assert(3 == XMLHttpRequest::kLoading, "the value of XMLHttpRequest_kLoading does not match with implementation");
  static_assert(4 == XMLHttpRequest::kDone, "the value of XMLHttpRequest_kDone does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8XMLHttpRequestAccessors, base::size(kV8XMLHttpRequestAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8XMLHttpRequestMethods, base::size(kV8XMLHttpRequestMethods));

  // Custom signature

  V8XMLHttpRequest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8XMLHttpRequest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8XMLHttpRequest::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8XMLHttpRequest::GetWrapperTypeInfo()),
      InstallV8XMLHttpRequestTemplate);
}

bool V8XMLHttpRequest::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8XMLHttpRequest::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8XMLHttpRequest::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8XMLHttpRequest::GetWrapperTypeInfo(), v8_value);
}

XMLHttpRequest* V8XMLHttpRequest::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XMLHttpRequest* NativeValueTraits<XMLHttpRequest>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  XMLHttpRequest* native_value = V8XMLHttpRequest::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XMLHttpRequest"));
  }
  return native_value;
}

}  // namespace blink
