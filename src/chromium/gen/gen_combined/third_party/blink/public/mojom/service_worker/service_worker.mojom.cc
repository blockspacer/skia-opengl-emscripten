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

#include "third_party/blink/public/mojom/service_worker/service_worker.mojom.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/cookie_manager_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/public/common/fetch/fetch_api_request_headers_mojom_traits.h"
#include "third_party/blink/public/common/messaging/cloneable_message_struct_traits.h"
#include "third_party/blink/public/common/messaging/transferable_message_struct_traits.h"
#include "third_party/blink/public/common/notifications/notification_struct_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
ExtendableMessageEvent::ExtendableMessageEvent()
    : message(),
      source_origin(),
      source_info_for_client(),
      source_info_for_service_worker() {}

ExtendableMessageEvent::ExtendableMessageEvent(
    ::blink::TransferableMessage message_in,
    const url::Origin& source_origin_in,
    ::blink::mojom::ServiceWorkerClientInfoPtr source_info_for_client_in,
    ::blink::mojom::ServiceWorkerObjectInfoPtr source_info_for_service_worker_in)
    : message(std::move(message_in)),
      source_origin(std::move(source_origin_in)),
      source_info_for_client(std::move(source_info_for_client_in)),
      source_info_for_service_worker(std::move(source_info_for_service_worker_in)) {}

ExtendableMessageEvent::~ExtendableMessageEvent() = default;

bool ExtendableMessageEvent::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceWorkerHost::Name_[] = "blink.mojom.ServiceWorkerHost";

class ServiceWorkerHost_GetClients_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_GetClients_ForwardToCallback(
      ServiceWorkerHost::GetClientsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::GetClientsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_GetClients_ForwardToCallback);
};

class ServiceWorkerHost_GetClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_GetClient_ForwardToCallback(
      ServiceWorkerHost::GetClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::GetClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_GetClient_ForwardToCallback);
};

class ServiceWorkerHost_OpenNewTab_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_OpenNewTab_ForwardToCallback(
      ServiceWorkerHost::OpenNewTabCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::OpenNewTabCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_OpenNewTab_ForwardToCallback);
};

class ServiceWorkerHost_OpenPaymentHandlerWindow_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_OpenPaymentHandlerWindow_ForwardToCallback(
      ServiceWorkerHost::OpenPaymentHandlerWindowCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::OpenPaymentHandlerWindowCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_OpenPaymentHandlerWindow_ForwardToCallback);
};

class ServiceWorkerHost_FocusClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_FocusClient_ForwardToCallback(
      ServiceWorkerHost::FocusClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::FocusClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_FocusClient_ForwardToCallback);
};

class ServiceWorkerHost_NavigateClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_NavigateClient_ForwardToCallback(
      ServiceWorkerHost::NavigateClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::NavigateClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_NavigateClient_ForwardToCallback);
};

class ServiceWorkerHost_SkipWaiting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_SkipWaiting_ForwardToCallback(
      ServiceWorkerHost::SkipWaitingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::SkipWaitingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_SkipWaiting_ForwardToCallback);
};

class ServiceWorkerHost_ClaimClients_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_ClaimClients_ForwardToCallback(
      ServiceWorkerHost::ClaimClientsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::ClaimClientsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_ClaimClients_ForwardToCallback);
};

ServiceWorkerHostProxy::ServiceWorkerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerHostProxy::SetCachedMetadata(
    const GURL& in_url, const std::vector<uint8_t>& in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::SetCachedMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_SetCachedMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_SetCachedMetadata_Params_Data::BufferWriter
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
      "null url in ServiceWorkerHost.SetCachedMetadata request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ServiceWorkerHost.SetCachedMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("SetCachedMetadata");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerHostProxy::ClearCachedMetadata(
    const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::ClearCachedMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_ClearCachedMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data::BufferWriter
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
      "null url in ServiceWorkerHost.ClearCachedMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("ClearCachedMetadata");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerHostProxy::GetClients(
    ::blink::mojom::ServiceWorkerClientQueryOptionsPtr in_options, GetClientsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::GetClients");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_GetClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_GetClients_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientQueryOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in ServiceWorkerHost.GetClients request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("GetClients");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_GetClients_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::GetClient(
    const std::string& in_client_uuid, GetClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::GetClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_GetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_GetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client_uuid)::BaseType::BufferWriter
      client_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_client_uuid, buffer, &client_uuid_writer, &serialization_context);
  params->client_uuid.Set(
      client_uuid_writer.is_null() ? nullptr : client_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_uuid in ServiceWorkerHost.GetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("GetClient");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_GetClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::OpenNewTab(
    const GURL& in_url, OpenNewTabCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::OpenNewTab");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_OpenNewTab_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_OpenNewTab_Params_Data::BufferWriter
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
      "null url in ServiceWorkerHost.OpenNewTab request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("OpenNewTab");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_OpenNewTab_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::OpenPaymentHandlerWindow(
    const GURL& in_url, OpenPaymentHandlerWindowCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::OpenPaymentHandlerWindow");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data::BufferWriter
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
      "null url in ServiceWorkerHost.OpenPaymentHandlerWindow request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("OpenPaymentHandlerWindow");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_OpenPaymentHandlerWindow_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::PostMessageToClient(
    const std::string& in_client_uuid, ::blink::TransferableMessage in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::PostMessageToClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_PostMessageToClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_PostMessageToClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client_uuid)::BaseType::BufferWriter
      client_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_client_uuid, buffer, &client_uuid_writer, &serialization_context);
  params->client_uuid.Set(
      client_uuid_writer.is_null() ? nullptr : client_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_uuid in ServiceWorkerHost.PostMessageToClient request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::blink::mojom::TransferableMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ServiceWorkerHost.PostMessageToClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("PostMessageToClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerHostProxy::FocusClient(
    const std::string& in_client_uuid, FocusClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::FocusClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_FocusClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_FocusClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client_uuid)::BaseType::BufferWriter
      client_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_client_uuid, buffer, &client_uuid_writer, &serialization_context);
  params->client_uuid.Set(
      client_uuid_writer.is_null() ? nullptr : client_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_uuid in ServiceWorkerHost.FocusClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("FocusClient");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_FocusClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::NavigateClient(
    const std::string& in_client_uuid, const GURL& in_url, NavigateClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::NavigateClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_NavigateClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_NavigateClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client_uuid)::BaseType::BufferWriter
      client_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_client_uuid, buffer, &client_uuid_writer, &serialization_context);
  params->client_uuid.Set(
      client_uuid_writer.is_null() ? nullptr : client_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_uuid in ServiceWorkerHost.NavigateClient request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ServiceWorkerHost.NavigateClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("NavigateClient");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_NavigateClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::SkipWaiting(
    SkipWaitingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::SkipWaiting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_SkipWaiting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_SkipWaiting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("SkipWaiting");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_SkipWaiting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::ClaimClients(
    ClaimClientsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::ClaimClients");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_ClaimClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_ClaimClients_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("ClaimClients");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_ClaimClients_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ServiceWorkerHost_GetClients_ProxyToResponder {
 public:
  static ServiceWorkerHost::GetClientsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_GetClients_ProxyToResponder> proxy(
        new ServiceWorkerHost_GetClients_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_GetClients_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_GetClients_ProxyToResponder() {
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
  ServiceWorkerHost_GetClients_ProxyToResponder(
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
        << "ServiceWorkerHost::GetClientsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<::blink::mojom::ServiceWorkerClientInfoPtr> in_clients);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_GetClients_ProxyToResponder);
};

bool ServiceWorkerHost_GetClients_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::GetClientsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_GetClients_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_GetClients_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::blink::mojom::ServiceWorkerClientInfoPtr> p_clients{};
  ServiceWorkerHost_GetClients_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadClients(&p_clients))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerHost::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_clients));
  return true;
}

void ServiceWorkerHost_GetClients_ProxyToResponder::Run(
    std::vector<::blink::mojom::ServiceWorkerClientInfoPtr> in_clients) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_GetClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_GetClients_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->clients)::BaseType::BufferWriter
      clients_writer;
  const mojo::internal::ContainerValidateParams clients_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ServiceWorkerClientInfoDataView>>(
      in_clients, buffer, &clients_writer, &clients_validate_params,
      &serialization_context);
  params->clients.Set(
      clients_writer.is_null() ? nullptr : clients_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->clients.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null clients in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::GetClientsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("GetClients");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_GetClient_ProxyToResponder {
 public:
  static ServiceWorkerHost::GetClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_GetClient_ProxyToResponder> proxy(
        new ServiceWorkerHost_GetClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_GetClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_GetClient_ProxyToResponder() {
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
  ServiceWorkerHost_GetClient_ProxyToResponder(
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
        << "ServiceWorkerHost::GetClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerClientInfoPtr in_client);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_GetClient_ProxyToResponder);
};

bool ServiceWorkerHost_GetClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::GetClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_GetClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_GetClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerClientInfoPtr p_client{};
  ServiceWorkerHost_GetClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadClient(&p_client))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerHost::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_client));
  return true;
}

void ServiceWorkerHost_GetClient_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerClientInfoPtr in_client) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_GetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_GetClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client)::BaseType::BufferWriter
      client_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
      in_client, buffer, &client_writer, &serialization_context);
  params->client.Set(
      client_writer.is_null() ? nullptr : client_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::GetClientCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("GetClient");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_OpenNewTab_ProxyToResponder {
 public:
  static ServiceWorkerHost::OpenNewTabCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_OpenNewTab_ProxyToResponder> proxy(
        new ServiceWorkerHost_OpenNewTab_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_OpenNewTab_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_OpenNewTab_ProxyToResponder() {
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
  ServiceWorkerHost_OpenNewTab_ProxyToResponder(
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
        << "ServiceWorkerHost::OpenNewTabCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, ::blink::mojom::ServiceWorkerClientInfoPtr in_client, const base::Optional<std::string>& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_OpenNewTab_ProxyToResponder);
};

bool ServiceWorkerHost_OpenNewTab_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::OpenNewTabCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  ::blink::mojom::ServiceWorkerClientInfoPtr p_client{};
  base::Optional<std::string> p_error_msg{};
  ServiceWorkerHost_OpenNewTab_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadClient(&p_client))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerHost::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_client), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerHost_OpenNewTab_ProxyToResponder::Run(
    bool in_success, ::blink::mojom::ServiceWorkerClientInfoPtr in_client, const base::Optional<std::string>& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_OpenNewTab_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->client)::BaseType::BufferWriter
      client_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
      in_client, buffer, &client_writer, &serialization_context);
  params->client.Set(
      client_writer.is_null() ? nullptr : client_writer.data());
  typename decltype(params->error_msg)::BaseType::BufferWriter
      error_msg_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_msg, buffer, &error_msg_writer, &serialization_context);
  params->error_msg.Set(
      error_msg_writer.is_null() ? nullptr : error_msg_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::OpenNewTabCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("OpenNewTab");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder {
 public:
  static ServiceWorkerHost::OpenPaymentHandlerWindowCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder> proxy(
        new ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder() {
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
  ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder(
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
        << "ServiceWorkerHost::OpenPaymentHandlerWindowCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, ::blink::mojom::ServiceWorkerClientInfoPtr in_client, const base::Optional<std::string>& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder);
};

bool ServiceWorkerHost_OpenPaymentHandlerWindow_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::OpenPaymentHandlerWindowCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  ::blink::mojom::ServiceWorkerClientInfoPtr p_client{};
  base::Optional<std::string> p_error_msg{};
  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadClient(&p_client))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerHost::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_client), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder::Run(
    bool in_success, ::blink::mojom::ServiceWorkerClientInfoPtr in_client, const base::Optional<std::string>& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->client)::BaseType::BufferWriter
      client_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
      in_client, buffer, &client_writer, &serialization_context);
  params->client.Set(
      client_writer.is_null() ? nullptr : client_writer.data());
  typename decltype(params->error_msg)::BaseType::BufferWriter
      error_msg_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_msg, buffer, &error_msg_writer, &serialization_context);
  params->error_msg.Set(
      error_msg_writer.is_null() ? nullptr : error_msg_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::OpenPaymentHandlerWindowCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("OpenPaymentHandlerWindow");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_FocusClient_ProxyToResponder {
 public:
  static ServiceWorkerHost::FocusClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_FocusClient_ProxyToResponder> proxy(
        new ServiceWorkerHost_FocusClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_FocusClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_FocusClient_ProxyToResponder() {
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
  ServiceWorkerHost_FocusClient_ProxyToResponder(
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
        << "ServiceWorkerHost::FocusClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerClientInfoPtr in_client);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_FocusClient_ProxyToResponder);
};

bool ServiceWorkerHost_FocusClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::FocusClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_FocusClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_FocusClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerClientInfoPtr p_client{};
  ServiceWorkerHost_FocusClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadClient(&p_client))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerHost::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_client));
  return true;
}

void ServiceWorkerHost_FocusClient_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerClientInfoPtr in_client) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_FocusClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_FocusClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client)::BaseType::BufferWriter
      client_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
      in_client, buffer, &client_writer, &serialization_context);
  params->client.Set(
      client_writer.is_null() ? nullptr : client_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::FocusClientCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("FocusClient");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_NavigateClient_ProxyToResponder {
 public:
  static ServiceWorkerHost::NavigateClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_NavigateClient_ProxyToResponder> proxy(
        new ServiceWorkerHost_NavigateClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_NavigateClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_NavigateClient_ProxyToResponder() {
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
  ServiceWorkerHost_NavigateClient_ProxyToResponder(
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
        << "ServiceWorkerHost::NavigateClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, ::blink::mojom::ServiceWorkerClientInfoPtr in_client, const base::Optional<std::string>& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_NavigateClient_ProxyToResponder);
};

bool ServiceWorkerHost_NavigateClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::NavigateClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  ::blink::mojom::ServiceWorkerClientInfoPtr p_client{};
  base::Optional<std::string> p_error_msg{};
  ServiceWorkerHost_NavigateClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadClient(&p_client))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerHost::Name_, 8, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_client), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerHost_NavigateClient_ProxyToResponder::Run(
    bool in_success, ::blink::mojom::ServiceWorkerClientInfoPtr in_client, const base::Optional<std::string>& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_NavigateClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->client)::BaseType::BufferWriter
      client_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
      in_client, buffer, &client_writer, &serialization_context);
  params->client.Set(
      client_writer.is_null() ? nullptr : client_writer.data());
  typename decltype(params->error_msg)::BaseType::BufferWriter
      error_msg_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_msg, buffer, &error_msg_writer, &serialization_context);
  params->error_msg.Set(
      error_msg_writer.is_null() ? nullptr : error_msg_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::NavigateClientCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("NavigateClient");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_SkipWaiting_ProxyToResponder {
 public:
  static ServiceWorkerHost::SkipWaitingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_SkipWaiting_ProxyToResponder> proxy(
        new ServiceWorkerHost_SkipWaiting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_SkipWaiting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_SkipWaiting_ProxyToResponder() {
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
  ServiceWorkerHost_SkipWaiting_ProxyToResponder(
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
        << "ServiceWorkerHost::SkipWaitingCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_SkipWaiting_ProxyToResponder);
};

bool ServiceWorkerHost_SkipWaiting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::SkipWaitingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  ServiceWorkerHost_SkipWaiting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerHost::Name_, 9, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void ServiceWorkerHost_SkipWaiting_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_SkipWaiting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::SkipWaitingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("SkipWaiting");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_ClaimClients_ProxyToResponder {
 public:
  static ServiceWorkerHost::ClaimClientsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_ClaimClients_ProxyToResponder> proxy(
        new ServiceWorkerHost_ClaimClients_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_ClaimClients_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_ClaimClients_ProxyToResponder() {
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
  ServiceWorkerHost_ClaimClients_ProxyToResponder(
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
        << "ServiceWorkerHost::ClaimClientsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerErrorType in_error, const base::Optional<std::string>& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_ClaimClients_ProxyToResponder);
};

bool ServiceWorkerHost_ClaimClients_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::ClaimClientsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerErrorType p_error{};
  base::Optional<std::string> p_error_msg{};
  ServiceWorkerHost_ClaimClients_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerHost::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerHost_ClaimClients_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerErrorType in_error, const base::Optional<std::string>& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_ClaimClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerErrorType>(
      in_error, &params->error);
  typename decltype(params->error_msg)::BaseType::BufferWriter
      error_msg_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_msg, buffer, &error_msg_writer, &serialization_context);
  params->error_msg.Set(
      error_msg_writer.is_null() ? nullptr : error_msg_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::ClaimClientsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerHost::Name_);
  message.set_method_name("ClaimClients");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ServiceWorkerHostStubDispatch::Accept(
    ServiceWorkerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerHost_SetCachedMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::SetCachedMetadata",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerHost_SetCachedMetadata_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerHost_SetCachedMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      std::vector<uint8_t> p_data{};
      ServiceWorkerHost_SetCachedMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCachedMetadata(
std::move(p_url), 
std::move(p_data));
      return true;
    }
    case internal::kServiceWorkerHost_ClearCachedMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::ClearCachedMetadata",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      ServiceWorkerHost_ClearCachedMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearCachedMetadata(
std::move(p_url));
      return true;
    }
    case internal::kServiceWorkerHost_GetClients_Name: {
      break;
    }
    case internal::kServiceWorkerHost_GetClient_Name: {
      break;
    }
    case internal::kServiceWorkerHost_OpenNewTab_Name: {
      break;
    }
    case internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name: {
      break;
    }
    case internal::kServiceWorkerHost_PostMessageToClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::PostMessageToClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerHost_PostMessageToClient_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerHost_PostMessageToClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_client_uuid{};
      ::blink::TransferableMessage p_message{};
      ServiceWorkerHost_PostMessageToClient_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClientUuid(&p_client_uuid))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PostMessageToClient(
std::move(p_client_uuid), 
std::move(p_message));
      return true;
    }
    case internal::kServiceWorkerHost_FocusClient_Name: {
      break;
    }
    case internal::kServiceWorkerHost_NavigateClient_Name: {
      break;
    }
    case internal::kServiceWorkerHost_SkipWaiting_Name: {
      break;
    }
    case internal::kServiceWorkerHost_ClaimClients_Name: {
      break;
    }
  }
  return false;
}

// static
bool ServiceWorkerHostStubDispatch::AcceptWithResponder(
    ServiceWorkerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerHost_SetCachedMetadata_Name: {
      break;
    }
    case internal::kServiceWorkerHost_ClearCachedMetadata_Name: {
      break;
    }
    case internal::kServiceWorkerHost_GetClients_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::GetClients",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_GetClients_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_GetClients_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::ServiceWorkerClientQueryOptionsPtr p_options{};
      ServiceWorkerHost_GetClients_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 2, false);
        return false;
      }
      ServiceWorkerHost::GetClientsCallback callback =
          ServiceWorkerHost_GetClients_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetClients(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_GetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::GetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_GetClient_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_GetClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_client_uuid{};
      ServiceWorkerHost_GetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClientUuid(&p_client_uuid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 3, false);
        return false;
      }
      ServiceWorkerHost::GetClientCallback callback =
          ServiceWorkerHost_GetClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetClient(
std::move(p_client_uuid), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_OpenNewTab_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::OpenNewTab",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_OpenNewTab_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_OpenNewTab_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      ServiceWorkerHost_OpenNewTab_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 4, false);
        return false;
      }
      ServiceWorkerHost::OpenNewTabCallback callback =
          ServiceWorkerHost_OpenNewTab_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenNewTab(
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::OpenPaymentHandlerWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      ServiceWorkerHost_OpenPaymentHandlerWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 5, false);
        return false;
      }
      ServiceWorkerHost::OpenPaymentHandlerWindowCallback callback =
          ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenPaymentHandlerWindow(
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_PostMessageToClient_Name: {
      break;
    }
    case internal::kServiceWorkerHost_FocusClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::FocusClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_FocusClient_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_FocusClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_client_uuid{};
      ServiceWorkerHost_FocusClient_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClientUuid(&p_client_uuid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 7, false);
        return false;
      }
      ServiceWorkerHost::FocusClientCallback callback =
          ServiceWorkerHost_FocusClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FocusClient(
std::move(p_client_uuid), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_NavigateClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::NavigateClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_NavigateClient_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_NavigateClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_client_uuid{};
      GURL p_url{};
      ServiceWorkerHost_NavigateClient_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClientUuid(&p_client_uuid))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 8, false);
        return false;
      }
      ServiceWorkerHost::NavigateClientCallback callback =
          ServiceWorkerHost_NavigateClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NavigateClient(
std::move(p_client_uuid), 
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_SkipWaiting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::SkipWaiting",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_SkipWaiting_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_SkipWaiting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerHost_SkipWaiting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 9, false);
        return false;
      }
      ServiceWorkerHost::SkipWaitingCallback callback =
          ServiceWorkerHost_SkipWaiting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SkipWaiting(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_ClaimClients_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerHost::ClaimClients",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_ClaimClients_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_ClaimClients_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerHost_ClaimClients_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerHost::Name_, 10, false);
        return false;
      }
      ServiceWorkerHost::ClaimClientsCallback callback =
          ServiceWorkerHost_ClaimClients_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClaimClients(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ServiceWorkerHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerHost RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerHost_SetCachedMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_SetCachedMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_ClearCachedMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_GetClients_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_GetClients_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_GetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_GetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_OpenNewTab_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_OpenNewTab_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_PostMessageToClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_PostMessageToClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_FocusClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_FocusClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_NavigateClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_NavigateClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_SkipWaiting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_SkipWaiting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_ClaimClients_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_ClaimClients_Params_Data>(
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

bool ServiceWorkerHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kServiceWorkerHost_GetClients_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_GetClients_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_GetClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_GetClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_OpenNewTab_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_FocusClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_FocusClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_NavigateClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_SkipWaiting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_ClaimClients_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data>(
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
const char ServiceWorker::Name_[] = "blink.mojom.ServiceWorker";

class ServiceWorker_DispatchInstallEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchInstallEvent_ForwardToCallback(
      ServiceWorker::DispatchInstallEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchInstallEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchInstallEvent_ForwardToCallback);
};

class ServiceWorker_DispatchActivateEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchActivateEvent_ForwardToCallback(
      ServiceWorker::DispatchActivateEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchActivateEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchActivateEvent_ForwardToCallback);
};

class ServiceWorker_DispatchBackgroundFetchAbortEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchBackgroundFetchAbortEvent_ForwardToCallback(
      ServiceWorker::DispatchBackgroundFetchAbortEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchBackgroundFetchAbortEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchBackgroundFetchAbortEvent_ForwardToCallback);
};

class ServiceWorker_DispatchBackgroundFetchClickEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchBackgroundFetchClickEvent_ForwardToCallback(
      ServiceWorker::DispatchBackgroundFetchClickEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchBackgroundFetchClickEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchBackgroundFetchClickEvent_ForwardToCallback);
};

class ServiceWorker_DispatchBackgroundFetchFailEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchBackgroundFetchFailEvent_ForwardToCallback(
      ServiceWorker::DispatchBackgroundFetchFailEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchBackgroundFetchFailEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchBackgroundFetchFailEvent_ForwardToCallback);
};

class ServiceWorker_DispatchBackgroundFetchSuccessEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchBackgroundFetchSuccessEvent_ForwardToCallback(
      ServiceWorker::DispatchBackgroundFetchSuccessEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchBackgroundFetchSuccessEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchBackgroundFetchSuccessEvent_ForwardToCallback);
};

class ServiceWorker_DispatchCookieChangeEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchCookieChangeEvent_ForwardToCallback(
      ServiceWorker::DispatchCookieChangeEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchCookieChangeEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchCookieChangeEvent_ForwardToCallback);
};

class ServiceWorker_DispatchFetchEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchFetchEvent_ForwardToCallback(
      ServiceWorker::DispatchFetchEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchFetchEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchFetchEvent_ForwardToCallback);
};

class ServiceWorker_DispatchNotificationClickEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchNotificationClickEvent_ForwardToCallback(
      ServiceWorker::DispatchNotificationClickEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchNotificationClickEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchNotificationClickEvent_ForwardToCallback);
};

class ServiceWorker_DispatchNotificationCloseEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchNotificationCloseEvent_ForwardToCallback(
      ServiceWorker::DispatchNotificationCloseEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchNotificationCloseEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchNotificationCloseEvent_ForwardToCallback);
};

class ServiceWorker_DispatchPushEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchPushEvent_ForwardToCallback(
      ServiceWorker::DispatchPushEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchPushEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchPushEvent_ForwardToCallback);
};

class ServiceWorker_DispatchSyncEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchSyncEvent_ForwardToCallback(
      ServiceWorker::DispatchSyncEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchSyncEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchSyncEvent_ForwardToCallback);
};

class ServiceWorker_DispatchAbortPaymentEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchAbortPaymentEvent_ForwardToCallback(
      ServiceWorker::DispatchAbortPaymentEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchAbortPaymentEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchAbortPaymentEvent_ForwardToCallback);
};

class ServiceWorker_DispatchCanMakePaymentEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchCanMakePaymentEvent_ForwardToCallback(
      ServiceWorker::DispatchCanMakePaymentEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchCanMakePaymentEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchCanMakePaymentEvent_ForwardToCallback);
};

class ServiceWorker_DispatchPaymentRequestEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchPaymentRequestEvent_ForwardToCallback(
      ServiceWorker::DispatchPaymentRequestEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchPaymentRequestEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchPaymentRequestEvent_ForwardToCallback);
};

class ServiceWorker_DispatchExtendableMessageEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchExtendableMessageEvent_ForwardToCallback(
      ServiceWorker::DispatchExtendableMessageEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchExtendableMessageEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchExtendableMessageEvent_ForwardToCallback);
};

class ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ForwardToCallback(
      ServiceWorker::DispatchExtendableMessageEventWithCustomTimeoutCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::DispatchExtendableMessageEventWithCustomTimeoutCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ForwardToCallback);
};

class ServiceWorker_Ping_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorker_Ping_ForwardToCallback(
      ServiceWorker::PingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorker::PingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_Ping_ForwardToCallback);
};

