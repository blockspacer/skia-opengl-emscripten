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

#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom.h"

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

#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-params-data.h"
#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "third_party/blink/public/common/loader/url_loader_factory_bundle_mojom_traits.h"
#include "ui/gfx/mojo/font_render_params_struct_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char kNavigation_SharedWorkerSpec[] = "navigation:shared_worker";
const char SharedWorkerFactory::Name_[] = "blink.mojom.SharedWorkerFactory";

SharedWorkerFactoryProxy::SharedWorkerFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SharedWorkerFactoryProxy::CreateSharedWorker(
    ::blink::mojom::SharedWorkerInfoPtr in_info, bool in_pause_on_start, const base::UnguessableToken& in_devtools_worker_token, ::blink::mojom::RendererPreferencesPtr in_renderer_preferences, ::blink::mojom::RendererPreferenceWatcherRequest in_preference_watcher_request, ::blink::mojom::WorkerContentSettingsProxyPtr in_content_settings, ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr in_service_worker_provider_info, int32_t in_appcache_host_id, ::network::mojom::URLLoaderFactoryPtr in_main_script_loader_factory, ::blink::mojom::WorkerMainScriptLoadParamsPtr in_main_script_load_params, std::unique_ptr<blink::URLLoaderFactoryBundleInfo> in_subresource_loader_factories, ::blink::mojom::ControllerServiceWorkerInfoPtr in_controller_info, ::blink::mojom::SharedWorkerHostPtr in_host, ::blink::mojom::SharedWorkerRequest in_shared_worker, ::service_manager::mojom::InterfaceProviderPtr in_interface_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SharedWorkerFactory::CreateSharedWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedWorkerFactory_CreateSharedWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SharedWorkerFactory_CreateSharedWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::blink::mojom::SharedWorkerInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in SharedWorkerFactory.CreateSharedWorker request");
  params->pause_on_start = in_pause_on_start;
  typename decltype(params->devtools_worker_token)::BaseType::BufferWriter
      devtools_worker_token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_devtools_worker_token, buffer, &devtools_worker_token_writer, &serialization_context);
  params->devtools_worker_token.Set(
      devtools_worker_token_writer.is_null() ? nullptr : devtools_worker_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devtools_worker_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devtools_worker_token in SharedWorkerFactory.CreateSharedWorker request");
  typename decltype(params->renderer_preferences)::BaseType::BufferWriter
      renderer_preferences_writer;
  mojo::internal::Serialize<::blink::mojom::RendererPreferencesDataView>(
      in_renderer_preferences, buffer, &renderer_preferences_writer, &serialization_context);
  params->renderer_preferences.Set(
      renderer_preferences_writer.is_null() ? nullptr : renderer_preferences_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->renderer_preferences.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null renderer_preferences in SharedWorkerFactory.CreateSharedWorker request");
  mojo::internal::Serialize<::blink::mojom::RendererPreferenceWatcherRequestDataView>(
      in_preference_watcher_request, &params->preference_watcher_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->preference_watcher_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid preference_watcher_request in SharedWorkerFactory.CreateSharedWorker request");
  mojo::internal::Serialize<::blink::mojom::WorkerContentSettingsProxyPtrDataView>(
      in_content_settings, &params->content_settings, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->content_settings),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid content_settings in SharedWorkerFactory.CreateSharedWorker request");
  typename decltype(params->service_worker_provider_info)::BaseType::BufferWriter
      service_worker_provider_info_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView>(
      in_service_worker_provider_info, buffer, &service_worker_provider_info_writer, &serialization_context);
  params->service_worker_provider_info.Set(
      service_worker_provider_info_writer.is_null() ? nullptr : service_worker_provider_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_worker_provider_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_worker_provider_info in SharedWorkerFactory.CreateSharedWorker request");
  params->appcache_host_id = in_appcache_host_id;
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryPtrDataView>(
      in_main_script_loader_factory, &params->main_script_loader_factory, &serialization_context);
  typename decltype(params->main_script_load_params)::BaseType::BufferWriter
      main_script_load_params_writer;
  mojo::internal::Serialize<::blink::mojom::WorkerMainScriptLoadParamsDataView>(
      in_main_script_load_params, buffer, &main_script_load_params_writer, &serialization_context);
  params->main_script_load_params.Set(
      main_script_load_params_writer.is_null() ? nullptr : main_script_load_params_writer.data());
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
  mojo::internal::Serialize<::blink::mojom::SharedWorkerHostPtrDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host in SharedWorkerFactory.CreateSharedWorker request");
  mojo::internal::Serialize<::blink::mojom::SharedWorkerRequestDataView>(
      in_shared_worker, &params->shared_worker, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->shared_worker),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid shared_worker in SharedWorkerFactory.CreateSharedWorker request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
      in_interface_provider, &params->interface_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->interface_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid interface_provider in SharedWorkerFactory.CreateSharedWorker request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SharedWorkerFactory::Name_);
  message.set_method_name("CreateSharedWorker");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SharedWorkerFactoryStubDispatch::Accept(
    SharedWorkerFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSharedWorkerFactory_CreateSharedWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SharedWorkerFactory::CreateSharedWorker",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SharedWorkerFactory_CreateSharedWorker_Params_Data* params =
          reinterpret_cast<internal::SharedWorkerFactory_CreateSharedWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::SharedWorkerInfoPtr p_info{};
      bool p_pause_on_start{};
      base::UnguessableToken p_devtools_worker_token{};
      ::blink::mojom::RendererPreferencesPtr p_renderer_preferences{};
      ::blink::mojom::RendererPreferenceWatcherRequest p_preference_watcher_request{};
      ::blink::mojom::WorkerContentSettingsProxyPtr p_content_settings{};
      ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr p_service_worker_provider_info{};
      int32_t p_appcache_host_id{};
      ::network::mojom::URLLoaderFactoryPtr p_main_script_loader_factory{};
      ::blink::mojom::WorkerMainScriptLoadParamsPtr p_main_script_load_params{};
      std::unique_ptr<blink::URLLoaderFactoryBundleInfo> p_subresource_loader_factories{};
      ::blink::mojom::ControllerServiceWorkerInfoPtr p_controller_info{};
      ::blink::mojom::SharedWorkerHostPtr p_host{};
      ::blink::mojom::SharedWorkerRequest p_shared_worker{};
      ::service_manager::mojom::InterfaceProviderPtr p_interface_provider{};
      SharedWorkerFactory_CreateSharedWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      p_pause_on_start = input_data_view.pause_on_start();
      if (!input_data_view.ReadDevtoolsWorkerToken(&p_devtools_worker_token))
        success = false;
      if (!input_data_view.ReadRendererPreferences(&p_renderer_preferences))
        success = false;
      p_preference_watcher_request =
          input_data_view.TakePreferenceWatcherRequest<decltype(p_preference_watcher_request)>();
      p_content_settings =
          input_data_view.TakeContentSettings<decltype(p_content_settings)>();
      if (!input_data_view.ReadServiceWorkerProviderInfo(&p_service_worker_provider_info))
        success = false;
      p_appcache_host_id = input_data_view.appcache_host_id();
      p_main_script_loader_factory =
          input_data_view.TakeMainScriptLoaderFactory<decltype(p_main_script_loader_factory)>();
      if (!input_data_view.ReadMainScriptLoadParams(&p_main_script_load_params))
        success = false;
      if (!input_data_view.ReadSubresourceLoaderFactories(&p_subresource_loader_factories))
        success = false;
      if (!input_data_view.ReadControllerInfo(&p_controller_info))
        success = false;
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      p_shared_worker =
          input_data_view.TakeSharedWorker<decltype(p_shared_worker)>();
      p_interface_provider =
          input_data_view.TakeInterfaceProvider<decltype(p_interface_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SharedWorkerFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateSharedWorker(
std::move(p_info), 
std::move(p_pause_on_start), 
std::move(p_devtools_worker_token), 
std::move(p_renderer_preferences), 
std::move(p_preference_watcher_request), 
std::move(p_content_settings), 
std::move(p_service_worker_provider_info), 
std::move(p_appcache_host_id), 
std::move(p_main_script_loader_factory), 
std::move(p_main_script_load_params), 
std::move(p_subresource_loader_factories), 
std::move(p_controller_info), 
std::move(p_host), 
std::move(p_shared_worker), 
std::move(p_interface_provider));
      return true;
    }
  }
  return false;
}

// static
bool SharedWorkerFactoryStubDispatch::AcceptWithResponder(
    SharedWorkerFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSharedWorkerFactory_CreateSharedWorker_Name: {
      break;
    }
  }
  return false;
}

bool SharedWorkerFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SharedWorkerFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kSharedWorkerFactory_CreateSharedWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedWorkerFactory_CreateSharedWorker_Params_Data>(
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