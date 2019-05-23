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

#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom.h"

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

#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-params-data.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
NativeFileSystemEntry::NativeFileSystemEntry()
    : entry_handle(),
      name() {}

NativeFileSystemEntry::NativeFileSystemEntry(
    NativeFileSystemHandlePtr entry_handle_in,
    const std::string& name_in)
    : entry_handle(std::move(entry_handle_in)),
      name(std::move(name_in)) {}

NativeFileSystemEntry::~NativeFileSystemEntry() = default;

bool NativeFileSystemEntry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NativeFileSystemHandle::NativeFileSystemHandle() : tag_(Tag::FILE) {
  data_.file = new ::blink::mojom::NativeFileSystemFileHandlePtrInfo;
}

NativeFileSystemHandle::~NativeFileSystemHandle() {
  DestroyActive();
}


void NativeFileSystemHandle::set_file(
    ::blink::mojom::NativeFileSystemFileHandlePtrInfo file) {
  if (tag_ == Tag::FILE) {
    *(data_.file) = std::move(file);
  } else {
    DestroyActive();
    tag_ = Tag::FILE;
    data_.file = new ::blink::mojom::NativeFileSystemFileHandlePtrInfo(
        std::move(file));
  }
}
void NativeFileSystemHandle::set_directory(
    NativeFileSystemDirectoryHandlePtrInfo directory) {
  if (tag_ == Tag::DIRECTORY) {
    *(data_.directory) = std::move(directory);
  } else {
    DestroyActive();
    tag_ = Tag::DIRECTORY;
    data_.directory = new NativeFileSystemDirectoryHandlePtrInfo(
        std::move(directory));
  }
}

void NativeFileSystemHandle::DestroyActive() {
  switch (tag_) {

    case Tag::FILE:

      delete data_.file;
      break;
    case Tag::DIRECTORY:

      delete data_.directory;
      break;
  }
}

bool NativeFileSystemHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char NativeFileSystemDirectoryHandle::Name_[] = "blink.mojom.NativeFileSystemDirectoryHandle";

class NativeFileSystemDirectoryHandle_GetFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemDirectoryHandle_GetFile_ForwardToCallback(
      NativeFileSystemDirectoryHandle::GetFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemDirectoryHandle::GetFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_GetFile_ForwardToCallback);
};

class NativeFileSystemDirectoryHandle_GetDirectory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemDirectoryHandle_GetDirectory_ForwardToCallback(
      NativeFileSystemDirectoryHandle::GetDirectoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemDirectoryHandle::GetDirectoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_GetDirectory_ForwardToCallback);
};

class NativeFileSystemDirectoryHandle_GetEntries_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemDirectoryHandle_GetEntries_ForwardToCallback(
      NativeFileSystemDirectoryHandle::GetEntriesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemDirectoryHandle::GetEntriesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_GetEntries_ForwardToCallback);
};

class NativeFileSystemDirectoryHandle_MoveFrom_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemDirectoryHandle_MoveFrom_ForwardToCallback(
      NativeFileSystemDirectoryHandle::MoveFromCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemDirectoryHandle::MoveFromCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_MoveFrom_ForwardToCallback);
};

class NativeFileSystemDirectoryHandle_CopyFrom_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemDirectoryHandle_CopyFrom_ForwardToCallback(
      NativeFileSystemDirectoryHandle::CopyFromCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemDirectoryHandle::CopyFromCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_CopyFrom_ForwardToCallback);
};

class NativeFileSystemDirectoryHandle_Remove_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemDirectoryHandle_Remove_ForwardToCallback(
      NativeFileSystemDirectoryHandle::RemoveCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemDirectoryHandle::RemoveCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_Remove_ForwardToCallback);
};

NativeFileSystemDirectoryHandleProxy::NativeFileSystemDirectoryHandleProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NativeFileSystemDirectoryHandleProxy::GetFile(
    const std::string& in_name, bool in_create, GetFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_GetFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_GetFile_Params_Data::BufferWriter
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
      "null name in NativeFileSystemDirectoryHandle.GetFile request");
  params->create = in_create;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("GetFile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemDirectoryHandle_GetFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemDirectoryHandleProxy::GetDirectory(
    const std::string& in_name, bool in_create, GetDirectoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetDirectory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_GetDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_GetDirectory_Params_Data::BufferWriter
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
      "null name in NativeFileSystemDirectoryHandle.GetDirectory request");
  params->create = in_create;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("GetDirectory");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemDirectoryHandle_GetDirectory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemDirectoryHandleProxy::GetEntries(
    GetEntriesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetEntries");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_GetEntries_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_GetEntries_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("GetEntries");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemDirectoryHandle_GetEntries_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemDirectoryHandleProxy::MoveFrom(
    ::blink::mojom::NativeFileSystemTransferTokenPtr in_source, const std::string& in_name, MoveFromCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::MoveFrom");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_MoveFrom_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_MoveFrom_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemTransferTokenPtrDataView>(
      in_source, &params->source, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->source),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid source in NativeFileSystemDirectoryHandle.MoveFrom request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in NativeFileSystemDirectoryHandle.MoveFrom request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("MoveFrom");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemDirectoryHandle_MoveFrom_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemDirectoryHandleProxy::CopyFrom(
    ::blink::mojom::NativeFileSystemTransferTokenPtr in_source, const std::string& in_name, CopyFromCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::CopyFrom");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_CopyFrom_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_CopyFrom_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemTransferTokenPtrDataView>(
      in_source, &params->source, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->source),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid source in NativeFileSystemDirectoryHandle.CopyFrom request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in NativeFileSystemDirectoryHandle.CopyFrom request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("CopyFrom");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemDirectoryHandle_CopyFrom_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemDirectoryHandleProxy::Remove(
    bool in_recurse, RemoveCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::Remove");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_Remove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_Remove_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->recurse = in_recurse;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("Remove");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemDirectoryHandle_Remove_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemDirectoryHandleProxy::Transfer(
    ::blink::mojom::NativeFileSystemTransferTokenRequest in_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::Transfer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_Transfer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_Transfer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemTransferTokenRequestDataView>(
      in_token, &params->token, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->token),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid token in NativeFileSystemDirectoryHandle.Transfer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("Transfer");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NativeFileSystemDirectoryHandle_GetFile_ProxyToResponder {
 public:
  static NativeFileSystemDirectoryHandle::GetFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemDirectoryHandle_GetFile_ProxyToResponder> proxy(
        new NativeFileSystemDirectoryHandle_GetFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemDirectoryHandle_GetFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemDirectoryHandle_GetFile_ProxyToResponder() {
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
  NativeFileSystemDirectoryHandle_GetFile_ProxyToResponder(
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
        << "NativeFileSystemDirectoryHandle::GetFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::NativeFileSystemErrorPtr in_result, ::blink::mojom::NativeFileSystemFileHandlePtr in_file);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_GetFile_ProxyToResponder);
};

bool NativeFileSystemDirectoryHandle_GetFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::NativeFileSystemErrorPtr p_result{};
  ::blink::mojom::NativeFileSystemFileHandlePtr p_file{};
  NativeFileSystemDirectoryHandle_GetFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_file =
      input_data_view.TakeFile<decltype(p_file)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemDirectoryHandle::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_file));
  return true;
}

void NativeFileSystemDirectoryHandle_GetFile_ProxyToResponder::Run(
    ::blink::mojom::NativeFileSystemErrorPtr in_result, ::blink::mojom::NativeFileSystemFileHandlePtr in_file) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_GetFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemErrorDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemFileHandlePtrDataView>(
      in_file, &params->file, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetFileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("GetFile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeFileSystemDirectoryHandle_GetDirectory_ProxyToResponder {
 public:
  static NativeFileSystemDirectoryHandle::GetDirectoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemDirectoryHandle_GetDirectory_ProxyToResponder> proxy(
        new NativeFileSystemDirectoryHandle_GetDirectory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemDirectoryHandle_GetDirectory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemDirectoryHandle_GetDirectory_ProxyToResponder() {
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
  NativeFileSystemDirectoryHandle_GetDirectory_ProxyToResponder(
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
        << "NativeFileSystemDirectoryHandle::GetDirectoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::NativeFileSystemErrorPtr in_result, NativeFileSystemDirectoryHandlePtr in_directory);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_GetDirectory_ProxyToResponder);
};

bool NativeFileSystemDirectoryHandle_GetDirectory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetDirectoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::NativeFileSystemErrorPtr p_result{};
  NativeFileSystemDirectoryHandlePtr p_directory{};
  NativeFileSystemDirectoryHandle_GetDirectory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_directory =
      input_data_view.TakeDirectory<decltype(p_directory)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemDirectoryHandle::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_directory));
  return true;
}

void NativeFileSystemDirectoryHandle_GetDirectory_ProxyToResponder::Run(
    ::blink::mojom::NativeFileSystemErrorPtr in_result, NativeFileSystemDirectoryHandlePtr in_directory) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_GetDirectory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemErrorDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemDirectoryHandlePtrDataView>(
      in_directory, &params->directory, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetDirectoryCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("GetDirectory");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeFileSystemDirectoryHandle_GetEntries_ProxyToResponder {
 public:
  static NativeFileSystemDirectoryHandle::GetEntriesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemDirectoryHandle_GetEntries_ProxyToResponder> proxy(
        new NativeFileSystemDirectoryHandle_GetEntries_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemDirectoryHandle_GetEntries_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemDirectoryHandle_GetEntries_ProxyToResponder() {
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
  NativeFileSystemDirectoryHandle_GetEntries_ProxyToResponder(
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
        << "NativeFileSystemDirectoryHandle::GetEntriesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::NativeFileSystemErrorPtr in_result, std::vector<NativeFileSystemEntryPtr> in_entries);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_GetEntries_ProxyToResponder);
};

bool NativeFileSystemDirectoryHandle_GetEntries_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetEntriesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::NativeFileSystemErrorPtr p_result{};
  std::vector<NativeFileSystemEntryPtr> p_entries{};
  NativeFileSystemDirectoryHandle_GetEntries_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemDirectoryHandle::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_entries));
  return true;
}

void NativeFileSystemDirectoryHandle_GetEntries_ProxyToResponder::Run(
    ::blink::mojom::NativeFileSystemErrorPtr in_result, std::vector<NativeFileSystemEntryPtr> in_entries) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_GetEntries_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemErrorDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  typename decltype(params->entries)::BaseType::BufferWriter
      entries_writer;
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::NativeFileSystemEntryDataView>>(
      in_entries, buffer, &entries_writer, &entries_validate_params,
      &serialization_context);
  params->entries.Set(
      entries_writer.is_null() ? nullptr : entries_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->entries.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null entries in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetEntriesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("GetEntries");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeFileSystemDirectoryHandle_MoveFrom_ProxyToResponder {
 public:
  static NativeFileSystemDirectoryHandle::MoveFromCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemDirectoryHandle_MoveFrom_ProxyToResponder> proxy(
        new NativeFileSystemDirectoryHandle_MoveFrom_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemDirectoryHandle_MoveFrom_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemDirectoryHandle_MoveFrom_ProxyToResponder() {
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
  NativeFileSystemDirectoryHandle_MoveFrom_ProxyToResponder(
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
        << "NativeFileSystemDirectoryHandle::MoveFromCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::NativeFileSystemErrorPtr in_result, NativeFileSystemEntryPtr in_entry);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_MoveFrom_ProxyToResponder);
};

bool NativeFileSystemDirectoryHandle_MoveFrom_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::MoveFromCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::NativeFileSystemErrorPtr p_result{};
  NativeFileSystemEntryPtr p_entry{};
  NativeFileSystemDirectoryHandle_MoveFrom_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadEntry(&p_entry))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemDirectoryHandle::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_entry));
  return true;
}

void NativeFileSystemDirectoryHandle_MoveFrom_ProxyToResponder::Run(
    ::blink::mojom::NativeFileSystemErrorPtr in_result, NativeFileSystemEntryPtr in_entry) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_MoveFrom_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemErrorDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  typename decltype(params->entry)::BaseType::BufferWriter
      entry_writer;
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemEntryDataView>(
      in_entry, buffer, &entry_writer, &serialization_context);
  params->entry.Set(
      entry_writer.is_null() ? nullptr : entry_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::MoveFromCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("MoveFrom");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeFileSystemDirectoryHandle_CopyFrom_ProxyToResponder {
 public:
  static NativeFileSystemDirectoryHandle::CopyFromCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemDirectoryHandle_CopyFrom_ProxyToResponder> proxy(
        new NativeFileSystemDirectoryHandle_CopyFrom_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemDirectoryHandle_CopyFrom_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemDirectoryHandle_CopyFrom_ProxyToResponder() {
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
  NativeFileSystemDirectoryHandle_CopyFrom_ProxyToResponder(
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
        << "NativeFileSystemDirectoryHandle::CopyFromCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::NativeFileSystemErrorPtr in_result, NativeFileSystemEntryPtr in_entry);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_CopyFrom_ProxyToResponder);
};

bool NativeFileSystemDirectoryHandle_CopyFrom_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::CopyFromCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::NativeFileSystemErrorPtr p_result{};
  NativeFileSystemEntryPtr p_entry{};
  NativeFileSystemDirectoryHandle_CopyFrom_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadEntry(&p_entry))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemDirectoryHandle::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_entry));
  return true;
}

void NativeFileSystemDirectoryHandle_CopyFrom_ProxyToResponder::Run(
    ::blink::mojom::NativeFileSystemErrorPtr in_result, NativeFileSystemEntryPtr in_entry) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_CopyFrom_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemErrorDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  typename decltype(params->entry)::BaseType::BufferWriter
      entry_writer;
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemEntryDataView>(
      in_entry, buffer, &entry_writer, &serialization_context);
  params->entry.Set(
      entry_writer.is_null() ? nullptr : entry_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::CopyFromCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("CopyFrom");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeFileSystemDirectoryHandle_Remove_ProxyToResponder {
 public:
  static NativeFileSystemDirectoryHandle::RemoveCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemDirectoryHandle_Remove_ProxyToResponder> proxy(
        new NativeFileSystemDirectoryHandle_Remove_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemDirectoryHandle_Remove_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemDirectoryHandle_Remove_ProxyToResponder() {
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
  NativeFileSystemDirectoryHandle_Remove_ProxyToResponder(
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
        << "NativeFileSystemDirectoryHandle::RemoveCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::NativeFileSystemErrorPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandle_Remove_ProxyToResponder);
};

bool NativeFileSystemDirectoryHandle_Remove_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::RemoveCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::NativeFileSystemErrorPtr p_result{};
  NativeFileSystemDirectoryHandle_Remove_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemDirectoryHandle::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void NativeFileSystemDirectoryHandle_Remove_ProxyToResponder::Run(
    ::blink::mojom::NativeFileSystemErrorPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemDirectoryHandle_Remove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemErrorDataView>(
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::RemoveCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemDirectoryHandle::Name_);
  message.set_method_name("Remove");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NativeFileSystemDirectoryHandleStubDispatch::Accept(
    NativeFileSystemDirectoryHandle* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNativeFileSystemDirectoryHandle_GetFile_Name: {
      break;
    }
    case internal::kNativeFileSystemDirectoryHandle_GetDirectory_Name: {
      break;
    }
    case internal::kNativeFileSystemDirectoryHandle_GetEntries_Name: {
      break;
    }
    case internal::kNativeFileSystemDirectoryHandle_MoveFrom_Name: {
      break;
    }
    case internal::kNativeFileSystemDirectoryHandle_CopyFrom_Name: {
      break;
    }
    case internal::kNativeFileSystemDirectoryHandle_Remove_Name: {
      break;
    }
    case internal::kNativeFileSystemDirectoryHandle_Transfer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::Transfer",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NativeFileSystemDirectoryHandle_Transfer_Params_Data* params =
          reinterpret_cast<internal::NativeFileSystemDirectoryHandle_Transfer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::NativeFileSystemTransferTokenRequest p_token{};
      NativeFileSystemDirectoryHandle_Transfer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_token =
          input_data_view.TakeToken<decltype(p_token)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemDirectoryHandle::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Transfer(
std::move(p_token));
      return true;
    }
  }
  return false;
}

// static
bool NativeFileSystemDirectoryHandleStubDispatch::AcceptWithResponder(
    NativeFileSystemDirectoryHandle* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNativeFileSystemDirectoryHandle_GetFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemDirectoryHandle_GetFile_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemDirectoryHandle_GetFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      bool p_create{};
      NativeFileSystemDirectoryHandle_GetFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_create = input_data_view.create();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemDirectoryHandle::Name_, 0, false);
        return false;
      }
      NativeFileSystemDirectoryHandle::GetFileCallback callback =
          NativeFileSystemDirectoryHandle_GetFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetFile(
std::move(p_name), 
std::move(p_create), std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_GetDirectory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetDirectory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemDirectoryHandle_GetDirectory_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemDirectoryHandle_GetDirectory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      bool p_create{};
      NativeFileSystemDirectoryHandle_GetDirectory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_create = input_data_view.create();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemDirectoryHandle::Name_, 1, false);
        return false;
      }
      NativeFileSystemDirectoryHandle::GetDirectoryCallback callback =
          NativeFileSystemDirectoryHandle_GetDirectory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDirectory(
std::move(p_name), 
std::move(p_create), std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_GetEntries_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::GetEntries",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemDirectoryHandle_GetEntries_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemDirectoryHandle_GetEntries_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NativeFileSystemDirectoryHandle_GetEntries_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemDirectoryHandle::Name_, 2, false);
        return false;
      }
      NativeFileSystemDirectoryHandle::GetEntriesCallback callback =
          NativeFileSystemDirectoryHandle_GetEntries_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetEntries(std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_MoveFrom_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::MoveFrom",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemDirectoryHandle_MoveFrom_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemDirectoryHandle_MoveFrom_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::NativeFileSystemTransferTokenPtr p_source{};
      std::string p_name{};
      NativeFileSystemDirectoryHandle_MoveFrom_ParamsDataView input_data_view(params, &serialization_context);
      
      p_source =
          input_data_view.TakeSource<decltype(p_source)>();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemDirectoryHandle::Name_, 3, false);
        return false;
      }
      NativeFileSystemDirectoryHandle::MoveFromCallback callback =
          NativeFileSystemDirectoryHandle_MoveFrom_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MoveFrom(
std::move(p_source), 
std::move(p_name), std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_CopyFrom_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::CopyFrom",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemDirectoryHandle_CopyFrom_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemDirectoryHandle_CopyFrom_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::NativeFileSystemTransferTokenPtr p_source{};
      std::string p_name{};
      NativeFileSystemDirectoryHandle_CopyFrom_ParamsDataView input_data_view(params, &serialization_context);
      
      p_source =
          input_data_view.TakeSource<decltype(p_source)>();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemDirectoryHandle::Name_, 4, false);
        return false;
      }
      NativeFileSystemDirectoryHandle::CopyFromCallback callback =
          NativeFileSystemDirectoryHandle_CopyFrom_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CopyFrom(
std::move(p_source), 
std::move(p_name), std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_Remove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemDirectoryHandle::Remove",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemDirectoryHandle_Remove_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemDirectoryHandle_Remove_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_recurse{};
      NativeFileSystemDirectoryHandle_Remove_ParamsDataView input_data_view(params, &serialization_context);
      
      p_recurse = input_data_view.recurse();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemDirectoryHandle::Name_, 5, false);
        return false;
      }
      NativeFileSystemDirectoryHandle::RemoveCallback callback =
          NativeFileSystemDirectoryHandle_Remove_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Remove(
std::move(p_recurse), std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_Transfer_Name: {
      break;
    }
  }
  return false;
}

bool NativeFileSystemDirectoryHandleRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeFileSystemDirectoryHandle RequestValidator");

  switch (message->header()->name) {
    case internal::kNativeFileSystemDirectoryHandle_GetFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_GetFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_GetDirectory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_GetDirectory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_GetEntries_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_GetEntries_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_MoveFrom_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_MoveFrom_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_CopyFrom_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_CopyFrom_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_Remove_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_Remove_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_Transfer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_Transfer_Params_Data>(
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

bool NativeFileSystemDirectoryHandleResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeFileSystemDirectoryHandle ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNativeFileSystemDirectoryHandle_GetFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_GetFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_GetDirectory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_GetDirectory_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_GetEntries_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_GetEntries_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_MoveFrom_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_MoveFrom_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_CopyFrom_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_CopyFrom_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemDirectoryHandle_Remove_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemDirectoryHandle_Remove_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::NativeFileSystemEntry::DataView, ::blink::mojom::NativeFileSystemEntryPtr>::Read(
    ::blink::mojom::NativeFileSystemEntry::DataView input,
    ::blink::mojom::NativeFileSystemEntryPtr* output) {
  bool success = true;
  ::blink::mojom::NativeFileSystemEntryPtr result(::blink::mojom::NativeFileSystemEntry::New());
  
      if (!input.ReadEntryHandle(&result->entry_handle))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::NativeFileSystemHandle::DataView, ::blink::mojom::NativeFileSystemHandlePtr>::Read(
    ::blink::mojom::NativeFileSystemHandle::DataView input,
    ::blink::mojom::NativeFileSystemHandlePtr* output) {
  using UnionType = ::blink::mojom::NativeFileSystemHandle;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::FILE: {
      *output = UnionType::NewFile(
          input.TakeFile<::blink::mojom::NativeFileSystemFileHandlePtrInfo>());
      break;
    }
    case Tag::DIRECTORY: {
      *output = UnionType::NewDirectory(
          input.TakeDirectory<::blink::mojom::NativeFileSystemDirectoryHandlePtrInfo>());
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