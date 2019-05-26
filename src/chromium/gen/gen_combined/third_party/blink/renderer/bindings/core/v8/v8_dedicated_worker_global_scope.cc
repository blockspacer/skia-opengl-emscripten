// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dedicated_worker_global_scope.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_controller.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew_x.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew_y.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dedicated_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_quad.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_string_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_error_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_reader_sync.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_headers.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_channel.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_interceptor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_request_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_watcher.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_mark.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer_entry_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_resource_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_server_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_post_message_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_progress_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_promise_rejection_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_default_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_response.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_transform_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url_search_params.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream_default_writer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_upload.h"
#include "third_party/blink/renderer/core/dedicated_worker_global_scope_core_constructors.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fetch/global_fetch.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/timing/worker_global_scope_performance.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
WrapperTypeInfo v8_dedicated_worker_global_scope_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DedicatedWorkerGlobalScope::DomTemplate,
    nullptr,
    "DedicatedWorkerGlobalScope",
    V8WorkerGlobalScope::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DedicatedWorkerGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DedicatedWorkerGlobalScope::wrapper_type_info_ = v8_dedicated_worker_global_scope_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, DedicatedWorkerGlobalScope>::value,
    "DedicatedWorkerGlobalScope does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&DedicatedWorkerGlobalScope::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DedicatedWorkerGlobalScope is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dedicated_worker_global_scope_v8_internal {

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(holder);

  V8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void NameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "name");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void OnmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onmessage()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmessageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmessage(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmessageerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onmessageerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmessageerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmessageerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void TrustedTypesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(holder);

  TrustedTypePolicyFactory* cpp_value(WTF::GetPtr(impl->trustedTypes()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#DedicatedWorkerGlobalScope#TrustedTypes")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PostMessage1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DedicatedWorkerGlobalScope", "postMessage");

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue message;
  Vector<ScriptValue> transfer;
  message = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  transfer = NativeValueTraits<IDLSequence<ScriptValue>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->postMessage(script_state, message, transfer, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void PostMessage2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DedicatedWorkerGlobalScope", "postMessage");

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue message;
  PostMessageOptions* options;
  message = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<PostMessageOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->postMessage(script_state, message, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void PostMessageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 1:
      if (true) {
        PostMessage2Method(info);
        return;
      }
      break;
    case 2:
      if (info[1]->IsUndefined()) {
        PostMessage2Method(info);
        return;
      }
      if (IsUndefinedOrNull(info[1])) {
        PostMessage2Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        PostMessage1Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "DedicatedWorkerGlobalScope", "postMessage");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          PostMessage1Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      if (info[1]->IsObject()) {
        PostMessage2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DedicatedWorkerGlobalScope", "postMessage");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CloseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

  impl->close();
}

}  // namespace dedicated_worker_global_scope_v8_internal

void V8DedicatedWorkerGlobalScope::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_name_Getter");

  dedicated_worker_global_scope_v8_internal::NameAttributeGetter(info);
}

void V8DedicatedWorkerGlobalScope::NameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_name_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dedicated_worker_global_scope_v8_internal::NameAttributeSetter(v8_value, info);
}

void V8DedicatedWorkerGlobalScope::OnmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_onmessage_Getter");

  dedicated_worker_global_scope_v8_internal::OnmessageAttributeGetter(info);
}

void V8DedicatedWorkerGlobalScope::OnmessageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_onmessage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dedicated_worker_global_scope_v8_internal::OnmessageAttributeSetter(v8_value, info);
}

void V8DedicatedWorkerGlobalScope::OnmessageerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_onmessageerror_Getter");

  dedicated_worker_global_scope_v8_internal::OnmessageerrorAttributeGetter(info);
}

void V8DedicatedWorkerGlobalScope::OnmessageerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_onmessageerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dedicated_worker_global_scope_v8_internal::OnmessageerrorAttributeSetter(v8_value, info);
}

void V8DedicatedWorkerGlobalScope::TrustedTypePolicyFactoryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TrustedTypePolicyFactory_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrustedTypePolicyFactory::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::MojoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Mojo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Mojo::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::MojoHandleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MojoHandle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoHandle::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::MojoWatcherConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MojoWatcher_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoWatcher::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::MojoInterfaceInterceptorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MojoInterfaceInterceptor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoInterfaceInterceptor::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::MojoInterfaceRequestEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MojoInterfaceRequestEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoInterfaceRequestEvent::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::FontFaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FontFace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FontFace::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::OffscreenCanvasConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_OffscreenCanvas_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OffscreenCanvas::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::ReadableStreamDefaultReaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ReadableStreamDefaultReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReadableStreamDefaultReader::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::WritableStreamDefaultWriterConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WritableStreamDefaultWriter_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WritableStreamDefaultWriter::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::AbortControllerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_AbortController_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AbortController::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::AbortSignalConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_AbortSignal_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AbortSignal::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::BlobConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Blob_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Blob::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::CSSSkewXConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CSSSkewX_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSSkewX::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::CSSSkewYConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CSSSkewY_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSSkewY::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::CustomEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CustomEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CustomEvent::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::DOMExceptionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMException_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMException::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::DOMMatrixConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMMatrix_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMMatrix::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::DOMMatrixReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMMatrixReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMMatrixReadOnly::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::DOMPointConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMPoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMPoint::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::DOMPointReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMPointReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMPointReadOnly::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::DOMQuadConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMQuad_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMQuad::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::DOMRectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMRect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMRect::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::DOMRectReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMRectReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMRectReadOnly::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::DOMStringListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMStringList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMStringList::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::DedicatedWorkerGlobalScopeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DedicatedWorkerGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::ErrorEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ErrorEvent::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::EventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Event_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Event::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::EventTargetConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_EventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8EventTarget::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::FileConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_File_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8File::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::FileListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FileList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileList::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::FileReaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FileReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileReader::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::FileReaderSyncConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FileReaderSync_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileReaderSync::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::FormDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FormData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FormData::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::HeadersConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Headers_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Headers::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::ImageBitmapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ImageBitmap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ImageBitmap::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::ImageDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ImageData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ImageData::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::MessageChannelConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MessageChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessageChannel::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::MessageEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessageEvent::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::MessagePortConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MessagePort_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessagePort::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::PerformanceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Performance_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Performance::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::PerformanceEntryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceEntry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceEntry::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::PerformanceMarkConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceMark_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceMark::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::PerformanceMeasureConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceMeasure_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceMeasure::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::PerformanceObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceObserver::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::PerformanceObserverEntryListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceObserverEntryList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceObserverEntryList::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::PerformanceResourceTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceResourceTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceResourceTiming::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::PerformanceServerTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceServerTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceServerTiming::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::ProgressEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ProgressEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ProgressEvent::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::PromiseRejectionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PromiseRejectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PromiseRejectionEvent::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::ReadableStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ReadableStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReadableStream::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::RequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Request_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Request::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::ResponseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Response_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Response::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::TransformStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TransformStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TransformStream::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::URLConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_URL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8URL::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::URLSearchParamsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_URLSearchParams_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8URLSearchParams::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::WorkerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Worker_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Worker::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::WorkerGlobalScopeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WorkerGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkerGlobalScope::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::WorkerLocationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WorkerLocation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkerLocation::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::WorkerNavigatorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WorkerNavigator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkerNavigator::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::WritableStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WritableStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WritableStream::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::XMLHttpRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_XMLHttpRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLHttpRequest::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::XMLHttpRequestEventTargetConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_XMLHttpRequestEventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLHttpRequestEventTarget::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::XMLHttpRequestUploadConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_XMLHttpRequestUpload_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLHttpRequestUpload::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScope::TrustedTypesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TrustedTypes_Getter");

  dedicated_worker_global_scope_v8_internal::TrustedTypesAttributeGetter(info);
}

void V8DedicatedWorkerGlobalScope::PostMessageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_postMessage");

  dedicated_worker_global_scope_v8_internal::PostMessageMethod(info);
}

void V8DedicatedWorkerGlobalScope::CloseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_close");

  dedicated_worker_global_scope_v8_internal::CloseMethod(info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static constexpr V8DOMConfiguration::AttributeConfiguration kV8DedicatedWorkerGlobalScopeAttributes[] = {
    { "AbortController", V8DedicatedWorkerGlobalScope::AbortControllerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AbortSignal", V8DedicatedWorkerGlobalScope::AbortSignalConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Blob", V8DedicatedWorkerGlobalScope::BlobConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSSkewX", V8DedicatedWorkerGlobalScope::CSSSkewXConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSSkewY", V8DedicatedWorkerGlobalScope::CSSSkewYConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CustomEvent", V8DedicatedWorkerGlobalScope::CustomEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMException", V8DedicatedWorkerGlobalScope::DOMExceptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrix", V8DedicatedWorkerGlobalScope::DOMMatrixConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrixReadOnly", V8DedicatedWorkerGlobalScope::DOMMatrixReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMPoint", V8DedicatedWorkerGlobalScope::DOMPointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMPointReadOnly", V8DedicatedWorkerGlobalScope::DOMPointReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMQuad", V8DedicatedWorkerGlobalScope::DOMQuadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMRect", V8DedicatedWorkerGlobalScope::DOMRectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMRectReadOnly", V8DedicatedWorkerGlobalScope::DOMRectReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMStringList", V8DedicatedWorkerGlobalScope::DOMStringListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DedicatedWorkerGlobalScope", V8DedicatedWorkerGlobalScope::DedicatedWorkerGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ErrorEvent", V8DedicatedWorkerGlobalScope::ErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Event", V8DedicatedWorkerGlobalScope::EventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "EventTarget", V8DedicatedWorkerGlobalScope::EventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "File", V8DedicatedWorkerGlobalScope::FileConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FileList", V8DedicatedWorkerGlobalScope::FileListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FileReader", V8DedicatedWorkerGlobalScope::FileReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FileReaderSync", V8DedicatedWorkerGlobalScope::FileReaderSyncConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FormData", V8DedicatedWorkerGlobalScope::FormDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Headers", V8DedicatedWorkerGlobalScope::HeadersConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ImageBitmap", V8DedicatedWorkerGlobalScope::ImageBitmapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ImageData", V8DedicatedWorkerGlobalScope::ImageDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessageChannel", V8DedicatedWorkerGlobalScope::MessageChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessageEvent", V8DedicatedWorkerGlobalScope::MessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessagePort", V8DedicatedWorkerGlobalScope::MessagePortConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Performance", V8DedicatedWorkerGlobalScope::PerformanceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceEntry", V8DedicatedWorkerGlobalScope::PerformanceEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceMark", V8DedicatedWorkerGlobalScope::PerformanceMarkConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceMeasure", V8DedicatedWorkerGlobalScope::PerformanceMeasureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserver", V8DedicatedWorkerGlobalScope::PerformanceObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserverEntryList", V8DedicatedWorkerGlobalScope::PerformanceObserverEntryListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceResourceTiming", V8DedicatedWorkerGlobalScope::PerformanceResourceTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceServerTiming", V8DedicatedWorkerGlobalScope::PerformanceServerTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ProgressEvent", V8DedicatedWorkerGlobalScope::ProgressEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PromiseRejectionEvent", V8DedicatedWorkerGlobalScope::PromiseRejectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ReadableStream", V8DedicatedWorkerGlobalScope::ReadableStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Request", V8DedicatedWorkerGlobalScope::RequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Response", V8DedicatedWorkerGlobalScope::ResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TransformStream", V8DedicatedWorkerGlobalScope::TransformStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "URL", V8DedicatedWorkerGlobalScope::URLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "URLSearchParams", V8DedicatedWorkerGlobalScope::URLSearchParamsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Worker", V8DedicatedWorkerGlobalScope::WorkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WorkerGlobalScope", V8DedicatedWorkerGlobalScope::WorkerGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WorkerLocation", V8DedicatedWorkerGlobalScope::WorkerLocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WorkerNavigator", V8DedicatedWorkerGlobalScope::WorkerNavigatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WritableStream", V8DedicatedWorkerGlobalScope::WritableStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequest", V8DedicatedWorkerGlobalScope::XMLHttpRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequestEventTarget", V8DedicatedWorkerGlobalScope::XMLHttpRequestEventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequestUpload", V8DedicatedWorkerGlobalScope::XMLHttpRequestUploadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static constexpr V8DOMConfiguration::AccessorConfiguration kV8DedicatedWorkerGlobalScopeAccessors[] = {
    { "name", V8DedicatedWorkerGlobalScope::NameAttributeGetterCallback, V8DedicatedWorkerGlobalScope::NameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmessage", V8DedicatedWorkerGlobalScope::OnmessageAttributeGetterCallback, V8DedicatedWorkerGlobalScope::OnmessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmessageerror", V8DedicatedWorkerGlobalScope::OnmessageerrorAttributeGetterCallback, V8DedicatedWorkerGlobalScope::OnmessageerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8DedicatedWorkerGlobalScopeMethods[] = {
    {"postMessage", V8DedicatedWorkerGlobalScope::PostMessageMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"close", V8DedicatedWorkerGlobalScope::CloseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8DedicatedWorkerGlobalScope::InstallV8DedicatedWorkerGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo()->interface_name, V8WorkerGlobalScope::DomTemplate(isolate, world), V8DedicatedWorkerGlobalScope::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototype_template->SetImmutableProto();

  // Global objects are Immutable Prototype Exotic Objects
  instance_template->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAttributes(
      isolate, world, instance_template, prototype_template,
      kV8DedicatedWorkerGlobalScopeAttributes, base::size(kV8DedicatedWorkerGlobalScopeAttributes));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DedicatedWorkerGlobalScopeAccessors, base::size(kV8DedicatedWorkerGlobalScopeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DedicatedWorkerGlobalScopeMethods, base::size(kV8DedicatedWorkerGlobalScopeMethods));

  // Custom signature
}

void V8DedicatedWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::MojoJSEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Mojo", V8DedicatedWorkerGlobalScope::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoHandle", V8DedicatedWorkerGlobalScope::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoWatcher", V8DedicatedWorkerGlobalScope::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "MojoInterfaceInterceptor", V8DedicatedWorkerGlobalScope::MojoInterfaceInterceptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoInterfaceRequestEvent", V8DedicatedWorkerGlobalScope::MojoInterfaceRequestEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "OffscreenCanvas", V8DedicatedWorkerGlobalScope::OffscreenCanvasConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasTextEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "FontFace", V8DedicatedWorkerGlobalScope::FontFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::StreamsNativeEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ReadableStreamDefaultReader", V8DedicatedWorkerGlobalScope::ReadableStreamDefaultReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WritableStreamDefaultWriter", V8DedicatedWorkerGlobalScope::WritableStreamDefaultWriterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

void V8DedicatedWorkerGlobalScope::InstallMojoJS(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoConfigurations[] = {
      { "Mojo", V8DedicatedWorkerGlobalScope::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoHandleConfigurations[] = {
      { "MojoHandle", V8DedicatedWorkerGlobalScope::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoHandleConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoWatcherConfigurations[] = {
      { "MojoWatcher", V8DedicatedWorkerGlobalScope::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoWatcherConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8DedicatedWorkerGlobalScope::InstallMojoJS(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallMojoJS(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8DedicatedWorkerGlobalScope::InstallMojoJS(ScriptState* script_state) {
  InstallMojoJS(script_state, v8::Local<v8::Object>());
}

void V8DedicatedWorkerGlobalScope::InstallTrustedDOMTypes(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kTrustedTypePolicyFactoryConfigurations[] = {
      { "TrustedTypePolicyFactory", V8DedicatedWorkerGlobalScope::TrustedTypePolicyFactoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypePolicyFactoryConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kTrustedTypesConfigurations[] = {
      { "TrustedTypes", V8DedicatedWorkerGlobalScope::TrustedTypesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypesConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8DedicatedWorkerGlobalScope::InstallTrustedDOMTypes(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallTrustedDOMTypes(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

v8::Local<v8::FunctionTemplate> V8DedicatedWorkerGlobalScope::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo()),
      V8DedicatedWorkerGlobalScope::install_v8_dedicated_worker_global_scope_template_function_);
}

bool V8DedicatedWorkerGlobalScope::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DedicatedWorkerGlobalScope::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo(), v8_value);
}

DedicatedWorkerGlobalScope* V8DedicatedWorkerGlobalScope::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DedicatedWorkerGlobalScope* NativeValueTraits<DedicatedWorkerGlobalScope>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DedicatedWorkerGlobalScope* native_value = V8DedicatedWorkerGlobalScope::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DedicatedWorkerGlobalScope"));
  }
  return native_value;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8DedicatedWorkerGlobalScope::install_runtime_enabled_features_on_template_function_ =
    &V8DedicatedWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8DedicatedWorkerGlobalScope::install_v8_dedicated_worker_global_scope_template_function_ =
    &V8DedicatedWorkerGlobalScope::InstallV8DedicatedWorkerGlobalScopeTemplate;

void V8DedicatedWorkerGlobalScope::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8DedicatedWorkerGlobalScope::install_v8_dedicated_worker_global_scope_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8DedicatedWorkerGlobalScope::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
