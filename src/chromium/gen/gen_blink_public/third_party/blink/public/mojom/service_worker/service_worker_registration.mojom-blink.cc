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

#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-blink.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
ChangedServiceWorkerObjectsMask::ChangedServiceWorkerObjectsMask()
    : installing(),
      waiting(),
      active() {}

ChangedServiceWorkerObjectsMask::ChangedServiceWorkerObjectsMask(
    bool installing_in,
    bool waiting_in,
    bool active_in)
    : installing(std::move(installing_in)),
      waiting(std::move(waiting_in)),
      active(std::move(active_in)) {}

ChangedServiceWorkerObjectsMask::~ChangedServiceWorkerObjectsMask() = default;
size_t ChangedServiceWorkerObjectsMask::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->installing);
  seed = mojo::internal::WTFHash(seed, this->waiting);
  seed = mojo::internal::WTFHash(seed, this->active);
  return seed;
}

bool ChangedServiceWorkerObjectsMask::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceWorkerRegistrationOptions::ServiceWorkerRegistrationOptions()
    : scope(),
      type(::blink::mojom::blink::ScriptType::kClassic),
      update_via_cache(ServiceWorkerUpdateViaCache::kImports) {}

ServiceWorkerRegistrationOptions::ServiceWorkerRegistrationOptions(
    const ::blink::KURL& scope_in,
    ::blink::mojom::blink::ScriptType type_in,
    ServiceWorkerUpdateViaCache update_via_cache_in)
    : scope(std::move(scope_in)),
      type(std::move(type_in)),
      update_via_cache(std::move(update_via_cache_in)) {}

ServiceWorkerRegistrationOptions::~ServiceWorkerRegistrationOptions() = default;

bool ServiceWorkerRegistrationOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceWorkerRegistrationObjectInfo::ServiceWorkerRegistrationObjectInfo()
    : registration_id(kInvalidServiceWorkerRegistrationId),
      scope(),
      update_via_cache(),
      host_ptr_info(),
      request(),
      installing(),
      waiting(),
      active() {}

ServiceWorkerRegistrationObjectInfo::ServiceWorkerRegistrationObjectInfo(
    int64_t registration_id_in,
    const ::blink::KURL& scope_in,
    ServiceWorkerUpdateViaCache update_via_cache_in,
    ServiceWorkerRegistrationObjectHostAssociatedPtrInfo host_ptr_info_in,
    ServiceWorkerRegistrationObjectAssociatedRequest request_in,
    ::blink::mojom::blink::ServiceWorkerObjectInfoPtr installing_in,
    ::blink::mojom::blink::ServiceWorkerObjectInfoPtr waiting_in,
    ::blink::mojom::blink::ServiceWorkerObjectInfoPtr active_in)
    : registration_id(std::move(registration_id_in)),
      scope(std::move(scope_in)),
      update_via_cache(std::move(update_via_cache_in)),
      host_ptr_info(std::move(host_ptr_info_in)),
      request(std::move(request_in)),
      installing(std::move(installing_in)),
      waiting(std::move(waiting_in)),
      active(std::move(active_in)) {}

ServiceWorkerRegistrationObjectInfo::~ServiceWorkerRegistrationObjectInfo() = default;

bool ServiceWorkerRegistrationObjectInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceWorkerRegistrationObjectHost::Name_[] = "blink.mojom.ServiceWorkerRegistrationObjectHost";

class ServiceWorkerRegistrationObjectHost_Update_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerRegistrationObjectHost_Update_ForwardToCallback(
      ServiceWorkerRegistrationObjectHost::UpdateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerRegistrationObjectHost::UpdateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_Update_ForwardToCallback);
};

class ServiceWorkerRegistrationObjectHost_Unregister_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerRegistrationObjectHost_Unregister_ForwardToCallback(
      ServiceWorkerRegistrationObjectHost::UnregisterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerRegistrationObjectHost::UnregisterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_Unregister_ForwardToCallback);
};

class ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ForwardToCallback(
      ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ForwardToCallback);
};

class ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ForwardToCallback(
      ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ForwardToCallback);
};

class ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ForwardToCallback(
      ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ForwardToCallback);
};

ServiceWorkerRegistrationObjectHostProxy::ServiceWorkerRegistrationObjectHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerRegistrationObjectHostProxy::Update(
    UpdateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::Update");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_Update_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObjectHost::Name_);
  message.set_method_name("Update");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerRegistrationObjectHost_Update_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerRegistrationObjectHostProxy::Unregister(
    UnregisterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::Unregister");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_Unregister_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObjectHost::Name_);
  message.set_method_name("Unregister");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerRegistrationObjectHost_Unregister_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerRegistrationObjectHostProxy::EnableNavigationPreload(
    bool in_enable, EnableNavigationPreloadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::EnableNavigationPreload");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enable = in_enable;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObjectHost::Name_);
  message.set_method_name("EnableNavigationPreload");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerRegistrationObjectHostProxy::GetNavigationPreloadState(
    GetNavigationPreloadStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::GetNavigationPreloadState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObjectHost::Name_);
  message.set_method_name("GetNavigationPreloadState");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerRegistrationObjectHostProxy::SetNavigationPreloadHeader(
    const WTF::String& in_value, SetNavigationPreloadHeaderCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeader");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in ServiceWorkerRegistrationObjectHost.SetNavigationPreloadHeader request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObjectHost::Name_);
  message.set_method_name("SetNavigationPreloadHeader");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder {
 public:
  static ServiceWorkerRegistrationObjectHost::UpdateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder> proxy(
        new ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder() {
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
  ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder(
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
        << "ServiceWorkerRegistrationObjectHost::UpdateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder);
};

bool ServiceWorkerRegistrationObjectHost_Update_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::UpdateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ServiceWorkerRegistrationObjectHost_Update_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerRegistrationObjectHost::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_Update_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::UpdateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObjectHost::Name_);
  message.set_method_name("Update");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder {
 public:
  static ServiceWorkerRegistrationObjectHost::UnregisterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder> proxy(
        new ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder() {
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
  ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder(
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
        << "ServiceWorkerRegistrationObjectHost::UnregisterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder);
};

bool ServiceWorkerRegistrationObjectHost_Unregister_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::UnregisterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerRegistrationObjectHost::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_Unregister_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::UnregisterCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObjectHost::Name_);
  message.set_method_name("Unregister");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder {
 public:
  static ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder> proxy(
        new ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder() {
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
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder(
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
        << "ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder);
};

bool ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerRegistrationObjectHost::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObjectHost::Name_);
  message.set_method_name("EnableNavigationPreload");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder {
 public:
  static ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder> proxy(
        new ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder() {
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
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder(
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
        << "ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg, ::blink::mojom::blink::NavigationPreloadStatePtr in_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder);
};

bool ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ::blink::mojom::blink::NavigationPreloadStatePtr p_state{};
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!input_data_view.ReadState(&p_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerRegistrationObjectHost::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg), 
std::move(p_state));
  return true;
}

void ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg, ::blink::mojom::blink::NavigationPreloadStatePtr in_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data::BufferWriter
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
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::blink::mojom::NavigationPreloadStateDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObjectHost::Name_);
  message.set_method_name("GetNavigationPreloadState");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder {
 public:
  static ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder> proxy(
        new ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder() {
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
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder(
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
        << "ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder);
};

bool ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerRegistrationObjectHost::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObjectHost::Name_);
  message.set_method_name("SetNavigationPreloadHeader");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ServiceWorkerRegistrationObjectHostStubDispatch::Accept(
    ServiceWorkerRegistrationObjectHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObjectHost_Update_Name: {
      break;
    }
    case internal::kServiceWorkerRegistrationObjectHost_Unregister_Name: {
      break;
    }
    case internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name: {
      break;
    }
    case internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name: {
      break;
    }
    case internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name: {
      break;
    }
  }
  return false;
}

// static
bool ServiceWorkerRegistrationObjectHostStubDispatch::AcceptWithResponder(
    ServiceWorkerRegistrationObjectHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObjectHost_Update_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::Update",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerRegistrationObjectHost_Update_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerRegistrationObjectHost::Name_, 0, false);
        return false;
      }
      ServiceWorkerRegistrationObjectHost::UpdateCallback callback =
          ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Update(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_Unregister_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::Unregister",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerRegistrationObjectHost_Unregister_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerRegistrationObjectHost::Name_, 1, false);
        return false;
      }
      ServiceWorkerRegistrationObjectHost::UnregisterCallback callback =
          ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Unregister(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::EnableNavigationPreload",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enable{};
      ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enable = input_data_view.enable();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerRegistrationObjectHost::Name_, 2, false);
        return false;
      }
      ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback callback =
          ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnableNavigationPreload(
std::move(p_enable), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::GetNavigationPreloadState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerRegistrationObjectHost::Name_, 3, false);
        return false;
      }
      ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback callback =
          ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetNavigationPreloadState(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeader",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_value{};
      ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerRegistrationObjectHost::Name_, 4, false);
        return false;
      }
      ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback callback =
          ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetNavigationPreloadHeader(
std::move(p_value), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ServiceWorkerRegistrationObjectHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerRegistrationObjectHost RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObjectHost_Update_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_Unregister_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data>(
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

bool ServiceWorkerRegistrationObjectHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerRegistrationObjectHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObjectHost_Update_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_Unregister_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data>(
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
const char ServiceWorkerRegistrationObject::Name_[] = "blink.mojom.ServiceWorkerRegistrationObject";

ServiceWorkerRegistrationObjectProxy::ServiceWorkerRegistrationObjectProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerRegistrationObjectProxy::SetServiceWorkerObjects(
    ChangedServiceWorkerObjectsMaskPtr in_changed_mask, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr in_installing, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr in_waiting, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr in_active) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObject::SetServiceWorkerObjects");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObject_SetServiceWorkerObjects_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->changed_mask)::BaseType::BufferWriter
      changed_mask_writer;
  mojo::internal::Serialize<::blink::mojom::ChangedServiceWorkerObjectsMaskDataView>(
      in_changed_mask, buffer, &changed_mask_writer, &serialization_context);
  params->changed_mask.Set(
      changed_mask_writer.is_null() ? nullptr : changed_mask_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->changed_mask.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null changed_mask in ServiceWorkerRegistrationObject.SetServiceWorkerObjects request");
  typename decltype(params->installing)::BaseType::BufferWriter
      installing_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
      in_installing, buffer, &installing_writer, &serialization_context);
  params->installing.Set(
      installing_writer.is_null() ? nullptr : installing_writer.data());
  typename decltype(params->waiting)::BaseType::BufferWriter
      waiting_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
      in_waiting, buffer, &waiting_writer, &serialization_context);
  params->waiting.Set(
      waiting_writer.is_null() ? nullptr : waiting_writer.data());
  typename decltype(params->active)::BaseType::BufferWriter
      active_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
      in_active, buffer, &active_writer, &serialization_context);
  params->active.Set(
      active_writer.is_null() ? nullptr : active_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObject::Name_);
  message.set_method_name("SetServiceWorkerObjects");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerRegistrationObjectProxy::SetUpdateViaCache(
    ServiceWorkerUpdateViaCache in_update_via_cache) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObject::SetUpdateViaCache");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObject_SetUpdateViaCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerUpdateViaCache>(
      in_update_via_cache, &params->update_via_cache);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObject::Name_);
  message.set_method_name("SetUpdateViaCache");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerRegistrationObjectProxy::UpdateFound(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObject::UpdateFound");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObject_UpdateFound_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerRegistrationObject::Name_);
  message.set_method_name("UpdateFound");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceWorkerRegistrationObjectStubDispatch::Accept(
    ServiceWorkerRegistrationObject* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObject_SetServiceWorkerObjects_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObject::SetServiceWorkerObjects",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ChangedServiceWorkerObjectsMaskPtr p_changed_mask{};
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr p_installing{};
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr p_waiting{};
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr p_active{};
      ServiceWorkerRegistrationObject_SetServiceWorkerObjects_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadChangedMask(&p_changed_mask))
        success = false;
      if (!input_data_view.ReadInstalling(&p_installing))
        success = false;
      if (!input_data_view.ReadWaiting(&p_waiting))
        success = false;
      if (!input_data_view.ReadActive(&p_active))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerRegistrationObject::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetServiceWorkerObjects(
std::move(p_changed_mask), 
std::move(p_installing), 
std::move(p_waiting), 
std::move(p_active));
      return true;
    }
    case internal::kServiceWorkerRegistrationObject_SetUpdateViaCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObject::SetUpdateViaCache",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerUpdateViaCache p_update_via_cache{};
      ServiceWorkerRegistrationObject_SetUpdateViaCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUpdateViaCache(&p_update_via_cache))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerRegistrationObject::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetUpdateViaCache(
std::move(p_update_via_cache));
      return true;
    }
    case internal::kServiceWorkerRegistrationObject_UpdateFound_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerRegistrationObject::UpdateFound",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerRegistrationObject_UpdateFound_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerRegistrationObject::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateFound();
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerRegistrationObjectStubDispatch::AcceptWithResponder(
    ServiceWorkerRegistrationObject* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObject_SetServiceWorkerObjects_Name: {
      break;
    }
    case internal::kServiceWorkerRegistrationObject_SetUpdateViaCache_Name: {
      break;
    }
    case internal::kServiceWorkerRegistrationObject_UpdateFound_Name: {
      break;
    }
  }
  return false;
}

bool ServiceWorkerRegistrationObjectRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerRegistrationObject RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObject_SetServiceWorkerObjects_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObject_SetUpdateViaCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObject_UpdateFound_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data>(
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
bool StructTraits<::blink::mojom::blink::ChangedServiceWorkerObjectsMask::DataView, ::blink::mojom::blink::ChangedServiceWorkerObjectsMaskPtr>::Read(
    ::blink::mojom::blink::ChangedServiceWorkerObjectsMask::DataView input,
    ::blink::mojom::blink::ChangedServiceWorkerObjectsMaskPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ChangedServiceWorkerObjectsMaskPtr result(::blink::mojom::blink::ChangedServiceWorkerObjectsMask::New());
  
      result->installing = input.installing();
      result->waiting = input.waiting();
      result->active = input.active();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ServiceWorkerRegistrationOptions::DataView, ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr>::Read(
    ::blink::mojom::blink::ServiceWorkerRegistrationOptions::DataView input,
    ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr result(::blink::mojom::blink::ServiceWorkerRegistrationOptions::New());
  
      if (!input.ReadScope(&result->scope))
        success = false;
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadUpdateViaCache(&result->update_via_cache))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::DataView, ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr>::Read(
    ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::DataView input,
    ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr result(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::New());
  
      result->registration_id = input.registration_id();
      if (!input.ReadScope(&result->scope))
        success = false;
      if (!input.ReadUpdateViaCache(&result->update_via_cache))
        success = false;
      result->host_ptr_info =
          input.TakeHostPtrInfo<decltype(result->host_ptr_info)>();
      result->request =
          input.TakeRequest<decltype(result->request)>();
      if (!input.ReadInstalling(&result->installing))
        success = false;
      if (!input.ReadWaiting(&result->waiting))
        success = false;
      if (!input.ReadActive(&result->active))
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