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

#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-blink.h"

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

#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-params-data.h"
#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
SyncRegistrationOptions::SyncRegistrationOptions()
    : tag(""),
      min_interval(-1) {}

SyncRegistrationOptions::SyncRegistrationOptions(
    const WTF::String& tag_in,
    int64_t min_interval_in)
    : tag(std::move(tag_in)),
      min_interval(std::move(min_interval_in)) {}

SyncRegistrationOptions::~SyncRegistrationOptions() = default;
size_t SyncRegistrationOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->tag);
  seed = mojo::internal::WTFHash(seed, this->min_interval);
  return seed;
}

bool SyncRegistrationOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BackgroundSyncRegistrationInfo::BackgroundSyncRegistrationInfo()
    : service_worker_registration_id(-1),
      tag(),
      sync_type() {}

BackgroundSyncRegistrationInfo::BackgroundSyncRegistrationInfo(
    int64_t service_worker_registration_id_in,
    const WTF::String& tag_in,
    BackgroundSyncType sync_type_in)
    : service_worker_registration_id(std::move(service_worker_registration_id_in)),
      tag(std::move(tag_in)),
      sync_type(std::move(sync_type_in)) {}

BackgroundSyncRegistrationInfo::~BackgroundSyncRegistrationInfo() = default;
size_t BackgroundSyncRegistrationInfo::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->service_worker_registration_id);
  seed = mojo::internal::WTFHash(seed, this->tag);
  seed = mojo::internal::WTFHash(seed, this->sync_type);
  return seed;
}

bool BackgroundSyncRegistrationInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char BackgroundSyncService::Name_[] = "blink.mojom.BackgroundSyncService";

class BackgroundSyncService_Register_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_Register_ForwardToCallback(
      BackgroundSyncService::RegisterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::RegisterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_Register_ForwardToCallback);
};

class BackgroundSyncService_GetRegistrations_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_GetRegistrations_ForwardToCallback(
      BackgroundSyncService::GetRegistrationsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::GetRegistrationsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_GetRegistrations_ForwardToCallback);
};

BackgroundSyncServiceProxy::BackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BackgroundSyncServiceProxy::Register(
    SyncRegistrationOptionsPtr in_options, int64_t in_service_worker_registration_id, RegisterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundSyncService::Register");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundSyncService_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundSyncService_Register_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::SyncRegistrationOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in BackgroundSyncService.Register request");
  params->service_worker_registration_id = in_service_worker_registration_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundSyncService::Name_);
  message.set_method_name("Register");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundSyncService_Register_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BackgroundSyncServiceProxy::DidResolveRegistration(
    BackgroundSyncRegistrationInfoPtr in_registration_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundSyncService::DidResolveRegistration");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundSyncService_DidResolveRegistration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundSyncService_DidResolveRegistration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->registration_info)::BaseType::BufferWriter
      registration_info_writer;
  mojo::internal::Serialize<::blink::mojom::BackgroundSyncRegistrationInfoDataView>(
      in_registration_info, buffer, &registration_info_writer, &serialization_context);
  params->registration_info.Set(
      registration_info_writer.is_null() ? nullptr : registration_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registration_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registration_info in BackgroundSyncService.DidResolveRegistration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundSyncService::Name_);
  message.set_method_name("DidResolveRegistration");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void BackgroundSyncServiceProxy::GetRegistrations(
    int64_t in_service_worker_registration_id, GetRegistrationsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundSyncService::GetRegistrations");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundSyncService_GetRegistrations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundSyncService_GetRegistrations_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundSyncService::Name_);
  message.set_method_name("GetRegistrations");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundSyncService_GetRegistrations_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BackgroundSyncService_Register_ProxyToResponder {
 public:
  static BackgroundSyncService::RegisterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundSyncService_Register_ProxyToResponder> proxy(
        new BackgroundSyncService_Register_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundSyncService_Register_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundSyncService_Register_ProxyToResponder() {
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
  BackgroundSyncService_Register_ProxyToResponder(
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
        << "BackgroundSyncService::RegisterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BackgroundSyncError in_err, SyncRegistrationOptionsPtr in_options);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_Register_ProxyToResponder);
};

bool BackgroundSyncService_Register_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundSyncService::RegisterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundSyncService_Register_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundSyncService_Register_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BackgroundSyncError p_err{};
  SyncRegistrationOptionsPtr p_options{};
  BackgroundSyncService_Register_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!input_data_view.ReadOptions(&p_options))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BackgroundSyncService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_err), 
std::move(p_options));
  return true;
}

void BackgroundSyncService_Register_ProxyToResponder::Run(
    BackgroundSyncError in_err, SyncRegistrationOptionsPtr in_options) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundSyncService_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundSyncService_Register_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BackgroundSyncError>(
      in_err, &params->err);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::SyncRegistrationOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundSyncService::RegisterCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundSyncService::Name_);
  message.set_method_name("Register");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BackgroundSyncService_GetRegistrations_ProxyToResponder {
 public:
  static BackgroundSyncService::GetRegistrationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundSyncService_GetRegistrations_ProxyToResponder> proxy(
        new BackgroundSyncService_GetRegistrations_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundSyncService_GetRegistrations_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundSyncService_GetRegistrations_ProxyToResponder() {
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
  BackgroundSyncService_GetRegistrations_ProxyToResponder(
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
        << "BackgroundSyncService::GetRegistrationsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BackgroundSyncError in_err, WTF::Vector<SyncRegistrationOptionsPtr> in_registrations);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_GetRegistrations_ProxyToResponder);
};

bool BackgroundSyncService_GetRegistrations_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundSyncService::GetRegistrationsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BackgroundSyncError p_err{};
  WTF::Vector<SyncRegistrationOptionsPtr> p_registrations{};
  BackgroundSyncService_GetRegistrations_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!input_data_view.ReadRegistrations(&p_registrations))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BackgroundSyncService::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_err), 
std::move(p_registrations));
  return true;
}

