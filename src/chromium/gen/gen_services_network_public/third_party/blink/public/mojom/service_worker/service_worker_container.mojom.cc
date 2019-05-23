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

#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/public/common/messaging/cloneable_message_struct_traits.h"
#include "third_party/blink/public/common/messaging/transferable_message_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char ServiceWorkerContainerHost::Name_[] = "blink.mojom.ServiceWorkerContainerHost";

class ServiceWorkerContainerHost_Register_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerContainerHost_Register_ForwardToCallback(
      ServiceWorkerContainerHost::RegisterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerContainerHost::RegisterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHost_Register_ForwardToCallback);
};

class ServiceWorkerContainerHost_GetRegistration_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerContainerHost_GetRegistration_ForwardToCallback(
      ServiceWorkerContainerHost::GetRegistrationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerContainerHost::GetRegistrationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHost_GetRegistration_ForwardToCallback);
};

class ServiceWorkerContainerHost_GetRegistrations_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerContainerHost_GetRegistrations_ForwardToCallback(
      ServiceWorkerContainerHost::GetRegistrationsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerContainerHost::GetRegistrationsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHost_GetRegistrations_ForwardToCallback);
};

class ServiceWorkerContainerHost_GetRegistrationForReady_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerContainerHost_GetRegistrationForReady_ForwardToCallback(
      ServiceWorkerContainerHost::GetRegistrationForReadyCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerContainerHost::GetRegistrationForReadyCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHost_GetRegistrationForReady_ForwardToCallback);
};

class ServiceWorkerContainerHost_Ping_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerContainerHost_Ping_ForwardToCallback(
      ServiceWorkerContainerHost::PingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerContainerHost::PingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHost_Ping_ForwardToCallback);
};

ServiceWorkerContainerHostProxy::ServiceWorkerContainerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerContainerHostProxy::Register(
    const GURL& in_script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr in_options, RegisterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::Register");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_Register_Params_Data::BufferWriter
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
      "null script_url in ServiceWorkerContainerHost.Register request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in ServiceWorkerContainerHost.Register request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("Register");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerContainerHost_Register_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerContainerHostProxy::GetRegistration(
    const GURL& in_client_url, GetRegistrationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistration");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_GetRegistration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_GetRegistration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client_url)::BaseType::BufferWriter
      client_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_client_url, buffer, &client_url_writer, &serialization_context);
  params->client_url.Set(
      client_url_writer.is_null() ? nullptr : client_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_url in ServiceWorkerContainerHost.GetRegistration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("GetRegistration");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerContainerHost_GetRegistration_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerContainerHostProxy::GetRegistrations(
    GetRegistrationsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistrations");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_GetRegistrations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_GetRegistrations_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("GetRegistrations");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerContainerHost_GetRegistrations_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerContainerHostProxy::GetRegistrationForReady(
    GetRegistrationForReadyCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistrationForReady");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_GetRegistrationForReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("GetRegistrationForReady");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerContainerHost_GetRegistrationForReady_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerContainerHostProxy::EnsureControllerServiceWorker(
    ::blink::mojom::ControllerServiceWorkerRequest in_controller, ControllerServiceWorkerPurpose in_purpose) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::EnsureControllerServiceWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ControllerServiceWorkerRequestDataView>(
      in_controller, &params->controller, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->controller),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid controller in ServiceWorkerContainerHost.EnsureControllerServiceWorker request");
  mojo::internal::Serialize<::blink::mojom::ControllerServiceWorkerPurpose>(
      in_purpose, &params->purpose);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("EnsureControllerServiceWorker");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerContainerHostProxy::CloneContainerHost(
    ServiceWorkerContainerHostRequest in_container_host) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::CloneContainerHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_CloneContainerHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_CloneContainerHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerContainerHostRequestDataView>(
      in_container_host, &params->container_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->container_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid container_host in ServiceWorkerContainerHost.CloneContainerHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("CloneContainerHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerContainerHostProxy::Ping(
    PingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::Ping");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_Ping_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("Ping");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerContainerHost_Ping_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerContainerHostProxy::HintToUpdateServiceWorker(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::HintToUpdateServiceWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_HintToUpdateServiceWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("HintToUpdateServiceWorker");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerContainerHostProxy::OnExecutionReady(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::OnExecutionReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_OnExecutionReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_OnExecutionReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("OnExecutionReady");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ServiceWorkerContainerHost_Register_ProxyToResponder {
 public:
  static ServiceWorkerContainerHost::RegisterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerContainerHost_Register_ProxyToResponder> proxy(
        new ServiceWorkerContainerHost_Register_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerContainerHost_Register_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerContainerHost_Register_ProxyToResponder() {
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
  ServiceWorkerContainerHost_Register_ProxyToResponder(
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
        << "ServiceWorkerContainerHost::RegisterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerErrorType in_error, const base::Optional<std::string>& in_error_msg, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr in_registration);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHost_Register_ProxyToResponder);
};

bool ServiceWorkerContainerHost_Register_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::RegisterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerContainerHost_Register_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerContainerHost_Register_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerErrorType p_error{};
  base::Optional<std::string> p_error_msg{};
  ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr p_registration{};
  ServiceWorkerContainerHost_Register_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!input_data_view.ReadRegistration(&p_registration))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerContainerHost::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg), 
std::move(p_registration));
  return true;
}

void ServiceWorkerContainerHost_Register_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerErrorType in_error, const base::Optional<std::string>& in_error_msg, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr in_registration) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_Register_ResponseParams_Data::BufferWriter
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
  typename decltype(params->registration)::BaseType::BufferWriter
      registration_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
      in_registration, buffer, &registration_writer, &serialization_context);
  params->registration.Set(
      registration_writer.is_null() ? nullptr : registration_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::RegisterCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("Register");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerContainerHost_GetRegistration_ProxyToResponder {
 public:
  static ServiceWorkerContainerHost::GetRegistrationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerContainerHost_GetRegistration_ProxyToResponder> proxy(
        new ServiceWorkerContainerHost_GetRegistration_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerContainerHost_GetRegistration_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerContainerHost_GetRegistration_ProxyToResponder() {
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
  ServiceWorkerContainerHost_GetRegistration_ProxyToResponder(
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
        << "ServiceWorkerContainerHost::GetRegistrationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerErrorType in_error, const base::Optional<std::string>& in_error_msg, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr in_registration);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHost_GetRegistration_ProxyToResponder);
};

bool ServiceWorkerContainerHost_GetRegistration_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistrationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerErrorType p_error{};
  base::Optional<std::string> p_error_msg{};
  ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr p_registration{};
  ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!input_data_view.ReadRegistration(&p_registration))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerContainerHost::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg), 
std::move(p_registration));
  return true;
}

void ServiceWorkerContainerHost_GetRegistration_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerErrorType in_error, const base::Optional<std::string>& in_error_msg, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr in_registration) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_GetRegistration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data::BufferWriter
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
  typename decltype(params->registration)::BaseType::BufferWriter
      registration_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
      in_registration, buffer, &registration_writer, &serialization_context);
  params->registration.Set(
      registration_writer.is_null() ? nullptr : registration_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistrationCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("GetRegistration");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerContainerHost_GetRegistrations_ProxyToResponder {
 public:
  static ServiceWorkerContainerHost::GetRegistrationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerContainerHost_GetRegistrations_ProxyToResponder> proxy(
        new ServiceWorkerContainerHost_GetRegistrations_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerContainerHost_GetRegistrations_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerContainerHost_GetRegistrations_ProxyToResponder() {
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
  ServiceWorkerContainerHost_GetRegistrations_ProxyToResponder(
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
        << "ServiceWorkerContainerHost::GetRegistrationsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerErrorType in_error, const base::Optional<std::string>& in_error_msg, base::Optional<std::vector<::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr>> in_infos);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHost_GetRegistrations_ProxyToResponder);
};

bool ServiceWorkerContainerHost_GetRegistrations_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistrationsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerErrorType p_error{};
  base::Optional<std::string> p_error_msg{};
  base::Optional<std::vector<::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr>> p_infos{};
  ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!input_data_view.ReadInfos(&p_infos))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerContainerHost::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg), 
std::move(p_infos));
  return true;
}

void ServiceWorkerContainerHost_GetRegistrations_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerErrorType in_error, const base::Optional<std::string>& in_error_msg, base::Optional<std::vector<::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr>> in_infos) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_GetRegistrations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data::BufferWriter
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
  typename decltype(params->infos)::BaseType::BufferWriter
      infos_writer;
  const mojo::internal::ContainerValidateParams infos_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>>(
      in_infos, buffer, &infos_writer, &infos_validate_params,
      &serialization_context);
  params->infos.Set(
      infos_writer.is_null() ? nullptr : infos_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistrationsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("GetRegistrations");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerContainerHost_GetRegistrationForReady_ProxyToResponder {
 public:
  static ServiceWorkerContainerHost::GetRegistrationForReadyCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerContainerHost_GetRegistrationForReady_ProxyToResponder> proxy(
        new ServiceWorkerContainerHost_GetRegistrationForReady_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerContainerHost_GetRegistrationForReady_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerContainerHost_GetRegistrationForReady_ProxyToResponder() {
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
  ServiceWorkerContainerHost_GetRegistrationForReady_ProxyToResponder(
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
        << "ServiceWorkerContainerHost::GetRegistrationForReadyCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr in_registration);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHost_GetRegistrationForReady_ProxyToResponder);
};

bool ServiceWorkerContainerHost_GetRegistrationForReady_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistrationForReadyCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr p_registration{};
  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRegistration(&p_registration))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerContainerHost::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_registration));
  return true;
}

void ServiceWorkerContainerHost_GetRegistrationForReady_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr in_registration) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_GetRegistrationForReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->registration)::BaseType::BufferWriter
      registration_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
      in_registration, buffer, &registration_writer, &serialization_context);
  params->registration.Set(
      registration_writer.is_null() ? nullptr : registration_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistrationForReadyCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
  message.set_method_name("GetRegistrationForReady");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerContainerHost_Ping_ProxyToResponder {
 public:
  static ServiceWorkerContainerHost::PingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerContainerHost_Ping_ProxyToResponder> proxy(
        new ServiceWorkerContainerHost_Ping_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerContainerHost_Ping_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerContainerHost_Ping_ProxyToResponder() {
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
  ServiceWorkerContainerHost_Ping_ProxyToResponder(
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
        << "ServiceWorkerContainerHost::PingCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerContainerHost_Ping_ProxyToResponder);
};

bool ServiceWorkerContainerHost_Ping_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::PingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerContainerHost_Ping_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerContainerHost_Ping_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ServiceWorkerContainerHost_Ping_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerContainerHost::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void ServiceWorkerContainerHost_Ping_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainerHost_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainerHost_Ping_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::PingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainerHost::Name_);
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
bool ServiceWorkerContainerHostStubDispatch::Accept(
    ServiceWorkerContainerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerContainerHost_Register_Name: {
      break;
    }
    case internal::kServiceWorkerContainerHost_GetRegistration_Name: {
      break;
    }
    case internal::kServiceWorkerContainerHost_GetRegistrations_Name: {
      break;
    }
    case internal::kServiceWorkerContainerHost_GetRegistrationForReady_Name: {
      break;
    }
    case internal::kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::EnsureControllerServiceWorker",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::ControllerServiceWorkerRequest p_controller{};
      ControllerServiceWorkerPurpose p_purpose{};
      ServiceWorkerContainerHost_EnsureControllerServiceWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      p_controller =
          input_data_view.TakeController<decltype(p_controller)>();
      if (!input_data_view.ReadPurpose(&p_purpose))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainerHost::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnsureControllerServiceWorker(
std::move(p_controller), 
std::move(p_purpose));
      return true;
    }
    case internal::kServiceWorkerContainerHost_CloneContainerHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::CloneContainerHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerContainerHost_CloneContainerHost_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerContainerHost_CloneContainerHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerContainerHostRequest p_container_host{};
      ServiceWorkerContainerHost_CloneContainerHost_ParamsDataView input_data_view(params, &serialization_context);
      
      p_container_host =
          input_data_view.TakeContainerHost<decltype(p_container_host)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainerHost::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CloneContainerHost(
std::move(p_container_host));
      return true;
    }
    case internal::kServiceWorkerContainerHost_Ping_Name: {
      break;
    }
    case internal::kServiceWorkerContainerHost_HintToUpdateServiceWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::HintToUpdateServiceWorker",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerContainerHost_HintToUpdateServiceWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainerHost::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->HintToUpdateServiceWorker();
      return true;
    }
    case internal::kServiceWorkerContainerHost_OnExecutionReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::OnExecutionReady",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerContainerHost_OnExecutionReady_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerContainerHost_OnExecutionReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerContainerHost_OnExecutionReady_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainerHost::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnExecutionReady();
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerContainerHostStubDispatch::AcceptWithResponder(
    ServiceWorkerContainerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerContainerHost_Register_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::Register",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerContainerHost_Register_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerContainerHost_Register_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_script_url{};
      ::blink::mojom::ServiceWorkerRegistrationOptionsPtr p_options{};
      ServiceWorkerContainerHost_Register_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadScriptUrl(&p_script_url))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainerHost::Name_, 0, false);
        return false;
      }
      ServiceWorkerContainerHost::RegisterCallback callback =
          ServiceWorkerContainerHost_Register_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Register(
std::move(p_script_url), 
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerContainerHost_GetRegistration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistration",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerContainerHost_GetRegistration_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerContainerHost_GetRegistration_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_client_url{};
      ServiceWorkerContainerHost_GetRegistration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClientUrl(&p_client_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainerHost::Name_, 1, false);
        return false;
      }
      ServiceWorkerContainerHost::GetRegistrationCallback callback =
          ServiceWorkerContainerHost_GetRegistration_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetRegistration(
std::move(p_client_url), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerContainerHost_GetRegistrations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistrations",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerContainerHost_GetRegistrations_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerContainerHost_GetRegistrations_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerContainerHost_GetRegistrations_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainerHost::Name_, 2, false);
        return false;
      }
      ServiceWorkerContainerHost::GetRegistrationsCallback callback =
          ServiceWorkerContainerHost_GetRegistrations_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetRegistrations(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerContainerHost_GetRegistrationForReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::GetRegistrationForReady",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerContainerHost_GetRegistrationForReady_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainerHost::Name_, 3, false);
        return false;
      }
      ServiceWorkerContainerHost::GetRegistrationForReadyCallback callback =
          ServiceWorkerContainerHost_GetRegistrationForReady_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetRegistrationForReady(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name: {
      break;
    }
    case internal::kServiceWorkerContainerHost_CloneContainerHost_Name: {
      break;
    }
    case internal::kServiceWorkerContainerHost_Ping_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainerHost::Ping",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerContainerHost_Ping_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerContainerHost_Ping_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerContainerHost_Ping_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainerHost::Name_, 6, false);
        return false;
      }
      ServiceWorkerContainerHost::PingCallback callback =
          ServiceWorkerContainerHost_Ping_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Ping(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerContainerHost_HintToUpdateServiceWorker_Name: {
      break;
    }
    case internal::kServiceWorkerContainerHost_OnExecutionReady_Name: {
      break;
    }
  }
  return false;
}

bool ServiceWorkerContainerHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerContainerHost RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerContainerHost_Register_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_Register_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_GetRegistration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_GetRegistration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_GetRegistrations_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_GetRegistrationForReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_CloneContainerHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_CloneContainerHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_Ping_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_Ping_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_HintToUpdateServiceWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_OnExecutionReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_OnExecutionReady_Params_Data>(
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

bool ServiceWorkerContainerHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerContainerHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kServiceWorkerContainerHost_Register_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_Register_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_GetRegistration_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_GetRegistrationForReady_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainerHost_Ping_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainerHost_Ping_ResponseParams_Data>(
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
const char ServiceWorkerContainer::Name_[] = "blink.mojom.ServiceWorkerContainer";

ServiceWorkerContainerProxy::ServiceWorkerContainerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerContainerProxy::SetController(
    ::blink::mojom::ControllerServiceWorkerInfoPtr in_controller_info, bool in_should_notify_controllerchange) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainer::SetController");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainer_SetController_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainer_SetController_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->controller_info)::BaseType::BufferWriter
      controller_info_writer;
  mojo::internal::Serialize<::blink::mojom::ControllerServiceWorkerInfoDataView>(
      in_controller_info, buffer, &controller_info_writer, &serialization_context);
  params->controller_info.Set(
      controller_info_writer.is_null() ? nullptr : controller_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->controller_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null controller_info in ServiceWorkerContainer.SetController request");
  params->should_notify_controllerchange = in_should_notify_controllerchange;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainer::Name_);
  message.set_method_name("SetController");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerContainerProxy::PostMessageToClient(
    ::blink::mojom::ServiceWorkerObjectInfoPtr in_source, ::blink::TransferableMessage in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainer::PostMessageToClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainer_PostMessageToClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainer_PostMessageToClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in ServiceWorkerContainer.PostMessageToClient request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::blink::mojom::TransferableMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ServiceWorkerContainer.PostMessageToClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainer::Name_);
  message.set_method_name("PostMessageToClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerContainerProxy::CountFeature(
    ::blink::mojom::WebFeature in_feature) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerContainer::CountFeature");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerContainer_CountFeature_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerContainer_CountFeature_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebFeature>(
      in_feature, &params->feature);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerContainer::Name_);
  message.set_method_name("CountFeature");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceWorkerContainerStubDispatch::Accept(
    ServiceWorkerContainer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerContainer_SetController_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainer::SetController",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerContainer_SetController_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerContainer_SetController_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::ControllerServiceWorkerInfoPtr p_controller_info{};
      bool p_should_notify_controllerchange{};
      ServiceWorkerContainer_SetController_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadControllerInfo(&p_controller_info))
        success = false;
      p_should_notify_controllerchange = input_data_view.should_notify_controllerchange();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainer::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetController(
std::move(p_controller_info), 
std::move(p_should_notify_controllerchange));
      return true;
    }
    case internal::kServiceWorkerContainer_PostMessageToClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainer::PostMessageToClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerContainer_PostMessageToClient_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerContainer_PostMessageToClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::ServiceWorkerObjectInfoPtr p_source{};
      ::blink::TransferableMessage p_message{};
      ServiceWorkerContainer_PostMessageToClient_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainer::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PostMessageToClient(
std::move(p_source), 
std::move(p_message));
      return true;
    }
    case internal::kServiceWorkerContainer_CountFeature_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerContainer::CountFeature",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerContainer_CountFeature_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerContainer_CountFeature_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::WebFeature p_feature{};
      ServiceWorkerContainer_CountFeature_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFeature(&p_feature))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerContainer::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CountFeature(
std::move(p_feature));
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerContainerStubDispatch::AcceptWithResponder(
    ServiceWorkerContainer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerContainer_SetController_Name: {
      break;
    }
    case internal::kServiceWorkerContainer_PostMessageToClient_Name: {
      break;
    }
    case internal::kServiceWorkerContainer_CountFeature_Name: {
      break;
    }
  }
  return false;
}

bool ServiceWorkerContainerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerContainer RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerContainer_SetController_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainer_SetController_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainer_PostMessageToClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainer_PostMessageToClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerContainer_CountFeature_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerContainer_CountFeature_Params_Data>(
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