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

#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-blink.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
ServiceWorkerInstalledScriptsInfo::ServiceWorkerInstalledScriptsInfo()
    : manager_request(),
      manager_host_ptr(),
      installed_urls() {}

ServiceWorkerInstalledScriptsInfo::ServiceWorkerInstalledScriptsInfo(
    ServiceWorkerInstalledScriptsManagerRequest manager_request_in,
    ServiceWorkerInstalledScriptsManagerHostPtrInfo manager_host_ptr_in,
    const WTF::Vector<::blink::KURL>& installed_urls_in)
    : manager_request(std::move(manager_request_in)),
      manager_host_ptr(std::move(manager_host_ptr_in)),
      installed_urls(std::move(installed_urls_in)) {}

ServiceWorkerInstalledScriptsInfo::~ServiceWorkerInstalledScriptsInfo() = default;

bool ServiceWorkerInstalledScriptsInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceWorkerScriptInfo::ServiceWorkerScriptInfo()
    : script_url(),
      encoding(),
      headers(),
      body(),
      body_size(),
      meta_data(),
      meta_data_size() {}

ServiceWorkerScriptInfo::ServiceWorkerScriptInfo(
    const ::blink::KURL& script_url_in,
    const WTF::String& encoding_in,
    const WTF::HashMap<WTF::String, WTF::String>& headers_in,
    mojo::ScopedDataPipeConsumerHandle body_in,
    uint64_t body_size_in,
    mojo::ScopedDataPipeConsumerHandle meta_data_in,
    uint64_t meta_data_size_in)
    : script_url(std::move(script_url_in)),
      encoding(std::move(encoding_in)),
      headers(std::move(headers_in)),
      body(std::move(body_in)),
      body_size(std::move(body_size_in)),
      meta_data(std::move(meta_data_in)),
      meta_data_size(std::move(meta_data_size_in)) {}

ServiceWorkerScriptInfo::~ServiceWorkerScriptInfo() = default;

bool ServiceWorkerScriptInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceWorkerInstalledScriptsManagerHost::Name_[] = "blink.mojom.ServiceWorkerInstalledScriptsManagerHost";

ServiceWorkerInstalledScriptsManagerHostProxy::ServiceWorkerInstalledScriptsManagerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerInstalledScriptsManagerHostProxy::RequestInstalledScript(
    const ::blink::KURL& in_script_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerInstalledScriptsManagerHost::RequestInstalledScript");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->script_url)::BaseType::BufferWriter
      script_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_script_url, buffer, &script_url_writer, &serialization_context);
  params->script_url.Set(
      script_url_writer.is_null() ? nullptr : script_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->script_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null script_url in ServiceWorkerInstalledScriptsManagerHost.RequestInstalledScript request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerInstalledScriptsManagerHost::Name_);
  message.set_method_name("RequestInstalledScript");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceWorkerInstalledScriptsManagerHostStubDispatch::Accept(
    ServiceWorkerInstalledScriptsManagerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerInstalledScriptsManagerHost::RequestInstalledScript",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_script_url{};
      ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadScriptUrl(&p_script_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerInstalledScriptsManagerHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestInstalledScript(
std::move(p_script_url));
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerInstalledScriptsManagerHostStubDispatch::AcceptWithResponder(
    ServiceWorkerInstalledScriptsManagerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Name: {
      break;
    }
  }
  return false;
}

bool ServiceWorkerInstalledScriptsManagerHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerInstalledScriptsManagerHost RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data>(
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

const char ServiceWorkerInstalledScriptsManager::Name_[] = "blink.mojom.ServiceWorkerInstalledScriptsManager";

ServiceWorkerInstalledScriptsManagerProxy::ServiceWorkerInstalledScriptsManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerInstalledScriptsManagerProxy::TransferInstalledScript(
    ServiceWorkerScriptInfoPtr in_script_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerInstalledScriptsManager::TransferInstalledScript");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerInstalledScriptsManager_TransferInstalledScript_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->script_info)::BaseType::BufferWriter
      script_info_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerScriptInfoDataView>(
      in_script_info, buffer, &script_info_writer, &serialization_context);
  params->script_info.Set(
      script_info_writer.is_null() ? nullptr : script_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->script_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null script_info in ServiceWorkerInstalledScriptsManager.TransferInstalledScript request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerInstalledScriptsManager::Name_);
  message.set_method_name("TransferInstalledScript");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceWorkerInstalledScriptsManagerStubDispatch::Accept(
    ServiceWorkerInstalledScriptsManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerInstalledScriptsManager_TransferInstalledScript_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerInstalledScriptsManager::TransferInstalledScript",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerScriptInfoPtr p_script_info{};
      ServiceWorkerInstalledScriptsManager_TransferInstalledScript_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadScriptInfo(&p_script_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerInstalledScriptsManager::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->TransferInstalledScript(
std::move(p_script_info));
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerInstalledScriptsManagerStubDispatch::AcceptWithResponder(
    ServiceWorkerInstalledScriptsManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerInstalledScriptsManager_TransferInstalledScript_Name: {
      break;
    }
  }
  return false;
}

bool ServiceWorkerInstalledScriptsManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerInstalledScriptsManager RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerInstalledScriptsManager_TransferInstalledScript_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data>(
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

}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::ServiceWorkerInstalledScriptsInfo::DataView, ::blink::mojom::blink::ServiceWorkerInstalledScriptsInfoPtr>::Read(
    ::blink::mojom::blink::ServiceWorkerInstalledScriptsInfo::DataView input,
    ::blink::mojom::blink::ServiceWorkerInstalledScriptsInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerInstalledScriptsInfoPtr result(::blink::mojom::blink::ServiceWorkerInstalledScriptsInfo::New());
  
      result->manager_request =
          input.TakeManagerRequest<decltype(result->manager_request)>();
      result->manager_host_ptr =
          input.TakeManagerHostPtr<decltype(result->manager_host_ptr)>();
      if (!input.ReadInstalledUrls(&result->installed_urls))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ServiceWorkerScriptInfo::DataView, ::blink::mojom::blink::ServiceWorkerScriptInfoPtr>::Read(
    ::blink::mojom::blink::ServiceWorkerScriptInfo::DataView input,
    ::blink::mojom::blink::ServiceWorkerScriptInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerScriptInfoPtr result(::blink::mojom::blink::ServiceWorkerScriptInfo::New());
  
      if (!input.ReadScriptUrl(&result->script_url))
        success = false;
      if (!input.ReadEncoding(&result->encoding))
        success = false;
      if (!input.ReadHeaders(&result->headers))
        success = false;
      result->body = input.TakeBody();
      result->body_size = input.body_size();
      result->meta_data = input.TakeMetaData();
      result->meta_data_size = input.meta_data_size();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif