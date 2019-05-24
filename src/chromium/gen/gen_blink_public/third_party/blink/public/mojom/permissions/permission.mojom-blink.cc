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

#include "third_party/blink/public/mojom/permissions/permission.mojom-blink.h"

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

#include "third_party/blink/public/mojom/permissions/permission.mojom-params-data.h"
#include "third_party/blink/public/mojom/permissions/permission.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/permissions/permission.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
MidiPermissionDescriptor::MidiPermissionDescriptor()
    : sysex() {}

MidiPermissionDescriptor::MidiPermissionDescriptor(
    bool sysex_in)
    : sysex(std::move(sysex_in)) {}

MidiPermissionDescriptor::~MidiPermissionDescriptor() = default;
size_t MidiPermissionDescriptor::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->sysex);
  return seed;
}

bool MidiPermissionDescriptor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ClipboardPermissionDescriptor::ClipboardPermissionDescriptor()
    : allowWithoutGesture() {}

ClipboardPermissionDescriptor::ClipboardPermissionDescriptor(
    bool allowWithoutGesture_in)
    : allowWithoutGesture(std::move(allowWithoutGesture_in)) {}

ClipboardPermissionDescriptor::~ClipboardPermissionDescriptor() = default;
size_t ClipboardPermissionDescriptor::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->allowWithoutGesture);
  return seed;
}

bool ClipboardPermissionDescriptor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PermissionDescriptor::PermissionDescriptor()
    : name(),
      extension() {}

PermissionDescriptor::PermissionDescriptor(
    PermissionName name_in,
    PermissionDescriptorExtensionPtr extension_in)
    : name(std::move(name_in)),
      extension(std::move(extension_in)) {}

PermissionDescriptor::~PermissionDescriptor() = default;

bool PermissionDescriptor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PermissionDescriptorExtension::PermissionDescriptorExtension() : tag_(Tag::MIDI) {
  data_.midi = new MidiPermissionDescriptorPtr;
}

PermissionDescriptorExtension::~PermissionDescriptorExtension() {
  DestroyActive();
}


void PermissionDescriptorExtension::set_midi(
    MidiPermissionDescriptorPtr midi) {
  if (tag_ == Tag::MIDI) {
    *(data_.midi) = std::move(midi);
  } else {
    DestroyActive();
    tag_ = Tag::MIDI;
    data_.midi = new MidiPermissionDescriptorPtr(
        std::move(midi));
  }
}
void PermissionDescriptorExtension::set_clipboard(
    ClipboardPermissionDescriptorPtr clipboard) {
  if (tag_ == Tag::CLIPBOARD) {
    *(data_.clipboard) = std::move(clipboard);
  } else {
    DestroyActive();
    tag_ = Tag::CLIPBOARD;
    data_.clipboard = new ClipboardPermissionDescriptorPtr(
        std::move(clipboard));
  }
}

void PermissionDescriptorExtension::DestroyActive() {
  switch (tag_) {

    case Tag::MIDI:

      delete data_.midi;
      break;
    case Tag::CLIPBOARD:

      delete data_.clipboard;
      break;
  }
}
size_t PermissionDescriptorExtension::Hash(size_t seed) const {
  seed = mojo::internal::HashCombine(seed, static_cast<uint32_t>(tag_));
  switch (tag_) {

    case Tag::MIDI:
      return mojo::internal::WTFHash(seed, data_.midi);
    case Tag::CLIPBOARD:
      return mojo::internal::WTFHash(seed, data_.clipboard);
    default:
      NOTREACHED();
      return seed;
  }
}

bool PermissionDescriptorExtension::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char PermissionObserver::Name_[] = "blink.mojom.PermissionObserver";

PermissionObserverProxy::PermissionObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PermissionObserverProxy::OnPermissionStatusChange(
    ::blink::mojom::blink::PermissionStatus in_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PermissionObserver::OnPermissionStatusChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPermissionObserver_OnPermissionStatusChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PermissionObserver_OnPermissionStatusChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PermissionStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PermissionObserver::Name_);
  message.set_method_name("OnPermissionStatusChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PermissionObserverStubDispatch::Accept(
    PermissionObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPermissionObserver_OnPermissionStatusChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PermissionObserver::OnPermissionStatusChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PermissionObserver_OnPermissionStatusChange_Params_Data* params =
          reinterpret_cast<internal::PermissionObserver_OnPermissionStatusChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::PermissionStatus p_status{};
      PermissionObserver_OnPermissionStatusChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStatus(&p_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PermissionObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnPermissionStatusChange(
std::move(p_status));
      return true;
    }
  }
  return false;
}

// static
bool PermissionObserverStubDispatch::AcceptWithResponder(
    PermissionObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPermissionObserver_OnPermissionStatusChange_Name: {
      break;
    }
  }
  return false;
}

bool PermissionObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PermissionObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kPermissionObserver_OnPermissionStatusChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionObserver_OnPermissionStatusChange_Params_Data>(
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

const char PermissionService::Name_[] = "blink.mojom.PermissionService";

class PermissionService_HasPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_HasPermission_ForwardToCallback(
      PermissionService::HasPermissionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::HasPermissionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PermissionService_HasPermission_ForwardToCallback);
};

class PermissionService_RequestPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_RequestPermission_ForwardToCallback(
      PermissionService::RequestPermissionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::RequestPermissionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermission_ForwardToCallback);
};

class PermissionService_RequestPermissions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_RequestPermissions_ForwardToCallback(
      PermissionService::RequestPermissionsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::RequestPermissionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermissions_ForwardToCallback);
};

class PermissionService_RevokePermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_RevokePermission_ForwardToCallback(
      PermissionService::RevokePermissionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::RevokePermissionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PermissionService_RevokePermission_ForwardToCallback);
};

PermissionServiceProxy::PermissionServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PermissionServiceProxy::HasPermission(
    PermissionDescriptorPtr in_permission, HasPermissionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PermissionService::HasPermission");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPermissionService_HasPermission_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PermissionService_HasPermission_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->permission)::BaseType::BufferWriter
      permission_writer;
  mojo::internal::Serialize<::blink::mojom::PermissionDescriptorDataView>(
      in_permission, buffer, &permission_writer, &serialization_context);
  params->permission.Set(
      permission_writer.is_null() ? nullptr : permission_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->permission.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null permission in PermissionService.HasPermission request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PermissionService::Name_);
  message.set_method_name("HasPermission");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PermissionService_HasPermission_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PermissionServiceProxy::RequestPermission(
    PermissionDescriptorPtr in_permission, bool in_user_gesture, RequestPermissionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PermissionService::RequestPermission");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPermissionService_RequestPermission_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PermissionService_RequestPermission_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->permission)::BaseType::BufferWriter
      permission_writer;
  mojo::internal::Serialize<::blink::mojom::PermissionDescriptorDataView>(
      in_permission, buffer, &permission_writer, &serialization_context);
  params->permission.Set(
      permission_writer.is_null() ? nullptr : permission_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->permission.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null permission in PermissionService.RequestPermission request");
  params->user_gesture = in_user_gesture;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PermissionService::Name_);
  message.set_method_name("RequestPermission");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PermissionService_RequestPermission_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PermissionServiceProxy::RequestPermissions(
    WTF::Vector<PermissionDescriptorPtr> in_permission, bool in_user_gesture, RequestPermissionsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PermissionService::RequestPermissions");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPermissionService_RequestPermissions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PermissionService_RequestPermissions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->permission)::BaseType::BufferWriter
      permission_writer;
  const mojo::internal::ContainerValidateParams permission_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::PermissionDescriptorDataView>>(
      in_permission, buffer, &permission_writer, &permission_validate_params,
      &serialization_context);
  params->permission.Set(
      permission_writer.is_null() ? nullptr : permission_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->permission.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null permission in PermissionService.RequestPermissions request");
  params->user_gesture = in_user_gesture;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PermissionService::Name_);
  message.set_method_name("RequestPermissions");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PermissionService_RequestPermissions_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PermissionServiceProxy::RevokePermission(
    PermissionDescriptorPtr in_permission, RevokePermissionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PermissionService::RevokePermission");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPermissionService_RevokePermission_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PermissionService_RevokePermission_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->permission)::BaseType::BufferWriter
      permission_writer;
  mojo::internal::Serialize<::blink::mojom::PermissionDescriptorDataView>(
      in_permission, buffer, &permission_writer, &serialization_context);
  params->permission.Set(
      permission_writer.is_null() ? nullptr : permission_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->permission.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null permission in PermissionService.RevokePermission request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PermissionService::Name_);
  message.set_method_name("RevokePermission");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PermissionService_RevokePermission_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PermissionServiceProxy::AddPermissionObserver(
    PermissionDescriptorPtr in_permission, ::blink::mojom::blink::PermissionStatus in_last_known_status, PermissionObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PermissionService::AddPermissionObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPermissionService_AddPermissionObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PermissionService_AddPermissionObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->permission)::BaseType::BufferWriter
      permission_writer;
  mojo::internal::Serialize<::blink::mojom::PermissionDescriptorDataView>(
      in_permission, buffer, &permission_writer, &serialization_context);
  params->permission.Set(
      permission_writer.is_null() ? nullptr : permission_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->permission.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null permission in PermissionService.AddPermissionObserver request");
  mojo::internal::Serialize<::blink::mojom::PermissionStatus>(
      in_last_known_status, &params->last_known_status);
  mojo::internal::Serialize<::blink::mojom::PermissionObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in PermissionService.AddPermissionObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PermissionService::Name_);
  message.set_method_name("AddPermissionObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class PermissionService_HasPermission_ProxyToResponder {
 public:
  static PermissionService::HasPermissionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PermissionService_HasPermission_ProxyToResponder> proxy(
        new PermissionService_HasPermission_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PermissionService_HasPermission_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PermissionService_HasPermission_ProxyToResponder() {
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
  PermissionService_HasPermission_ProxyToResponder(
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
        << "PermissionService::HasPermissionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::PermissionStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PermissionService_HasPermission_ProxyToResponder);
};

bool PermissionService_HasPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PermissionService::HasPermissionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PermissionService_HasPermission_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PermissionService_HasPermission_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::PermissionStatus p_status{};
  PermissionService_HasPermission_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PermissionService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void PermissionService_HasPermission_ProxyToResponder::Run(
    ::blink::mojom::blink::PermissionStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPermissionService_HasPermission_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PermissionService_HasPermission_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PermissionStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PermissionService::HasPermissionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PermissionService::Name_);
  message.set_method_name("HasPermission");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PermissionService_RequestPermission_ProxyToResponder {
 public:
  static PermissionService::RequestPermissionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PermissionService_RequestPermission_ProxyToResponder> proxy(
        new PermissionService_RequestPermission_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PermissionService_RequestPermission_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PermissionService_RequestPermission_ProxyToResponder() {
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
  PermissionService_RequestPermission_ProxyToResponder(
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
        << "PermissionService::RequestPermissionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::PermissionStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermission_ProxyToResponder);
};

bool PermissionService_RequestPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PermissionService::RequestPermissionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PermissionService_RequestPermission_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PermissionService_RequestPermission_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::PermissionStatus p_status{};
  PermissionService_RequestPermission_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PermissionService::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void PermissionService_RequestPermission_ProxyToResponder::Run(
    ::blink::mojom::blink::PermissionStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPermissionService_RequestPermission_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PermissionService_RequestPermission_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PermissionStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PermissionService::RequestPermissionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PermissionService::Name_);
  message.set_method_name("RequestPermission");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PermissionService_RequestPermissions_ProxyToResponder {
 public:
  static PermissionService::RequestPermissionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PermissionService_RequestPermissions_ProxyToResponder> proxy(
        new PermissionService_RequestPermissions_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PermissionService_RequestPermissions_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PermissionService_RequestPermissions_ProxyToResponder() {
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
  PermissionService_RequestPermissions_ProxyToResponder(
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
        << "PermissionService::RequestPermissionsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::Vector<::blink::mojom::blink::PermissionStatus>& in_statuses);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermissions_ProxyToResponder);
};

bool PermissionService_RequestPermissions_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PermissionService::RequestPermissionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PermissionService_RequestPermissions_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PermissionService_RequestPermissions_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<::blink::mojom::blink::PermissionStatus> p_statuses{};
  PermissionService_RequestPermissions_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatuses(&p_statuses))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PermissionService::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_statuses));
  return true;
}

void PermissionService_RequestPermissions_ProxyToResponder::Run(
    const WTF::Vector<::blink::mojom::blink::PermissionStatus>& in_statuses) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPermissionService_RequestPermissions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PermissionService_RequestPermissions_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->statuses)::BaseType::BufferWriter
      statuses_writer;
  const mojo::internal::ContainerValidateParams statuses_validate_params(
      0, ::blink::mojom::internal::PermissionStatus_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::PermissionStatus>>(
      in_statuses, buffer, &statuses_writer, &statuses_validate_params,
      &serialization_context);
  params->statuses.Set(
      statuses_writer.is_null() ? nullptr : statuses_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->statuses.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null statuses in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PermissionService::RequestPermissionsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PermissionService::Name_);
  message.set_method_name("RequestPermissions");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PermissionService_RevokePermission_ProxyToResponder {
 public:
  static PermissionService::RevokePermissionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PermissionService_RevokePermission_ProxyToResponder> proxy(
        new PermissionService_RevokePermission_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PermissionService_RevokePermission_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PermissionService_RevokePermission_ProxyToResponder() {
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
  PermissionService_RevokePermission_ProxyToResponder(
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
        << "PermissionService::RevokePermissionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::PermissionStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PermissionService_RevokePermission_ProxyToResponder);
};

bool PermissionService_RevokePermission_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PermissionService::RevokePermissionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PermissionService_RevokePermission_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PermissionService_RevokePermission_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::PermissionStatus p_status{};
  PermissionService_RevokePermission_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PermissionService::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void PermissionService_RevokePermission_ProxyToResponder::Run(
    ::blink::mojom::blink::PermissionStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPermissionService_RevokePermission_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PermissionService_RevokePermission_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PermissionStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PermissionService::RevokePermissionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PermissionService::Name_);
  message.set_method_name("RevokePermission");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PermissionServiceStubDispatch::Accept(
    PermissionService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      break;
    }
    case internal::kPermissionService_RequestPermission_Name: {
      break;
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      break;
    }
    case internal::kPermissionService_RevokePermission_Name: {
      break;
    }
    case internal::kPermissionService_AddPermissionObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PermissionService::AddPermissionObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PermissionService_AddPermissionObserver_Params_Data* params =
          reinterpret_cast<internal::PermissionService_AddPermissionObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PermissionDescriptorPtr p_permission{};
      ::blink::mojom::blink::PermissionStatus p_last_known_status{};
      PermissionObserverPtr p_observer{};
      PermissionService_AddPermissionObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPermission(&p_permission))
        success = false;
      if (!input_data_view.ReadLastKnownStatus(&p_last_known_status))
        success = false;
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PermissionService::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddPermissionObserver(
std::move(p_permission), 
std::move(p_last_known_status), 
std::move(p_observer));
      return true;
    }
  }
  return false;
}

// static
bool PermissionServiceStubDispatch::AcceptWithResponder(
    PermissionService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PermissionService::HasPermission",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PermissionService_HasPermission_Params_Data* params =
          reinterpret_cast<
              internal::PermissionService_HasPermission_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PermissionDescriptorPtr p_permission{};
      PermissionService_HasPermission_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPermission(&p_permission))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PermissionService::Name_, 0, false);
        return false;
      }
      PermissionService::HasPermissionCallback callback =
          PermissionService_HasPermission_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->HasPermission(
std::move(p_permission), std::move(callback));
      return true;
    }
    case internal::kPermissionService_RequestPermission_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PermissionService::RequestPermission",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PermissionService_RequestPermission_Params_Data* params =
          reinterpret_cast<
              internal::PermissionService_RequestPermission_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PermissionDescriptorPtr p_permission{};
      bool p_user_gesture{};
      PermissionService_RequestPermission_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPermission(&p_permission))
        success = false;
      p_user_gesture = input_data_view.user_gesture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PermissionService::Name_, 1, false);
        return false;
      }
      PermissionService::RequestPermissionCallback callback =
          PermissionService_RequestPermission_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestPermission(
std::move(p_permission), 
std::move(p_user_gesture), std::move(callback));
      return true;
    }
    case internal::kPermissionService_RequestPermissions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PermissionService::RequestPermissions",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PermissionService_RequestPermissions_Params_Data* params =
          reinterpret_cast<
              internal::PermissionService_RequestPermissions_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<PermissionDescriptorPtr> p_permission{};
      bool p_user_gesture{};
      PermissionService_RequestPermissions_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPermission(&p_permission))
        success = false;
      p_user_gesture = input_data_view.user_gesture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PermissionService::Name_, 2, false);
        return false;
      }
      PermissionService::RequestPermissionsCallback callback =
          PermissionService_RequestPermissions_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestPermissions(
std::move(p_permission), 
std::move(p_user_gesture), std::move(callback));
      return true;
    }
    case internal::kPermissionService_RevokePermission_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PermissionService::RevokePermission",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PermissionService_RevokePermission_Params_Data* params =
          reinterpret_cast<
              internal::PermissionService_RevokePermission_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PermissionDescriptorPtr p_permission{};
      PermissionService_RevokePermission_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPermission(&p_permission))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PermissionService::Name_, 3, false);
        return false;
      }
      PermissionService::RevokePermissionCallback callback =
          PermissionService_RevokePermission_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RevokePermission(
std::move(p_permission), std::move(callback));
      return true;
    }
    case internal::kPermissionService_AddPermissionObserver_Name: {
      break;
    }
  }
  return false;
}

bool PermissionServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PermissionService RequestValidator");

  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_HasPermission_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPermissionService_RequestPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermission_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermissions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPermissionService_RevokePermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RevokePermission_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPermissionService_AddPermissionObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_AddPermissionObserver_Params_Data>(
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

bool PermissionServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PermissionService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_HasPermission_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPermissionService_RequestPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermission_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermissions_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPermissionService_RevokePermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RevokePermission_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::blink::MidiPermissionDescriptor::DataView, ::blink::mojom::blink::MidiPermissionDescriptorPtr>::Read(
    ::blink::mojom::blink::MidiPermissionDescriptor::DataView input,
    ::blink::mojom::blink::MidiPermissionDescriptorPtr* output) {
  bool success = true;
  ::blink::mojom::blink::MidiPermissionDescriptorPtr result(::blink::mojom::blink::MidiPermissionDescriptor::New());
  
      result->sysex = input.sysex();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ClipboardPermissionDescriptor::DataView, ::blink::mojom::blink::ClipboardPermissionDescriptorPtr>::Read(
    ::blink::mojom::blink::ClipboardPermissionDescriptor::DataView input,
    ::blink::mojom::blink::ClipboardPermissionDescriptorPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ClipboardPermissionDescriptorPtr result(::blink::mojom::blink::ClipboardPermissionDescriptor::New());
  
      result->allowWithoutGesture = input.allowWithoutGesture();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PermissionDescriptor::DataView, ::blink::mojom::blink::PermissionDescriptorPtr>::Read(
    ::blink::mojom::blink::PermissionDescriptor::DataView input,
    ::blink::mojom::blink::PermissionDescriptorPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PermissionDescriptorPtr result(::blink::mojom::blink::PermissionDescriptor::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadExtension(&result->extension))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::blink::PermissionDescriptorExtension::DataView, ::blink::mojom::blink::PermissionDescriptorExtensionPtr>::Read(
    ::blink::mojom::blink::PermissionDescriptorExtension::DataView input,
    ::blink::mojom::blink::PermissionDescriptorExtensionPtr* output) {
  using UnionType = ::blink::mojom::blink::PermissionDescriptorExtension;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::MIDI: {
      ::blink::mojom::blink::MidiPermissionDescriptorPtr result_midi;
      if (!input.ReadMidi(&result_midi))
        return false;

      *output = UnionType::NewMidi(
          std::move(result_midi));
      break;
    }
    case Tag::CLIPBOARD: {
      ::blink::mojom::blink::ClipboardPermissionDescriptorPtr result_clipboard;
      if (!input.ReadClipboard(&result_clipboard))
        return false;

      *output = UnionType::NewClipboard(
          std::move(result_clipboard));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif