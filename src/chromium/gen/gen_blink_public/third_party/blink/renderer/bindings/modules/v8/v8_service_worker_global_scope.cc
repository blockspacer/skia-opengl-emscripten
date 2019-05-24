// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_global_scope.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
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
#include "third_party/blink/renderer/bindings/core/v8/v8_promise_rejection_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_default_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_response.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_transform_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url_search_params.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream_default_writer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_abort_payment_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_record.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_update_ui_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_barcode_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_broadcast_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache_storage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_can_make_payment_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_gradient.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pattern.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_client.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_clients.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_close_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto_key.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_event_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_cookie_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_message_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_face_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_fetch_event.h"
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
#include "third_party/blink/renderer/bindings/modules/v8/v8_install_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigation_preload_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_network_information.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offscreen_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_instruments.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_request_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permission_status.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permissions.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_message_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_subtle_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_event.h"
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
#include "third_party/blink/renderer/bindings/modules/v8/v8_window_client.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/modules/background_fetch/service_worker_global_scope_background_fetch.h"
#include "third_party/blink/renderer/modules/background_sync/service_worker_global_scope_sync.h"
#include "third_party/blink/renderer/modules/cache_storage/global_cache_storage.h"
#include "third_party/blink/renderer/modules/cookie_store/service_worker_global_scope_cookie_store.h"
#include "third_party/blink/renderer/modules/crypto/worker_global_scope_crypto.h"
#include "third_party/blink/renderer/modules/indexeddb/global_indexed_db.h"
#include "third_party/blink/renderer/modules/notifications/service_worker_global_scope_notifications.h"
#include "third_party/blink/renderer/modules/payments/payment_app_service_worker_global_scope.h"
#include "third_party/blink/renderer/modules/push_messaging/service_worker_global_scope_push.h"
#include "third_party/blink/renderer/modules/service_worker_global_scope_core_constructors.h"
#include "third_party/blink/renderer/modules/service_worker_global_scope_modules_constructors.h"
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
const WrapperTypeInfo v8_service_worker_global_scope_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ServiceWorkerGlobalScope::DomTemplate,
    V8ServiceWorkerGlobalScope::InstallConditionalFeatures,
    "ServiceWorkerGlobalScope",
    V8WorkerGlobalScope::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ServiceWorkerGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ServiceWorkerGlobalScope::wrapper_type_info_ = v8_service_worker_global_scope_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, ServiceWorkerGlobalScope>::value,
    "ServiceWorkerGlobalScope does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&ServiceWorkerGlobalScope::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ServiceWorkerGlobalScope is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace service_worker_global_scope_v8_internal {

static void ClientsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  ServiceWorkerClients* cpp_value(WTF::GetPtr(impl->clients()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerGlobalScope#clients")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void RegistrationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  ServiceWorkerRegistration* cpp_value(WTF::GetPtr(impl->registration()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerGlobalScope#registration")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OnactivateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onactivate()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnactivateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnactivate(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnfetchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onfetch()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfetchAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnfetch(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OninstallAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->oninstall()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OninstallAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOninstall(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onmessage()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmessageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmessage(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbackgroundfetchsuccessAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(ServiceWorkerGlobalScopeBackgroundFetch::onbackgroundfetchsuccess(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbackgroundfetchsuccessAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  ServiceWorkerGlobalScopeBackgroundFetch::setOnbackgroundfetchsuccess(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbackgroundfetchfailAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(ServiceWorkerGlobalScopeBackgroundFetch::onbackgroundfetchfail(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbackgroundfetchfailAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  ServiceWorkerGlobalScopeBackgroundFetch::setOnbackgroundfetchfail(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbackgroundfetchabortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(ServiceWorkerGlobalScopeBackgroundFetch::onbackgroundfetchabort(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbackgroundfetchabortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  ServiceWorkerGlobalScopeBackgroundFetch::setOnbackgroundfetchabort(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbackgroundfetchclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(ServiceWorkerGlobalScopeBackgroundFetch::onbackgroundfetchclick(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbackgroundfetchclickAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  ServiceWorkerGlobalScopeBackgroundFetch::setOnbackgroundfetchclick(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsyncAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(ServiceWorkerGlobalScopeSync::onsync(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsyncAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  ServiceWorkerGlobalScopeSync::setOnsync(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void CookieStoreAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  CookieStore* cpp_value(ServiceWorkerGlobalScopeCookieStore::cookieStore(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerGlobalScope#cookieStore")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CookieStoreAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "cookieStore");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void OncookiechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(ServiceWorkerGlobalScopeCookieStore::oncookiechange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncookiechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  ServiceWorkerGlobalScopeCookieStore::setOncookiechange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnnotificationclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(ServiceWorkerGlobalScopeNotifications::onnotificationclick(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnnotificationclickAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  ServiceWorkerGlobalScopeNotifications::setOnnotificationclick(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnnotificationcloseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(ServiceWorkerGlobalScopeNotifications::onnotificationclose(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnnotificationcloseAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  ServiceWorkerGlobalScopeNotifications::setOnnotificationclose(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnabortpaymentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(PaymentAppServiceWorkerGlobalScope::onabortpayment(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnabortpaymentAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  PaymentAppServiceWorkerGlobalScope::setOnabortpayment(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncanmakepaymentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(PaymentAppServiceWorkerGlobalScope::oncanmakepayment(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncanmakepaymentAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  PaymentAppServiceWorkerGlobalScope::setOncanmakepayment(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpaymentrequestAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(PaymentAppServiceWorkerGlobalScope::onpaymentrequest(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpaymentrequestAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  PaymentAppServiceWorkerGlobalScope::setOnpaymentrequest(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpushAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(ServiceWorkerGlobalScopePush::onpush(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpushAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  ServiceWorkerGlobalScopePush::setOnpush(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void TrustedTypesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(holder);

  TrustedTypePolicyFactory* cpp_value(WTF::GetPtr(impl->trustedTypes()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerGlobalScope#TrustedTypes")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void FetchMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ServiceWorkerGlobalScope", "fetch");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ServiceWorkerGlobalScope::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RequestOrUSVString input;
  RequestInit* init;
  V8RequestOrUSVString::ToImpl(info.GetIsolate(), info[0], input, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('init') is not an object.");
    return;
  }
  init = NativeValueTraits<RequestInit>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->fetch(script_state, input, init, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void SkipWaitingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ServiceWorkerGlobalScope", "skipWaiting");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ServiceWorkerGlobalScope::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  ServiceWorkerGlobalScope* impl = V8ServiceWorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->skipWaiting(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace service_worker_global_scope_v8_internal

void V8ServiceWorkerGlobalScope::ClientsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_clients_Getter");

  service_worker_global_scope_v8_internal::ClientsAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::RegistrationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_registration_Getter");

  service_worker_global_scope_v8_internal::RegistrationAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnactivateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onactivate_Getter");

  service_worker_global_scope_v8_internal::OnactivateAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnactivateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onactivate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnactivateAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnfetchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onfetch_Getter");

  service_worker_global_scope_v8_internal::OnfetchAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnfetchAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onfetch_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnfetchAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OninstallAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_oninstall_Getter");

  service_worker_global_scope_v8_internal::OninstallAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OninstallAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_oninstall_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OninstallAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onmessage_Getter");

  service_worker_global_scope_v8_internal::OnmessageAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnmessageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onmessage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnmessageAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::TrustedTypePolicyFactoryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_TrustedTypePolicyFactory_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrustedTypePolicyFactory::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::MojoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Mojo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Mojo::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::MojoHandleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_MojoHandle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoHandle::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::MojoWatcherConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_MojoWatcher_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoWatcher::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::MojoInterfaceInterceptorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_MojoInterfaceInterceptor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoInterfaceInterceptor::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::MojoInterfaceRequestEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_MojoInterfaceRequestEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoInterfaceRequestEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::FontFaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_FontFace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FontFace::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::OffscreenCanvasConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_OffscreenCanvas_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OffscreenCanvas::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ReadableStreamDefaultReaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_ReadableStreamDefaultReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReadableStreamDefaultReader::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WritableStreamDefaultWriterConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WritableStreamDefaultWriter_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WritableStreamDefaultWriter::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::AbortControllerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_AbortController_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AbortController::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::AbortSignalConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_AbortSignal_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AbortSignal::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::BlobConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Blob_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Blob::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CSSSkewXConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_CSSSkewX_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSSkewX::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CSSSkewYConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_CSSSkewY_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSSkewY::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CustomEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_CustomEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CustomEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::DOMExceptionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_DOMException_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMException::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::DOMMatrixConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_DOMMatrix_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMMatrix::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::DOMMatrixReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_DOMMatrixReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMMatrixReadOnly::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::DOMPointConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_DOMPoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMPoint::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::DOMPointReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_DOMPointReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMPointReadOnly::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::DOMQuadConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_DOMQuad_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMQuad::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::DOMRectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_DOMRect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMRect::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::DOMRectReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_DOMRectReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMRectReadOnly::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::DOMStringListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_DOMStringList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMStringList::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ErrorEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_ErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ErrorEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::EventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Event_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Event::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::EventTargetConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_EventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8EventTarget::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::FileConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_File_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8File::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::FileListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_FileList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileList::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::FileReaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_FileReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileReader::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::FormDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_FormData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FormData::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::HeadersConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Headers_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Headers::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ImageBitmapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_ImageBitmap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ImageBitmap::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ImageDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_ImageData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ImageData::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::MessageChannelConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_MessageChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessageChannel::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::MessageEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_MessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessageEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::MessagePortConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_MessagePort_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessagePort::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PerformanceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Performance_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Performance::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PerformanceEntryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PerformanceEntry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceEntry::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PerformanceMarkConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PerformanceMark_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceMark::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PerformanceMeasureConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PerformanceMeasure_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceMeasure::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PerformanceObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PerformanceObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceObserver::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PerformanceObserverEntryListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PerformanceObserverEntryList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceObserverEntryList::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PerformanceResourceTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PerformanceResourceTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceResourceTiming::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PerformanceServerTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PerformanceServerTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceServerTiming::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PromiseRejectionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PromiseRejectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PromiseRejectionEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ReadableStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_ReadableStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReadableStream::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::RequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Request_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Request::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ResponseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Response_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Response::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::TransformStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_TransformStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TransformStream::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::URLConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_URL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8URL::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::URLSearchParamsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_URLSearchParams_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8URLSearchParams::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WorkerGlobalScopeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WorkerGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkerGlobalScope::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WorkerLocationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WorkerLocation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkerLocation::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WorkerNavigatorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WorkerNavigator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkerNavigator::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WritableStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WritableStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WritableStream::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::BackgroundFetchEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_BackgroundFetchEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::BackgroundFetchManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_BackgroundFetchManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchManager::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::BackgroundFetchRecordConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_BackgroundFetchRecord_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchRecord::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::BackgroundFetchRegistrationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_BackgroundFetchRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchRegistration::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::BackgroundFetchUpdateUIEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_BackgroundFetchUpdateUIEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchUpdateUIEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CookieStoreConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_CookieStore_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CookieStore::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ExtendableCookieChangeEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_ExtendableCookieChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ExtendableCookieChangeEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBObservationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBObservation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObservation::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBObserverChangesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBObserverChanges_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObserverChanges::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObserver::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::TimestampTriggerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_TimestampTrigger_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TimestampTrigger::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::NotificationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Notification_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Notification::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::NotificationEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_NotificationEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NotificationEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CanvasGradientConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_CanvasGradient_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanvasGradient::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CanvasPatternConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_CanvasPattern_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanvasPattern::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::OffscreenCanvasRenderingContext2DConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_OffscreenCanvasRenderingContext2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OffscreenCanvasRenderingContext2D::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::Path2DConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Path2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Path2D::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGL2RenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGL2RenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGL2RenderingContext::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLActiveInfoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLActiveInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLActiveInfo::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLBufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLBuffer::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLFramebufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLFramebuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLFramebuffer::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLProgramConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLProgram_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLProgram::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLQueryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLQuery_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLQuery::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLRenderbufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLRenderbuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLRenderbuffer::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLRenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLRenderingContext::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLSamplerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLSampler_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLSampler::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLShaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLShader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLShader::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLShaderPrecisionFormatConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLShaderPrecisionFormat_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLShaderPrecisionFormat::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLSyncConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLSync_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLSync::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLTextureConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLTexture_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLTexture::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLTransformFeedbackConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLTransformFeedback_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLTransformFeedback::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLUniformLocationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLUniformLocation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLUniformLocation::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGLVertexArrayObjectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGLVertexArrayObject_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLVertexArrayObject::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::AbortPaymentEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_AbortPaymentEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AbortPaymentEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CanMakePaymentEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_CanMakePaymentEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanMakePaymentEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PaymentInstrumentsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PaymentInstruments_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentInstruments::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PaymentRequestEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PaymentRequestEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentRequestEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PermissionStatusConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PermissionStatus_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PermissionStatus::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PermissionsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Permissions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Permissions::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PushEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PushEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PushManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PushManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushManager::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PushSubscriptionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PushSubscription_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushSubscription::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PushSubscriptionOptionsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PushSubscriptionOptions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushSubscriptionOptions::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::BarcodeDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_BarcodeDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BarcodeDetector::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::FaceDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_FaceDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FaceDetector::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::TextDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_TextDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDetector::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebGL2ComputeRenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebGL2ComputeRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGL2ComputeRenderingContext::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CacheConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Cache_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Cache::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CacheStorageConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_CacheStorage_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CacheStorage::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::LockConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Lock_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Lock::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::LockManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_LockManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8LockManager::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::NavigationPreloadManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_NavigationPreloadManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NavigationPreloadManager::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ServiceWorkerRegistrationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_ServiceWorkerRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ServiceWorkerRegistration::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::StorageManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_StorageManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StorageManager::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::BroadcastChannelConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_BroadcastChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BroadcastChannel::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ClientConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Client_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Client::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ClientsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Clients_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Clients::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CloseEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_CloseEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CloseEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CryptoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_Crypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Crypto::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::CryptoKeyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_CryptoKey_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CryptoKey::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::EventSourceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_EventSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8EventSource::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ExtendableEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_ExtendableEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ExtendableEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ExtendableMessageEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_ExtendableMessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ExtendableMessageEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::FetchEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_FetchEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FetchEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBCursorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBCursor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBCursor::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBCursorWithValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBCursorWithValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBCursorWithValue::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBDatabaseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBDatabase_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBDatabase::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBFactoryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBFactory_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBFactory::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBIndexConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBIndex_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBIndex::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBKeyRangeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBKeyRange_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBKeyRange::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBObjectStoreConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBObjectStore_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObjectStore::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBOpenDBRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBOpenDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBOpenDBRequest::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBRequest::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBTransactionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBTransaction_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBTransaction::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::IDBVersionChangeEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_IDBVersionChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBVersionChangeEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::InstallEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_InstallEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8InstallEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::NetworkInformationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_NetworkInformation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NetworkInformation::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::PushMessageDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_PushMessageData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushMessageData::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::ServiceWorkerGlobalScopeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_ServiceWorkerGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ServiceWorkerGlobalScope::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::SubtleCryptoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_SubtleCrypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SubtleCrypto::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::SyncEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_SyncEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SyncEvent::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::SyncManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_SyncManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SyncManager::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::TextDecoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_TextDecoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDecoder::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::TextDecoderStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_TextDecoderStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDecoderStream::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::TextEncoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_TextEncoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextEncoder::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::TextEncoderStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_TextEncoderStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextEncoderStream::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WebSocketConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WebSocket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebSocket::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::WindowClientConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_WindowClient_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WindowClient::GetWrapperTypeInfo());
}

void V8ServiceWorkerGlobalScope::OnbackgroundfetchsuccessAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onbackgroundfetchsuccess_Getter");

  service_worker_global_scope_v8_internal::OnbackgroundfetchsuccessAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnbackgroundfetchsuccessAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onbackgroundfetchsuccess_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnbackgroundfetchsuccessAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnbackgroundfetchfailAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onbackgroundfetchfail_Getter");

  service_worker_global_scope_v8_internal::OnbackgroundfetchfailAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnbackgroundfetchfailAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onbackgroundfetchfail_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnbackgroundfetchfailAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnbackgroundfetchabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onbackgroundfetchabort_Getter");

  service_worker_global_scope_v8_internal::OnbackgroundfetchabortAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnbackgroundfetchabortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onbackgroundfetchabort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnbackgroundfetchabortAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnbackgroundfetchclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onbackgroundfetchclick_Getter");

  service_worker_global_scope_v8_internal::OnbackgroundfetchclickAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnbackgroundfetchclickAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onbackgroundfetchclick_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnbackgroundfetchclickAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnsyncAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onsync_Getter");

  service_worker_global_scope_v8_internal::OnsyncAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnsyncAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onsync_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnsyncAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::CookieStoreAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_cookieStore_Getter");

  service_worker_global_scope_v8_internal::CookieStoreAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::CookieStoreAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_cookieStore_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::CookieStoreAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OncookiechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_oncookiechange_Getter");

  service_worker_global_scope_v8_internal::OncookiechangeAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OncookiechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_oncookiechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OncookiechangeAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnnotificationclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onnotificationclick_Getter");

  service_worker_global_scope_v8_internal::OnnotificationclickAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnnotificationclickAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onnotificationclick_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnnotificationclickAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnnotificationcloseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onnotificationclose_Getter");

  service_worker_global_scope_v8_internal::OnnotificationcloseAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnnotificationcloseAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onnotificationclose_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnnotificationcloseAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnabortpaymentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onabortpayment_Getter");

  service_worker_global_scope_v8_internal::OnabortpaymentAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnabortpaymentAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onabortpayment_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnabortpaymentAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OncanmakepaymentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_oncanmakepayment_Getter");

  service_worker_global_scope_v8_internal::OncanmakepaymentAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OncanmakepaymentAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_oncanmakepayment_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OncanmakepaymentAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnpaymentrequestAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onpaymentrequest_Getter");

  service_worker_global_scope_v8_internal::OnpaymentrequestAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnpaymentrequestAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onpaymentrequest_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnpaymentrequestAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::OnpushAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onpush_Getter");

  service_worker_global_scope_v8_internal::OnpushAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::OnpushAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_onpush_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_global_scope_v8_internal::OnpushAttributeSetter(v8_value, info);
}

void V8ServiceWorkerGlobalScope::TrustedTypesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_TrustedTypes_Getter");

  service_worker_global_scope_v8_internal::TrustedTypesAttributeGetter(info);
}

void V8ServiceWorkerGlobalScope::FetchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_fetch");

  service_worker_global_scope_v8_internal::FetchMethod(info);
}

void V8ServiceWorkerGlobalScope::SkipWaitingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerGlobalScope_skipWaiting");

  service_worker_global_scope_v8_internal::SkipWaitingMethod(info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static constexpr V8DOMConfiguration::AttributeConfiguration kV8ServiceWorkerGlobalScopeAttributes[] = {
    { "AbortController", V8ServiceWorkerGlobalScope::AbortControllerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AbortSignal", V8ServiceWorkerGlobalScope::AbortSignalConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Blob", V8ServiceWorkerGlobalScope::BlobConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSSkewX", V8ServiceWorkerGlobalScope::CSSSkewXConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSSkewY", V8ServiceWorkerGlobalScope::CSSSkewYConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CustomEvent", V8ServiceWorkerGlobalScope::CustomEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMException", V8ServiceWorkerGlobalScope::DOMExceptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrix", V8ServiceWorkerGlobalScope::DOMMatrixConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrixReadOnly", V8ServiceWorkerGlobalScope::DOMMatrixReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMPoint", V8ServiceWorkerGlobalScope::DOMPointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMPointReadOnly", V8ServiceWorkerGlobalScope::DOMPointReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMQuad", V8ServiceWorkerGlobalScope::DOMQuadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMRect", V8ServiceWorkerGlobalScope::DOMRectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMRectReadOnly", V8ServiceWorkerGlobalScope::DOMRectReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMStringList", V8ServiceWorkerGlobalScope::DOMStringListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ErrorEvent", V8ServiceWorkerGlobalScope::ErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Event", V8ServiceWorkerGlobalScope::EventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "EventTarget", V8ServiceWorkerGlobalScope::EventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "File", V8ServiceWorkerGlobalScope::FileConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FileList", V8ServiceWorkerGlobalScope::FileListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FileReader", V8ServiceWorkerGlobalScope::FileReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FormData", V8ServiceWorkerGlobalScope::FormDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Headers", V8ServiceWorkerGlobalScope::HeadersConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ImageBitmap", V8ServiceWorkerGlobalScope::ImageBitmapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ImageData", V8ServiceWorkerGlobalScope::ImageDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessageChannel", V8ServiceWorkerGlobalScope::MessageChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessageEvent", V8ServiceWorkerGlobalScope::MessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessagePort", V8ServiceWorkerGlobalScope::MessagePortConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Performance", V8ServiceWorkerGlobalScope::PerformanceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceEntry", V8ServiceWorkerGlobalScope::PerformanceEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceMark", V8ServiceWorkerGlobalScope::PerformanceMarkConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceMeasure", V8ServiceWorkerGlobalScope::PerformanceMeasureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserver", V8ServiceWorkerGlobalScope::PerformanceObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserverEntryList", V8ServiceWorkerGlobalScope::PerformanceObserverEntryListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceResourceTiming", V8ServiceWorkerGlobalScope::PerformanceResourceTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceServerTiming", V8ServiceWorkerGlobalScope::PerformanceServerTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PromiseRejectionEvent", V8ServiceWorkerGlobalScope::PromiseRejectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ReadableStream", V8ServiceWorkerGlobalScope::ReadableStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Request", V8ServiceWorkerGlobalScope::RequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Response", V8ServiceWorkerGlobalScope::ResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TransformStream", V8ServiceWorkerGlobalScope::TransformStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "URL", V8ServiceWorkerGlobalScope::URLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "URLSearchParams", V8ServiceWorkerGlobalScope::URLSearchParamsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WorkerGlobalScope", V8ServiceWorkerGlobalScope::WorkerGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WorkerLocation", V8ServiceWorkerGlobalScope::WorkerLocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WorkerNavigator", V8ServiceWorkerGlobalScope::WorkerNavigatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WritableStream", V8ServiceWorkerGlobalScope::WritableStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "BroadcastChannel", V8ServiceWorkerGlobalScope::BroadcastChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Client", V8ServiceWorkerGlobalScope::ClientConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Clients", V8ServiceWorkerGlobalScope::ClientsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CloseEvent", V8ServiceWorkerGlobalScope::CloseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Crypto", V8ServiceWorkerGlobalScope::CryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CryptoKey", V8ServiceWorkerGlobalScope::CryptoKeyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "EventSource", V8ServiceWorkerGlobalScope::EventSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ExtendableEvent", V8ServiceWorkerGlobalScope::ExtendableEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ExtendableMessageEvent", V8ServiceWorkerGlobalScope::ExtendableMessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FetchEvent", V8ServiceWorkerGlobalScope::FetchEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBCursor", V8ServiceWorkerGlobalScope::IDBCursorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBCursorWithValue", V8ServiceWorkerGlobalScope::IDBCursorWithValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBDatabase", V8ServiceWorkerGlobalScope::IDBDatabaseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBFactory", V8ServiceWorkerGlobalScope::IDBFactoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBIndex", V8ServiceWorkerGlobalScope::IDBIndexConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBKeyRange", V8ServiceWorkerGlobalScope::IDBKeyRangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBObjectStore", V8ServiceWorkerGlobalScope::IDBObjectStoreConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBOpenDBRequest", V8ServiceWorkerGlobalScope::IDBOpenDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBRequest", V8ServiceWorkerGlobalScope::IDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBTransaction", V8ServiceWorkerGlobalScope::IDBTransactionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBVersionChangeEvent", V8ServiceWorkerGlobalScope::IDBVersionChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "InstallEvent", V8ServiceWorkerGlobalScope::InstallEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "NetworkInformation", V8ServiceWorkerGlobalScope::NetworkInformationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PushMessageData", V8ServiceWorkerGlobalScope::PushMessageDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ServiceWorkerGlobalScope", V8ServiceWorkerGlobalScope::ServiceWorkerGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SubtleCrypto", V8ServiceWorkerGlobalScope::SubtleCryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SyncEvent", V8ServiceWorkerGlobalScope::SyncEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SyncManager", V8ServiceWorkerGlobalScope::SyncManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextDecoder", V8ServiceWorkerGlobalScope::TextDecoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextDecoderStream", V8ServiceWorkerGlobalScope::TextDecoderStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextEncoder", V8ServiceWorkerGlobalScope::TextEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextEncoderStream", V8ServiceWorkerGlobalScope::TextEncoderStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WebSocket", V8ServiceWorkerGlobalScope::WebSocketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WindowClient", V8ServiceWorkerGlobalScope::WindowClientConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static constexpr V8DOMConfiguration::AccessorConfiguration kV8ServiceWorkerGlobalScopeAccessors[] = {
    { "clients", V8ServiceWorkerGlobalScope::ClientsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "registration", V8ServiceWorkerGlobalScope::RegistrationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onactivate", V8ServiceWorkerGlobalScope::OnactivateAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnactivateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onfetch", V8ServiceWorkerGlobalScope::OnfetchAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnfetchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oninstall", V8ServiceWorkerGlobalScope::OninstallAttributeGetterCallback, V8ServiceWorkerGlobalScope::OninstallAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmessage", V8ServiceWorkerGlobalScope::OnmessageAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnmessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsync", V8ServiceWorkerGlobalScope::OnsyncAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnsyncAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8ServiceWorkerGlobalScopeMethods[] = {
    {"fetch", V8ServiceWorkerGlobalScope::FetchMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"skipWaiting", V8ServiceWorkerGlobalScope::SkipWaitingMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8ServiceWorkerGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ServiceWorkerGlobalScope::GetWrapperTypeInfo()->interface_name, V8WorkerGlobalScope::DomTemplate(isolate, world), V8ServiceWorkerGlobalScope::kInternalFieldCount);

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
      kV8ServiceWorkerGlobalScopeAttributes, base::size(kV8ServiceWorkerGlobalScopeAttributes));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ServiceWorkerGlobalScopeAccessors, base::size(kV8ServiceWorkerGlobalScopeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ServiceWorkerGlobalScopeMethods, base::size(kV8ServiceWorkerGlobalScopeMethods));

  // Custom signature

  V8ServiceWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ServiceWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::BackgroundFetchEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BackgroundFetchEvent", V8ServiceWorkerGlobalScope::BackgroundFetchEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchManager", V8ServiceWorkerGlobalScope::BackgroundFetchManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRecord", V8ServiceWorkerGlobalScope::BackgroundFetchRecordConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRegistration", V8ServiceWorkerGlobalScope::BackgroundFetchRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchUpdateUIEvent", V8ServiceWorkerGlobalScope::BackgroundFetchUpdateUIEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::IDBObserverEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "IDBObservation", V8ServiceWorkerGlobalScope::IDBObservationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "IDBObserver", V8ServiceWorkerGlobalScope::IDBObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "IDBObserverChanges", V8ServiceWorkerGlobalScope::IDBObserverChangesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MojoJSEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Mojo", V8ServiceWorkerGlobalScope::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoHandle", V8ServiceWorkerGlobalScope::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoWatcher", V8ServiceWorkerGlobalScope::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "MojoInterfaceInterceptor", V8ServiceWorkerGlobalScope::MojoInterfaceInterceptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoInterfaceRequestEvent", V8ServiceWorkerGlobalScope::MojoInterfaceRequestEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationTriggersEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "TimestampTrigger", V8ServiceWorkerGlobalScope::TimestampTriggerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Notification", V8ServiceWorkerGlobalScope::NotificationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "NotificationEvent", V8ServiceWorkerGlobalScope::NotificationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "CanvasGradient", V8ServiceWorkerGlobalScope::CanvasGradientConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "CanvasPattern", V8ServiceWorkerGlobalScope::CanvasPatternConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "OffscreenCanvas", V8ServiceWorkerGlobalScope::OffscreenCanvasConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "OffscreenCanvasRenderingContext2D", V8ServiceWorkerGlobalScope::OffscreenCanvasRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "Path2D", V8ServiceWorkerGlobalScope::Path2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGL2RenderingContext", V8ServiceWorkerGlobalScope::WebGL2RenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLActiveInfo", V8ServiceWorkerGlobalScope::WebGLActiveInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLBuffer", V8ServiceWorkerGlobalScope::WebGLBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLFramebuffer", V8ServiceWorkerGlobalScope::WebGLFramebufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLProgram", V8ServiceWorkerGlobalScope::WebGLProgramConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLQuery", V8ServiceWorkerGlobalScope::WebGLQueryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderbuffer", V8ServiceWorkerGlobalScope::WebGLRenderbufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderingContext", V8ServiceWorkerGlobalScope::WebGLRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLSampler", V8ServiceWorkerGlobalScope::WebGLSamplerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLShader", V8ServiceWorkerGlobalScope::WebGLShaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLShaderPrecisionFormat", V8ServiceWorkerGlobalScope::WebGLShaderPrecisionFormatConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLSync", V8ServiceWorkerGlobalScope::WebGLSyncConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLTexture", V8ServiceWorkerGlobalScope::WebGLTextureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLTransformFeedback", V8ServiceWorkerGlobalScope::WebGLTransformFeedbackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLUniformLocation", V8ServiceWorkerGlobalScope::WebGLUniformLocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLVertexArrayObject", V8ServiceWorkerGlobalScope::WebGLVertexArrayObjectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasTextEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "FontFace", V8ServiceWorkerGlobalScope::FontFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PaymentAppEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "AbortPaymentEvent", V8ServiceWorkerGlobalScope::AbortPaymentEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "CanMakePaymentEvent", V8ServiceWorkerGlobalScope::CanMakePaymentEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PaymentInstruments", V8ServiceWorkerGlobalScope::PaymentInstrumentsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PaymentRequestEvent", V8ServiceWorkerGlobalScope::PaymentRequestEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Permissions", V8ServiceWorkerGlobalScope::PermissionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PermissionStatus", V8ServiceWorkerGlobalScope::PermissionStatusConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PushMessagingEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PushEvent", V8ServiceWorkerGlobalScope::PushEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushManager", V8ServiceWorkerGlobalScope::PushManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushSubscription", V8ServiceWorkerGlobalScope::PushSubscriptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushSubscriptionOptions", V8ServiceWorkerGlobalScope::PushSubscriptionOptionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ShapeDetectionEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BarcodeDetector", V8ServiceWorkerGlobalScope::BarcodeDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FaceDetector", V8ServiceWorkerGlobalScope::FaceDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "TextDetector", V8ServiceWorkerGlobalScope::TextDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::StreamsNativeEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ReadableStreamDefaultReader", V8ServiceWorkerGlobalScope::ReadableStreamDefaultReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WritableStreamDefaultWriter", V8ServiceWorkerGlobalScope::WritableStreamDefaultWriterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebGL2ComputeContextEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "WebGL2ComputeRenderingContext", V8ServiceWorkerGlobalScope::WebGL2ComputeRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }

  if (RuntimeEnabledFeatures::BackgroundFetchEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onbackgroundfetchabort", V8ServiceWorkerGlobalScope::OnbackgroundfetchabortAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnbackgroundfetchabortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onbackgroundfetchclick", V8ServiceWorkerGlobalScope::OnbackgroundfetchclickAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnbackgroundfetchclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onbackgroundfetchfail", V8ServiceWorkerGlobalScope::OnbackgroundfetchfailAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnbackgroundfetchfailAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onbackgroundfetchsuccess", V8ServiceWorkerGlobalScope::OnbackgroundfetchsuccessAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnbackgroundfetchsuccessAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationsEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onnotificationclick", V8ServiceWorkerGlobalScope::OnnotificationclickAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnnotificationclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onnotificationclose", V8ServiceWorkerGlobalScope::OnnotificationcloseAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnnotificationcloseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PaymentAppEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onabortpayment", V8ServiceWorkerGlobalScope::OnabortpaymentAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnabortpaymentAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "oncanmakepayment", V8ServiceWorkerGlobalScope::OncanmakepaymentAttributeGetterCallback, V8ServiceWorkerGlobalScope::OncanmakepaymentAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onpaymentrequest", V8ServiceWorkerGlobalScope::OnpaymentrequestAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnpaymentrequestAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PushMessagingEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onpush", V8ServiceWorkerGlobalScope::OnpushAttributeGetterCallback, V8ServiceWorkerGlobalScope::OnpushAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

void V8ServiceWorkerGlobalScope::InstallMojoJS(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8ServiceWorkerGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoConfigurations[] = {
      { "Mojo", V8ServiceWorkerGlobalScope::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoHandleConfigurations[] = {
      { "MojoHandle", V8ServiceWorkerGlobalScope::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoHandleConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoWatcherConfigurations[] = {
      { "MojoWatcher", V8ServiceWorkerGlobalScope::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoWatcherConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8ServiceWorkerGlobalScope::InstallMojoJS(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8ServiceWorkerGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8ServiceWorkerGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallMojoJS(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8ServiceWorkerGlobalScope::InstallMojoJS(ScriptState* script_state) {
  InstallMojoJS(script_state, v8::Local<v8::Object>());
}

void V8ServiceWorkerGlobalScope::InstallCookieStore(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8ServiceWorkerGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kCookieStoreConfigurations[] = {
        { "CookieStore", V8ServiceWorkerGlobalScope::CookieStoreConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kCookieStoreConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kExtendableCookieChangeEventConfigurations[] = {
      { "ExtendableCookieChangeEvent", V8ServiceWorkerGlobalScope::ExtendableCookieChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kExtendableCookieChangeEventConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kcookieStoreConfigurations[] = {
      { "cookieStore", V8ServiceWorkerGlobalScope::CookieStoreAttributeGetterCallback, V8ServiceWorkerGlobalScope::CookieStoreAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kcookieStoreConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  koncookiechangeConfigurations[] = {
      { "oncookiechange", V8ServiceWorkerGlobalScope::OncookiechangeAttributeGetterCallback, V8ServiceWorkerGlobalScope::OncookiechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : koncookiechangeConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8ServiceWorkerGlobalScope::InstallCookieStore(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8ServiceWorkerGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8ServiceWorkerGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallCookieStore(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8ServiceWorkerGlobalScope::InstallTrustedDOMTypes(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8ServiceWorkerGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kTrustedTypePolicyFactoryConfigurations[] = {
      { "TrustedTypePolicyFactory", V8ServiceWorkerGlobalScope::TrustedTypePolicyFactoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypePolicyFactoryConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kTrustedTypesConfigurations[] = {
      { "TrustedTypes", V8ServiceWorkerGlobalScope::TrustedTypesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypesConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8ServiceWorkerGlobalScope::InstallTrustedDOMTypes(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8ServiceWorkerGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8ServiceWorkerGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallTrustedDOMTypes(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

v8::Local<v8::FunctionTemplate> V8ServiceWorkerGlobalScope::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ServiceWorkerGlobalScope::GetWrapperTypeInfo()),
      InstallV8ServiceWorkerGlobalScopeTemplate);
}

bool V8ServiceWorkerGlobalScope::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ServiceWorkerGlobalScope::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ServiceWorkerGlobalScope::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ServiceWorkerGlobalScope::GetWrapperTypeInfo(), v8_value);
}

ServiceWorkerGlobalScope* V8ServiceWorkerGlobalScope::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ServiceWorkerGlobalScope* NativeValueTraits<ServiceWorkerGlobalScope>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ServiceWorkerGlobalScope* native_value = V8ServiceWorkerGlobalScope::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ServiceWorkerGlobalScope"));
  }
  return native_value;
}

void V8ServiceWorkerGlobalScope::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!instance_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
          { "Cache", V8ServiceWorkerGlobalScope::CacheConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "CacheStorage", V8ServiceWorkerGlobalScope::CacheStorageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "Lock", V8ServiceWorkerGlobalScope::LockConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "LockManager", V8ServiceWorkerGlobalScope::LockManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "NavigationPreloadManager", V8ServiceWorkerGlobalScope::NavigationPreloadManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "ServiceWorkerRegistration", V8ServiceWorkerGlobalScope::ServiceWorkerRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "StorageManager", V8ServiceWorkerGlobalScope::StorageManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAttributes(
          isolate, world, instance_object, prototype_object,
          attribute_configurations, base::size(attribute_configurations));
    }
  }
}

}  // namespace blink
