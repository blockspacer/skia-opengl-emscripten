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

#include "services/service_manager/public/mojom/service.mojom.h"

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

#include "services/service_manager/public/mojom/service.mojom-params-data.h"
#include "services/service_manager/public/mojom/service.mojom-shared-message-ids.h"

#include "services/service_manager/public/mojom/service.mojom-import-headers.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/token_mojom_traits.h"
#include "services/service_manager/public/cpp/bind_source_info_mojom_traits.h"
#include "services/service_manager/public/cpp/identity_mojom_traits.h"
#include "services/service_manager/public/cpp/interface_provider_spec_mojom_traits.h"
#endif
namespace service_manager {
namespace mojom {
BindSourceInfo::BindSourceInfo()
    : identity(),
      required_capabilities() {}

BindSourceInfo::BindSourceInfo(
    const ::service_manager::Identity& identity_in,
    const ::service_manager::CapabilitySet& required_capabilities_in)
    : identity(std::move(identity_in)),
      required_capabilities(std::move(required_capabilities_in)) {}

BindSourceInfo::~BindSourceInfo() = default;

bool BindSourceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char Service::Name_[] = "service_manager.mojom.Service";

class Service_OnStart_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Service_OnStart_ForwardToCallback(
      Service::OnStartCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Service::OnStartCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Service_OnStart_ForwardToCallback);
};

class Service_OnBindInterface_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Service_OnBindInterface_ForwardToCallback(
      Service::OnBindInterfaceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Service::OnBindInterfaceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Service_OnBindInterface_ForwardToCallback);
};

ServiceProxy::ServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceProxy::OnStart(
    const ::service_manager::Identity& in_identity, OnStartCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Service::OnStart");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kService_OnStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Service_OnStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in Service.OnStart request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Service::Name_);
  message.set_method_name("OnStart");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Service_OnStart_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceProxy::OnBindInterface(
    const ::service_manager::BindSourceInfo& in_source, const std::string& in_interface_name, mojo::ScopedMessagePipeHandle in_interface_pipe, OnBindInterfaceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Service::OnBindInterface");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kService_OnBindInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Service_OnBindInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<::service_manager::mojom::BindSourceInfoDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in Service.OnBindInterface request");
  typename decltype(params->interface_name)::BaseType::BufferWriter
      interface_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_interface_name, buffer, &interface_name_writer, &serialization_context);
  params->interface_name.Set(
      interface_name_writer.is_null() ? nullptr : interface_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->interface_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null interface_name in Service.OnBindInterface request");
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_interface_pipe, &params->interface_pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->interface_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid interface_pipe in Service.OnBindInterface request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Service::Name_);
  message.set_method_name("OnBindInterface");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Service_OnBindInterface_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceProxy::CreatePackagedServiceInstance(
    const ::service_manager::Identity& in_identity, mojo::PendingReceiver<Service> in_receiver, mojo::PendingRemote<::service_manager::mojom::ProcessMetadata> in_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Service::CreatePackagedServiceInstance");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kService_CreatePackagedServiceInstance_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Service_CreatePackagedServiceInstance_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in Service.CreatePackagedServiceInstance request");
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::service_manager::mojom::ServiceInterfaceBase>>(
      in_receiver, &params->receiver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in Service.CreatePackagedServiceInstance request");
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::service_manager::mojom::ProcessMetadataInterfaceBase>>(
      in_metadata, &params->metadata, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->metadata),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid metadata in Service.CreatePackagedServiceInstance request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Service::Name_);
  message.set_method_name("CreatePackagedServiceInstance");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Service_OnStart_ProxyToResponder {
 public:
  static Service::OnStartCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Service_OnStart_ProxyToResponder> proxy(
        new Service_OnStart_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Service_OnStart_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Service_OnStart_ProxyToResponder() {
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
  Service_OnStart_ProxyToResponder(
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
        << "Service::OnStartCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::service_manager::mojom::ConnectorRequest in_connector_request, ::service_manager::mojom::ServiceControlAssociatedRequest in_control_request);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Service_OnStart_ProxyToResponder);
};

bool Service_OnStart_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Service::OnStartCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Service_OnStart_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Service_OnStart_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::service_manager::mojom::ConnectorRequest p_connector_request{};
  ::service_manager::mojom::ServiceControlAssociatedRequest p_control_request{};
  Service_OnStart_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_connector_request =
      input_data_view.TakeConnectorRequest<decltype(p_connector_request)>();
  p_control_request =
      input_data_view.TakeControlRequest<decltype(p_control_request)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Service::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_connector_request), 
std::move(p_control_request));
  return true;
}

void Service_OnStart_ProxyToResponder::Run(
    ::service_manager::mojom::ConnectorRequest in_connector_request, ::service_manager::mojom::ServiceControlAssociatedRequest in_control_request) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kService_OnStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Service_OnStart_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ConnectorRequestDataView>(
      in_connector_request, &params->connector_request, &serialization_context);
  mojo::internal::Serialize<::service_manager::mojom::ServiceControlAssociatedRequestDataView>(
      in_control_request, &params->control_request, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Service::OnStartCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Service::Name_);
  message.set_method_name("OnStart");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Service_OnBindInterface_ProxyToResponder {
 public:
  static Service::OnBindInterfaceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Service_OnBindInterface_ProxyToResponder> proxy(
        new Service_OnBindInterface_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Service_OnBindInterface_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Service_OnBindInterface_ProxyToResponder() {
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
  Service_OnBindInterface_ProxyToResponder(
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
        << "Service::OnBindInterfaceCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Service_OnBindInterface_ProxyToResponder);
};

bool Service_OnBindInterface_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Service::OnBindInterfaceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Service_OnBindInterface_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Service_OnBindInterface_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  Service_OnBindInterface_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Service::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void Service_OnBindInterface_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kService_OnBindInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Service_OnBindInterface_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Service::OnBindInterfaceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Service::Name_);
  message.set_method_name("OnBindInterface");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ServiceStubDispatch::Accept(
    Service* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kService_OnStart_Name: {
      break;
    }
    case internal::kService_OnBindInterface_Name: {
      break;
    }
    case internal::kService_CreatePackagedServiceInstance_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Service::CreatePackagedServiceInstance",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Service_CreatePackagedServiceInstance_Params_Data* params =
          reinterpret_cast<internal::Service_CreatePackagedServiceInstance_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::Identity p_identity{};
      mojo::PendingReceiver<Service> p_receiver{};
      mojo::PendingRemote<::service_manager::mojom::ProcessMetadata> p_metadata{};
      Service_CreatePackagedServiceInstance_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      p_receiver =
          input_data_view.TakeReceiver<decltype(p_receiver)>();
      p_metadata =
          input_data_view.TakeMetadata<decltype(p_metadata)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Service::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreatePackagedServiceInstance(
std::move(p_identity), 
std::move(p_receiver), 
std::move(p_metadata));
      return true;
    }
  }
  return false;
}

// static
bool ServiceStubDispatch::AcceptWithResponder(
    Service* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kService_OnStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Service::OnStart",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Service_OnStart_Params_Data* params =
          reinterpret_cast<
              internal::Service_OnStart_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::Identity p_identity{};
      Service_OnStart_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Service::Name_, 0, false);
        return false;
      }
      Service::OnStartCallback callback =
          Service_OnStart_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStart(
std::move(p_identity), std::move(callback));
      return true;
    }
    case internal::kService_OnBindInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Service::OnBindInterface",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Service_OnBindInterface_Params_Data* params =
          reinterpret_cast<
              internal::Service_OnBindInterface_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::BindSourceInfo p_source{};
      std::string p_interface_name{};
      mojo::ScopedMessagePipeHandle p_interface_pipe{};
      Service_OnBindInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!input_data_view.ReadInterfaceName(&p_interface_name))
        success = false;
      p_interface_pipe = input_data_view.TakeInterfacePipe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Service::Name_, 1, false);
        return false;
      }
      Service::OnBindInterfaceCallback callback =
          Service_OnBindInterface_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnBindInterface(
std::move(p_source), 
std::move(p_interface_name), 
std::move(p_interface_pipe), std::move(callback));
      return true;
    }
    case internal::kService_CreatePackagedServiceInstance_Name: {
      break;
    }
  }
  return false;
}

bool ServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Service RequestValidator");

  switch (message->header()->name) {
    case internal::kService_OnStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_OnStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kService_OnBindInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_OnBindInterface_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kService_CreatePackagedServiceInstance_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_CreatePackagedServiceInstance_Params_Data>(
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

bool ServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Service ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kService_OnStart_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_OnStart_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kService_OnBindInterface_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_OnBindInterface_ResponseParams_Data>(
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
}  // namespace service_manager

namespace mojo {


// static
bool StructTraits<::service_manager::mojom::BindSourceInfo::DataView, ::service_manager::mojom::BindSourceInfoPtr>::Read(
    ::service_manager::mojom::BindSourceInfo::DataView input,
    ::service_manager::mojom::BindSourceInfoPtr* output) {
  bool success = true;
  ::service_manager::mojom::BindSourceInfoPtr result(::service_manager::mojom::BindSourceInfo::New());
  
      if (!input.ReadIdentity(&result->identity))
        success = false;
      if (!input.ReadRequiredCapabilities(&result->required_capabilities))
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