ServiceWorkerProxy::ServiceWorkerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerProxy::InitializeGlobalScope(
    ServiceWorkerHostAssociatedPtrInfo in_service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr in_registration_info, FetchHandlerExistence in_fetch_handler_existence) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::InitializeGlobalScope");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_InitializeGlobalScope_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_InitializeGlobalScope_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerHostAssociatedPtrInfoDataView>(
      in_service_worker_host, &params->service_worker_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->service_worker_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid service_worker_host in ServiceWorker.InitializeGlobalScope request");
  typename decltype(params->registration_info)::BaseType::BufferWriter
      registration_info_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
      in_registration_info, buffer, &registration_info_writer, &serialization_context);
  params->registration_info.Set(
      registration_info_writer.is_null() ? nullptr : registration_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registration_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registration_info in ServiceWorker.InitializeGlobalScope request");
  mojo::internal::Serialize<::blink::mojom::FetchHandlerExistence>(
      in_fetch_handler_existence, &params->fetch_handler_existence);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("InitializeGlobalScope");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerProxy::DispatchInstallEvent(
    DispatchInstallEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchInstallEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchInstallEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchInstallEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchInstallEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchInstallEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchActivateEvent(
    DispatchActivateEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchActivateEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchActivateEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchActivateEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchActivateEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchActivateEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchBackgroundFetchAbortEvent(
    ::blink::mojom::BackgroundFetchRegistrationPtr in_registration, DispatchBackgroundFetchAbortEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchAbortEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchBackgroundFetchAbortEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->registration)::BaseType::BufferWriter
      registration_writer;
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
      in_registration, buffer, &registration_writer, &serialization_context);
  params->registration.Set(
      registration_writer.is_null() ? nullptr : registration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registration in ServiceWorker.DispatchBackgroundFetchAbortEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchBackgroundFetchAbortEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchBackgroundFetchAbortEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchBackgroundFetchClickEvent(
    ::blink::mojom::BackgroundFetchRegistrationPtr in_registration, DispatchBackgroundFetchClickEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchClickEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchBackgroundFetchClickEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->registration)::BaseType::BufferWriter
      registration_writer;
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
      in_registration, buffer, &registration_writer, &serialization_context);
  params->registration.Set(
      registration_writer.is_null() ? nullptr : registration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registration in ServiceWorker.DispatchBackgroundFetchClickEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchBackgroundFetchClickEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchBackgroundFetchClickEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchBackgroundFetchFailEvent(
    ::blink::mojom::BackgroundFetchRegistrationPtr in_registration, DispatchBackgroundFetchFailEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchFailEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchBackgroundFetchFailEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->registration)::BaseType::BufferWriter
      registration_writer;
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
      in_registration, buffer, &registration_writer, &serialization_context);
  params->registration.Set(
      registration_writer.is_null() ? nullptr : registration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registration in ServiceWorker.DispatchBackgroundFetchFailEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchBackgroundFetchFailEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchBackgroundFetchFailEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchBackgroundFetchSuccessEvent(
    ::blink::mojom::BackgroundFetchRegistrationPtr in_registration, DispatchBackgroundFetchSuccessEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchSuccessEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchBackgroundFetchSuccessEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->registration)::BaseType::BufferWriter
      registration_writer;
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
      in_registration, buffer, &registration_writer, &serialization_context);
  params->registration.Set(
      registration_writer.is_null() ? nullptr : registration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registration in ServiceWorker.DispatchBackgroundFetchSuccessEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchBackgroundFetchSuccessEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchBackgroundFetchSuccessEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchCookieChangeEvent(
    const net::CanonicalCookie& in_cookie, ::network::mojom::CookieChangeCause in_cause, DispatchCookieChangeEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchCookieChangeEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchCookieChangeEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchCookieChangeEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookie)::BaseType::BufferWriter
      cookie_writer;
  mojo::internal::Serialize<::network::mojom::CanonicalCookieDataView>(
      in_cookie, buffer, &cookie_writer, &serialization_context);
  params->cookie.Set(
      cookie_writer.is_null() ? nullptr : cookie_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in ServiceWorker.DispatchCookieChangeEvent request");
  mojo::internal::Serialize<::network::mojom::CookieChangeCause>(
      in_cause, &params->cause);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchCookieChangeEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchCookieChangeEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchFetchEvent(
    ::blink::mojom::DispatchFetchEventParamsPtr in_params, ::blink::mojom::ServiceWorkerFetchResponseCallbackPtr in_response_callback, DispatchFetchEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchFetchEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchFetchEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchFetchEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::blink::mojom::DispatchFetchEventParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in ServiceWorker.DispatchFetchEvent request");
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerFetchResponseCallbackPtrDataView>(
      in_response_callback, &params->response_callback, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->response_callback),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid response_callback in ServiceWorker.DispatchFetchEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchFetchEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchFetchEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchNotificationClickEvent(
    const std::string& in_notification_id, const blink::PlatformNotificationData& in_notification_data, int32_t in_action_index, const base::Optional<base::string16>& in_reply, DispatchNotificationClickEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchNotificationClickEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchNotificationClickEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchNotificationClickEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->notification_id)::BaseType::BufferWriter
      notification_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_notification_id, buffer, &notification_id_writer, &serialization_context);
  params->notification_id.Set(
      notification_id_writer.is_null() ? nullptr : notification_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_id in ServiceWorker.DispatchNotificationClickEvent request");
  typename decltype(params->notification_data)::BaseType::BufferWriter
      notification_data_writer;
  mojo::internal::Serialize<::blink::mojom::NotificationDataDataView>(
      in_notification_data, buffer, &notification_data_writer, &serialization_context);
  params->notification_data.Set(
      notification_data_writer.is_null() ? nullptr : notification_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_data in ServiceWorker.DispatchNotificationClickEvent request");
  params->action_index = in_action_index;
  typename decltype(params->reply)::BaseType::BufferWriter
      reply_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_reply, buffer, &reply_writer, &serialization_context);
  params->reply.Set(
      reply_writer.is_null() ? nullptr : reply_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchNotificationClickEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchNotificationClickEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchNotificationCloseEvent(
    const std::string& in_notification_id, const blink::PlatformNotificationData& in_notification_data, DispatchNotificationCloseEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchNotificationCloseEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchNotificationCloseEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchNotificationCloseEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->notification_id)::BaseType::BufferWriter
      notification_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_notification_id, buffer, &notification_id_writer, &serialization_context);
  params->notification_id.Set(
      notification_id_writer.is_null() ? nullptr : notification_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_id in ServiceWorker.DispatchNotificationCloseEvent request");
  typename decltype(params->notification_data)::BaseType::BufferWriter
      notification_data_writer;
  mojo::internal::Serialize<::blink::mojom::NotificationDataDataView>(
      in_notification_data, buffer, &notification_data_writer, &serialization_context);
  params->notification_data.Set(
      notification_data_writer.is_null() ? nullptr : notification_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_data in ServiceWorker.DispatchNotificationCloseEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchNotificationCloseEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchNotificationCloseEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchPushEvent(
    const base::Optional<std::string>& in_payload, DispatchPushEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchPushEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchPushEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchPushEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->payload)::BaseType::BufferWriter
      payload_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_payload, buffer, &payload_writer, &serialization_context);
  params->payload.Set(
      payload_writer.is_null() ? nullptr : payload_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchPushEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchPushEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchSyncEvent(
    const std::string& in_id, bool in_last_chance, base::TimeDelta in_timeout, DispatchSyncEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchSyncEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchSyncEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchSyncEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ServiceWorker.DispatchSyncEvent request");
  params->last_chance = in_last_chance;
  typename decltype(params->timeout)::BaseType::BufferWriter
      timeout_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_timeout, buffer, &timeout_writer, &serialization_context);
  params->timeout.Set(
      timeout_writer.is_null() ? nullptr : timeout_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timeout.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timeout in ServiceWorker.DispatchSyncEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchSyncEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchSyncEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchAbortPaymentEvent(
    ::payments::mojom::PaymentHandlerResponseCallbackPtr in_result_of_abort_payment, DispatchAbortPaymentEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchAbortPaymentEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchAbortPaymentEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchAbortPaymentEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
      in_result_of_abort_payment, &params->result_of_abort_payment, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->result_of_abort_payment),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid result_of_abort_payment in ServiceWorker.DispatchAbortPaymentEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchAbortPaymentEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchAbortPaymentEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchCanMakePaymentEvent(
    ::payments::mojom::CanMakePaymentEventDataPtr in_event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr in_result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchCanMakePaymentEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchCanMakePaymentEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchCanMakePaymentEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event_data)::BaseType::BufferWriter
      event_data_writer;
  mojo::internal::Serialize<::payments::mojom::CanMakePaymentEventDataDataView>(
      in_event_data, buffer, &event_data_writer, &serialization_context);
  params->event_data.Set(
      event_data_writer.is_null() ? nullptr : event_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event_data in ServiceWorker.DispatchCanMakePaymentEvent request");
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
      in_result_of_can_make_payment, &params->result_of_can_make_payment, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->result_of_can_make_payment),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid result_of_can_make_payment in ServiceWorker.DispatchCanMakePaymentEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchCanMakePaymentEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchCanMakePaymentEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchPaymentRequestEvent(
    ::payments::mojom::PaymentRequestEventDataPtr in_request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr in_response_callback, DispatchPaymentRequestEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchPaymentRequestEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchPaymentRequestEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchPaymentRequestEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_data)::BaseType::BufferWriter
      request_data_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentRequestEventDataDataView>(
      in_request_data, buffer, &request_data_writer, &serialization_context);
  params->request_data.Set(
      request_data_writer.is_null() ? nullptr : request_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_data in ServiceWorker.DispatchPaymentRequestEvent request");
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
      in_response_callback, &params->response_callback, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->response_callback),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid response_callback in ServiceWorker.DispatchPaymentRequestEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchPaymentRequestEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchPaymentRequestEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchExtendableMessageEvent(
    ExtendableMessageEventPtr in_event, DispatchExtendableMessageEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchExtendableMessageEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchExtendableMessageEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchExtendableMessageEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::blink::mojom::ExtendableMessageEventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in ServiceWorker.DispatchExtendableMessageEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchExtendableMessageEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchExtendableMessageEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::DispatchExtendableMessageEventWithCustomTimeout(
    ExtendableMessageEventPtr in_event, base::TimeDelta in_timeout, DispatchExtendableMessageEventWithCustomTimeoutCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchExtendableMessageEventWithCustomTimeout");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::blink::mojom::ExtendableMessageEventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in ServiceWorker.DispatchExtendableMessageEventWithCustomTimeout request");
  typename decltype(params->timeout)::BaseType::BufferWriter
      timeout_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_timeout, buffer, &timeout_writer, &serialization_context);
  params->timeout.Set(
      timeout_writer.is_null() ? nullptr : timeout_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timeout.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timeout in ServiceWorker.DispatchExtendableMessageEventWithCustomTimeout request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchExtendableMessageEventWithCustomTimeout");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::Ping(
    PingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::Ping");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_Ping_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("Ping");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorker_Ping_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerProxy::SetIdleTimerDelayToZero(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::SetIdleTimerDelayToZero");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_SetIdleTimerDelayToZero_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_SetIdleTimerDelayToZero_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("SetIdleTimerDelayToZero");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ServiceWorker_DispatchInstallEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchInstallEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchInstallEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchInstallEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchInstallEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchInstallEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchInstallEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchInstallEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, bool in_has_fetch_handler);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchInstallEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchInstallEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchInstallEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchInstallEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchInstallEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  bool p_has_fetch_handler{};
  ServiceWorker_DispatchInstallEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  p_has_fetch_handler = input_data_view.has_fetch_handler();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_has_fetch_handler));
  return true;
}

void ServiceWorker_DispatchInstallEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, bool in_has_fetch_handler) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchInstallEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchInstallEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  params->has_fetch_handler = in_has_fetch_handler;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchInstallEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchInstallEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchActivateEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchActivateEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchActivateEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchActivateEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchActivateEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchActivateEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchActivateEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchActivateEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchActivateEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchActivateEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchActivateEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchActivateEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchActivateEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchActivateEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchActivateEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchActivateEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchActivateEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchActivateEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchActivateEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchBackgroundFetchAbortEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchBackgroundFetchAbortEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchBackgroundFetchAbortEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchBackgroundFetchAbortEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchBackgroundFetchAbortEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchBackgroundFetchAbortEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchBackgroundFetchAbortEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchBackgroundFetchAbortEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchBackgroundFetchAbortEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchBackgroundFetchAbortEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchAbortEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchBackgroundFetchAbortEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchBackgroundFetchAbortEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchAbortEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchBackgroundFetchAbortEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchBackgroundFetchClickEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchBackgroundFetchClickEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchBackgroundFetchClickEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchBackgroundFetchClickEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchBackgroundFetchClickEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchBackgroundFetchClickEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchBackgroundFetchClickEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchBackgroundFetchClickEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchBackgroundFetchClickEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchBackgroundFetchClickEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchClickEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchBackgroundFetchClickEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchBackgroundFetchClickEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchClickEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchBackgroundFetchClickEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchBackgroundFetchFailEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchBackgroundFetchFailEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchBackgroundFetchFailEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchBackgroundFetchFailEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchBackgroundFetchFailEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchBackgroundFetchFailEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchBackgroundFetchFailEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchBackgroundFetchFailEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchBackgroundFetchFailEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchBackgroundFetchFailEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchFailEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchBackgroundFetchFailEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchBackgroundFetchFailEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchFailEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchBackgroundFetchFailEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchBackgroundFetchSuccessEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchBackgroundFetchSuccessEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchBackgroundFetchSuccessEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchBackgroundFetchSuccessEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchBackgroundFetchSuccessEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchBackgroundFetchSuccessEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchBackgroundFetchSuccessEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchBackgroundFetchSuccessEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchBackgroundFetchSuccessEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchBackgroundFetchSuccessEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchSuccessEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchBackgroundFetchSuccessEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchBackgroundFetchSuccessEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchSuccessEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchBackgroundFetchSuccessEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchCookieChangeEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchCookieChangeEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchCookieChangeEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchCookieChangeEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchCookieChangeEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchCookieChangeEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchCookieChangeEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchCookieChangeEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchCookieChangeEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchCookieChangeEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchCookieChangeEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchCookieChangeEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchCookieChangeEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchCookieChangeEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchCookieChangeEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchCookieChangeEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchFetchEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchFetchEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchFetchEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchFetchEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchFetchEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchFetchEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchFetchEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchFetchEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchFetchEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchFetchEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchFetchEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchFetchEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchFetchEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchFetchEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 8, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchFetchEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchFetchEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchFetchEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchFetchEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchFetchEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchNotificationClickEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchNotificationClickEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchNotificationClickEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchNotificationClickEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchNotificationClickEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchNotificationClickEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchNotificationClickEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchNotificationClickEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchNotificationClickEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchNotificationClickEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchNotificationClickEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchNotificationClickEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 9, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchNotificationClickEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchNotificationClickEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchNotificationClickEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchNotificationClickEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchNotificationCloseEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchNotificationCloseEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchNotificationCloseEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchNotificationCloseEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchNotificationCloseEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchNotificationCloseEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchNotificationCloseEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchNotificationCloseEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchNotificationCloseEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchNotificationCloseEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchNotificationCloseEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchNotificationCloseEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchNotificationCloseEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchNotificationCloseEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchNotificationCloseEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchNotificationCloseEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchPushEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchPushEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchPushEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchPushEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchPushEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchPushEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchPushEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchPushEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchPushEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchPushEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchPushEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchPushEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchPushEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchPushEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 11, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchPushEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchPushEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchPushEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchPushEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchPushEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchSyncEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchSyncEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchSyncEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchSyncEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchSyncEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchSyncEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchSyncEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchSyncEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchSyncEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchSyncEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchSyncEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchSyncEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchSyncEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchSyncEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 12, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchSyncEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchSyncEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchSyncEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchSyncEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchSyncEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchAbortPaymentEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchAbortPaymentEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchAbortPaymentEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchAbortPaymentEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchAbortPaymentEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchAbortPaymentEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchAbortPaymentEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchAbortPaymentEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchAbortPaymentEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchAbortPaymentEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchAbortPaymentEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchAbortPaymentEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 13, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchAbortPaymentEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchAbortPaymentEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchAbortPaymentEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchAbortPaymentEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchCanMakePaymentEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchCanMakePaymentEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchCanMakePaymentEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchCanMakePaymentEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchCanMakePaymentEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchCanMakePaymentEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchCanMakePaymentEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchCanMakePaymentEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchCanMakePaymentEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchCanMakePaymentEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchCanMakePaymentEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchCanMakePaymentEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 14, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchCanMakePaymentEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchCanMakePaymentEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchCanMakePaymentEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchCanMakePaymentEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchPaymentRequestEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchPaymentRequestEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchPaymentRequestEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchPaymentRequestEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchPaymentRequestEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchPaymentRequestEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchPaymentRequestEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchPaymentRequestEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchPaymentRequestEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchPaymentRequestEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchPaymentRequestEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchPaymentRequestEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 15, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchPaymentRequestEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchPaymentRequestEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchPaymentRequestEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchPaymentRequestEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchExtendableMessageEvent_ProxyToResponder {
 public:
  static ServiceWorker::DispatchExtendableMessageEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchExtendableMessageEvent_ProxyToResponder> proxy(
        new ServiceWorker_DispatchExtendableMessageEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchExtendableMessageEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchExtendableMessageEvent_ProxyToResponder() {
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
  ServiceWorker_DispatchExtendableMessageEvent_ProxyToResponder(
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
        << "ServiceWorker::DispatchExtendableMessageEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchExtendableMessageEvent_ProxyToResponder);
};

bool ServiceWorker_DispatchExtendableMessageEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchExtendableMessageEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchExtendableMessageEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 16, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchExtendableMessageEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchExtendableMessageEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchExtendableMessageEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchExtendableMessageEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ProxyToResponder {
 public:
  static ServiceWorker::DispatchExtendableMessageEventWithCustomTimeoutCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ProxyToResponder> proxy(
        new ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ProxyToResponder() {
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
  ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ProxyToResponder(
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
        << "ServiceWorker::DispatchExtendableMessageEventWithCustomTimeoutCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ProxyToResponder);
};

bool ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchExtendableMessageEventWithCustomTimeoutCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 17, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchExtendableMessageEventWithCustomTimeoutCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("DispatchExtendableMessageEventWithCustomTimeout");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorker_Ping_ProxyToResponder {
 public:
  static ServiceWorker::PingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorker_Ping_ProxyToResponder> proxy(
        new ServiceWorker_Ping_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorker_Ping_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorker_Ping_ProxyToResponder() {
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
  ServiceWorker_Ping_ProxyToResponder(
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
        << "ServiceWorker::PingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorker_Ping_ProxyToResponder);
};

bool ServiceWorker_Ping_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorker::PingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorker_Ping_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorker_Ping_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ServiceWorker_Ping_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorker::Name_, 18, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void ServiceWorker_Ping_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorker_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorker_Ping_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::PingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorker::Name_);
  message.set_method_name("Ping");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ServiceWorkerStubDispatch::Accept(
    ServiceWorker* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorker_InitializeGlobalScope_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::InitializeGlobalScope",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorker_InitializeGlobalScope_Params_Data* params =
          reinterpret_cast<internal::ServiceWorker_InitializeGlobalScope_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerHostAssociatedPtrInfo p_service_worker_host{};
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr p_registration_info{};
      FetchHandlerExistence p_fetch_handler_existence{};
      ServiceWorker_InitializeGlobalScope_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_host =
          input_data_view.TakeServiceWorkerHost<decltype(p_service_worker_host)>();
      if (!input_data_view.ReadRegistrationInfo(&p_registration_info))
        success = false;
      if (!input_data_view.ReadFetchHandlerExistence(&p_fetch_handler_existence))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InitializeGlobalScope(
std::move(p_service_worker_host), 
std::move(p_registration_info), 
std::move(p_fetch_handler_existence));
      return true;
    }
    case internal::kServiceWorker_DispatchInstallEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchActivateEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchAbortEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchClickEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchFailEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchSuccessEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchCookieChangeEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchFetchEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchNotificationClickEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchNotificationCloseEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchPushEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchSyncEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchAbortPaymentEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchCanMakePaymentEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchPaymentRequestEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchExtendableMessageEvent_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Name: {
      break;
    }
    case internal::kServiceWorker_Ping_Name: {
      break;
    }
    case internal::kServiceWorker_SetIdleTimerDelayToZero_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::SetIdleTimerDelayToZero",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorker_SetIdleTimerDelayToZero_Params_Data* params =
          reinterpret_cast<internal::ServiceWorker_SetIdleTimerDelayToZero_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorker_SetIdleTimerDelayToZero_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 19, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetIdleTimerDelayToZero();
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerStubDispatch::AcceptWithResponder(
    ServiceWorker* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorker_InitializeGlobalScope_Name: {
      break;
    }
    case internal::kServiceWorker_DispatchInstallEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchInstallEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchInstallEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchInstallEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorker_DispatchInstallEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 1, false);
        return false;
      }
      ServiceWorker::DispatchInstallEventCallback callback =
          ServiceWorker_DispatchInstallEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchInstallEvent(std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchActivateEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchActivateEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchActivateEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchActivateEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorker_DispatchActivateEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 2, false);
        return false;
      }
      ServiceWorker::DispatchActivateEventCallback callback =
          ServiceWorker_DispatchActivateEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchActivateEvent(std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchAbortEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchAbortEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::BackgroundFetchRegistrationPtr p_registration{};
      ServiceWorker_DispatchBackgroundFetchAbortEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRegistration(&p_registration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 3, false);
        return false;
      }
      ServiceWorker::DispatchBackgroundFetchAbortEventCallback callback =
          ServiceWorker_DispatchBackgroundFetchAbortEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchBackgroundFetchAbortEvent(
std::move(p_registration), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchClickEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchClickEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::BackgroundFetchRegistrationPtr p_registration{};
      ServiceWorker_DispatchBackgroundFetchClickEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRegistration(&p_registration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 4, false);
        return false;
      }
      ServiceWorker::DispatchBackgroundFetchClickEventCallback callback =
          ServiceWorker_DispatchBackgroundFetchClickEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchBackgroundFetchClickEvent(
std::move(p_registration), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchFailEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchFailEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::BackgroundFetchRegistrationPtr p_registration{};
      ServiceWorker_DispatchBackgroundFetchFailEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRegistration(&p_registration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 5, false);
        return false;
      }
      ServiceWorker::DispatchBackgroundFetchFailEventCallback callback =
          ServiceWorker_DispatchBackgroundFetchFailEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchBackgroundFetchFailEvent(
std::move(p_registration), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchSuccessEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchBackgroundFetchSuccessEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::BackgroundFetchRegistrationPtr p_registration{};
      ServiceWorker_DispatchBackgroundFetchSuccessEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRegistration(&p_registration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 6, false);
        return false;
      }
      ServiceWorker::DispatchBackgroundFetchSuccessEventCallback callback =
          ServiceWorker_DispatchBackgroundFetchSuccessEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchBackgroundFetchSuccessEvent(
std::move(p_registration), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchCookieChangeEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchCookieChangeEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchCookieChangeEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchCookieChangeEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::CanonicalCookie p_cookie{};
      ::network::mojom::CookieChangeCause p_cause{};
      ServiceWorker_DispatchCookieChangeEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      if (!input_data_view.ReadCause(&p_cause))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 7, false);
        return false;
      }
      ServiceWorker::DispatchCookieChangeEventCallback callback =
          ServiceWorker_DispatchCookieChangeEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchCookieChangeEvent(
std::move(p_cookie), 
std::move(p_cause), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchFetchEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchFetchEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchFetchEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchFetchEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::DispatchFetchEventParamsPtr p_params{};
      ::blink::mojom::ServiceWorkerFetchResponseCallbackPtr p_response_callback{};
      ServiceWorker_DispatchFetchEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_response_callback =
          input_data_view.TakeResponseCallback<decltype(p_response_callback)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 8, false);
        return false;
      }
      ServiceWorker::DispatchFetchEventCallback callback =
          ServiceWorker_DispatchFetchEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchFetchEvent(
std::move(p_params), 
std::move(p_response_callback), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchNotificationClickEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchNotificationClickEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchNotificationClickEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchNotificationClickEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_notification_id{};
      blink::PlatformNotificationData p_notification_data{};
      int32_t p_action_index{};
      base::Optional<base::string16> p_reply{};
      ServiceWorker_DispatchNotificationClickEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNotificationId(&p_notification_id))
        success = false;
      if (!input_data_view.ReadNotificationData(&p_notification_data))
        success = false;
      p_action_index = input_data_view.action_index();
      if (!input_data_view.ReadReply(&p_reply))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 9, false);
        return false;
      }
      ServiceWorker::DispatchNotificationClickEventCallback callback =
          ServiceWorker_DispatchNotificationClickEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchNotificationClickEvent(
std::move(p_notification_id), 
std::move(p_notification_data), 
std::move(p_action_index), 
std::move(p_reply), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchNotificationCloseEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchNotificationCloseEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchNotificationCloseEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchNotificationCloseEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_notification_id{};
      blink::PlatformNotificationData p_notification_data{};
      ServiceWorker_DispatchNotificationCloseEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNotificationId(&p_notification_id))
        success = false;
      if (!input_data_view.ReadNotificationData(&p_notification_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 10, false);
        return false;
      }
      ServiceWorker::DispatchNotificationCloseEventCallback callback =
          ServiceWorker_DispatchNotificationCloseEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchNotificationCloseEvent(
std::move(p_notification_id), 
std::move(p_notification_data), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchPushEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchPushEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchPushEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchPushEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<std::string> p_payload{};
      ServiceWorker_DispatchPushEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPayload(&p_payload))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 11, false);
        return false;
      }
      ServiceWorker::DispatchPushEventCallback callback =
          ServiceWorker_DispatchPushEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchPushEvent(
std::move(p_payload), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchSyncEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchSyncEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchSyncEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchSyncEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_id{};
      bool p_last_chance{};
      base::TimeDelta p_timeout{};
      ServiceWorker_DispatchSyncEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      p_last_chance = input_data_view.last_chance();
      if (!input_data_view.ReadTimeout(&p_timeout))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 12, false);
        return false;
      }
      ServiceWorker::DispatchSyncEventCallback callback =
          ServiceWorker_DispatchSyncEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchSyncEvent(
std::move(p_id), 
std::move(p_last_chance), 
std::move(p_timeout), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchAbortPaymentEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchAbortPaymentEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchAbortPaymentEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchAbortPaymentEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::payments::mojom::PaymentHandlerResponseCallbackPtr p_result_of_abort_payment{};
      ServiceWorker_DispatchAbortPaymentEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_result_of_abort_payment =
          input_data_view.TakeResultOfAbortPayment<decltype(p_result_of_abort_payment)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 13, false);
        return false;
      }
      ServiceWorker::DispatchAbortPaymentEventCallback callback =
          ServiceWorker_DispatchAbortPaymentEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchAbortPaymentEvent(
std::move(p_result_of_abort_payment), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchCanMakePaymentEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchCanMakePaymentEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchCanMakePaymentEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchCanMakePaymentEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::payments::mojom::CanMakePaymentEventDataPtr p_event_data{};
      ::payments::mojom::PaymentHandlerResponseCallbackPtr p_result_of_can_make_payment{};
      ServiceWorker_DispatchCanMakePaymentEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEventData(&p_event_data))
        success = false;
      p_result_of_can_make_payment =
          input_data_view.TakeResultOfCanMakePayment<decltype(p_result_of_can_make_payment)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 14, false);
        return false;
      }
      ServiceWorker::DispatchCanMakePaymentEventCallback callback =
          ServiceWorker_DispatchCanMakePaymentEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchCanMakePaymentEvent(
std::move(p_event_data), 
std::move(p_result_of_can_make_payment), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchPaymentRequestEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchPaymentRequestEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchPaymentRequestEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchPaymentRequestEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::payments::mojom::PaymentRequestEventDataPtr p_request_data{};
      ::payments::mojom::PaymentHandlerResponseCallbackPtr p_response_callback{};
      ServiceWorker_DispatchPaymentRequestEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequestData(&p_request_data))
        success = false;
      p_response_callback =
          input_data_view.TakeResponseCallback<decltype(p_response_callback)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 15, false);
        return false;
      }
      ServiceWorker::DispatchPaymentRequestEventCallback callback =
          ServiceWorker_DispatchPaymentRequestEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchPaymentRequestEvent(
std::move(p_request_data), 
std::move(p_response_callback), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchExtendableMessageEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchExtendableMessageEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchExtendableMessageEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchExtendableMessageEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ExtendableMessageEventPtr p_event{};
      ServiceWorker_DispatchExtendableMessageEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 16, false);
        return false;
      }
      ServiceWorker::DispatchExtendableMessageEventCallback callback =
          ServiceWorker_DispatchExtendableMessageEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchExtendableMessageEvent(
std::move(p_event), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::DispatchExtendableMessageEventWithCustomTimeout",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ExtendableMessageEventPtr p_event{};
      base::TimeDelta p_timeout{};
      ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!input_data_view.ReadTimeout(&p_timeout))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 17, false);
        return false;
      }
      ServiceWorker::DispatchExtendableMessageEventWithCustomTimeoutCallback callback =
          ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchExtendableMessageEventWithCustomTimeout(
std::move(p_event), 
std::move(p_timeout), std::move(callback));
      return true;
    }
    case internal::kServiceWorker_Ping_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorker::Ping",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorker_Ping_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorker_Ping_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorker_Ping_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorker::Name_, 18, false);
        return false;
      }
      ServiceWorker::PingCallback callback =
          ServiceWorker_Ping_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Ping(std::move(callback));
      return true;
    }
    case internal::kServiceWorker_SetIdleTimerDelayToZero_Name: {
      break;
    }
  }
  return false;
}

bool ServiceWorkerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorker RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorker_InitializeGlobalScope_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_InitializeGlobalScope_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchInstallEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchInstallEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchActivateEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchActivateEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchAbortEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchClickEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchFailEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchSuccessEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchCookieChangeEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchCookieChangeEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchFetchEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchFetchEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchNotificationClickEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchNotificationClickEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchNotificationCloseEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchNotificationCloseEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchPushEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchPushEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchSyncEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchSyncEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchAbortPaymentEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchAbortPaymentEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchCanMakePaymentEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchCanMakePaymentEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchPaymentRequestEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchPaymentRequestEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchExtendableMessageEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchExtendableMessageEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_Ping_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_Ping_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_SetIdleTimerDelayToZero_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_SetIdleTimerDelayToZero_Params_Data>(
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

bool ServiceWorkerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorker ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kServiceWorker_DispatchInstallEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchInstallEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchActivateEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchActivateEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchAbortEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchClickEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchFailEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchBackgroundFetchSuccessEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchCookieChangeEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchFetchEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchFetchEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchNotificationClickEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchNotificationCloseEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchPushEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchPushEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchSyncEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchSyncEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchAbortPaymentEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchCanMakePaymentEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchPaymentRequestEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchExtendableMessageEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorker_Ping_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorker_Ping_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::ExtendableMessageEvent::DataView, ::blink::mojom::ExtendableMessageEventPtr>::Read(
    ::blink::mojom::ExtendableMessageEvent::DataView input,
    ::blink::mojom::ExtendableMessageEventPtr* output) {
  bool success = true;
  ::blink::mojom::ExtendableMessageEventPtr result(::blink::mojom::ExtendableMessageEvent::New());
  
      if (!input.ReadMessage(&result->message))
        success = false;
      if (!input.ReadSourceOrigin(&result->source_origin))
        success = false;
      if (!input.ReadSourceInfoForClient(&result->source_info_for_client))
        success = false;
      if (!input.ReadSourceInfoForServiceWorker(&result->source_info_for_service_worker))
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