// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/appcache/appcache.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/appcache/appcache.mojom-params-data.h"
#include "third_party/blink/public/mojom/appcache/appcache.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/appcache/appcache.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
AppCacheResourceInfo::AppCacheResourceInfo()
    : url(),
      response_size(),
      padding_size(),
      is_master(),
      is_manifest(),
      is_intercept(),
      is_fallback(),
      is_foreign(),
      is_explicit(),
      response_id() {}

AppCacheResourceInfo::AppCacheResourceInfo(
    const GURL& url_in,
    int64_t response_size_in,
    int64_t padding_size_in,
    bool is_master_in,
    bool is_manifest_in,
    bool is_intercept_in,
    bool is_fallback_in,
    bool is_foreign_in,
    bool is_explicit_in,
    int64_t response_id_in)
    : url(std::move(url_in)),
      response_size(std::move(response_size_in)),
      padding_size(std::move(padding_size_in)),
      is_master(std::move(is_master_in)),
      is_manifest(std::move(is_manifest_in)),
      is_intercept(std::move(is_intercept_in)),
      is_fallback(std::move(is_fallback_in)),
      is_foreign(std::move(is_foreign_in)),
      is_explicit(std::move(is_explicit_in)),
      response_id(std::move(response_id_in)) {}

AppCacheResourceInfo::~AppCacheResourceInfo() = default;

bool AppCacheResourceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AppCacheErrorDetails::AppCacheErrorDetails()
    : message(),
      reason(AppCacheErrorReason::APPCACHE_UNKNOWN_ERROR),
      url(),
      status(),
      is_cross_origin() {}

AppCacheErrorDetails::AppCacheErrorDetails(
    const std::string& message_in,
    AppCacheErrorReason reason_in,
    const GURL& url_in,
    int32_t status_in,
    bool is_cross_origin_in)
    : message(std::move(message_in)),
      reason(std::move(reason_in)),
      url(std::move(url_in)),
      status(std::move(status_in)),
      is_cross_origin(std::move(is_cross_origin_in)) {}

AppCacheErrorDetails::~AppCacheErrorDetails() = default;

bool AppCacheErrorDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char AppCacheBackend::Name_[] = "blink.mojom.AppCacheBackend";

AppCacheBackendProxy::AppCacheBackendProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AppCacheBackendProxy::RegisterHost(
    AppCacheHostRequest in_host_request, AppCacheFrontendPtr in_frontend, int32_t in_host_id, int32_t in_render_frame_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheBackend::RegisterHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheBackend_RegisterHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheBackend_RegisterHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::AppCacheHostRequestDataView>(
      in_host_request, &params->host_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host_request in AppCacheBackend.RegisterHost request");
  mojo::internal::Serialize<::blink::mojom::AppCacheFrontendPtrDataView>(
      in_frontend, &params->frontend, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->frontend),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid frontend in AppCacheBackend.RegisterHost request");
  params->host_id = in_host_id;
  params->render_frame_id = in_render_frame_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheBackend::Name_);
  message.set_method_name("RegisterHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AppCacheBackendStubDispatch::Accept(
    AppCacheBackend* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAppCacheBackend_RegisterHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheBackend::RegisterHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheBackend_RegisterHost_Params_Data* params =
          reinterpret_cast<internal::AppCacheBackend_RegisterHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AppCacheHostRequest p_host_request{};
      AppCacheFrontendPtr p_frontend{};
      int32_t p_host_id{};
      int32_t p_render_frame_id{};
      AppCacheBackend_RegisterHost_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_request =
          input_data_view.TakeHostRequest<decltype(p_host_request)>();
      p_frontend =
          input_data_view.TakeFrontend<decltype(p_frontend)>();
      p_host_id = input_data_view.host_id();
      p_render_frame_id = input_data_view.render_frame_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheBackend::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterHost(
std::move(p_host_request), 
std::move(p_frontend), 
std::move(p_host_id), 
std::move(p_render_frame_id));
      return true;
    }
  }
  return false;
}

// static
bool AppCacheBackendStubDispatch::AcceptWithResponder(
    AppCacheBackend* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAppCacheBackend_RegisterHost_Name: {
      break;
    }
  }
  return false;
}

bool AppCacheBackendRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppCacheBackend RequestValidator");

  switch (message->header()->name) {
    case internal::kAppCacheBackend_RegisterHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheBackend_RegisterHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char AppCacheHost::Name_[] = "blink.mojom.AppCacheHost";
bool AppCacheHost::GetStatus(::blink::mojom::AppCacheStatus* out_status) {
  NOTREACHED();
  return false;
}
bool AppCacheHost::StartUpdate(bool* out_success) {
  NOTREACHED();
  return false;
}
bool AppCacheHost::SwapCache(bool* out_success) {
  NOTREACHED();
  return false;
}
bool AppCacheHost::GetResourceList(std::vector<AppCacheResourceInfoPtr>* out_resources) {
  NOTREACHED();
  return false;
}
class AppCacheHost_GetStatus_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  AppCacheHost_GetStatus_HandleSyncResponse(
      bool* result, ::blink::mojom::AppCacheStatus* out_status)
      : result_(result), out_status_(out_status) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::blink::mojom::AppCacheStatus* out_status_;DISALLOW_COPY_AND_ASSIGN(AppCacheHost_GetStatus_HandleSyncResponse);
};

class AppCacheHost_GetStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AppCacheHost_GetStatus_ForwardToCallback(
      AppCacheHost::GetStatusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AppCacheHost::GetStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AppCacheHost_GetStatus_ForwardToCallback);
};
class AppCacheHost_StartUpdate_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  AppCacheHost_StartUpdate_HandleSyncResponse(
      bool* result, bool* out_success)
      : result_(result), out_success_(out_success) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_success_;DISALLOW_COPY_AND_ASSIGN(AppCacheHost_StartUpdate_HandleSyncResponse);
};

class AppCacheHost_StartUpdate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AppCacheHost_StartUpdate_ForwardToCallback(
      AppCacheHost::StartUpdateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AppCacheHost::StartUpdateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AppCacheHost_StartUpdate_ForwardToCallback);
};
class AppCacheHost_SwapCache_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  AppCacheHost_SwapCache_HandleSyncResponse(
      bool* result, bool* out_success)
      : result_(result), out_success_(out_success) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_success_;DISALLOW_COPY_AND_ASSIGN(AppCacheHost_SwapCache_HandleSyncResponse);
};

class AppCacheHost_SwapCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AppCacheHost_SwapCache_ForwardToCallback(
      AppCacheHost::SwapCacheCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AppCacheHost::SwapCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AppCacheHost_SwapCache_ForwardToCallback);
};
class AppCacheHost_GetResourceList_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  AppCacheHost_GetResourceList_HandleSyncResponse(
      bool* result, std::vector<AppCacheResourceInfoPtr>* out_resources)
      : result_(result), out_resources_(out_resources) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::vector<AppCacheResourceInfoPtr>* out_resources_;DISALLOW_COPY_AND_ASSIGN(AppCacheHost_GetResourceList_HandleSyncResponse);
};

class AppCacheHost_GetResourceList_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AppCacheHost_GetResourceList_ForwardToCallback(
      AppCacheHost::GetResourceListCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AppCacheHost::GetResourceListCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AppCacheHost_GetResourceList_ForwardToCallback);
};

AppCacheHostProxy::AppCacheHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AppCacheHostProxy::SetSpawningHostId(
    int32_t in_spawning_host_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::SetSpawningHostId");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_SetSpawningHostId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_SetSpawningHostId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->spawning_host_id = in_spawning_host_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("SetSpawningHostId");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheHostProxy::SelectCache(
    const GURL& in_document_url, int64_t in_appcache_document_was_loaded_from, const GURL& in_opt_manifest_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::SelectCache");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_SelectCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_SelectCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->document_url)::BaseType::BufferWriter
      document_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_document_url, buffer, &document_url_writer, &serialization_context);
  params->document_url.Set(
      document_url_writer.is_null() ? nullptr : document_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->document_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null document_url in AppCacheHost.SelectCache request");
  params->appcache_document_was_loaded_from = in_appcache_document_was_loaded_from;
  typename decltype(params->opt_manifest_url)::BaseType::BufferWriter
      opt_manifest_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_opt_manifest_url, buffer, &opt_manifest_url_writer, &serialization_context);
  params->opt_manifest_url.Set(
      opt_manifest_url_writer.is_null() ? nullptr : opt_manifest_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->opt_manifest_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null opt_manifest_url in AppCacheHost.SelectCache request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("SelectCache");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheHostProxy::SelectCacheForSharedWorker(
    int64_t in_appcache_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::SelectCacheForSharedWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_SelectCacheForSharedWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_SelectCacheForSharedWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->appcache_id = in_appcache_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("SelectCacheForSharedWorker");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheHostProxy::MarkAsForeignEntry(
    const GURL& in_document_url, int64_t in_appcache_document_was_loaded_from) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::MarkAsForeignEntry");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_MarkAsForeignEntry_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_MarkAsForeignEntry_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->document_url)::BaseType::BufferWriter
      document_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_document_url, buffer, &document_url_writer, &serialization_context);
  params->document_url.Set(
      document_url_writer.is_null() ? nullptr : document_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->document_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null document_url in AppCacheHost.MarkAsForeignEntry request");
  params->appcache_document_was_loaded_from = in_appcache_document_was_loaded_from;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("MarkAsForeignEntry");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool AppCacheHostProxy::GetStatus(
    ::blink::mojom::AppCacheStatus* out_param_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::GetStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_GetStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_GetStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("GetStatus");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheHost_GetStatus_HandleSyncResponse(
          &result, out_param_status));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void AppCacheHostProxy::GetStatus(
    GetStatusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::GetStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_GetStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_GetStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("GetStatus");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheHost_GetStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool AppCacheHostProxy::StartUpdate(
    bool* out_param_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::StartUpdate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_StartUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_StartUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("StartUpdate");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheHost_StartUpdate_HandleSyncResponse(
          &result, out_param_success));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void AppCacheHostProxy::StartUpdate(
    StartUpdateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::StartUpdate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_StartUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_StartUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("StartUpdate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheHost_StartUpdate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool AppCacheHostProxy::SwapCache(
    bool* out_param_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::SwapCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_SwapCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_SwapCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("SwapCache");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheHost_SwapCache_HandleSyncResponse(
          &result, out_param_success));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void AppCacheHostProxy::SwapCache(
    SwapCacheCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::SwapCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_SwapCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_SwapCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("SwapCache");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheHost_SwapCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool AppCacheHostProxy::GetResourceList(
    std::vector<AppCacheResourceInfoPtr>* out_param_resources) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::GetResourceList");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_GetResourceList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_GetResourceList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("GetResourceList");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheHost_GetResourceList_HandleSyncResponse(
          &result, out_param_resources));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void AppCacheHostProxy::GetResourceList(
    GetResourceListCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::GetResourceList");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_GetResourceList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_GetResourceList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("GetResourceList");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AppCacheHost_GetResourceList_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class AppCacheHost_GetStatus_ProxyToResponder {
 public:
  static AppCacheHost::GetStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AppCacheHost_GetStatus_ProxyToResponder> proxy(
        new AppCacheHost_GetStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AppCacheHost_GetStatus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AppCacheHost_GetStatus_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  AppCacheHost_GetStatus_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "AppCacheHost::GetStatusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::AppCacheStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheHost_GetStatus_ProxyToResponder);
};

bool AppCacheHost_GetStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::GetStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AppCacheHost_GetStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AppCacheHost_GetStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::AppCacheStatus p_status{};
  AppCacheHost_GetStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AppCacheHost::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void AppCacheHost_GetStatus_ProxyToResponder::Run(
    ::blink::mojom::AppCacheStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_GetStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_GetStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::AppCacheStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::GetStatusCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("GetStatus");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool AppCacheHost_GetStatus_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::AppCacheHost_GetStatus_ResponseParams_Data* params =
      reinterpret_cast<internal::AppCacheHost_GetStatus_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::AppCacheStatus p_status{};
  AppCacheHost_GetStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AppCacheHost::Name_, 4, true);
    return false;
  }
  *out_status_ = std::move(p_status);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class AppCacheHost_StartUpdate_ProxyToResponder {
 public:
  static AppCacheHost::StartUpdateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AppCacheHost_StartUpdate_ProxyToResponder> proxy(
        new AppCacheHost_StartUpdate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AppCacheHost_StartUpdate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AppCacheHost_StartUpdate_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  AppCacheHost_StartUpdate_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "AppCacheHost::StartUpdateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheHost_StartUpdate_ProxyToResponder);
};

bool AppCacheHost_StartUpdate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::StartUpdateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AppCacheHost_StartUpdate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AppCacheHost_StartUpdate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  AppCacheHost_StartUpdate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AppCacheHost::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void AppCacheHost_StartUpdate_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_StartUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_StartUpdate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::StartUpdateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("StartUpdate");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool AppCacheHost_StartUpdate_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::AppCacheHost_StartUpdate_ResponseParams_Data* params =
      reinterpret_cast<internal::AppCacheHost_StartUpdate_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  AppCacheHost_StartUpdate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AppCacheHost::Name_, 5, true);
    return false;
  }
  *out_success_ = std::move(p_success);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class AppCacheHost_SwapCache_ProxyToResponder {
 public:
  static AppCacheHost::SwapCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AppCacheHost_SwapCache_ProxyToResponder> proxy(
        new AppCacheHost_SwapCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AppCacheHost_SwapCache_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AppCacheHost_SwapCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  AppCacheHost_SwapCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "AppCacheHost::SwapCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheHost_SwapCache_ProxyToResponder);
};

bool AppCacheHost_SwapCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::SwapCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AppCacheHost_SwapCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AppCacheHost_SwapCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  AppCacheHost_SwapCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AppCacheHost::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void AppCacheHost_SwapCache_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_SwapCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_SwapCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::SwapCacheCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("SwapCache");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool AppCacheHost_SwapCache_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::AppCacheHost_SwapCache_ResponseParams_Data* params =
      reinterpret_cast<internal::AppCacheHost_SwapCache_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  AppCacheHost_SwapCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AppCacheHost::Name_, 6, true);
    return false;
  }
  *out_success_ = std::move(p_success);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class AppCacheHost_GetResourceList_ProxyToResponder {
 public:
  static AppCacheHost::GetResourceListCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AppCacheHost_GetResourceList_ProxyToResponder> proxy(
        new AppCacheHost_GetResourceList_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AppCacheHost_GetResourceList_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AppCacheHost_GetResourceList_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  AppCacheHost_GetResourceList_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "AppCacheHost::GetResourceListCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<AppCacheResourceInfoPtr> in_resources);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheHost_GetResourceList_ProxyToResponder);
};

bool AppCacheHost_GetResourceList_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheHost::GetResourceListCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AppCacheHost_GetResourceList_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AppCacheHost_GetResourceList_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<AppCacheResourceInfoPtr> p_resources{};
  AppCacheHost_GetResourceList_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResources(&p_resources))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AppCacheHost::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_resources));
  return true;
}

void AppCacheHost_GetResourceList_ProxyToResponder::Run(
    std::vector<AppCacheResourceInfoPtr> in_resources) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheHost_GetResourceList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheHost_GetResourceList_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->resources)::BaseType::BufferWriter
      resources_writer;
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::AppCacheResourceInfoDataView>>(
      in_resources, buffer, &resources_writer, &resources_validate_params,
      &serialization_context);
  params->resources.Set(
      resources_writer.is_null() ? nullptr : resources_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->resources.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null resources in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::GetResourceListCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheHost::Name_);
  message.set_method_name("GetResourceList");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool AppCacheHost_GetResourceList_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::AppCacheHost_GetResourceList_ResponseParams_Data* params =
      reinterpret_cast<internal::AppCacheHost_GetResourceList_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<AppCacheResourceInfoPtr> p_resources{};
  AppCacheHost_GetResourceList_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResources(&p_resources))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AppCacheHost::Name_, 7, true);
    return false;
  }
  *out_resources_ = std::move(p_resources);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool AppCacheHostStubDispatch::Accept(
    AppCacheHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAppCacheHost_SetSpawningHostId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::SetSpawningHostId",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheHost_SetSpawningHostId_Params_Data* params =
          reinterpret_cast<internal::AppCacheHost_SetSpawningHostId_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_spawning_host_id{};
      AppCacheHost_SetSpawningHostId_ParamsDataView input_data_view(params, &serialization_context);
      
      p_spawning_host_id = input_data_view.spawning_host_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSpawningHostId(
std::move(p_spawning_host_id));
      return true;
    }
    case internal::kAppCacheHost_SelectCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::SelectCache",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheHost_SelectCache_Params_Data* params =
          reinterpret_cast<internal::AppCacheHost_SelectCache_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_document_url{};
      int64_t p_appcache_document_was_loaded_from{};
      GURL p_opt_manifest_url{};
      AppCacheHost_SelectCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDocumentUrl(&p_document_url))
        success = false;
      p_appcache_document_was_loaded_from = input_data_view.appcache_document_was_loaded_from();
      if (!input_data_view.ReadOptManifestUrl(&p_opt_manifest_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SelectCache(
std::move(p_document_url), 
std::move(p_appcache_document_was_loaded_from), 
std::move(p_opt_manifest_url));
      return true;
    }
    case internal::kAppCacheHost_SelectCacheForSharedWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::SelectCacheForSharedWorker",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheHost_SelectCacheForSharedWorker_Params_Data* params =
          reinterpret_cast<internal::AppCacheHost_SelectCacheForSharedWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_appcache_id{};
      AppCacheHost_SelectCacheForSharedWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      p_appcache_id = input_data_view.appcache_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheHost::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SelectCacheForSharedWorker(
std::move(p_appcache_id));
      return true;
    }
    case internal::kAppCacheHost_MarkAsForeignEntry_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::MarkAsForeignEntry",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheHost_MarkAsForeignEntry_Params_Data* params =
          reinterpret_cast<internal::AppCacheHost_MarkAsForeignEntry_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_document_url{};
      int64_t p_appcache_document_was_loaded_from{};
      AppCacheHost_MarkAsForeignEntry_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDocumentUrl(&p_document_url))
        success = false;
      p_appcache_document_was_loaded_from = input_data_view.appcache_document_was_loaded_from();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheHost::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MarkAsForeignEntry(
std::move(p_document_url), 
std::move(p_appcache_document_was_loaded_from));
      return true;
    }
    case internal::kAppCacheHost_GetStatus_Name: {
      break;
    }
    case internal::kAppCacheHost_StartUpdate_Name: {
      break;
    }
    case internal::kAppCacheHost_SwapCache_Name: {
      break;
    }
    case internal::kAppCacheHost_GetResourceList_Name: {
      break;
    }
  }
  return false;
}

// static
bool AppCacheHostStubDispatch::AcceptWithResponder(
    AppCacheHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAppCacheHost_SetSpawningHostId_Name: {
      break;
    }
    case internal::kAppCacheHost_SelectCache_Name: {
      break;
    }
    case internal::kAppCacheHost_SelectCacheForSharedWorker_Name: {
      break;
    }
    case internal::kAppCacheHost_MarkAsForeignEntry_Name: {
      break;
    }
    case internal::kAppCacheHost_GetStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::GetStatus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::AppCacheHost_GetStatus_Params_Data* params =
          reinterpret_cast<
              internal::AppCacheHost_GetStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AppCacheHost_GetStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheHost::Name_, 4, false);
        return false;
      }
      AppCacheHost::GetStatusCallback callback =
          AppCacheHost_GetStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetStatus(std::move(callback));
      return true;
    }
    case internal::kAppCacheHost_StartUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::StartUpdate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::AppCacheHost_StartUpdate_Params_Data* params =
          reinterpret_cast<
              internal::AppCacheHost_StartUpdate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AppCacheHost_StartUpdate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheHost::Name_, 5, false);
        return false;
      }
      AppCacheHost::StartUpdateCallback callback =
          AppCacheHost_StartUpdate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartUpdate(std::move(callback));
      return true;
    }
    case internal::kAppCacheHost_SwapCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::SwapCache",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::AppCacheHost_SwapCache_Params_Data* params =
          reinterpret_cast<
              internal::AppCacheHost_SwapCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AppCacheHost_SwapCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheHost::Name_, 6, false);
        return false;
      }
      AppCacheHost::SwapCacheCallback callback =
          AppCacheHost_SwapCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SwapCache(std::move(callback));
      return true;
    }
    case internal::kAppCacheHost_GetResourceList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheHost::GetResourceList",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::AppCacheHost_GetResourceList_Params_Data* params =
          reinterpret_cast<
              internal::AppCacheHost_GetResourceList_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AppCacheHost_GetResourceList_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheHost::Name_, 7, false);
        return false;
      }
      AppCacheHost::GetResourceListCallback callback =
          AppCacheHost_GetResourceList_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetResourceList(std::move(callback));
      return true;
    }
  }
  return false;
}

bool AppCacheHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppCacheHost RequestValidator");

  switch (message->header()->name) {
    case internal::kAppCacheHost_SetSpawningHostId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_SetSpawningHostId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheHost_SelectCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_SelectCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheHost_SelectCacheForSharedWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_SelectCacheForSharedWorker_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheHost_MarkAsForeignEntry_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_MarkAsForeignEntry_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheHost_GetStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_GetStatus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheHost_StartUpdate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_StartUpdate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheHost_SwapCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_SwapCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheHost_GetResourceList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_GetResourceList_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool AppCacheHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppCacheHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAppCacheHost_GetStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_GetStatus_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheHost_StartUpdate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_StartUpdate_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheHost_SwapCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_SwapCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheHost_GetResourceList_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheHost_GetResourceList_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char AppCacheFrontend::Name_[] = "blink.mojom.AppCacheFrontend";

AppCacheFrontendProxy::AppCacheFrontendProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AppCacheFrontendProxy::CacheSelected(
    ::blink::mojom::AppCacheInfoPtr in_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheFrontend::CacheSelected");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_CacheSelected_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheFrontend_CacheSelected_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::blink::mojom::AppCacheInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in AppCacheFrontend.CacheSelected request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheFrontend::Name_);
  message.set_method_name("CacheSelected");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::EventRaised(
    AppCacheEventID in_event_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheFrontend::EventRaised");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_EventRaised_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheFrontend_EventRaised_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::AppCacheEventID>(
      in_event_id, &params->event_id);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheFrontend::Name_);
  message.set_method_name("EventRaised");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::ProgressEventRaised(
    const GURL& in_url, int32_t in_total, int32_t in_complete) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheFrontend::ProgressEventRaised");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_ProgressEventRaised_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheFrontend_ProgressEventRaised_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in AppCacheFrontend.ProgressEventRaised request");
  params->total = in_total;
  params->complete = in_complete;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheFrontend::Name_);
  message.set_method_name("ProgressEventRaised");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::ErrorEventRaised(
    AppCacheErrorDetailsPtr in_error_details) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheFrontend::ErrorEventRaised");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_ErrorEventRaised_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheFrontend_ErrorEventRaised_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error_details)::BaseType::BufferWriter
      error_details_writer;
  mojo::internal::Serialize<::blink::mojom::AppCacheErrorDetailsDataView>(
      in_error_details, buffer, &error_details_writer, &serialization_context);
  params->error_details.Set(
      error_details_writer.is_null() ? nullptr : error_details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error_details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error_details in AppCacheFrontend.ErrorEventRaised request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheFrontend::Name_);
  message.set_method_name("ErrorEventRaised");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AppCacheFrontendProxy::LogMessage(
    ::blink::mojom::ConsoleMessageLevel in_log_level, const std::string& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheFrontend::LogMessage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_LogMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheFrontend_LogMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ConsoleMessageLevel>(
      in_log_level, &params->log_level);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in AppCacheFrontend.LogMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheFrontend::Name_);
  message.set_method_name("LogMessage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

#if defined(ENABLE_GNET)
void AppCacheFrontendProxy::SetSubresourceFactory(
    ::network::mojom::URLLoaderFactoryPtr in_url_loader_factory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AppCacheFrontend::SetSubresourceFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppCacheFrontend_SetSubresourceFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AppCacheFrontend_SetSubresourceFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryPtrDataView>(
      in_url_loader_factory, &params->url_loader_factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->url_loader_factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid url_loader_factory in AppCacheFrontend.SetSubresourceFactory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AppCacheFrontend::Name_);
  message.set_method_name("SetSubresourceFactory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
#endif // ENABLE_GNET

// static
bool AppCacheFrontendStubDispatch::Accept(
    AppCacheFrontend* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAppCacheFrontend_CacheSelected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheFrontend::CacheSelected",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_CacheSelected_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_CacheSelected_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::AppCacheInfoPtr p_info{};
      AppCacheFrontend_CacheSelected_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheFrontend::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CacheSelected(
std::move(p_info));
      return true;
    }
    case internal::kAppCacheFrontend_EventRaised_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheFrontend::EventRaised",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_EventRaised_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_EventRaised_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AppCacheEventID p_event_id{};
      AppCacheFrontend_EventRaised_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEventId(&p_event_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheFrontend::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EventRaised(
std::move(p_event_id));
      return true;
    }
    case internal::kAppCacheFrontend_ProgressEventRaised_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheFrontend::ProgressEventRaised",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_ProgressEventRaised_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_ProgressEventRaised_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      int32_t p_total{};
      int32_t p_complete{};
      AppCacheFrontend_ProgressEventRaised_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_total = input_data_view.total();
      p_complete = input_data_view.complete();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheFrontend::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ProgressEventRaised(
std::move(p_url), 
std::move(p_total), 
std::move(p_complete));
      return true;
    }
    case internal::kAppCacheFrontend_ErrorEventRaised_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheFrontend::ErrorEventRaised",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_ErrorEventRaised_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_ErrorEventRaised_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AppCacheErrorDetailsPtr p_error_details{};
      AppCacheFrontend_ErrorEventRaised_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadErrorDetails(&p_error_details))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheFrontend::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ErrorEventRaised(
std::move(p_error_details));
      return true;
    }
    case internal::kAppCacheFrontend_LogMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheFrontend::LogMessage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_LogMessage_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_LogMessage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::ConsoleMessageLevel p_log_level{};
      std::string p_message{};
      AppCacheFrontend_LogMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLogLevel(&p_log_level))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheFrontend::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LogMessage(
std::move(p_log_level), 
std::move(p_message));
      return true;
    }
    case internal::kAppCacheFrontend_SetSubresourceFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AppCacheFrontend::SetSubresourceFactory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppCacheFrontend_SetSubresourceFactory_Params_Data* params =
          reinterpret_cast<internal::AppCacheFrontend_SetSubresourceFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::URLLoaderFactoryPtr p_url_loader_factory{};
      AppCacheFrontend_SetSubresourceFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_url_loader_factory =
          input_data_view.TakeUrlLoaderFactory<decltype(p_url_loader_factory)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AppCacheFrontend::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
#if defined(ENABLE_GNET)
      DCHECK(impl);
      impl->SetSubresourceFactory(
std::move(p_url_loader_factory));
#endif // ENABLE_GNET
      return true;
    }
  }
  return false;
}

// static
bool AppCacheFrontendStubDispatch::AcceptWithResponder(
    AppCacheFrontend* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAppCacheFrontend_CacheSelected_Name: {
      break;
    }
    case internal::kAppCacheFrontend_EventRaised_Name: {
      break;
    }
    case internal::kAppCacheFrontend_ProgressEventRaised_Name: {
      break;
    }
    case internal::kAppCacheFrontend_ErrorEventRaised_Name: {
      break;
    }
    case internal::kAppCacheFrontend_LogMessage_Name: {
      break;
    }
    case internal::kAppCacheFrontend_SetSubresourceFactory_Name: {
      break;
    }
  }
  return false;
}

bool AppCacheFrontendRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppCacheFrontend RequestValidator");

  switch (message->header()->name) {
    case internal::kAppCacheFrontend_CacheSelected_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_CacheSelected_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_EventRaised_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_EventRaised_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_ProgressEventRaised_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_ProgressEventRaised_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_ErrorEventRaised_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_ErrorEventRaised_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_LogMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_LogMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAppCacheFrontend_SetSubresourceFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppCacheFrontend_SetSubresourceFactory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::AppCacheResourceInfo::DataView, ::blink::mojom::AppCacheResourceInfoPtr>::Read(
    ::blink::mojom::AppCacheResourceInfo::DataView input,
    ::blink::mojom::AppCacheResourceInfoPtr* output) {
  bool success = true;
  ::blink::mojom::AppCacheResourceInfoPtr result(::blink::mojom::AppCacheResourceInfo::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      result->response_size = input.response_size();
      result->padding_size = input.padding_size();
      result->is_master = input.is_master();
      result->is_manifest = input.is_manifest();
      result->is_intercept = input.is_intercept();
      result->is_fallback = input.is_fallback();
      result->is_foreign = input.is_foreign();
      result->is_explicit = input.is_explicit();
      result->response_id = input.response_id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::AppCacheErrorDetails::DataView, ::blink::mojom::AppCacheErrorDetailsPtr>::Read(
    ::blink::mojom::AppCacheErrorDetails::DataView input,
    ::blink::mojom::AppCacheErrorDetailsPtr* output) {
  bool success = true;
  ::blink::mojom::AppCacheErrorDetailsPtr result(::blink::mojom::AppCacheErrorDetails::New());
  
      if (!input.ReadMessage(&result->message))
        success = false;
      if (!input.ReadReason(&result->reason))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      result->status = input.status();
      result->is_cross_origin = input.is_cross_origin();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
