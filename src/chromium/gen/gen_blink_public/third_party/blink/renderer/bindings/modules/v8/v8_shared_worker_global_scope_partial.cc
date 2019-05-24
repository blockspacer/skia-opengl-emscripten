// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_shared_worker_global_scope_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shared_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy_factory.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_record.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_barcode_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_broadcast_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache_storage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_gradient.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pattern.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_close_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto_key.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dom_file_system_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_event_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_face_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor_with_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_database.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_factory.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_key_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observer_changes.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_open_db_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_transaction.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_version_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigation_preload_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_network_information.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offscreen_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_instruments.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permission_status.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permissions.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_subtle_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_decoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_decoder_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_encoder_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_timestamp_trigger.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_compute_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_active_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_framebuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_program.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_query.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_renderbuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sampler.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader_precision_format.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_texture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_transform_feedback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_uniform_location.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_vertex_array_object.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_websocket.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/modules/cache_storage/global_cache_storage.h"
#include "third_party/blink/renderer/modules/crypto/worker_global_scope_crypto.h"
#include "third_party/blink/renderer/modules/filesystem/worker_global_scope_file_system.h"
#include "third_party/blink/renderer/modules/indexeddb/global_indexed_db.h"
#include "third_party/blink/renderer/modules/shared_worker_global_scope_modules_constructors.h"
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

namespace shared_worker_global_scope_partial_v8_internal {

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

static void WebkitRequestFileSystemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SharedWorkerGlobalScope", "webkitRequestFileSystem");

  SharedWorkerGlobalScope* impl = V8SharedWorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint16_t type;
  int64_t size;
  V8FileSystemCallback* success_callback;
  V8ErrorCallback* error_callback;
  type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (info[2]->IsObject()) {
    success_callback = V8FileSystemCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    success_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not an object.");
    return;
  }

  if (info[3]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[3].As<v8::Object>());
  } else if (info[3]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 4 is not an object.");
    return;
  }

  WorkerGlobalScopeFileSystem::webkitRequestFileSystem(*impl, type, size, success_callback, error_callback);
}

static void WebkitRequestFileSystemSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SharedWorkerGlobalScope", "webkitRequestFileSystemSync");

  SharedWorkerGlobalScope* impl = V8SharedWorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint16_t type;
  int64_t size;
  type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  DOMFileSystemSync* result = WorkerGlobalScopeFileSystem::webkitRequestFileSystemSync(*impl, type, size, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void WebkitResolveLocalFileSystemURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SharedWorkerGlobalScope* impl = V8SharedWorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("webkitResolveLocalFileSystemURL", "SharedWorkerGlobalScope", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<> url;
  V8EntryCallback* success_callback;
  V8ErrorCallback* error_callback;
  url = info[0];
  if (!url.Prepare())
    return;

  if (info[1]->IsObject()) {
    success_callback = V8EntryCallback::Create(info[1].As<v8::Object>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("webkitResolveLocalFileSystemURL", "SharedWorkerGlobalScope", "The callback provided as parameter 2 is not an object."));
    return;
  }

  if (info[2]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("webkitResolveLocalFileSystemURL", "SharedWorkerGlobalScope", "The callback provided as parameter 3 is not an object."));
    return;
  }

  WorkerGlobalScopeFileSystem::webkitResolveLocalFileSystemURL(*impl, url, success_callback, error_callback);
}

static void WebkitResolveLocalFileSystemSyncURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SharedWorkerGlobalScope", "webkitResolveLocalFileSystemSyncURL");

  SharedWorkerGlobalScope* impl = V8SharedWorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> url;
  url = info[0];
  if (!url.Prepare())
    return;

  EntrySync* result = WorkerGlobalScopeFileSystem::webkitResolveLocalFileSystemSyncURL(*impl, url, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

}  // namespace shared_worker_global_scope_partial_v8_internal

void V8SharedWorkerGlobalScopePartial::BackgroundFetchManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_BackgroundFetchManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchManager::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::BackgroundFetchRecordConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_BackgroundFetchRecord_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchRecord::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::BackgroundFetchRegistrationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_BackgroundFetchRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchRegistration::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBObservationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBObservation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObservation::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBObserverChangesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBObserverChanges_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObserverChanges::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObserver::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::TimestampTriggerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_TimestampTrigger_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TimestampTrigger::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::NotificationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Notification_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Notification::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::CanvasGradientConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_CanvasGradient_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanvasGradient::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::CanvasPatternConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_CanvasPattern_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanvasPattern::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_OffscreenCanvasRenderingContext2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OffscreenCanvasRenderingContext2D::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::Path2DConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Path2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Path2D::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGL2RenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGL2RenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGL2RenderingContext::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLActiveInfoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLActiveInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLActiveInfo::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLBufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLBuffer::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLFramebufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLFramebuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLFramebuffer::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLProgramConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLProgram_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLProgram::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLQueryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLQuery_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLQuery::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLRenderbufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLRenderbuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLRenderbuffer::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLRenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLRenderingContext::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLSamplerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLSampler_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLSampler::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLShaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLShader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLShader::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLShaderPrecisionFormatConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLShaderPrecisionFormat_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLShaderPrecisionFormat::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLSyncConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLSync_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLSync::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLTextureConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLTexture_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLTexture::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLTransformFeedbackConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLTransformFeedback_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLTransformFeedback::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLUniformLocationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLUniformLocation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLUniformLocation::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGLVertexArrayObjectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGLVertexArrayObject_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLVertexArrayObject::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::PaymentInstrumentsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PaymentInstruments_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentInstruments::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::PermissionStatusConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PermissionStatus_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PermissionStatus::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::PermissionsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Permissions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Permissions::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::PushManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PushManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushManager::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::PushSubscriptionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PushSubscription_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushSubscription::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::PushSubscriptionOptionsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_PushSubscriptionOptions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushSubscriptionOptions::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::BarcodeDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_BarcodeDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BarcodeDetector::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::FaceDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_FaceDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FaceDetector::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::TextDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_TextDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDetector::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebGL2ComputeRenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebGL2ComputeRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGL2ComputeRenderingContext::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::CacheConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Cache_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Cache::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::CacheStorageConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_CacheStorage_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CacheStorage::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::LockConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Lock_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Lock::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::LockManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_LockManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8LockManager::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::NavigationPreloadManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_NavigationPreloadManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NavigationPreloadManager::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::ServiceWorkerRegistrationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_ServiceWorkerRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ServiceWorkerRegistration::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::StorageManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_StorageManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StorageManager::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::BroadcastChannelConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_BroadcastChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BroadcastChannel::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::CloseEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_CloseEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CloseEvent::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::CryptoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_Crypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Crypto::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::CryptoKeyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_CryptoKey_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CryptoKey::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::EventSourceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_EventSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8EventSource::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBCursorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBCursor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBCursor::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBCursorWithValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBCursorWithValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBCursorWithValue::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBDatabaseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBDatabase_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBDatabase::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBFactoryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBFactory_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBFactory::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBIndexConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBIndex_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBIndex::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBKeyRangeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBKeyRange_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBKeyRange::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBObjectStoreConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBObjectStore_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObjectStore::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBOpenDBRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBOpenDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBOpenDBRequest::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBRequest::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBTransactionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBTransaction_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBTransaction::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::IDBVersionChangeEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_IDBVersionChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBVersionChangeEvent::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::NetworkInformationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_NetworkInformation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NetworkInformation::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::SubtleCryptoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_SubtleCrypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SubtleCrypto::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::SyncManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_SyncManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SyncManager::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::TextDecoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_TextDecoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDecoder::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::TextDecoderStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_TextDecoderStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDecoderStream::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::TextEncoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_TextEncoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextEncoder::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::TextEncoderStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_TextEncoderStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextEncoderStream::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::WebSocketConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_WebSocket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebSocket::GetWrapperTypeInfo());
}

void V8SharedWorkerGlobalScopePartial::TrustedTypesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_TrustedTypes_Getter");

  shared_worker_global_scope_partial_v8_internal::TrustedTypesAttributeGetter(info);
}

void V8SharedWorkerGlobalScopePartial::WebkitRequestFileSystemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_webkitRequestFileSystem");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kRequestFileSystemWorker);
  shared_worker_global_scope_partial_v8_internal::WebkitRequestFileSystemMethod(info);
}

void V8SharedWorkerGlobalScopePartial::WebkitRequestFileSystemSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_webkitRequestFileSystemSync");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kRequestFileSystemSyncWorker);
  shared_worker_global_scope_partial_v8_internal::WebkitRequestFileSystemSyncMethod(info);
}

void V8SharedWorkerGlobalScopePartial::WebkitResolveLocalFileSystemURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_webkitResolveLocalFileSystemURL");

  shared_worker_global_scope_partial_v8_internal::WebkitResolveLocalFileSystemURLMethod(info);
}

