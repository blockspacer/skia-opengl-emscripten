// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_dedicated_worker_global_scope_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dedicated_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
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
#include "third_party/blink/renderer/bindings/modules/v8/v8_idle_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idle_state.h"
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
#include "third_party/blink/renderer/bindings/modules/v8/v8_serial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_serial_port.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sms.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sms_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_subtle_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_decoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_decoder_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_encoder_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_timestamp_trigger.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_alternate_interface.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_connection_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_endpoint.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_in_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_interface.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_in_transfer_packet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_in_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_out_transfer_packet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_out_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_out_transfer_result.h"
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
#include "third_party/blink/renderer/modules/dedicated_worker_global_scope_modules_constructors.h"
#include "third_party/blink/renderer/modules/filesystem/worker_global_scope_file_system.h"
#include "third_party/blink/renderer/modules/indexeddb/global_indexed_db.h"
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

namespace dedicated_worker_global_scope_partial_v8_internal {

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

static void WebkitRequestFileSystemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DedicatedWorkerGlobalScope", "webkitRequestFileSystem");

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DedicatedWorkerGlobalScope", "webkitRequestFileSystemSync");

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

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
  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("webkitResolveLocalFileSystemURL", "DedicatedWorkerGlobalScope", ExceptionMessages::NotEnoughArguments(2, info.Length())));
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
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("webkitResolveLocalFileSystemURL", "DedicatedWorkerGlobalScope", "The callback provided as parameter 2 is not an object."));
    return;
  }

  if (info[2]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("webkitResolveLocalFileSystemURL", "DedicatedWorkerGlobalScope", "The callback provided as parameter 3 is not an object."));
    return;
  }

  WorkerGlobalScopeFileSystem::webkitResolveLocalFileSystemURL(*impl, url, success_callback, error_callback);
}

static void WebkitResolveLocalFileSystemSyncURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DedicatedWorkerGlobalScope", "webkitResolveLocalFileSystemSyncURL");

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

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

}  // namespace dedicated_worker_global_scope_partial_v8_internal

void V8DedicatedWorkerGlobalScopePartial::BackgroundFetchManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BackgroundFetchManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchManager::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::BackgroundFetchRecordConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BackgroundFetchRecord_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchRecord::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::BackgroundFetchRegistrationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BackgroundFetchRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchRegistration::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBObservationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBObservation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObservation::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBObserverChangesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBObserverChanges_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObserverChanges::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObserver::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IdleDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IdleDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IdleDetector::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IdleStateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IdleState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IdleState::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::TimestampTriggerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TimestampTrigger_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TimestampTrigger::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::NotificationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Notification_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Notification::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::CanvasGradientConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CanvasGradient_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanvasGradient::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::CanvasPatternConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CanvasPattern_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanvasPattern::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_OffscreenCanvasRenderingContext2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OffscreenCanvasRenderingContext2D::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::Path2DConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Path2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Path2D::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGL2RenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGL2RenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGL2RenderingContext::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLActiveInfoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLActiveInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLActiveInfo::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLBufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLBuffer::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLFramebufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLFramebuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLFramebuffer::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLProgramConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLProgram_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLProgram::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLQueryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLQuery_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLQuery::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLRenderbufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLRenderbuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLRenderbuffer::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLRenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLRenderingContext::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLSamplerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLSampler_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLSampler::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLShaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLShader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLShader::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLShaderPrecisionFormatConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLShaderPrecisionFormat_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLShaderPrecisionFormat::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLSyncConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLSync_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLSync::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLTextureConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLTexture_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLTexture::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLTransformFeedbackConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLTransformFeedback_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLTransformFeedback::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLUniformLocationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLUniformLocation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLUniformLocation::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGLVertexArrayObjectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLVertexArrayObject_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLVertexArrayObject::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::PaymentInstrumentsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PaymentInstruments_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentInstruments::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::PermissionStatusConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PermissionStatus_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PermissionStatus::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::PermissionsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Permissions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Permissions::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::PushManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PushManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushManager::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::PushSubscriptionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PushSubscription_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushSubscription::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::PushSubscriptionOptionsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PushSubscriptionOptions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushSubscriptionOptions::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::SerialConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Serial_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Serial::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::SerialPortConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_SerialPort_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SerialPort::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::BarcodeDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BarcodeDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BarcodeDetector::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::FaceDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FaceDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FaceDetector::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::TextDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TextDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDetector::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::SMSConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_SMS_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SMS::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::SMSReceiverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_SMSReceiver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SMSReceiver::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebGL2ComputeRenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGL2ComputeRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGL2ComputeRenderingContext::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBAlternateInterfaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBAlternateInterface_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBAlternateInterface::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBConfigurationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBConfiguration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBConfiguration::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBConnectionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBConnectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBConnectionEvent::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USB_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USB::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBDeviceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBDevice_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBDevice::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBEndpointConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBEndpoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBEndpoint::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBInTransferResultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBInTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBInTransferResult::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBInterfaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBInterface_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBInterface::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBIsochronousInTransferPacketConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBIsochronousInTransferPacket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBIsochronousInTransferPacket::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBIsochronousInTransferResultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBIsochronousInTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBIsochronousInTransferResult::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBIsochronousOutTransferPacketConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBIsochronousOutTransferPacket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBIsochronousOutTransferPacket::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBIsochronousOutTransferResultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBIsochronousOutTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBIsochronousOutTransferResult::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::USBOutTransferResultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBOutTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBOutTransferResult::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::CacheConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Cache_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Cache::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::CacheStorageConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CacheStorage_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CacheStorage::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::LockConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Lock_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Lock::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::LockManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_LockManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8LockManager::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::NavigationPreloadManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_NavigationPreloadManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NavigationPreloadManager::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::ServiceWorkerRegistrationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ServiceWorkerRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ServiceWorkerRegistration::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::StorageManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_StorageManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StorageManager::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::BroadcastChannelConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BroadcastChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BroadcastChannel::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::CloseEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CloseEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CloseEvent::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::CryptoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Crypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Crypto::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::CryptoKeyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CryptoKey_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CryptoKey::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::EventSourceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_EventSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8EventSource::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBCursorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBCursor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBCursor::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBCursorWithValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBCursorWithValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBCursorWithValue::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBDatabaseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBDatabase_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBDatabase::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBFactoryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBFactory_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBFactory::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBIndexConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBIndex_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBIndex::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBKeyRangeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBKeyRange_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBKeyRange::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBObjectStoreConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBObjectStore_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObjectStore::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBOpenDBRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBOpenDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBOpenDBRequest::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBRequest::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBTransactionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBTransaction_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBTransaction::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::IDBVersionChangeEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBVersionChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBVersionChangeEvent::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::NetworkInformationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_NetworkInformation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NetworkInformation::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::SubtleCryptoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_SubtleCrypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SubtleCrypto::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::SyncManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_SyncManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SyncManager::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::TextDecoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TextDecoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDecoder::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::TextDecoderStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TextDecoderStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDecoderStream::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::TextEncoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TextEncoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextEncoder::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::TextEncoderStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TextEncoderStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextEncoderStream::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::WebSocketConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebSocket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebSocket::GetWrapperTypeInfo());
}

void V8DedicatedWorkerGlobalScopePartial::TrustedTypesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TrustedTypes_Getter");

  dedicated_worker_global_scope_partial_v8_internal::TrustedTypesAttributeGetter(info);
}

void V8DedicatedWorkerGlobalScopePartial::WebkitRequestFileSystemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_webkitRequestFileSystem");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kRequestFileSystemWorker);
  dedicated_worker_global_scope_partial_v8_internal::WebkitRequestFileSystemMethod(info);
}

void V8DedicatedWorkerGlobalScopePartial::WebkitRequestFileSystemSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_webkitRequestFileSystemSync");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kRequestFileSystemSyncWorker);
  dedicated_worker_global_scope_partial_v8_internal::WebkitRequestFileSystemSyncMethod(info);
}

void V8DedicatedWorkerGlobalScopePartial::WebkitResolveLocalFileSystemURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_webkitResolveLocalFileSystemURL");

  dedicated_worker_global_scope_partial_v8_internal::WebkitResolveLocalFileSystemURLMethod(info);
}

void V8DedicatedWorkerGlobalScopePartial::WebkitResolveLocalFileSystemSyncURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_webkitResolveLocalFileSystemSyncURL");

  dedicated_worker_global_scope_partial_v8_internal::WebkitResolveLocalFileSystemSyncURLMethod(info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static constexpr V8DOMConfiguration::AttributeConfiguration kV8DedicatedWorkerGlobalScopeAttributes[] = {
    { "BroadcastChannel", V8DedicatedWorkerGlobalScopePartial::BroadcastChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CloseEvent", V8DedicatedWorkerGlobalScopePartial::CloseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Crypto", V8DedicatedWorkerGlobalScopePartial::CryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CryptoKey", V8DedicatedWorkerGlobalScopePartial::CryptoKeyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "EventSource", V8DedicatedWorkerGlobalScopePartial::EventSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBCursor", V8DedicatedWorkerGlobalScopePartial::IDBCursorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBCursorWithValue", V8DedicatedWorkerGlobalScopePartial::IDBCursorWithValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBDatabase", V8DedicatedWorkerGlobalScopePartial::IDBDatabaseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBFactory", V8DedicatedWorkerGlobalScopePartial::IDBFactoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBIndex", V8DedicatedWorkerGlobalScopePartial::IDBIndexConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBKeyRange", V8DedicatedWorkerGlobalScopePartial::IDBKeyRangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBObjectStore", V8DedicatedWorkerGlobalScopePartial::IDBObjectStoreConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBOpenDBRequest", V8DedicatedWorkerGlobalScopePartial::IDBOpenDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBRequest", V8DedicatedWorkerGlobalScopePartial::IDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBTransaction", V8DedicatedWorkerGlobalScopePartial::IDBTransactionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBVersionChangeEvent", V8DedicatedWorkerGlobalScopePartial::IDBVersionChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "NetworkInformation", V8DedicatedWorkerGlobalScopePartial::NetworkInformationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SubtleCrypto", V8DedicatedWorkerGlobalScopePartial::SubtleCryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SyncManager", V8DedicatedWorkerGlobalScopePartial::SyncManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextDecoder", V8DedicatedWorkerGlobalScopePartial::TextDecoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextDecoderStream", V8DedicatedWorkerGlobalScopePartial::TextDecoderStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextEncoder", V8DedicatedWorkerGlobalScopePartial::TextEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextEncoderStream", V8DedicatedWorkerGlobalScopePartial::TextEncoderStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WebSocket", V8DedicatedWorkerGlobalScopePartial::WebSocketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

void V8DedicatedWorkerGlobalScopePartial::InstallV8DedicatedWorkerGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DedicatedWorkerGlobalScope::InstallV8DedicatedWorkerGlobalScopeTemplate(isolate, world, interface_template);

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
  static_assert(0 == WorkerGlobalScopeFileSystem::kTemporary, "the value of DedicatedWorkerGlobalScope_kTemporary does not match with implementation");
  static_assert(1 == WorkerGlobalScopeFileSystem::kPersistent, "the value of DedicatedWorkerGlobalScope_kPersistent does not match with implementation");
  V8DOMConfiguration::InstallAttributes(
      isolate, world, instance_template, prototype_template,
      kV8DedicatedWorkerGlobalScopeAttributes, base::size(kV8DedicatedWorkerGlobalScopeAttributes));

  // Custom signature

  V8DedicatedWorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DedicatedWorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8DedicatedWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::BackgroundFetchEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BackgroundFetchManager", V8DedicatedWorkerGlobalScopePartial::BackgroundFetchManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRecord", V8DedicatedWorkerGlobalScopePartial::BackgroundFetchRecordConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRegistration", V8DedicatedWorkerGlobalScopePartial::BackgroundFetchRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::IDBObserverEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "IDBObservation", V8DedicatedWorkerGlobalScopePartial::IDBObservationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "IDBObserver", V8DedicatedWorkerGlobalScopePartial::IDBObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "IDBObserverChanges", V8DedicatedWorkerGlobalScopePartial::IDBObserverChangesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationTriggersEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "TimestampTrigger", V8DedicatedWorkerGlobalScopePartial::TimestampTriggerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Notification", V8DedicatedWorkerGlobalScopePartial::NotificationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "CanvasGradient", V8DedicatedWorkerGlobalScopePartial::CanvasGradientConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "CanvasPattern", V8DedicatedWorkerGlobalScopePartial::CanvasPatternConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "OffscreenCanvasRenderingContext2D", V8DedicatedWorkerGlobalScopePartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "Path2D", V8DedicatedWorkerGlobalScopePartial::Path2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGL2RenderingContext", V8DedicatedWorkerGlobalScopePartial::WebGL2RenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLActiveInfo", V8DedicatedWorkerGlobalScopePartial::WebGLActiveInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLBuffer", V8DedicatedWorkerGlobalScopePartial::WebGLBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLFramebuffer", V8DedicatedWorkerGlobalScopePartial::WebGLFramebufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLProgram", V8DedicatedWorkerGlobalScopePartial::WebGLProgramConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLQuery", V8DedicatedWorkerGlobalScopePartial::WebGLQueryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderbuffer", V8DedicatedWorkerGlobalScopePartial::WebGLRenderbufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderingContext", V8DedicatedWorkerGlobalScopePartial::WebGLRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLSampler", V8DedicatedWorkerGlobalScopePartial::WebGLSamplerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLShader", V8DedicatedWorkerGlobalScopePartial::WebGLShaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLShaderPrecisionFormat", V8DedicatedWorkerGlobalScopePartial::WebGLShaderPrecisionFormatConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLSync", V8DedicatedWorkerGlobalScopePartial::WebGLSyncConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLTexture", V8DedicatedWorkerGlobalScopePartial::WebGLTextureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLTransformFeedback", V8DedicatedWorkerGlobalScopePartial::WebGLTransformFeedbackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLUniformLocation", V8DedicatedWorkerGlobalScopePartial::WebGLUniformLocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLVertexArrayObject", V8DedicatedWorkerGlobalScopePartial::WebGLVertexArrayObjectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PaymentAppEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PaymentInstruments", V8DedicatedWorkerGlobalScopePartial::PaymentInstrumentsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Permissions", V8DedicatedWorkerGlobalScopePartial::PermissionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PermissionStatus", V8DedicatedWorkerGlobalScopePartial::PermissionStatusConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PushMessagingEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PushManager", V8DedicatedWorkerGlobalScopePartial::PushManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushSubscription", V8DedicatedWorkerGlobalScopePartial::PushSubscriptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushSubscriptionOptions", V8DedicatedWorkerGlobalScopePartial::PushSubscriptionOptionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ShapeDetectionEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BarcodeDetector", V8DedicatedWorkerGlobalScopePartial::BarcodeDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FaceDetector", V8DedicatedWorkerGlobalScopePartial::FaceDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "TextDetector", V8DedicatedWorkerGlobalScopePartial::TextDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebGL2ComputeContextEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "WebGL2ComputeRenderingContext", V8DedicatedWorkerGlobalScopePartial::WebGL2ComputeRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
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
          {"webkitRequestFileSystem", V8DedicatedWorkerGlobalScopePartial::WebkitRequestFileSystemMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
          {"webkitRequestFileSystemSync", V8DedicatedWorkerGlobalScopePartial::WebkitRequestFileSystemSyncMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
          {"webkitResolveLocalFileSystemURL", V8DedicatedWorkerGlobalScopePartial::WebkitResolveLocalFileSystemURLMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
          {"webkitResolveLocalFileSystemSyncURL", V8DedicatedWorkerGlobalScopePartial::WebkitResolveLocalFileSystemSyncURLMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8DedicatedWorkerGlobalScopePartial::InstallTrustedDOMTypes(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kTrustedTypesConfigurations[] = {
      { "TrustedTypes", V8DedicatedWorkerGlobalScopePartial::TrustedTypesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypesConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8DedicatedWorkerGlobalScopePartial::InstallTrustedDOMTypes(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8DedicatedWorkerGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallTrustedDOMTypes(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8DedicatedWorkerGlobalScopePartial::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());
  V8DedicatedWorkerGlobalScope::InstallConditionalFeatures(
      context, world, instance_object, prototype_object, interface_object, interface_template);

  v8::Isolate* isolate = context->GetIsolate();

  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!instance_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
          { "Cache", V8DedicatedWorkerGlobalScopePartial::CacheConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "CacheStorage", V8DedicatedWorkerGlobalScopePartial::CacheStorageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "Lock", V8DedicatedWorkerGlobalScopePartial::LockConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "LockManager", V8DedicatedWorkerGlobalScopePartial::LockManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "NavigationPreloadManager", V8DedicatedWorkerGlobalScopePartial::NavigationPreloadManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "ServiceWorkerRegistration", V8DedicatedWorkerGlobalScopePartial::ServiceWorkerRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "StorageManager", V8DedicatedWorkerGlobalScopePartial::StorageManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAttributes(
          isolate, world, instance_object, prototype_object,
          attribute_configurations, base::size(attribute_configurations));
      if (RuntimeEnabledFeatures::IdleDetectionEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "IdleDetector", V8DedicatedWorkerGlobalScopePartial::IdleDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "IdleState", V8DedicatedWorkerGlobalScopePartial::IdleStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::SerialEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "Serial", V8DedicatedWorkerGlobalScopePartial::SerialConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "SerialPort", V8DedicatedWorkerGlobalScopePartial::SerialPortConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::SmsReceiverEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "SMS", V8DedicatedWorkerGlobalScopePartial::SMSConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "SMSReceiver", V8DedicatedWorkerGlobalScopePartial::SMSReceiverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebUSBOnDedicatedWorkersEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "USB", V8DedicatedWorkerGlobalScopePartial::USBConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBAlternateInterface", V8DedicatedWorkerGlobalScopePartial::USBAlternateInterfaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBConfiguration", V8DedicatedWorkerGlobalScopePartial::USBConfigurationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBConnectionEvent", V8DedicatedWorkerGlobalScopePartial::USBConnectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBDevice", V8DedicatedWorkerGlobalScopePartial::USBDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBEndpoint", V8DedicatedWorkerGlobalScopePartial::USBEndpointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBInterface", V8DedicatedWorkerGlobalScopePartial::USBInterfaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBInTransferResult", V8DedicatedWorkerGlobalScopePartial::USBInTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBIsochronousInTransferPacket", V8DedicatedWorkerGlobalScopePartial::USBIsochronousInTransferPacketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBIsochronousInTransferResult", V8DedicatedWorkerGlobalScopePartial::USBIsochronousInTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBIsochronousOutTransferPacket", V8DedicatedWorkerGlobalScopePartial::USBIsochronousOutTransferPacketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBIsochronousOutTransferResult", V8DedicatedWorkerGlobalScopePartial::USBIsochronousOutTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBOutTransferResult", V8DedicatedWorkerGlobalScopePartial::USBOutTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
    }
  }
}

void V8DedicatedWorkerGlobalScopePartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8DedicatedWorkerGlobalScope::UpdateWrapperTypeInfo(
      &V8DedicatedWorkerGlobalScopePartial::InstallV8DedicatedWorkerGlobalScopeTemplate,
      nullptr,
      &V8DedicatedWorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate,
      V8DedicatedWorkerGlobalScopePartial::InstallConditionalFeatures);
}

}  // namespace blink
