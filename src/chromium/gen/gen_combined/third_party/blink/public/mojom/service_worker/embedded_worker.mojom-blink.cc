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

#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-blink.h"

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

#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
EmbeddedWorkerStartParams::EmbeddedWorkerStartParams()
    : service_worker_version_id(),
      scope(),
      script_url(),
      script_type(),
      user_agent(),
      worker_devtools_agent_route_id(),
      devtools_worker_token(),
      pause_after_download(),
      wait_for_debugger(),
      is_installed(),
      v8_cache_options(),
      renderer_preferences(),
      service_worker_request(),
      controller_request(),
      installed_scripts_info(),
      instance_host(),
      provider_info(),
      content_settings_proxy(),
      preference_watcher_request(),
      subresource_loader_factories() {}

EmbeddedWorkerStartParams::EmbeddedWorkerStartParams(
    int64_t service_worker_version_id_in,
    const ::blink::KURL& scope_in,
    const ::blink::KURL& script_url_in,
    ::blink::mojom::blink::ScriptType script_type_in,
    const WTF::String& user_agent_in,
    int32_t worker_devtools_agent_route_id_in,
    const base::UnguessableToken& devtools_worker_token_in,
    bool pause_after_download_in,
    bool wait_for_debugger_in,
    bool is_installed_in,
    ::blink::mojom::blink::V8CacheOptions v8_cache_options_in,
    ::blink::mojom::blink::RendererPreferencesPtr renderer_preferences_in,
    ::blink::mojom::blink::ServiceWorkerRequest service_worker_request_in,
    ::blink::mojom::blink::ControllerServiceWorkerRequest controller_request_in,
    ::blink::mojom::blink::ServiceWorkerInstalledScriptsInfoPtr installed_scripts_info_in,
    EmbeddedWorkerInstanceHostAssociatedPtrInfo instance_host_in,
    ::blink::mojom::blink::ServiceWorkerProviderInfoForStartWorkerPtr provider_info_in,
    ::blink::mojom::blink::WorkerContentSettingsProxyPtrInfo content_settings_proxy_in,
    ::blink::mojom::blink::RendererPreferenceWatcherRequest preference_watcher_request_in,
    ::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories_in)
    : service_worker_version_id(std::move(service_worker_version_id_in)),
      scope(std::move(scope_in)),
      script_url(std::move(script_url_in)),
      script_type(std::move(script_type_in)),
      user_agent(std::move(user_agent_in)),
      worker_devtools_agent_route_id(std::move(worker_devtools_agent_route_id_in)),
      devtools_worker_token(std::move(devtools_worker_token_in)),
      pause_after_download(std::move(pause_after_download_in)),
      wait_for_debugger(std::move(wait_for_debugger_in)),
      is_installed(std::move(is_installed_in)),
      v8_cache_options(std::move(v8_cache_options_in)),
      renderer_preferences(std::move(renderer_preferences_in)),
      service_worker_request(std::move(service_worker_request_in)),
      controller_request(std::move(controller_request_in)),
      installed_scripts_info(std::move(installed_scripts_info_in)),
      instance_host(std::move(instance_host_in)),
      provider_info(std::move(provider_info_in)),
      content_settings_proxy(std::move(content_settings_proxy_in)),
      preference_watcher_request(std::move(preference_watcher_request_in)),
      subresource_loader_factories(std::move(subresource_loader_factories_in)) {}

EmbeddedWorkerStartParams::~EmbeddedWorkerStartParams() = default;

bool EmbeddedWorkerStartParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EmbeddedWorkerStartTiming::EmbeddedWorkerStartTiming()
    : start_worker_received_time(),
      script_evaluation_start_time(),
      script_evaluation_end_time() {}

EmbeddedWorkerStartTiming::EmbeddedWorkerStartTiming(
    base::TimeTicks start_worker_received_time_in,
    base::TimeTicks script_evaluation_start_time_in,
    base::TimeTicks script_evaluation_end_time_in)
    : start_worker_received_time(std::move(start_worker_received_time_in)),
      script_evaluation_start_time(std::move(script_evaluation_start_time_in)),
      script_evaluation_end_time(std::move(script_evaluation_end_time_in)) {}

EmbeddedWorkerStartTiming::~EmbeddedWorkerStartTiming() = default;

bool EmbeddedWorkerStartTiming::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char EmbeddedWorkerInstanceClient::Name_[] = "blink.mojom.EmbeddedWorkerInstanceClient";

EmbeddedWorkerInstanceClientProxy::EmbeddedWorkerInstanceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void EmbeddedWorkerInstanceClientProxy::StartWorker(
    EmbeddedWorkerStartParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::StartWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_StartWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::blink::mojom::EmbeddedWorkerStartParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in EmbeddedWorkerInstanceClient.StartWorker request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceClient::Name_);
  message.set_method_name("StartWorker");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceClientProxy::StopWorker(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::StopWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_StopWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceClient::Name_);
  message.set_method_name("StopWorker");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceClientProxy::ResumeAfterDownload(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::ResumeAfterDownload");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceClient::Name_);
  message.set_method_name("ResumeAfterDownload");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceClientProxy::AddMessageToConsole(
    ::blink::mojom::blink::ConsoleMessageLevel in_level, const WTF::String& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::AddMessageToConsole");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ConsoleMessageLevel>(
      in_level, &params->level);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in EmbeddedWorkerInstanceClient.AddMessageToConsole request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceClient::Name_);
  message.set_method_name("AddMessageToConsole");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceClientProxy::BindDevToolsAgent(
    ::blink::mojom::blink::DevToolsAgentHostAssociatedPtrInfo in_agent_host, ::blink::mojom::blink::DevToolsAgentAssociatedRequest in_agent) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::BindDevToolsAgent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::DevToolsAgentHostAssociatedPtrInfoDataView>(
      in_agent_host, &params->agent_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->agent_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid agent_host in EmbeddedWorkerInstanceClient.BindDevToolsAgent request");
  mojo::internal::Serialize<::blink::mojom::DevToolsAgentAssociatedRequestDataView>(
      in_agent, &params->agent, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->agent),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid agent in EmbeddedWorkerInstanceClient.BindDevToolsAgent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceClient::Name_);
  message.set_method_name("BindDevToolsAgent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceClientProxy::UpdateSubresourceLoaderFactories(
    ::blink::mojom::blink::URLLoaderFactoryBundlePtr in_subresource_loader_factories) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::UpdateSubresourceLoaderFactories");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->subresource_loader_factories)::BaseType::BufferWriter
      subresource_loader_factories_writer;
  mojo::internal::Serialize<::blink::mojom::URLLoaderFactoryBundleDataView>(
      in_subresource_loader_factories, buffer, &subresource_loader_factories_writer, &serialization_context);
  params->subresource_loader_factories.Set(
      subresource_loader_factories_writer.is_null() ? nullptr : subresource_loader_factories_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->subresource_loader_factories.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null subresource_loader_factories in EmbeddedWorkerInstanceClient.UpdateSubresourceLoaderFactories request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceClient::Name_);
  message.set_method_name("UpdateSubresourceLoaderFactories");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool EmbeddedWorkerInstanceClientStubDispatch::Accept(
    EmbeddedWorkerInstanceClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceClient_StartWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::StartWorker",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerStartParamsPtr p_params{};
      EmbeddedWorkerInstanceClient_StartWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartWorker(
std::move(p_params));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_StopWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::StopWorker",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceClient_StopWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopWorker();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::ResumeAfterDownload",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceClient_ResumeAfterDownload_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResumeAfterDownload();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::AddMessageToConsole",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::ConsoleMessageLevel p_level{};
      WTF::String p_message{};
      EmbeddedWorkerInstanceClient_AddMessageToConsole_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLevel(&p_level))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddMessageToConsole(
std::move(p_level), 
std::move(p_message));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::BindDevToolsAgent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::DevToolsAgentHostAssociatedPtrInfo p_agent_host{};
      ::blink::mojom::blink::DevToolsAgentAssociatedRequest p_agent{};
      EmbeddedWorkerInstanceClient_BindDevToolsAgent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_agent_host =
          input_data_view.TakeAgentHost<decltype(p_agent_host)>();
      p_agent =
          input_data_view.TakeAgent<decltype(p_agent)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceClient::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BindDevToolsAgent(
std::move(p_agent_host), 
std::move(p_agent));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceClient::UpdateSubresourceLoaderFactories",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::URLLoaderFactoryBundlePtr p_subresource_loader_factories{};
      EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSubresourceLoaderFactories(&p_subresource_loader_factories))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceClient::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateSubresourceLoaderFactories(
std::move(p_subresource_loader_factories));
      return true;
    }
  }
  return false;
}

