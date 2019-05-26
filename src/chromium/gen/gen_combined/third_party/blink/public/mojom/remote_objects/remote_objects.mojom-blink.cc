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

#include "third_party/blink/public/mojom/remote_objects/remote_objects.mojom-blink.h"

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

#include "third_party/blink/public/mojom/remote_objects/remote_objects.mojom-params-data.h"
#include "third_party/blink/public/mojom/remote_objects/remote_objects.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/remote_objects/remote_objects.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
RemoteInvocationResult::RemoteInvocationResult()
    : error(RemoteInvocationError::OK),
      value() {}

RemoteInvocationResult::RemoteInvocationResult(
    RemoteInvocationError error_in,
    RemoteInvocationResultValuePtr value_in)
    : error(std::move(error_in)),
      value(std::move(value_in)) {}

RemoteInvocationResult::~RemoteInvocationResult() = default;

bool RemoteInvocationResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RemoteInvocationArgument::RemoteInvocationArgument() : tag_(Tag::NUMBER_VALUE) {
  data_.number_value = double();
}

RemoteInvocationArgument::~RemoteInvocationArgument() {
  DestroyActive();
}


void RemoteInvocationArgument::set_number_value(
    double number_value) {
  if (tag_ != Tag::NUMBER_VALUE) {
    DestroyActive();
    tag_ = Tag::NUMBER_VALUE;
  }
  data_.number_value = number_value;
}
void RemoteInvocationArgument::set_boolean_value(
    bool boolean_value) {
  if (tag_ != Tag::BOOLEAN_VALUE) {
    DestroyActive();
    tag_ = Tag::BOOLEAN_VALUE;
  }
  data_.boolean_value = boolean_value;
}
void RemoteInvocationArgument::set_string_value(
    const WTF::String& string_value) {
  if (tag_ == Tag::STRING_VALUE) {
    *(data_.string_value) = std::move(string_value);
  } else {
    DestroyActive();
    tag_ = Tag::STRING_VALUE;
    data_.string_value = new WTF::String(
        std::move(string_value));
  }
}
void RemoteInvocationArgument::set_singleton_value(
    SingletonJavaScriptValue singleton_value) {
  if (tag_ != Tag::SINGLETON_VALUE) {
    DestroyActive();
    tag_ = Tag::SINGLETON_VALUE;
  }
  data_.singleton_value = singleton_value;
}
void RemoteInvocationArgument::set_array_value(
    WTF::Vector<RemoteInvocationArgumentPtr> array_value) {
  if (tag_ == Tag::ARRAY_VALUE) {
    *(data_.array_value) = std::move(array_value);
  } else {
    DestroyActive();
    tag_ = Tag::ARRAY_VALUE;
    data_.array_value = new WTF::Vector<RemoteInvocationArgumentPtr>(
        std::move(array_value));
  }
}

void RemoteInvocationArgument::DestroyActive() {
  switch (tag_) {

    case Tag::NUMBER_VALUE:

      break;
    case Tag::BOOLEAN_VALUE:

      break;
    case Tag::STRING_VALUE:

      delete data_.string_value;
      break;
    case Tag::SINGLETON_VALUE:

      break;
    case Tag::ARRAY_VALUE:

      delete data_.array_value;
      break;
  }
}

bool RemoteInvocationArgument::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
RemoteInvocationResultValue::RemoteInvocationResultValue() : tag_(Tag::NUMBER_VALUE) {
  data_.number_value = double();
}

RemoteInvocationResultValue::~RemoteInvocationResultValue() {
  DestroyActive();
}


void RemoteInvocationResultValue::set_number_value(
    double number_value) {
  if (tag_ != Tag::NUMBER_VALUE) {
    DestroyActive();
    tag_ = Tag::NUMBER_VALUE;
  }
  data_.number_value = number_value;
}
void RemoteInvocationResultValue::set_boolean_value(
    bool boolean_value) {
  if (tag_ != Tag::BOOLEAN_VALUE) {
    DestroyActive();
    tag_ = Tag::BOOLEAN_VALUE;
  }
  data_.boolean_value = boolean_value;
}
void RemoteInvocationResultValue::set_string_value(
    const WTF::String& string_value) {
  if (tag_ == Tag::STRING_VALUE) {
    *(data_.string_value) = std::move(string_value);
  } else {
    DestroyActive();
    tag_ = Tag::STRING_VALUE;
    data_.string_value = new WTF::String(
        std::move(string_value));
  }
}
void RemoteInvocationResultValue::set_singleton_value(
    SingletonJavaScriptValue singleton_value) {
  if (tag_ != Tag::SINGLETON_VALUE) {
    DestroyActive();
    tag_ = Tag::SINGLETON_VALUE;
  }
  data_.singleton_value = singleton_value;
}
void RemoteInvocationResultValue::set_object_id(
    int32_t object_id) {
  if (tag_ != Tag::OBJECT_ID) {
    DestroyActive();
    tag_ = Tag::OBJECT_ID;
  }
  data_.object_id = object_id;
}

void RemoteInvocationResultValue::DestroyActive() {
  switch (tag_) {

    case Tag::NUMBER_VALUE:

      break;
    case Tag::BOOLEAN_VALUE:

      break;
    case Tag::STRING_VALUE:

      delete data_.string_value;
      break;
    case Tag::SINGLETON_VALUE:

      break;
    case Tag::OBJECT_ID:

      break;
  }
}

bool RemoteInvocationResultValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char RemoteObjectHost::Name_[] = "blink.mojom.RemoteObjectHost";

RemoteObjectHostProxy::RemoteObjectHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RemoteObjectHostProxy::GetObject(
    int32_t in_object_id, RemoteObjectRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObjectHost::GetObject");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObjectHost_GetObject_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObjectHost_GetObject_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->object_id = in_object_id;
  mojo::internal::Serialize<::blink::mojom::RemoteObjectRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in RemoteObjectHost.GetObject request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObjectHost::Name_);
  message.set_method_name("GetObject");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RemoteObjectHostProxy::ReleaseObject(
    int32_t in_object_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObjectHost::ReleaseObject");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObjectHost_ReleaseObject_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObjectHost_ReleaseObject_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->object_id = in_object_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObjectHost::Name_);
  message.set_method_name("ReleaseObject");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RemoteObjectHostStubDispatch::Accept(
    RemoteObjectHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRemoteObjectHost_GetObject_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemoteObjectHost::GetObject",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemoteObjectHost_GetObject_Params_Data* params =
          reinterpret_cast<internal::RemoteObjectHost_GetObject_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_object_id{};
      RemoteObjectRequest p_request{};
      RemoteObjectHost_GetObject_ParamsDataView input_data_view(params, &serialization_context);
      
      p_object_id = input_data_view.object_id();
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemoteObjectHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetObject(
std::move(p_object_id), 
std::move(p_request));
      return true;
    }
    case internal::kRemoteObjectHost_ReleaseObject_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemoteObjectHost::ReleaseObject",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RemoteObjectHost_ReleaseObject_Params_Data* params =
          reinterpret_cast<internal::RemoteObjectHost_ReleaseObject_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_object_id{};
      RemoteObjectHost_ReleaseObject_ParamsDataView input_data_view(params, &serialization_context);
      
      p_object_id = input_data_view.object_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemoteObjectHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReleaseObject(
std::move(p_object_id));
      return true;
    }
  }
  return false;
}

// static
bool RemoteObjectHostStubDispatch::AcceptWithResponder(
    RemoteObjectHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRemoteObjectHost_GetObject_Name: {
      break;
    }
    case internal::kRemoteObjectHost_ReleaseObject_Name: {
      break;
    }
  }
  return false;
}

bool RemoteObjectHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemoteObjectHost RequestValidator");

  switch (message->header()->name) {
    case internal::kRemoteObjectHost_GetObject_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObjectHost_GetObject_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoteObjectHost_ReleaseObject_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObjectHost_ReleaseObject_Params_Data>(
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

const char RemoteObject::Name_[] = "blink.mojom.RemoteObject";
bool RemoteObject::HasMethod(const WTF::String& name, bool* out_method_exists) {
  NOTREACHED();
  return false;
}
bool RemoteObject::GetMethods(WTF::Vector<WTF::String>* out_method_names) {
  NOTREACHED();
  return false;
}
bool RemoteObject::InvokeMethod(const WTF::String& name, WTF::Vector<RemoteInvocationArgumentPtr> arguments, RemoteInvocationResultPtr* out_result) {
  NOTREACHED();
  return false;
}
class RemoteObject_HasMethod_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RemoteObject_HasMethod_HandleSyncResponse(
      bool* result, bool* out_method_exists)
      : result_(result), out_method_exists_(out_method_exists) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_method_exists_;DISALLOW_COPY_AND_ASSIGN(RemoteObject_HasMethod_HandleSyncResponse);
};

class RemoteObject_HasMethod_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RemoteObject_HasMethod_ForwardToCallback(
      RemoteObject::HasMethodCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RemoteObject::HasMethodCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RemoteObject_HasMethod_ForwardToCallback);
};
class RemoteObject_GetMethods_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RemoteObject_GetMethods_HandleSyncResponse(
      bool* result, WTF::Vector<WTF::String>* out_method_names)
      : result_(result), out_method_names_(out_method_names) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  WTF::Vector<WTF::String>* out_method_names_;DISALLOW_COPY_AND_ASSIGN(RemoteObject_GetMethods_HandleSyncResponse);
};

class RemoteObject_GetMethods_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RemoteObject_GetMethods_ForwardToCallback(
      RemoteObject::GetMethodsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RemoteObject::GetMethodsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RemoteObject_GetMethods_ForwardToCallback);
};
class RemoteObject_InvokeMethod_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RemoteObject_InvokeMethod_HandleSyncResponse(
      bool* result, RemoteInvocationResultPtr* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  RemoteInvocationResultPtr* out_result_;DISALLOW_COPY_AND_ASSIGN(RemoteObject_InvokeMethod_HandleSyncResponse);
};

class RemoteObject_InvokeMethod_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RemoteObject_InvokeMethod_ForwardToCallback(
      RemoteObject::InvokeMethodCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RemoteObject::InvokeMethodCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RemoteObject_InvokeMethod_ForwardToCallback);
};

RemoteObjectProxy::RemoteObjectProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool RemoteObjectProxy::HasMethod(
    const WTF::String& param_name, bool* out_param_method_exists) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObject::HasMethod");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_HasMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_HasMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in RemoteObject.HasMethod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObject::Name_);
  message.set_method_name("HasMethod");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_HasMethod_HandleSyncResponse(
          &result, out_param_method_exists));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RemoteObjectProxy::HasMethod(
    const WTF::String& in_name, HasMethodCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObject::HasMethod");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_HasMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_HasMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in RemoteObject.HasMethod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObject::Name_);
  message.set_method_name("HasMethod");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_HasMethod_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool RemoteObjectProxy::GetMethods(
    WTF::Vector<WTF::String>* out_param_method_names) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObject::GetMethods");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_GetMethods_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_GetMethods_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObject::Name_);
  message.set_method_name("GetMethods");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_GetMethods_HandleSyncResponse(
          &result, out_param_method_names));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RemoteObjectProxy::GetMethods(
    GetMethodsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObject::GetMethods");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_GetMethods_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_GetMethods_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObject::Name_);
  message.set_method_name("GetMethods");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_GetMethods_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool RemoteObjectProxy::InvokeMethod(
    const WTF::String& param_name, WTF::Vector<RemoteInvocationArgumentPtr> param_arguments, RemoteInvocationResultPtr* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObject::InvokeMethod");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_InvokeMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_InvokeMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in RemoteObject.InvokeMethod request");
  typename decltype(params->arguments)::BaseType::BufferWriter
      arguments_writer;
  const mojo::internal::ContainerValidateParams arguments_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::RemoteInvocationArgumentDataView>>(
      param_arguments, buffer, &arguments_writer, &arguments_validate_params,
      &serialization_context);
  params->arguments.Set(
      arguments_writer.is_null() ? nullptr : arguments_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->arguments.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null arguments in RemoteObject.InvokeMethod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObject::Name_);
  message.set_method_name("InvokeMethod");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_InvokeMethod_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RemoteObjectProxy::InvokeMethod(
    const WTF::String& in_name, WTF::Vector<RemoteInvocationArgumentPtr> in_arguments, InvokeMethodCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObject::InvokeMethod");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_InvokeMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_InvokeMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in RemoteObject.InvokeMethod request");
  typename decltype(params->arguments)::BaseType::BufferWriter
      arguments_writer;
  const mojo::internal::ContainerValidateParams arguments_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::RemoteInvocationArgumentDataView>>(
      in_arguments, buffer, &arguments_writer, &arguments_validate_params,
      &serialization_context);
  params->arguments.Set(
      arguments_writer.is_null() ? nullptr : arguments_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->arguments.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null arguments in RemoteObject.InvokeMethod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObject::Name_);
  message.set_method_name("InvokeMethod");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RemoteObject_InvokeMethod_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class RemoteObject_HasMethod_ProxyToResponder {
 public:
  static RemoteObject::HasMethodCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RemoteObject_HasMethod_ProxyToResponder> proxy(
        new RemoteObject_HasMethod_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RemoteObject_HasMethod_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RemoteObject_HasMethod_ProxyToResponder() {
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
  RemoteObject_HasMethod_ProxyToResponder(
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
        << "RemoteObject::HasMethodCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_method_exists);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RemoteObject_HasMethod_ProxyToResponder);
};

bool RemoteObject_HasMethod_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObject::HasMethodCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RemoteObject_HasMethod_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RemoteObject_HasMethod_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_method_exists{};
  RemoteObject_HasMethod_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_method_exists = input_data_view.method_exists();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        RemoteObject::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_method_exists));
  return true;
}

void RemoteObject_HasMethod_ProxyToResponder::Run(
    bool in_method_exists) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_HasMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_HasMethod_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->method_exists = in_method_exists;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::RemoteObject::HasMethodCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObject::Name_);
  message.set_method_name("HasMethod");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RemoteObject_HasMethod_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RemoteObject_HasMethod_ResponseParams_Data* params =
      reinterpret_cast<internal::RemoteObject_HasMethod_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_method_exists{};
  RemoteObject_HasMethod_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_method_exists = input_data_view.method_exists();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        RemoteObject::Name_, 0, true);
    return false;
  }
  *out_method_exists_ = std::move(p_method_exists);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class RemoteObject_GetMethods_ProxyToResponder {
 public:
  static RemoteObject::GetMethodsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RemoteObject_GetMethods_ProxyToResponder> proxy(
        new RemoteObject_GetMethods_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RemoteObject_GetMethods_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RemoteObject_GetMethods_ProxyToResponder() {
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
  RemoteObject_GetMethods_ProxyToResponder(
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
        << "RemoteObject::GetMethodsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::Vector<WTF::String>& in_method_names);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RemoteObject_GetMethods_ProxyToResponder);
};

bool RemoteObject_GetMethods_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObject::GetMethodsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RemoteObject_GetMethods_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RemoteObject_GetMethods_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<WTF::String> p_method_names{};
  RemoteObject_GetMethods_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMethodNames(&p_method_names))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        RemoteObject::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_method_names));
  return true;
}

void RemoteObject_GetMethods_ProxyToResponder::Run(
    const WTF::Vector<WTF::String>& in_method_names) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_GetMethods_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_GetMethods_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->method_names)::BaseType::BufferWriter
      method_names_writer;
  const mojo::internal::ContainerValidateParams method_names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_method_names, buffer, &method_names_writer, &method_names_validate_params,
      &serialization_context);
  params->method_names.Set(
      method_names_writer.is_null() ? nullptr : method_names_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->method_names.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null method_names in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::RemoteObject::GetMethodsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObject::Name_);
  message.set_method_name("GetMethods");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RemoteObject_GetMethods_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RemoteObject_GetMethods_ResponseParams_Data* params =
      reinterpret_cast<internal::RemoteObject_GetMethods_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<WTF::String> p_method_names{};
  RemoteObject_GetMethods_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMethodNames(&p_method_names))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        RemoteObject::Name_, 1, true);
    return false;
  }
  *out_method_names_ = std::move(p_method_names);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class RemoteObject_InvokeMethod_ProxyToResponder {
 public:
  static RemoteObject::InvokeMethodCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RemoteObject_InvokeMethod_ProxyToResponder> proxy(
        new RemoteObject_InvokeMethod_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RemoteObject_InvokeMethod_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RemoteObject_InvokeMethod_ProxyToResponder() {
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
  RemoteObject_InvokeMethod_ProxyToResponder(
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
        << "RemoteObject::InvokeMethodCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      RemoteInvocationResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RemoteObject_InvokeMethod_ProxyToResponder);
};

bool RemoteObject_InvokeMethod_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::RemoteObject::InvokeMethodCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RemoteObject_InvokeMethod_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RemoteObject_InvokeMethod_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  RemoteInvocationResultPtr p_result{};
  RemoteObject_InvokeMethod_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        RemoteObject::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void RemoteObject_InvokeMethod_ProxyToResponder::Run(
    RemoteInvocationResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRemoteObject_InvokeMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::RemoteObject_InvokeMethod_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::RemoteInvocationResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::RemoteObject::InvokeMethodCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RemoteObject::Name_);
  message.set_method_name("InvokeMethod");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RemoteObject_InvokeMethod_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RemoteObject_InvokeMethod_ResponseParams_Data* params =
      reinterpret_cast<internal::RemoteObject_InvokeMethod_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  RemoteInvocationResultPtr p_result{};
  RemoteObject_InvokeMethod_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        RemoteObject::Name_, 2, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool RemoteObjectStubDispatch::Accept(
    RemoteObject* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRemoteObject_HasMethod_Name: {
      break;
    }
    case internal::kRemoteObject_GetMethods_Name: {
      break;
    }
    case internal::kRemoteObject_InvokeMethod_Name: {
      break;
    }
  }
  return false;
}

// static
bool RemoteObjectStubDispatch::AcceptWithResponder(
    RemoteObject* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRemoteObject_HasMethod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemoteObject::HasMethod",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::RemoteObject_HasMethod_Params_Data* params =
          reinterpret_cast<
              internal::RemoteObject_HasMethod_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_name{};
      RemoteObject_HasMethod_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemoteObject::Name_, 0, false);
        return false;
      }
      RemoteObject::HasMethodCallback callback =
          RemoteObject_HasMethod_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->HasMethod(
std::move(p_name), std::move(callback));
      return true;
    }
    case internal::kRemoteObject_GetMethods_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemoteObject::GetMethods",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::RemoteObject_GetMethods_Params_Data* params =
          reinterpret_cast<
              internal::RemoteObject_GetMethods_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RemoteObject_GetMethods_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemoteObject::Name_, 1, false);
        return false;
      }
      RemoteObject::GetMethodsCallback callback =
          RemoteObject_GetMethods_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetMethods(std::move(callback));
      return true;
    }
    case internal::kRemoteObject_InvokeMethod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RemoteObject::InvokeMethod",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::RemoteObject_InvokeMethod_Params_Data* params =
          reinterpret_cast<
              internal::RemoteObject_InvokeMethod_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_name{};
      WTF::Vector<RemoteInvocationArgumentPtr> p_arguments{};
      RemoteObject_InvokeMethod_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadArguments(&p_arguments))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RemoteObject::Name_, 2, false);
        return false;
      }
      RemoteObject::InvokeMethodCallback callback =
          RemoteObject_InvokeMethod_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InvokeMethod(
std::move(p_name), 
std::move(p_arguments), std::move(callback));
      return true;
    }
  }
  return false;
}

bool RemoteObjectRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemoteObject RequestValidator");

  switch (message->header()->name) {
    case internal::kRemoteObject_HasMethod_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_HasMethod_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoteObject_GetMethods_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_GetMethods_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoteObject_InvokeMethod_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_InvokeMethod_Params_Data>(
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

bool RemoteObjectResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RemoteObject ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRemoteObject_HasMethod_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_HasMethod_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoteObject_GetMethods_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_GetMethods_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRemoteObject_InvokeMethod_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RemoteObject_InvokeMethod_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::blink::RemoteInvocationResult::DataView, ::blink::mojom::blink::RemoteInvocationResultPtr>::Read(
    ::blink::mojom::blink::RemoteInvocationResult::DataView input,
    ::blink::mojom::blink::RemoteInvocationResultPtr* output) {
  bool success = true;
  ::blink::mojom::blink::RemoteInvocationResultPtr result(::blink::mojom::blink::RemoteInvocationResult::New());
  
      if (!input.ReadError(&result->error))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::blink::RemoteInvocationArgument::DataView, ::blink::mojom::blink::RemoteInvocationArgumentPtr>::Read(
    ::blink::mojom::blink::RemoteInvocationArgument::DataView input,
    ::blink::mojom::blink::RemoteInvocationArgumentPtr* output) {
  using UnionType = ::blink::mojom::blink::RemoteInvocationArgument;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::NUMBER_VALUE: {
      *output = UnionType::NewNumberValue(input.number_value());
      break;
    }
    case Tag::BOOLEAN_VALUE: {
      *output = UnionType::NewBooleanValue(input.boolean_value());
      break;
    }
    case Tag::STRING_VALUE: {
      WTF::String result_string_value;
      if (!input.ReadStringValue(&result_string_value))
        return false;

      *output = UnionType::NewStringValue(
          std::move(result_string_value));
      break;
    }
    case Tag::SINGLETON_VALUE: {
      ::blink::mojom::blink::SingletonJavaScriptValue result_singleton_value;
      if (!input.ReadSingletonValue(&result_singleton_value))
        return false;

      *output = UnionType::NewSingletonValue(result_singleton_value);
      break;
    }
    case Tag::ARRAY_VALUE: {
      WTF::Vector<::blink::mojom::blink::RemoteInvocationArgumentPtr> result_array_value;
      if (!input.ReadArrayValue(&result_array_value))
        return false;

      *output = UnionType::NewArrayValue(
          std::move(result_array_value));
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::blink::mojom::blink::RemoteInvocationResultValue::DataView, ::blink::mojom::blink::RemoteInvocationResultValuePtr>::Read(
    ::blink::mojom::blink::RemoteInvocationResultValue::DataView input,
    ::blink::mojom::blink::RemoteInvocationResultValuePtr* output) {
  using UnionType = ::blink::mojom::blink::RemoteInvocationResultValue;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::NUMBER_VALUE: {
      *output = UnionType::NewNumberValue(input.number_value());
      break;
    }
    case Tag::BOOLEAN_VALUE: {
      *output = UnionType::NewBooleanValue(input.boolean_value());
      break;
    }
    case Tag::STRING_VALUE: {
      WTF::String result_string_value;
      if (!input.ReadStringValue(&result_string_value))
        return false;

      *output = UnionType::NewStringValue(
          std::move(result_string_value));
      break;
    }
    case Tag::SINGLETON_VALUE: {
      ::blink::mojom::blink::SingletonJavaScriptValue result_singleton_value;
      if (!input.ReadSingletonValue(&result_singleton_value))
        return false;

      *output = UnionType::NewSingletonValue(result_singleton_value);
      break;
    }
    case Tag::OBJECT_ID: {
      *output = UnionType::NewObjectId(input.object_id());
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