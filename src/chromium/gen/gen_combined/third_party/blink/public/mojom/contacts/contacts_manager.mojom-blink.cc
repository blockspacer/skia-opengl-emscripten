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

#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-blink.h"

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

#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-params-data.h"
#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
ContactInfo::ContactInfo()
    : name(),
      email(),
      tel() {}

ContactInfo::ContactInfo(
    const base::Optional<WTF::Vector<WTF::String>>& name_in,
    const base::Optional<WTF::Vector<WTF::String>>& email_in,
    const base::Optional<WTF::Vector<WTF::String>>& tel_in)
    : name(std::move(name_in)),
      email(std::move(email_in)),
      tel(std::move(tel_in)) {}

ContactInfo::~ContactInfo() = default;

bool ContactInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ContactsManager::Name_[] = "blink.mojom.ContactsManager";

class ContactsManager_Select_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContactsManager_Select_ForwardToCallback(
      ContactsManager::SelectCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContactsManager::SelectCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ContactsManager_Select_ForwardToCallback);
};

ContactsManagerProxy::ContactsManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ContactsManagerProxy::Select(
    bool in_multiple, bool in_include_names, bool in_include_emails, bool in_include_tel, SelectCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContactsManager::Select");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContactsManager_Select_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ContactsManager_Select_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->multiple = in_multiple;
  params->include_names = in_include_names;
  params->include_emails = in_include_emails;
  params->include_tel = in_include_tel;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContactsManager::Name_);
  message.set_method_name("Select");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContactsManager_Select_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ContactsManager_Select_ProxyToResponder {
 public:
  static ContactsManager::SelectCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContactsManager_Select_ProxyToResponder> proxy(
        new ContactsManager_Select_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ContactsManager_Select_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContactsManager_Select_ProxyToResponder() {
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
  ContactsManager_Select_ProxyToResponder(
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
        << "ContactsManager::SelectCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Optional<WTF::Vector<ContactInfoPtr>> in_contacts);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ContactsManager_Select_ProxyToResponder);
};

bool ContactsManager_Select_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ContactsManager::SelectCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ContactsManager_Select_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContactsManager_Select_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<WTF::Vector<ContactInfoPtr>> p_contacts{};
  ContactsManager_Select_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadContacts(&p_contacts))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ContactsManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_contacts));
  return true;
}

void ContactsManager_Select_ProxyToResponder::Run(
    base::Optional<WTF::Vector<ContactInfoPtr>> in_contacts) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContactsManager_Select_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ContactsManager_Select_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->contacts)::BaseType::BufferWriter
      contacts_writer;
  const mojo::internal::ContainerValidateParams contacts_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ContactInfoDataView>>(
      in_contacts, buffer, &contacts_writer, &contacts_validate_params,
      &serialization_context);
  params->contacts.Set(
      contacts_writer.is_null() ? nullptr : contacts_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ContactsManager::SelectCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContactsManager::Name_);
  message.set_method_name("Select");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ContactsManagerStubDispatch::Accept(
    ContactsManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kContactsManager_Select_Name: {
      break;
    }
  }
  return false;
}

// static
bool ContactsManagerStubDispatch::AcceptWithResponder(
    ContactsManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kContactsManager_Select_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContactsManager::Select",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ContactsManager_Select_Params_Data* params =
          reinterpret_cast<
              internal::ContactsManager_Select_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_multiple{};
      bool p_include_names{};
      bool p_include_emails{};
      bool p_include_tel{};
      ContactsManager_Select_ParamsDataView input_data_view(params, &serialization_context);
      
      p_multiple = input_data_view.multiple();
      p_include_names = input_data_view.include_names();
      p_include_emails = input_data_view.include_emails();
      p_include_tel = input_data_view.include_tel();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContactsManager::Name_, 0, false);
        return false;
      }
      ContactsManager::SelectCallback callback =
          ContactsManager_Select_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Select(
std::move(p_multiple), 
std::move(p_include_names), 
std::move(p_include_emails), 
std::move(p_include_tel), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ContactsManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ContactsManager RequestValidator");

  switch (message->header()->name) {
    case internal::kContactsManager_Select_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContactsManager_Select_Params_Data>(
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

bool ContactsManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ContactsManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kContactsManager_Select_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContactsManager_Select_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::blink::ContactInfo::DataView, ::blink::mojom::blink::ContactInfoPtr>::Read(
    ::blink::mojom::blink::ContactInfo::DataView input,
    ::blink::mojom::blink::ContactInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ContactInfoPtr result(::blink::mojom::blink::ContactInfo::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadEmail(&result->email))
        success = false;
      if (!input.ReadTel(&result->tel))
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