void BackgroundSyncService_GetRegistrations_ProxyToResponder::Run(
    BackgroundSyncError in_err, WTF::Vector<SyncRegistrationOptionsPtr> in_registrations) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundSyncService_GetRegistrations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BackgroundSyncError>(
      in_err, &params->err);
  typename decltype(params->registrations)::BaseType::BufferWriter
      registrations_writer;
  const mojo::internal::ContainerValidateParams registrations_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SyncRegistrationOptionsDataView>>(
      in_registrations, buffer, &registrations_writer, &registrations_validate_params,
      &serialization_context);
  params->registrations.Set(
      registrations_writer.is_null() ? nullptr : registrations_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registrations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registrations in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundSyncService::GetRegistrationsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundSyncService::Name_);
  message.set_method_name("GetRegistrations");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool BackgroundSyncServiceStubDispatch::Accept(
    BackgroundSyncService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      break;
    }
    case internal::kBackgroundSyncService_DidResolveRegistration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundSyncService::DidResolveRegistration",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BackgroundSyncService_DidResolveRegistration_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncService_DidResolveRegistration_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BackgroundSyncRegistrationInfoPtr p_registration_info{};
      BackgroundSyncService_DidResolveRegistration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRegistrationInfo(&p_registration_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundSyncService::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidResolveRegistration(
std::move(p_registration_info));
      return true;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      break;
    }
  }
  return false;
}

// static
bool BackgroundSyncServiceStubDispatch::AcceptWithResponder(
    BackgroundSyncService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundSyncService::Register",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundSyncService_Register_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundSyncService_Register_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SyncRegistrationOptionsPtr p_options{};
      int64_t p_service_worker_registration_id{};
      BackgroundSyncService_Register_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundSyncService::Name_, 0, false);
        return false;
      }
      BackgroundSyncService::RegisterCallback callback =
          BackgroundSyncService_Register_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Register(
std::move(p_options), 
std::move(p_service_worker_registration_id), std::move(callback));
      return true;
    }
    case internal::kBackgroundSyncService_DidResolveRegistration_Name: {
      break;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundSyncService::GetRegistrations",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundSyncService_GetRegistrations_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundSyncService_GetRegistrations_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      BackgroundSyncService_GetRegistrations_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundSyncService::Name_, 2, false);
        return false;
      }
      BackgroundSyncService::GetRegistrationsCallback callback =
          BackgroundSyncService_GetRegistrations_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetRegistrations(
std::move(p_service_worker_registration_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool BackgroundSyncServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BackgroundSyncService RequestValidator");

  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_Register_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundSyncService_DidResolveRegistration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_DidResolveRegistration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_GetRegistrations_Params_Data>(
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

bool BackgroundSyncServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BackgroundSyncService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_Register_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::blink::SyncRegistrationOptions::DataView, ::blink::mojom::blink::SyncRegistrationOptionsPtr>::Read(
    ::blink::mojom::blink::SyncRegistrationOptions::DataView input,
    ::blink::mojom::blink::SyncRegistrationOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SyncRegistrationOptionsPtr result(::blink::mojom::blink::SyncRegistrationOptions::New());
  
      if (!input.ReadTag(&result->tag))
        success = false;
      result->min_interval = input.min_interval();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::BackgroundSyncRegistrationInfo::DataView, ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr>::Read(
    ::blink::mojom::blink::BackgroundSyncRegistrationInfo::DataView input,
    ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr result(::blink::mojom::blink::BackgroundSyncRegistrationInfo::New());
  
      result->service_worker_registration_id = input.service_worker_registration_id();
      if (!input.ReadTag(&result->tag))
        success = false;
      if (!input.ReadSyncType(&result->sync_type))
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