void V8SharedWorkerGlobalScopePartial::WebkitResolveLocalFileSystemSyncURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SharedWorkerGlobalScope_webkitResolveLocalFileSystemSyncURL");

  shared_worker_global_scope_partial_v8_internal::WebkitResolveLocalFileSystemSyncURLMethod(info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static constexpr V8DOMConfiguration::AttributeConfiguration kV8SharedWorkerGlobalScopeAttributes[] = {
    { "BroadcastChannel", V8SharedWorkerGlobalScopePartial::BroadcastChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CloseEvent", V8SharedWorkerGlobalScopePartial::CloseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Crypto", V8SharedWorkerGlobalScopePartial::CryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CryptoKey", V8SharedWorkerGlobalScopePartial::CryptoKeyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "EventSource", V8SharedWorkerGlobalScopePartial::EventSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBCursor", V8SharedWorkerGlobalScopePartial::IDBCursorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBCursorWithValue", V8SharedWorkerGlobalScopePartial::IDBCursorWithValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBDatabase", V8SharedWorkerGlobalScopePartial::IDBDatabaseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBFactory", V8SharedWorkerGlobalScopePartial::IDBFactoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBIndex", V8SharedWorkerGlobalScopePartial::IDBIndexConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBKeyRange", V8SharedWorkerGlobalScopePartial::IDBKeyRangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBObjectStore", V8SharedWorkerGlobalScopePartial::IDBObjectStoreConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBOpenDBRequest", V8SharedWorkerGlobalScopePartial::IDBOpenDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBRequest", V8SharedWorkerGlobalScopePartial::IDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBTransaction", V8SharedWorkerGlobalScopePartial::IDBTransactionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBVersionChangeEvent", V8SharedWorkerGlobalScopePartial::IDBVersionChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "NetworkInformation", V8SharedWorkerGlobalScopePartial::NetworkInformationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SubtleCrypto", V8SharedWorkerGlobalScopePartial::SubtleCryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SyncManager", V8SharedWorkerGlobalScopePartial::SyncManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextDecoder", V8SharedWorkerGlobalScopePartial::TextDecoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextDecoderStream", V8SharedWorkerGlobalScopePartial::TextDecoderStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextEncoder", V8SharedWorkerGlobalScopePartial::TextEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextEncoderStream", V8SharedWorkerGlobalScopePartial::TextEncoderStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WebSocket", V8SharedWorkerGlobalScopePartial::WebSocketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

void V8SharedWorkerGlobalScopePartial::InstallV8SharedWorkerGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8SharedWorkerGlobalScope::InstallV8SharedWorkerGlobalScopeTemplate(isolate, world, interface_template);

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
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"TEMPORARY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"PERSISTENT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == WorkerGlobalScopeFileSystem::kTemporary, "the value of SharedWorkerGlobalScope_kTemporary does not match with implementation");
  static_assert(1 == WorkerGlobalScopeFileSystem::kPersistent, "the value of SharedWorkerGlobalScope_kPersistent does not match with implementation");
  V8DOMConfiguration::InstallAttributes(
      isolate, world, instance_template, prototype_template,
      kV8SharedWorkerGlobalScopeAttributes, base::size(kV8SharedWorkerGlobalScopeAttributes));

  // Custom signature

  V8SharedWorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SharedWorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8SharedWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::BackgroundFetchEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BackgroundFetchManager", V8SharedWorkerGlobalScopePartial::BackgroundFetchManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRecord", V8SharedWorkerGlobalScopePartial::BackgroundFetchRecordConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRegistration", V8SharedWorkerGlobalScopePartial::BackgroundFetchRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::IDBObserverEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "IDBObservation", V8SharedWorkerGlobalScopePartial::IDBObservationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "IDBObserver", V8SharedWorkerGlobalScopePartial::IDBObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "IDBObserverChanges", V8SharedWorkerGlobalScopePartial::IDBObserverChangesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationTriggersEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "TimestampTrigger", V8SharedWorkerGlobalScopePartial::TimestampTriggerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Notification", V8SharedWorkerGlobalScopePartial::NotificationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "CanvasGradient", V8SharedWorkerGlobalScopePartial::CanvasGradientConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "CanvasPattern", V8SharedWorkerGlobalScopePartial::CanvasPatternConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "OffscreenCanvasRenderingContext2D", V8SharedWorkerGlobalScopePartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "Path2D", V8SharedWorkerGlobalScopePartial::Path2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGL2RenderingContext", V8SharedWorkerGlobalScopePartial::WebGL2RenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLActiveInfo", V8SharedWorkerGlobalScopePartial::WebGLActiveInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLBuffer", V8SharedWorkerGlobalScopePartial::WebGLBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLFramebuffer", V8SharedWorkerGlobalScopePartial::WebGLFramebufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLProgram", V8SharedWorkerGlobalScopePartial::WebGLProgramConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLQuery", V8SharedWorkerGlobalScopePartial::WebGLQueryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderbuffer", V8SharedWorkerGlobalScopePartial::WebGLRenderbufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderingContext", V8SharedWorkerGlobalScopePartial::WebGLRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLSampler", V8SharedWorkerGlobalScopePartial::WebGLSamplerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLShader", V8SharedWorkerGlobalScopePartial::WebGLShaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLShaderPrecisionFormat", V8SharedWorkerGlobalScopePartial::WebGLShaderPrecisionFormatConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLSync", V8SharedWorkerGlobalScopePartial::WebGLSyncConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLTexture", V8SharedWorkerGlobalScopePartial::WebGLTextureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLTransformFeedback", V8SharedWorkerGlobalScopePartial::WebGLTransformFeedbackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLUniformLocation", V8SharedWorkerGlobalScopePartial::WebGLUniformLocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLVertexArrayObject", V8SharedWorkerGlobalScopePartial::WebGLVertexArrayObjectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PaymentAppEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PaymentInstruments", V8SharedWorkerGlobalScopePartial::PaymentInstrumentsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Permissions", V8SharedWorkerGlobalScopePartial::PermissionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PermissionStatus", V8SharedWorkerGlobalScopePartial::PermissionStatusConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PushMessagingEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PushManager", V8SharedWorkerGlobalScopePartial::PushManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushSubscription", V8SharedWorkerGlobalScopePartial::PushSubscriptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushSubscriptionOptions", V8SharedWorkerGlobalScopePartial::PushSubscriptionOptionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ShapeDetectionEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BarcodeDetector", V8SharedWorkerGlobalScopePartial::BarcodeDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FaceDetector", V8SharedWorkerGlobalScopePartial::FaceDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "TextDetector", V8SharedWorkerGlobalScopePartial::TextDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebGL2ComputeContextEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "WebGL2ComputeRenderingContext", V8SharedWorkerGlobalScopePartial::WebGL2ComputeRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    {
      // Install webkitRequestFileSystem configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitRequestFileSystem", V8SharedWorkerGlobalScopePartial::WebkitRequestFileSystemMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    {
      // Install webkitRequestFileSystemSync configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitRequestFileSystemSync", V8SharedWorkerGlobalScopePartial::WebkitRequestFileSystemSyncMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    {
      // Install webkitResolveLocalFileSystemURL configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitResolveLocalFileSystemURL", V8SharedWorkerGlobalScopePartial::WebkitResolveLocalFileSystemURLMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    {
      // Install webkitResolveLocalFileSystemSyncURL configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitResolveLocalFileSystemSyncURL", V8SharedWorkerGlobalScopePartial::WebkitResolveLocalFileSystemSyncURLMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8SharedWorkerGlobalScopePartial::InstallTrustedDOMTypes(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8SharedWorkerGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kTrustedTypesConfigurations[] = {
      { "TrustedTypes", V8SharedWorkerGlobalScopePartial::TrustedTypesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypesConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8SharedWorkerGlobalScopePartial::InstallTrustedDOMTypes(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8SharedWorkerGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8SharedWorkerGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallTrustedDOMTypes(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8SharedWorkerGlobalScopePartial::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());
  V8SharedWorkerGlobalScope::InstallConditionalFeatures(
      context, world, instance_object, prototype_object, interface_object, interface_template);

  v8::Isolate* isolate = context->GetIsolate();

  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!instance_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
          { "Cache", V8SharedWorkerGlobalScopePartial::CacheConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "CacheStorage", V8SharedWorkerGlobalScopePartial::CacheStorageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "Lock", V8SharedWorkerGlobalScopePartial::LockConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "LockManager", V8SharedWorkerGlobalScopePartial::LockManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "NavigationPreloadManager", V8SharedWorkerGlobalScopePartial::NavigationPreloadManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "ServiceWorkerRegistration", V8SharedWorkerGlobalScopePartial::ServiceWorkerRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "StorageManager", V8SharedWorkerGlobalScopePartial::StorageManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAttributes(
          isolate, world, instance_object, prototype_object,
          attribute_configurations, base::size(attribute_configurations));
    }
  }
}

void V8SharedWorkerGlobalScopePartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8SharedWorkerGlobalScope::UpdateWrapperTypeInfo(
      &V8SharedWorkerGlobalScopePartial::InstallV8SharedWorkerGlobalScopeTemplate,
      nullptr,
      &V8SharedWorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate,
      V8SharedWorkerGlobalScopePartial::InstallConditionalFeatures);
}

}  // namespace blink