// static
bool EmbeddedWorkerInstanceClientStubDispatch::AcceptWithResponder(
    EmbeddedWorkerInstanceClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceClient_StartWorker_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceClient_StopWorker_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Name: {
      break;
    }
  }
  return false;
}

bool EmbeddedWorkerInstanceClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedWorkerInstanceClient RequestValidator");

  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceClient_StartWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_StopWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Params_Data>(
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

const char EmbeddedWorkerInstanceHost::Name_[] = "blink.mojom.EmbeddedWorkerInstanceHost";

class EmbeddedWorkerInstanceHost_RequestTermination_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  EmbeddedWorkerInstanceHost_RequestTermination_ForwardToCallback(
      EmbeddedWorkerInstanceHost::RequestTerminationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  EmbeddedWorkerInstanceHost::RequestTerminationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(EmbeddedWorkerInstanceHost_RequestTermination_ForwardToCallback);
};

EmbeddedWorkerInstanceHostProxy::EmbeddedWorkerInstanceHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void EmbeddedWorkerInstanceHostProxy::RequestTermination(
    RequestTerminationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::RequestTermination");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_RequestTermination_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceHost::Name_);
  message.set_method_name("RequestTermination");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new EmbeddedWorkerInstanceHost_RequestTermination_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void EmbeddedWorkerInstanceHostProxy::CountFeature(
    ::blink::mojom::blink::WebFeature in_feature) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::CountFeature");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_CountFeature_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebFeature>(
      in_feature, &params->feature);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceHost::Name_);
  message.set_method_name("CountFeature");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnReadyForInspection(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnReadyForInspection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceHost::Name_);
  message.set_method_name("OnReadyForInspection");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnScriptLoaded(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnScriptLoaded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceHost::Name_);
  message.set_method_name("OnScriptLoaded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnScriptEvaluationStart(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnScriptEvaluationStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceHost::Name_);
  message.set_method_name("OnScriptEvaluationStart");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnStarted(
    ::blink::mojom::blink::ServiceWorkerStartStatus in_status, int32_t in_thread_id, EmbeddedWorkerStartTimingPtr in_start_timing) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerStartStatus>(
      in_status, &params->status);
  params->thread_id = in_thread_id;
  typename decltype(params->start_timing)::BaseType::BufferWriter
      start_timing_writer;
  mojo::internal::Serialize<::blink::mojom::EmbeddedWorkerStartTimingDataView>(
      in_start_timing, buffer, &start_timing_writer, &serialization_context);
  params->start_timing.Set(
      start_timing_writer.is_null() ? nullptr : start_timing_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_timing.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_timing in EmbeddedWorkerInstanceHost.OnStarted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceHost::Name_);
  message.set_method_name("OnStarted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnReportException(
    const WTF::String& in_error_message, int32_t in_line_number, int32_t in_column_number, const ::blink::KURL& in_source_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnReportException");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnReportException_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error_message)::BaseType::BufferWriter
      error_message_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_error_message, buffer, &error_message_writer, &serialization_context);
  params->error_message.Set(
      error_message_writer.is_null() ? nullptr : error_message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error_message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error_message in EmbeddedWorkerInstanceHost.OnReportException request");
  params->line_number = in_line_number;
  params->column_number = in_column_number;
  typename decltype(params->source_url)::BaseType::BufferWriter
      source_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_source_url, buffer, &source_url_writer, &serialization_context);
  params->source_url.Set(
      source_url_writer.is_null() ? nullptr : source_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_url in EmbeddedWorkerInstanceHost.OnReportException request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceHost::Name_);
  message.set_method_name("OnReportException");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnReportConsoleMessage(
    ::blink::mojom::blink::ConsoleMessageSource in_source, ::blink::mojom::blink::ConsoleMessageLevel in_message_level, const WTF::String& in_message, int32_t in_line_number, const ::blink::KURL& in_source_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnReportConsoleMessage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ConsoleMessageSource>(
      in_source, &params->source);
  mojo::internal::Serialize<::blink::mojom::ConsoleMessageLevel>(
      in_message_level, &params->message_level);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in EmbeddedWorkerInstanceHost.OnReportConsoleMessage request");
  params->line_number = in_line_number;
  typename decltype(params->source_url)::BaseType::BufferWriter
      source_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_source_url, buffer, &source_url_writer, &serialization_context);
  params->source_url.Set(
      source_url_writer.is_null() ? nullptr : source_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_url in EmbeddedWorkerInstanceHost.OnReportConsoleMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceHost::Name_);
  message.set_method_name("OnReportConsoleMessage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnStopped(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnStopped");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnStopped_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceHost::Name_);
  message.set_method_name("OnStopped");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class EmbeddedWorkerInstanceHost_RequestTermination_ProxyToResponder {
 public:
  static EmbeddedWorkerInstanceHost::RequestTerminationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<EmbeddedWorkerInstanceHost_RequestTermination_ProxyToResponder> proxy(
        new EmbeddedWorkerInstanceHost_RequestTermination_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&EmbeddedWorkerInstanceHost_RequestTermination_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~EmbeddedWorkerInstanceHost_RequestTermination_ProxyToResponder() {
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
  EmbeddedWorkerInstanceHost_RequestTermination_ProxyToResponder(
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
        << "EmbeddedWorkerInstanceHost::RequestTerminationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_will_be_terminated);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedWorkerInstanceHost_RequestTermination_ProxyToResponder);
};

bool EmbeddedWorkerInstanceHost_RequestTermination_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::RequestTerminationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data* params =
      reinterpret_cast<
          internal::EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_will_be_terminated{};
  EmbeddedWorkerInstanceHost_RequestTermination_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_will_be_terminated = input_data_view.will_be_terminated();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        EmbeddedWorkerInstanceHost::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_will_be_terminated));
  return true;
}

void EmbeddedWorkerInstanceHost_RequestTermination_ProxyToResponder::Run(
    bool in_will_be_terminated) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_RequestTermination_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->will_be_terminated = in_will_be_terminated;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::RequestTerminationCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedWorkerInstanceHost::Name_);
  message.set_method_name("RequestTermination");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool EmbeddedWorkerInstanceHostStubDispatch::Accept(
    EmbeddedWorkerInstanceHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceHost_RequestTermination_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_CountFeature_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::CountFeature",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::WebFeature p_feature{};
      EmbeddedWorkerInstanceHost_CountFeature_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFeature(&p_feature))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CountFeature(
std::move(p_feature));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnReadyForInspection",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceHost_OnReadyForInspection_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceHost::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnReadyForInspection();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnScriptLoaded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceHost_OnScriptLoaded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceHost::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnScriptLoaded();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnScriptEvaluationStart",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceHost::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnScriptEvaluationStart();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnStarted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::ServiceWorkerStartStatus p_status{};
      int32_t p_thread_id{};
      EmbeddedWorkerStartTimingPtr p_start_timing{};
      EmbeddedWorkerInstanceHost_OnStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStatus(&p_status))
        success = false;
      p_thread_id = input_data_view.thread_id();
      if (!input_data_view.ReadStartTiming(&p_start_timing))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceHost::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStarted(
std::move(p_status), 
std::move(p_thread_id), 
std::move(p_start_timing));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportException_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnReportException",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_error_message{};
      int32_t p_line_number{};
      int32_t p_column_number{};
      ::blink::KURL p_source_url{};
      EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadErrorMessage(&p_error_message))
        success = false;
      p_line_number = input_data_view.line_number();
      p_column_number = input_data_view.column_number();
      if (!input_data_view.ReadSourceUrl(&p_source_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceHost::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnReportException(
std::move(p_error_message), 
std::move(p_line_number), 
std::move(p_column_number), 
std::move(p_source_url));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnReportConsoleMessage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::ConsoleMessageSource p_source{};
      ::blink::mojom::blink::ConsoleMessageLevel p_message_level{};
      WTF::String p_message{};
      int32_t p_line_number{};
      ::blink::KURL p_source_url{};
      EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!input_data_view.ReadMessageLevel(&p_message_level))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      p_line_number = input_data_view.line_number();
      if (!input_data_view.ReadSourceUrl(&p_source_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceHost::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnReportConsoleMessage(
std::move(p_source), 
std::move(p_message_level), 
std::move(p_message), 
std::move(p_line_number), 
std::move(p_source_url));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStopped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::OnStopped",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceHost_OnStopped_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceHost::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStopped();
      return true;
    }
  }
  return false;
}

// static
bool EmbeddedWorkerInstanceHostStubDispatch::AcceptWithResponder(
    EmbeddedWorkerInstanceHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceHost_RequestTermination_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedWorkerInstanceHost::RequestTermination",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* params =
          reinterpret_cast<
              internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceHost_RequestTermination_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedWorkerInstanceHost::Name_, 0, false);
        return false;
      }
      EmbeddedWorkerInstanceHost::RequestTerminationCallback callback =
          EmbeddedWorkerInstanceHost_RequestTermination_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestTermination(std::move(callback));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_CountFeature_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStarted_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportException_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name: {
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStopped_Name: {
      break;
    }
  }
  return false;
}

bool EmbeddedWorkerInstanceHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedWorkerInstanceHost RequestValidator");

  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceHost_RequestTermination_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_CountFeature_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportException_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStopped_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data>(
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

bool EmbeddedWorkerInstanceHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedWorkerInstanceHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceHost_RequestTermination_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_RequestTermination_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::blink::EmbeddedWorkerStartParams::DataView, ::blink::mojom::blink::EmbeddedWorkerStartParamsPtr>::Read(
    ::blink::mojom::blink::EmbeddedWorkerStartParams::DataView input,
    ::blink::mojom::blink::EmbeddedWorkerStartParamsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::EmbeddedWorkerStartParamsPtr result(::blink::mojom::blink::EmbeddedWorkerStartParams::New());
  
      result->service_worker_version_id = input.service_worker_version_id();
      if (!input.ReadScope(&result->scope))
        success = false;
      if (!input.ReadScriptUrl(&result->script_url))
        success = false;
      if (!input.ReadScriptType(&result->script_type))
        success = false;
      if (!input.ReadUserAgent(&result->user_agent))
        success = false;
      result->worker_devtools_agent_route_id = input.worker_devtools_agent_route_id();
      if (!input.ReadDevtoolsWorkerToken(&result->devtools_worker_token))
        success = false;
      result->pause_after_download = input.pause_after_download();
      result->wait_for_debugger = input.wait_for_debugger();
      result->is_installed = input.is_installed();
      if (!input.ReadV8CacheOptions(&result->v8_cache_options))
        success = false;
      if (!input.ReadRendererPreferences(&result->renderer_preferences))
        success = false;
      result->service_worker_request =
          input.TakeServiceWorkerRequest<decltype(result->service_worker_request)>();
      result->controller_request =
          input.TakeControllerRequest<decltype(result->controller_request)>();
      if (!input.ReadInstalledScriptsInfo(&result->installed_scripts_info))
        success = false;
      result->instance_host =
          input.TakeInstanceHost<decltype(result->instance_host)>();
      if (!input.ReadProviderInfo(&result->provider_info))
        success = false;
      result->content_settings_proxy =
          input.TakeContentSettingsProxy<decltype(result->content_settings_proxy)>();
      result->preference_watcher_request =
          input.TakePreferenceWatcherRequest<decltype(result->preference_watcher_request)>();
      if (!input.ReadSubresourceLoaderFactories(&result->subresource_loader_factories))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::EmbeddedWorkerStartTiming::DataView, ::blink::mojom::blink::EmbeddedWorkerStartTimingPtr>::Read(
    ::blink::mojom::blink::EmbeddedWorkerStartTiming::DataView input,
    ::blink::mojom::blink::EmbeddedWorkerStartTimingPtr* output) {
  bool success = true;
  ::blink::mojom::blink::EmbeddedWorkerStartTimingPtr result(::blink::mojom::blink::EmbeddedWorkerStartTiming::New());
  
      if (!input.ReadStartWorkerReceivedTime(&result->start_worker_received_time))
        success = false;
      if (!input.ReadScriptEvaluationStartTime(&result->script_evaluation_start_time))
        success = false;
      if (!input.ReadScriptEvaluationEndTime(&result->script_evaluation_end_time))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif