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

#include "third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom.h"

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

#include "third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom-params-data.h"
#include "third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "third_party/blink/public/common/loader/url_loader_factory_bundle_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char kNavigation_DedicatedWorkerSpec[] = "navigation:dedicated_worker";
const char DedicatedWorkerHostFactoryClient::Name_[] = "blink.mojom.DedicatedWorkerHostFactoryClient";

DedicatedWorkerHostFactoryClientProxy::DedicatedWorkerHostFactoryClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DedicatedWorkerHostFactoryClientProxy::OnWorkerHostCreated(
    ::service_manager::mojom::InterfaceProviderPtr in_interface_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DedicatedWorkerHostFactoryClient::OnWorkerHostCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
      in_interface_provider, &params->interface_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->interface_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid interface_provider in DedicatedWorkerHostFactoryClient.OnWorkerHostCreated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DedicatedWorkerHostFactoryClient::Name_);
  message.set_method_name("OnWorkerHostCreated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DedicatedWorkerHostFactoryClientProxy::OnScriptLoadStarted(
    ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr in_service_worker_provider_info, ::blink::mojom::WorkerMainScriptLoadParamsPtr in_main_script_load_params, std::unique_ptr<blink::URLLoaderFactoryBundleInfo> in_subresource_loader_factories, ::blink::mojom::ControllerServiceWorkerInfoPtr in_controller_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DedicatedWorkerHostFactoryClient::OnScriptLoadStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service_worker_provider_info)::BaseType::BufferWriter
      service_worker_provider_info_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView>(
      in_service_worker_provider_info, buffer, &service_worker_provider_info_writer, &serialization_context);
  params->service_worker_provider_info.Set(
      service_worker_provider_info_writer.is_null() ? nullptr : service_worker_provider_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_worker_provider_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_worker_provider_info in DedicatedWorkerHostFactoryClient.OnScriptLoadStarted request");
  typename decltype(params->main_script_load_params)::BaseType::BufferWriter
      main_script_load_params_writer;
  mojo::internal::Serialize<::blink::mojom::WorkerMainScriptLoadParamsDataView>(
      in_main_script_load_params, buffer, &main_script_load_params_writer, &serialization_context);
  params->main_script_load_params.Set(
      main_script_load_params_writer.is_null() ? nullptr : main_script_load_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->main_script_load_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null main_script_load_params in DedicatedWorkerHostFactoryClient.OnScriptLoadStarted request");
  typename decltype(params->subresource_loader_factories)::BaseType::BufferWriter
      subresource_loader_factories_writer;
  mojo::internal::Serialize<::blink::mojom::URLLoaderFactoryBundleDataView>(
      in_subresource_loader_factories, buffer, &subresource_loader_factories_writer, &serialization_context);
  params->subresource_loader_factories.Set(
      subresource_loader_factories_writer.is_null() ? nullptr : subresource_loader_factories_writer.data());
  typename decltype(params->controller_info)::BaseType::BufferWriter
      controller_info_writer;
  mojo::internal::Serialize<::blink::mojom::ControllerServiceWorkerInfoDataView>(
      in_controller_info, buffer, &controller_info_writer, &serialization_context);
  params->controller_info.Set(
      controller_info_writer.is_null() ? nullptr : controller_info_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DedicatedWorkerHostFactoryClient::Name_);
  message.set_method_name("OnScriptLoadStarted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DedicatedWorkerHostFactoryClientProxy::OnScriptLoadStartFailed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DedicatedWorkerHostFactoryClient::OnScriptLoadStartFailed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DedicatedWorkerHostFactoryClient::Name_);
  message.set_method_name("OnScriptLoadStartFailed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DedicatedWorkerHostFactoryClientStubDispatch::Accept(
    DedicatedWorkerHostFactoryClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DedicatedWorkerHostFactoryClient::OnWorkerHostCreated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data* params =
          reinterpret_cast<internal::DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::mojom::InterfaceProviderPtr p_interface_provider{};
      DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_interface_provider =
          input_data_view.TakeInterfaceProvider<decltype(p_interface_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DedicatedWorkerHostFactoryClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWorkerHostCreated(
std::move(p_interface_provider));
      return true;
    }
    case internal::kDedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DedicatedWorkerHostFactoryClient::OnScriptLoadStarted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data* params =
          reinterpret_cast<internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr p_service_worker_provider_info{};
      ::blink::mojom::WorkerMainScriptLoadParamsPtr p_main_script_load_params{};
      std::unique_ptr<blink::URLLoaderFactoryBundleInfo> p_subresource_loader_factories{};
      ::blink::mojom::ControllerServiceWorkerInfoPtr p_controller_info{};
      DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadServiceWorkerProviderInfo(&p_service_worker_provider_info))
        success = false;
      if (!input_data_view.ReadMainScriptLoadParams(&p_main_script_load_params))
        success = false;
      if (!input_data_view.ReadSubresourceLoaderFactories(&p_subresource_loader_factories))
        success = false;
      if (!input_data_view.ReadControllerInfo(&p_controller_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DedicatedWorkerHostFactoryClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnScriptLoadStarted(
std::move(p_service_worker_provider_info), 
std::move(p_main_script_load_params), 
std::move(p_subresource_loader_factories), 
std::move(p_controller_info));
      return true;
    }
    case internal::kDedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DedicatedWorkerHostFactoryClient::OnScriptLoadStartFailed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data* params =
          reinterpret_cast<internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DedicatedWorkerHostFactoryClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnScriptLoadStartFailed();
      return true;
    }
  }
  return false;
}

// static
bool DedicatedWorkerHostFactoryClientStubDispatch::AcceptWithResponder(
    DedicatedWorkerHostFactoryClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Name: {
      break;
    }
    case internal::kDedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Name: {
      break;
    }
    case internal::kDedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Name: {
      break;
    }
  }
  return false;
}

bool DedicatedWorkerHostFactoryClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DedicatedWorkerHostFactoryClient RequestValidator");

  switch (message->header()->name) {
    case internal::kDedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data>(
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

const char DedicatedWorkerHostFactory::Name_[] = "blink.mojom.DedicatedWorkerHostFactory";

DedicatedWorkerHostFactoryProxy::DedicatedWorkerHostFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DedicatedWorkerHostFactoryProxy::CreateWorkerHost(
    const url::Origin& in_origin, ::service_manager::mojom::InterfaceProviderRequest in_worker_interface_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DedicatedWorkerHostFactory::CreateWorkerHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDedicatedWorkerHostFactory_CreateWorkerHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in DedicatedWorkerHostFactory.CreateWorkerHost request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
      in_worker_interface_provider, &params->worker_interface_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->worker_interface_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid worker_interface_provider in DedicatedWorkerHostFactory.CreateWorkerHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DedicatedWorkerHostFactory::Name_);
  message.set_method_name("CreateWorkerHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DedicatedWorkerHostFactoryProxy::CreateWorkerHostAndStartScriptLoad(
    const GURL& in_script_url, const url::Origin& in_origin, ::blink::mojom::BlobURLTokenPtr in_blob_url_token, DedicatedWorkerHostFactoryClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DedicatedWorkerHostFactory::CreateWorkerHostAndStartScriptLoad");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data::BufferWriter
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
      "null script_url in DedicatedWorkerHostFactory.CreateWorkerHostAndStartScriptLoad request");
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in DedicatedWorkerHostFactory.CreateWorkerHostAndStartScriptLoad request");
  mojo::internal::Serialize<::blink::mojom::BlobURLTokenPtrDataView>(
      in_blob_url_token, &params->blob_url_token, &serialization_context);
  mojo::internal::Serialize<::blink::mojom::DedicatedWorkerHostFactoryClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in DedicatedWorkerHostFactory.CreateWorkerHostAndStartScriptLoad request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DedicatedWorkerHostFactory::Name_);
  message.set_method_name("CreateWorkerHostAndStartScriptLoad");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DedicatedWorkerHostFactoryStubDispatch::Accept(
    DedicatedWorkerHostFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDedicatedWorkerHostFactory_CreateWorkerHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DedicatedWorkerHostFactory::CreateWorkerHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data* params =
          reinterpret_cast<internal::DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      ::service_manager::mojom::InterfaceProviderRequest p_worker_interface_provider{};
      DedicatedWorkerHostFactory_CreateWorkerHost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_worker_interface_provider =
          input_data_view.TakeWorkerInterfaceProvider<decltype(p_worker_interface_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DedicatedWorkerHostFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateWorkerHost(
std::move(p_origin), 
std::move(p_worker_interface_provider));
      return true;
    }
    case internal::kDedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DedicatedWorkerHostFactory::CreateWorkerHostAndStartScriptLoad",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data* params =
          reinterpret_cast<internal::DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_script_url{};
      url::Origin p_origin{};
      ::blink::mojom::BlobURLTokenPtr p_blob_url_token{};
      DedicatedWorkerHostFactoryClientPtr p_client{};
      DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadScriptUrl(&p_script_url))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_blob_url_token =
          input_data_view.TakeBlobUrlToken<decltype(p_blob_url_token)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DedicatedWorkerHostFactory::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateWorkerHostAndStartScriptLoad(
std::move(p_script_url), 
std::move(p_origin), 
std::move(p_blob_url_token), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool DedicatedWorkerHostFactoryStubDispatch::AcceptWithResponder(
    DedicatedWorkerHostFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDedicatedWorkerHostFactory_CreateWorkerHost_Name: {
      break;
    }
    case internal::kDedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Name: {
      break;
    }
  }
  return false;
}

bool DedicatedWorkerHostFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DedicatedWorkerHostFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kDedicatedWorkerHostFactory_CreateWorkerHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data>(
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif