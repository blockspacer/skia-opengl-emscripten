// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_shared_worker_global_scope.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_controller.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew_x.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew_y.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_event.h"
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
#include "third_party/blink/renderer/bindings/core/v8/v8_progress_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_promise_rejection_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_default_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_response.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shared_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_transform_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url_search_params.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream_default_writer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_upload.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fetch/global_fetch.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/shared_worker_global_scope_core_constructors.h"
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
WrapperTypeInfo v8_shared_worker_global_scope_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SharedWorkerGlobalScope::DomTemplate,
    nullptr,
    "SharedWorkerGlobalScope",
    V8WorkerGlobalScope::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SharedWorkerGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SharedWorkerGlobalScope::wrapper_type_info_ = v8_shared_worker_global_scope_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, SharedWorkerGlobalScope>::value,
    "SharedWorkerGlobalScope does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&SharedWorkerGlobalScope::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SharedWorkerGlobalScope is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace shared_worker_global_scope_v8_internal {

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SharedWorkerGlobalScope* impl = V8SharedWorkerGlobalScope::ToImpl(holder);

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

static void OnconnectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SharedWorkerGlobalScope* impl = V8SharedWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onconnect()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnconnectAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SharedWorkerGlobalScope* impl = V8SharedWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnconnect(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void TrustedTypesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SharedWorkerGlobalScope* impl = V8SharedWorkerGlobalScope::ToImpl(holder);

  TrustedTypePolicyFactory* cpp_value(WTF::GetPtr(impl->trustedTypes()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#SharedWorkerGlobalScope#TrustedTypes")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CloseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SharedWorkerGlobalScope* impl = V8SharedWorkerGlobalScope::ToImpl(info.Holder());

  impl->close();
}

}  // namespace shared_worker_global_scope_v8_internal

void V8SharedWorkerGlobalScope::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_name_Getter");

  shared_worker_global_scope_v8_internal::NameAttributeGetter(info);
}

void V8SharedWorkerGlobalScope::NameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_name_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  shared_worker_global_scope_v8_internal::NameAttributeSetter(v8_value, info);
}

void V8SharedWorkerGlobalScope::OnconnectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_onconnect_Getter");

  shared_worker_global_scope_v8_internal::OnconnectAttributeGetter(info);
}

void V8SharedWorkerGlobalScope::OnconnectAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_onconnect_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  shared_worker_global_scope_v8_internal::OnconnectAttributeSetter(v8_value, info);
}

void V8SharedWorkerGlobalScope::TrustedTypePolicyFactoryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_TrustedTypePolicyFactory_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrustedTypePolicyFactory::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::MojoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Mojo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Mojo::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::MojoHandleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_MojoHandle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoHandle::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::MojoWatcherConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_MojoWatcher_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoWatcher::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::MojoInterfaceInterceptorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_MojoInterfaceInterceptor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoInterfaceInterceptor::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::MojoInterfaceRequestEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_MojoInterfaceRequestEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoInterfaceRequestEvent::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::FontFaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_FontFace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FontFace::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::OffscreenCanvasConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_OffscreenCanvas_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OffscreenCanvas::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::ReadableStreamDefaultReaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_ReadableStreamDefaultReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReadableStreamDefaultReader::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::WritableStreamDefaultWriterConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WritableStreamDefaultWriter_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WritableStreamDefaultWriter::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::AbortControllerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_AbortController_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AbortController::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::AbortSignalConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_AbortSignal_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AbortSignal::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::BlobConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Blob_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Blob::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::CSSSkewXConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_CSSSkewX_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSSkewX::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::CSSSkewYConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_CSSSkewY_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSSkewY::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::CustomEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_CustomEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CustomEvent::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::DOMExceptionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_DOMException_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMException::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::DOMMatrixConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_DOMMatrix_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMMatrix::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::DOMMatrixReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_DOMMatrixReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMMatrixReadOnly::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::DOMPointConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_DOMPoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMPoint::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::DOMPointReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_DOMPointReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMPointReadOnly::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::DOMQuadConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_DOMQuad_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMQuad::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::DOMRectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_DOMRect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMRect::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::DOMRectReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_DOMRectReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMRectReadOnly::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::DOMStringListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_DOMStringList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMStringList::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::ErrorEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_ErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ErrorEvent::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::EventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Event_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Event::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::EventTargetConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_EventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8EventTarget::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::FileConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_File_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8File::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::FileListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_FileList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileList::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::FileReaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_FileReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileReader::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::FileReaderSyncConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_FileReaderSync_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileReaderSync::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::FormDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_FormData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FormData::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::HeadersConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Headers_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Headers::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::ImageBitmapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_ImageBitmap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ImageBitmap::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::ImageDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_ImageData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ImageData::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::MessageChannelConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_MessageChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessageChannel::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::MessageEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_MessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessageEvent::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::MessagePortConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_MessagePort_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessagePort::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::PerformanceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Performance_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Performance::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::PerformanceEntryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PerformanceEntry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceEntry::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::PerformanceMarkConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PerformanceMark_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceMark::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::PerformanceMeasureConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PerformanceMeasure_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceMeasure::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::PerformanceObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PerformanceObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceObserver::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::PerformanceObserverEntryListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PerformanceObserverEntryList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceObserverEntryList::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::PerformanceResourceTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PerformanceResourceTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceResourceTiming::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::PerformanceServerTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PerformanceServerTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceServerTiming::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::ProgressEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_ProgressEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ProgressEvent::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::PromiseRejectionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PromiseRejectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PromiseRejectionEvent::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::ReadableStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_ReadableStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReadableStream::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::RequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Request_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Request::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::ResponseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Response_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Response::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::SharedWorkerGlobalScopeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_SharedWorkerGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SharedWorkerGlobalScope::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::TransformStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_TransformStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TransformStream::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::URLConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_URL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8URL::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::URLSearchParamsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_URLSearchParams_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8URLSearchParams::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::WorkerGlobalScopeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WorkerGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkerGlobalScope::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::WorkerLocationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WorkerLocation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkerLocation::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::WorkerNavigatorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WorkerNavigator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkerNavigator::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::WritableStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WritableStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WritableStream::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::XMLHttpRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_XMLHttpRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLHttpRequest::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::XMLHttpRequestEventTargetConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_XMLHttpRequestEventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLHttpRequestEventTarget::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::XMLHttpRequestUploadConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_XMLHttpRequestUpload_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLHttpRequestUpload::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScope::TrustedTypesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_TrustedTypes_Getter");

  shared_worker_global_scope_v8_internal::TrustedTypesAttributeGetter(info);
}

void V8SharedWorkerGlobalScope::CloseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_close");

  shared_worker_global_scope_v8_internal::CloseMethod(info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static constexpr V8DOMConfiguration::AttributeConfiguration kV8SharedWorkerGlobalScopeAttributes[] = {
    { "AbortController", V8SharedWorkerGlobalScope::AbortControllerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AbortSignal", V8SharedWorkerGlobalScope::AbortSignalConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Blob", V8SharedWorkerGlobalScope::BlobConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSSkewX", V8SharedWorkerGlobalScope::CSSSkewXConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSSkewY", V8SharedWorkerGlobalScope::CSSSkewYConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CustomEvent", V8SharedWorkerGlobalScope::CustomEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMException", V8SharedWorkerGlobalScope::DOMExceptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrix", V8SharedWorkerGlobalScope::DOMMatrixConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrixReadOnly", V8SharedWorkerGlobalScope::DOMMatrixReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMPoint", V8SharedWorkerGlobalScope::DOMPointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMPointReadOnly", V8SharedWorkerGlobalScope::DOMPointReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMQuad", V8SharedWorkerGlobalScope::DOMQuadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMRect", V8SharedWorkerGlobalScope::DOMRectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMRectReadOnly", V8SharedWorkerGlobalScope::DOMRectReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMStringList", V8SharedWorkerGlobalScope::DOMStringListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ErrorEvent", V8SharedWorkerGlobalScope::ErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Event", V8SharedWorkerGlobalScope::EventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "EventTarget", V8SharedWorkerGlobalScope::EventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "File", V8SharedWorkerGlobalScope::FileConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FileList", V8SharedWorkerGlobalScope::FileListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FileReader", V8SharedWorkerGlobalScope::FileReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FileReaderSync", V8SharedWorkerGlobalScope::FileReaderSyncConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FormData", V8SharedWorkerGlobalScope::FormDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Headers", V8SharedWorkerGlobalScope::HeadersConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ImageBitmap", V8SharedWorkerGlobalScope::ImageBitmapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ImageData", V8SharedWorkerGlobalScope::ImageDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessageChannel", V8SharedWorkerGlobalScope::MessageChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessageEvent", V8SharedWorkerGlobalScope::MessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessagePort", V8SharedWorkerGlobalScope::MessagePortConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Performance", V8SharedWorkerGlobalScope::PerformanceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceEntry", V8SharedWorkerGlobalScope::PerformanceEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceMark", V8SharedWorkerGlobalScope::PerformanceMarkConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceMeasure", V8SharedWorkerGlobalScope::PerformanceMeasureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserver", V8SharedWorkerGlobalScope::PerformanceObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserverEntryList", V8SharedWorkerGlobalScope::PerformanceObserverEntryListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceResourceTiming", V8SharedWorkerGlobalScope::PerformanceResourceTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceServerTiming", V8SharedWorkerGlobalScope::PerformanceServerTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ProgressEvent", V8SharedWorkerGlobalScope::ProgressEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PromiseRejectionEvent", V8SharedWorkerGlobalScope::PromiseRejectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ReadableStream", V8SharedWorkerGlobalScope::ReadableStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Request", V8SharedWorkerGlobalScope::RequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Response", V8SharedWorkerGlobalScope::ResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SharedWorkerGlobalScope", V8SharedWorkerGlobalScope::SharedWorkerGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TransformStream", V8SharedWorkerGlobalScope::TransformStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "URL", V8SharedWorkerGlobalScope::URLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "URLSearchParams", V8SharedWorkerGlobalScope::URLSearchParamsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WorkerGlobalScope", V8SharedWorkerGlobalScope::WorkerGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WorkerLocation", V8SharedWorkerGlobalScope::WorkerLocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WorkerNavigator", V8SharedWorkerGlobalScope::WorkerNavigatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WritableStream", V8SharedWorkerGlobalScope::WritableStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequest", V8SharedWorkerGlobalScope::XMLHttpRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequestEventTarget", V8SharedWorkerGlobalScope::XMLHttpRequestEventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequestUpload", V8SharedWorkerGlobalScope::XMLHttpRequestUploadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SharedWorkerGlobalScopeAccessors[] = {
    { "name", V8SharedWorkerGlobalScope::NameAttributeGetterCallback, V8SharedWorkerGlobalScope::NameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onconnect", V8SharedWorkerGlobalScope::OnconnectAttributeGetterCallback, V8SharedWorkerGlobalScope::OnconnectAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SharedWorkerGlobalScopeMethods[] = {
    {"close", V8SharedWorkerGlobalScope::CloseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8SharedWorkerGlobalScope::InstallV8SharedWorkerGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SharedWorkerGlobalScope::GetWrapperTypeInfo()->interface_name, V8WorkerGlobalScope::DomTemplate(isolate, world), V8SharedWorkerGlobalScope::kInternalFieldCount);

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
      kV8SharedWorkerGlobalScopeAttributes, base::size(kV8SharedWorkerGlobalScopeAttributes));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SharedWorkerGlobalScopeAccessors, base::size(kV8SharedWorkerGlobalScopeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SharedWorkerGlobalScopeMethods, base::size(kV8SharedWorkerGlobalScopeMethods));

  // Custom signature
}

void V8SharedWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
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
        { "Mojo", V8SharedWorkerGlobalScope::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoHandle", V8SharedWorkerGlobalScope::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoWatcher", V8SharedWorkerGlobalScope::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "MojoInterfaceInterceptor", V8SharedWorkerGlobalScope::MojoInterfaceInterceptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoInterfaceRequestEvent", V8SharedWorkerGlobalScope::MojoInterfaceRequestEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "OffscreenCanvas", V8SharedWorkerGlobalScope::OffscreenCanvasConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasTextEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "FontFace", V8SharedWorkerGlobalScope::FontFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::StreamsNativeEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ReadableStreamDefaultReader", V8SharedWorkerGlobalScope::ReadableStreamDefaultReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WritableStreamDefaultWriter", V8SharedWorkerGlobalScope::WritableStreamDefaultWriterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

void V8SharedWorkerGlobalScope::InstallMojoJS(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8SharedWorkerGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoConfigurations[] = {
      { "Mojo", V8SharedWorkerGlobalScope::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoHandleConfigurations[] = {
      { "MojoHandle", V8SharedWorkerGlobalScope::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoHandleConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoWatcherConfigurations[] = {
      { "MojoWatcher", V8SharedWorkerGlobalScope::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoWatcherConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8SharedWorkerGlobalScope::InstallMojoJS(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8SharedWorkerGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8SharedWorkerGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallMojoJS(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8SharedWorkerGlobalScope::InstallMojoJS(ScriptState* script_state) {
  InstallMojoJS(script_state, v8::Local<v8::Object>());
}

void V8SharedWorkerGlobalScope::InstallTrustedDOMTypes(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8SharedWorkerGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kTrustedTypePolicyFactoryConfigurations[] = {
      { "TrustedTypePolicyFactory", V8SharedWorkerGlobalScope::TrustedTypePolicyFactoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypePolicyFactoryConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kTrustedTypesConfigurations[] = {
      { "TrustedTypes", V8SharedWorkerGlobalScope::TrustedTypesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypesConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8SharedWorkerGlobalScope::InstallTrustedDOMTypes(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8SharedWorkerGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8SharedWorkerGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallTrustedDOMTypes(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

v8::Local<v8::FunctionTemplate> V8SharedWorkerGlobalScope::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SharedWorkerGlobalScope::GetWrapperTypeInfo()),
      V8SharedWorkerGlobalScope::install_v8_shared_worker_global_scope_template_function_);
}

bool V8SharedWorkerGlobalScope::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SharedWorkerGlobalScope::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SharedWorkerGlobalScope::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SharedWorkerGlobalScope::GetWrapperTypeInfo(), v8_value);
}

SharedWorkerGlobalScope* V8SharedWorkerGlobalScope::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SharedWorkerGlobalScope* NativeValueTraits<SharedWorkerGlobalScope>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SharedWorkerGlobalScope* native_value = V8SharedWorkerGlobalScope::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SharedWorkerGlobalScope"));
  }
  return native_value;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8SharedWorkerGlobalScope::install_runtime_enabled_features_on_template_function_ =
    &V8SharedWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8SharedWorkerGlobalScope::install_v8_shared_worker_global_scope_template_function_ =
    &V8SharedWorkerGlobalScope::InstallV8SharedWorkerGlobalScopeTemplate;

void V8SharedWorkerGlobalScope::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8SharedWorkerGlobalScope::install_v8_shared_worker_global_scope_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8SharedWorkerGlobalScope::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8SharedWorkerGlobalScope::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
