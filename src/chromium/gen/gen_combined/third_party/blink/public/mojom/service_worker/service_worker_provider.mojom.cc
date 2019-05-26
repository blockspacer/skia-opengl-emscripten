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

#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_JUMBO_H_
#endif
namespace blink {
namespace mojom {
const char kNavigation_ServiceWorkerSpec[] = "navigation:service_worker";
ServiceWorkerProviderInfoForWorker::ServiceWorkerProviderInfoForWorker()
    : host_ptr_info(),
      client_request() {}

ServiceWorkerProviderInfoForWorker::ServiceWorkerProviderInfoForWorker(
    ::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfo host_ptr_info_in,
    ::blink::mojom::ServiceWorkerContainerAssociatedRequest client_request_in)
    : host_ptr_info(std::move(host_ptr_info_in)),
      client_request(std::move(client_request_in)) {}

ServiceWorkerProviderInfoForWorker::~ServiceWorkerProviderInfoForWorker() = default;

bool ServiceWorkerProviderInfoForWorker::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceWorkerProviderInfoForStartWorker::ServiceWorkerProviderInfoForStartWorker()
    : host_ptr_info(),
      client_request(),
      script_loader_factory_ptr_info(),
      cache_storage(),
      interface_provider() {}

ServiceWorkerProviderInfoForStartWorker::ServiceWorkerProviderInfoForStartWorker(
    ::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfo host_ptr_info_in,
    ::blink::mojom::ServiceWorkerContainerAssociatedRequest client_request_in,
    ::network::mojom::URLLoaderFactoryPtrInfo script_loader_factory_ptr_info_in,
    ::blink::mojom::CacheStoragePtrInfo cache_storage_in,
    ::service_manager::mojom::InterfaceProviderPtrInfo interface_provider_in)
    : host_ptr_info(std::move(host_ptr_info_in)),
      client_request(std::move(client_request_in)),
      script_loader_factory_ptr_info(std::move(script_loader_factory_ptr_info_in)),
      cache_storage(std::move(cache_storage_in)),
      interface_provider(std::move(interface_provider_in)) {}

ServiceWorkerProviderInfoForStartWorker::~ServiceWorkerProviderInfoForStartWorker() = default;

bool ServiceWorkerProviderInfoForStartWorker::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceWorkerProviderInfoForWindow::ServiceWorkerProviderInfoForWindow()
    : host_ptr_info(),
      client_request() {}

ServiceWorkerProviderInfoForWindow::ServiceWorkerProviderInfoForWindow(
    ::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfo host_ptr_info_in,
    ::blink::mojom::ServiceWorkerContainerAssociatedRequest client_request_in)
    : host_ptr_info(std::move(host_ptr_info_in)),
      client_request(std::move(client_request_in)) {}

ServiceWorkerProviderInfoForWindow::~ServiceWorkerProviderInfoForWindow() = default;

bool ServiceWorkerProviderInfoForWindow::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceWorkerWorkerClient::Name_[] = "blink.mojom.ServiceWorkerWorkerClient";

ServiceWorkerWorkerClientProxy::ServiceWorkerWorkerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerWorkerClientProxy::OnControllerChanged(
    ::blink::mojom::ControllerServiceWorkerMode in_mode) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerWorkerClient::OnControllerChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerWorkerClient_OnControllerChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerWorkerClient_OnControllerChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ControllerServiceWorkerMode>(
      in_mode, &params->mode);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerWorkerClient::Name_);
  message.set_method_name("OnControllerChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceWorkerWorkerClientStubDispatch::Accept(
    ServiceWorkerWorkerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerWorkerClient_OnControllerChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerWorkerClient::OnControllerChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerWorkerClient_OnControllerChanged_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerWorkerClient_OnControllerChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::ControllerServiceWorkerMode p_mode{};
      ServiceWorkerWorkerClient_OnControllerChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMode(&p_mode))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerWorkerClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnControllerChanged(
std::move(p_mode));
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerWorkerClientStubDispatch::AcceptWithResponder(
    ServiceWorkerWorkerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerWorkerClient_OnControllerChanged_Name: {
      break;
    }
  }
  return false;
}

bool ServiceWorkerWorkerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerWorkerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerWorkerClient_OnControllerChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerWorkerClient_OnControllerChanged_Params_Data>(
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

const char ServiceWorkerWorkerClientRegistry::Name_[] = "blink.mojom.ServiceWorkerWorkerClientRegistry";

ServiceWorkerWorkerClientRegistryProxy::ServiceWorkerWorkerClientRegistryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerWorkerClientRegistryProxy::RegisterWorkerClient(
    ServiceWorkerWorkerClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerWorkerClientRegistry::RegisterWorkerClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerWorkerClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ServiceWorkerWorkerClientRegistry.RegisterWorkerClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerWorkerClientRegistry::Name_);
  message.set_method_name("RegisterWorkerClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerWorkerClientRegistryProxy::CloneWorkerClientRegistry(
    ServiceWorkerWorkerClientRegistryRequest in_host) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerWorkerClientRegistry::CloneWorkerClientRegistry");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerWorkerClientRegistryRequestDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host in ServiceWorkerWorkerClientRegistry.CloneWorkerClientRegistry request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerWorkerClientRegistry::Name_);
  message.set_method_name("CloneWorkerClientRegistry");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceWorkerWorkerClientRegistryStubDispatch::Accept(
    ServiceWorkerWorkerClientRegistry* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerWorkerClientRegistry::RegisterWorkerClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerWorkerClientPtr p_client{};
      ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerWorkerClientRegistry::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterWorkerClient(
std::move(p_client));
      return true;
    }
    case internal::kServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerWorkerClientRegistry::CloneWorkerClientRegistry",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerWorkerClientRegistryRequest p_host{};
      ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerWorkerClientRegistry::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CloneWorkerClientRegistry(
std::move(p_host));
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerWorkerClientRegistryStubDispatch::AcceptWithResponder(
    ServiceWorkerWorkerClientRegistry* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Name: {
      break;
    }
    case internal::kServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Name: {
      break;
    }
  }
  return false;
}

bool ServiceWorkerWorkerClientRegistryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerWorkerClientRegistry RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data>(
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
bool StructTraits<::blink::mojom::ServiceWorkerProviderInfoForWorker::DataView, ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr>::Read(
    ::blink::mojom::ServiceWorkerProviderInfoForWorker::DataView input,
    ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr* output) {
  bool success = true;
  ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr result(::blink::mojom::ServiceWorkerProviderInfoForWorker::New());
  
      result->host_ptr_info =
          input.TakeHostPtrInfo<decltype(result->host_ptr_info)>();
      result->client_request =
          input.TakeClientRequest<decltype(result->client_request)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ServiceWorkerProviderInfoForStartWorker::DataView, ::blink::mojom::ServiceWorkerProviderInfoForStartWorkerPtr>::Read(
    ::blink::mojom::ServiceWorkerProviderInfoForStartWorker::DataView input,
    ::blink::mojom::ServiceWorkerProviderInfoForStartWorkerPtr* output) {
  bool success = true;
  ::blink::mojom::ServiceWorkerProviderInfoForStartWorkerPtr result(::blink::mojom::ServiceWorkerProviderInfoForStartWorker::New());
  
      result->host_ptr_info =
          input.TakeHostPtrInfo<decltype(result->host_ptr_info)>();
      result->client_request =
          input.TakeClientRequest<decltype(result->client_request)>();
      result->script_loader_factory_ptr_info =
          input.TakeScriptLoaderFactoryPtrInfo<decltype(result->script_loader_factory_ptr_info)>();
      result->cache_storage =
          input.TakeCacheStorage<decltype(result->cache_storage)>();
      result->interface_provider =
          input.TakeInterfaceProvider<decltype(result->interface_provider)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ServiceWorkerProviderInfoForWindow::DataView, ::blink::mojom::ServiceWorkerProviderInfoForWindowPtr>::Read(
    ::blink::mojom::ServiceWorkerProviderInfoForWindow::DataView input,
    ::blink::mojom::ServiceWorkerProviderInfoForWindowPtr* output) {
  bool success = true;
  ::blink::mojom::ServiceWorkerProviderInfoForWindowPtr result(::blink::mojom::ServiceWorkerProviderInfoForWindow::New());
  
      result->host_ptr_info =
          input.TakeHostPtrInfo<decltype(result->host_ptr_info)>();
      result->client_request =
          input.TakeClientRequest<decltype(result->client_request)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif