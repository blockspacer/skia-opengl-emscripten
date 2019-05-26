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

#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-blink.h"

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

#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-params-data.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char NativeFileSystemFileHandle::Name_[] = "blink.mojom.NativeFileSystemFileHandle";

class NativeFileSystemFileHandle_AsBlob_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemFileHandle_AsBlob_ForwardToCallback(
      NativeFileSystemFileHandle::AsBlobCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemFileHandle::AsBlobCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandle_AsBlob_ForwardToCallback);
};

class NativeFileSystemFileHandle_Remove_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemFileHandle_Remove_ForwardToCallback(
      NativeFileSystemFileHandle::RemoveCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemFileHandle::RemoveCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandle_Remove_ForwardToCallback);
};

class NativeFileSystemFileHandle_Write_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemFileHandle_Write_ForwardToCallback(
      NativeFileSystemFileHandle::WriteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemFileHandle::WriteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandle_Write_ForwardToCallback);
};

class NativeFileSystemFileHandle_WriteStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemFileHandle_WriteStream_ForwardToCallback(
      NativeFileSystemFileHandle::WriteStreamCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemFileHandle::WriteStreamCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandle_WriteStream_ForwardToCallback);
};

class NativeFileSystemFileHandle_Truncate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemFileHandle_Truncate_ForwardToCallback(
      NativeFileSystemFileHandle::TruncateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemFileHandle::TruncateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandle_Truncate_ForwardToCallback);
};

NativeFileSystemFileHandleProxy::NativeFileSystemFileHandleProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NativeFileSystemFileHandleProxy::AsBlob(
    AsBlobCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::AsBlob");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_AsBlob_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_AsBlob_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("AsBlob");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemFileHandle_AsBlob_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemFileHandleProxy::Remove(
    RemoveCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::Remove");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_Remove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_Remove_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("Remove");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemFileHandle_Remove_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemFileHandleProxy::Write(
    uint64_t in_offset, ::blink::mojom::blink::BlobPtr in_data, WriteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::Write");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_Write_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->offset = in_offset;
  mojo::internal::Serialize<::blink::mojom::BlobPtrDataView>(
      in_data, &params->data, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->data),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid data in NativeFileSystemFileHandle.Write request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("Write");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemFileHandle_Write_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemFileHandleProxy::WriteStream(
    uint64_t in_offset, mojo::ScopedDataPipeConsumerHandle in_stream, WriteStreamCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::WriteStream");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_WriteStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_WriteStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->offset = in_offset;
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in NativeFileSystemFileHandle.WriteStream request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("WriteStream");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemFileHandle_WriteStream_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemFileHandleProxy::Truncate(
    uint64_t in_length, TruncateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::Truncate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_Truncate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_Truncate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->length = in_length;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("Truncate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemFileHandle_Truncate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemFileHandleProxy::Transfer(
    ::blink::mojom::blink::NativeFileSystemTransferTokenRequest in_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::Transfer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_Transfer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_Transfer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::NativeFileSystemTransferTokenRequestDataView>(
      in_token, &params->token, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->token),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid token in NativeFileSystemFileHandle.Transfer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("Transfer");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NativeFileSystemFileHandle_AsBlob_ProxyToResponder {
 public:
  static NativeFileSystemFileHandle::AsBlobCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemFileHandle_AsBlob_ProxyToResponder> proxy(
        new NativeFileSystemFileHandle_AsBlob_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemFileHandle_AsBlob_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemFileHandle_AsBlob_ProxyToResponder() {
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
  NativeFileSystemFileHandle_AsBlob_ProxyToResponder(
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
        << "NativeFileSystemFileHandle::AsBlobCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::NativeFileSystemErrorPtr in_result, const scoped_refptr<::blink::BlobDataHandle>& in_blob);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandle_AsBlob_ProxyToResponder);
};

bool NativeFileSystemFileHandle_AsBlob_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::AsBlobCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemFileHandle_AsBlob_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemFileHandle_AsBlob_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::NativeFileSystemErrorPtr p_result{};
  scoped_refptr<::blink::BlobDataHandle> p_blob{};
  NativeFileSystemFileHandle_AsBlob_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadBlob(&p_blob))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemFileHandle::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_blob));
  return true;
}

void NativeFileSystemFileHandle_AsBlob_ProxyToResponder::Run(
    ::blink::mojom::blink::NativeFileSystemErrorPtr in_result, const scoped_refptr<::blink::BlobDataHandle>& in_blob) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_AsBlob_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_AsBlob_ResponseParams_Data::BufferWriter
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
  typename decltype(params->blob)::BaseType::BufferWriter
      blob_writer;
  mojo::internal::Serialize<::blink::mojom::SerializedBlobDataView>(
      in_blob, buffer, &blob_writer, &serialization_context);
  params->blob.Set(
      blob_writer.is_null() ? nullptr : blob_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::AsBlobCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("AsBlob");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeFileSystemFileHandle_Remove_ProxyToResponder {
 public:
  static NativeFileSystemFileHandle::RemoveCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemFileHandle_Remove_ProxyToResponder> proxy(
        new NativeFileSystemFileHandle_Remove_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemFileHandle_Remove_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemFileHandle_Remove_ProxyToResponder() {
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
  NativeFileSystemFileHandle_Remove_ProxyToResponder(
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
        << "NativeFileSystemFileHandle::RemoveCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::NativeFileSystemErrorPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandle_Remove_ProxyToResponder);
};

bool NativeFileSystemFileHandle_Remove_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::RemoveCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemFileHandle_Remove_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemFileHandle_Remove_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::NativeFileSystemErrorPtr p_result{};
  NativeFileSystemFileHandle_Remove_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemFileHandle::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void NativeFileSystemFileHandle_Remove_ProxyToResponder::Run(
    ::blink::mojom::blink::NativeFileSystemErrorPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_Remove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_Remove_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::RemoveCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("Remove");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeFileSystemFileHandle_Write_ProxyToResponder {
 public:
  static NativeFileSystemFileHandle::WriteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemFileHandle_Write_ProxyToResponder> proxy(
        new NativeFileSystemFileHandle_Write_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemFileHandle_Write_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemFileHandle_Write_ProxyToResponder() {
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
  NativeFileSystemFileHandle_Write_ProxyToResponder(
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
        << "NativeFileSystemFileHandle::WriteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::NativeFileSystemErrorPtr in_result, uint64_t in_bytes_written);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandle_Write_ProxyToResponder);
};

bool NativeFileSystemFileHandle_Write_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::WriteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemFileHandle_Write_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemFileHandle_Write_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::NativeFileSystemErrorPtr p_result{};
  uint64_t p_bytes_written{};
  NativeFileSystemFileHandle_Write_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_bytes_written = input_data_view.bytes_written();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemFileHandle::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_bytes_written));
  return true;
}

void NativeFileSystemFileHandle_Write_ProxyToResponder::Run(
    ::blink::mojom::blink::NativeFileSystemErrorPtr in_result, uint64_t in_bytes_written) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_Write_ResponseParams_Data::BufferWriter
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
  params->bytes_written = in_bytes_written;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::WriteCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("Write");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeFileSystemFileHandle_WriteStream_ProxyToResponder {
 public:
  static NativeFileSystemFileHandle::WriteStreamCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemFileHandle_WriteStream_ProxyToResponder> proxy(
        new NativeFileSystemFileHandle_WriteStream_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemFileHandle_WriteStream_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemFileHandle_WriteStream_ProxyToResponder() {
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
  NativeFileSystemFileHandle_WriteStream_ProxyToResponder(
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
        << "NativeFileSystemFileHandle::WriteStreamCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::NativeFileSystemErrorPtr in_result, uint64_t in_bytes_written);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandle_WriteStream_ProxyToResponder);
};

bool NativeFileSystemFileHandle_WriteStream_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::WriteStreamCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemFileHandle_WriteStream_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemFileHandle_WriteStream_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::NativeFileSystemErrorPtr p_result{};
  uint64_t p_bytes_written{};
  NativeFileSystemFileHandle_WriteStream_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_bytes_written = input_data_view.bytes_written();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemFileHandle::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_bytes_written));
  return true;
}

void NativeFileSystemFileHandle_WriteStream_ProxyToResponder::Run(
    ::blink::mojom::blink::NativeFileSystemErrorPtr in_result, uint64_t in_bytes_written) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_WriteStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_WriteStream_ResponseParams_Data::BufferWriter
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
  params->bytes_written = in_bytes_written;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::WriteStreamCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("WriteStream");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeFileSystemFileHandle_Truncate_ProxyToResponder {
 public:
  static NativeFileSystemFileHandle::TruncateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemFileHandle_Truncate_ProxyToResponder> proxy(
        new NativeFileSystemFileHandle_Truncate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemFileHandle_Truncate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemFileHandle_Truncate_ProxyToResponder() {
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
  NativeFileSystemFileHandle_Truncate_ProxyToResponder(
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
        << "NativeFileSystemFileHandle::TruncateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::NativeFileSystemErrorPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandle_Truncate_ProxyToResponder);
};

bool NativeFileSystemFileHandle_Truncate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::TruncateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemFileHandle_Truncate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemFileHandle_Truncate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::NativeFileSystemErrorPtr p_result{};
  NativeFileSystemFileHandle_Truncate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemFileHandle::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void NativeFileSystemFileHandle_Truncate_ProxyToResponder::Run(
    ::blink::mojom::blink::NativeFileSystemErrorPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemFileHandle_Truncate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemFileHandle_Truncate_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::TruncateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemFileHandle::Name_);
  message.set_method_name("Truncate");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NativeFileSystemFileHandleStubDispatch::Accept(
    NativeFileSystemFileHandle* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNativeFileSystemFileHandle_AsBlob_Name: {
      break;
    }
    case internal::kNativeFileSystemFileHandle_Remove_Name: {
      break;
    }
    case internal::kNativeFileSystemFileHandle_Write_Name: {
      break;
    }
    case internal::kNativeFileSystemFileHandle_WriteStream_Name: {
      break;
    }
    case internal::kNativeFileSystemFileHandle_Truncate_Name: {
      break;
    }
    case internal::kNativeFileSystemFileHandle_Transfer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::Transfer",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NativeFileSystemFileHandle_Transfer_Params_Data* params =
          reinterpret_cast<internal::NativeFileSystemFileHandle_Transfer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::NativeFileSystemTransferTokenRequest p_token{};
      NativeFileSystemFileHandle_Transfer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_token =
          input_data_view.TakeToken<decltype(p_token)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemFileHandle::Name_, 5, false);
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
bool NativeFileSystemFileHandleStubDispatch::AcceptWithResponder(
    NativeFileSystemFileHandle* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNativeFileSystemFileHandle_AsBlob_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::AsBlob",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemFileHandle_AsBlob_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemFileHandle_AsBlob_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NativeFileSystemFileHandle_AsBlob_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemFileHandle::Name_, 0, false);
        return false;
      }
      NativeFileSystemFileHandle::AsBlobCallback callback =
          NativeFileSystemFileHandle_AsBlob_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AsBlob(std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Remove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::Remove",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemFileHandle_Remove_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemFileHandle_Remove_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NativeFileSystemFileHandle_Remove_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemFileHandle::Name_, 1, false);
        return false;
      }
      NativeFileSystemFileHandle::RemoveCallback callback =
          NativeFileSystemFileHandle_Remove_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Remove(std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Write_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::Write",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemFileHandle_Write_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemFileHandle_Write_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_offset{};
      ::blink::mojom::blink::BlobPtr p_data{};
      NativeFileSystemFileHandle_Write_ParamsDataView input_data_view(params, &serialization_context);
      
      p_offset = input_data_view.offset();
      p_data =
          input_data_view.TakeData<decltype(p_data)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemFileHandle::Name_, 2, false);
        return false;
      }
      NativeFileSystemFileHandle::WriteCallback callback =
          NativeFileSystemFileHandle_Write_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Write(
std::move(p_offset), 
std::move(p_data), std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemFileHandle_WriteStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::WriteStream",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemFileHandle_WriteStream_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemFileHandle_WriteStream_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_offset{};
      mojo::ScopedDataPipeConsumerHandle p_stream{};
      NativeFileSystemFileHandle_WriteStream_ParamsDataView input_data_view(params, &serialization_context);
      
      p_offset = input_data_view.offset();
      p_stream = input_data_view.TakeStream();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemFileHandle::Name_, 3, false);
        return false;
      }
      NativeFileSystemFileHandle::WriteStreamCallback callback =
          NativeFileSystemFileHandle_WriteStream_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteStream(
std::move(p_offset), 
std::move(p_stream), std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Truncate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemFileHandle::Truncate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemFileHandle_Truncate_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemFileHandle_Truncate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_length{};
      NativeFileSystemFileHandle_Truncate_ParamsDataView input_data_view(params, &serialization_context);
      
      p_length = input_data_view.length();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemFileHandle::Name_, 4, false);
        return false;
      }
      NativeFileSystemFileHandle::TruncateCallback callback =
          NativeFileSystemFileHandle_Truncate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Truncate(
std::move(p_length), std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Transfer_Name: {
      break;
    }
  }
  return false;
}

bool NativeFileSystemFileHandleRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeFileSystemFileHandle RequestValidator");

  switch (message->header()->name) {
    case internal::kNativeFileSystemFileHandle_AsBlob_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_AsBlob_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Remove_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_Remove_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Write_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_Write_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemFileHandle_WriteStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_WriteStream_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Truncate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_Truncate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Transfer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_Transfer_Params_Data>(
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

bool NativeFileSystemFileHandleResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeFileSystemFileHandle ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNativeFileSystemFileHandle_AsBlob_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_AsBlob_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Remove_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_Remove_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Write_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_Write_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemFileHandle_WriteStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_WriteStream_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemFileHandle_Truncate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemFileHandle_Truncate_ResponseParams_Data>(
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif