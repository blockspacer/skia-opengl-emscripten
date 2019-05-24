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

#include "media/mojo/interfaces/cdm_storage.mojom-blink.h"

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

#include "media/mojo/interfaces/cdm_storage.mojom-params-data.h"
#include "media/mojo/interfaces/cdm_storage.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/cdm_storage.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#endif
namespace media {
namespace mojom {
namespace blink {
const char CdmStorage::Name_[] = "media.mojom.CdmStorage";

class CdmStorage_Open_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CdmStorage_Open_ForwardToCallback(
      CdmStorage::OpenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CdmStorage::OpenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CdmStorage_Open_ForwardToCallback);
};

CdmStorageProxy::CdmStorageProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CdmStorageProxy::Open(
    const WTF::String& in_file_name, OpenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CdmStorage::Open");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmStorage_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmStorage_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_name)::BaseType::BufferWriter
      file_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_file_name, buffer, &file_name_writer, &serialization_context);
  params->file_name.Set(
      file_name_writer.is_null() ? nullptr : file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_name in CdmStorage.Open request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CdmStorage::Name_);
  message.set_method_name("Open");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CdmStorage_Open_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CdmStorage_Open_ProxyToResponder {
 public:
  static CdmStorage::OpenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CdmStorage_Open_ProxyToResponder> proxy(
        new CdmStorage_Open_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CdmStorage_Open_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CdmStorage_Open_ProxyToResponder() {
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
  CdmStorage_Open_ProxyToResponder(
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
        << "CdmStorage::OpenCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CdmStorage::Status in_status, base::File in_file_for_reading, CdmFileAssociatedPtrInfo in_cdm_file);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CdmStorage_Open_ProxyToResponder);
};

bool CdmStorage_Open_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CdmStorage::OpenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CdmStorage_Open_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CdmStorage_Open_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CdmStorage::Status p_status{};
  base::File p_file_for_reading{};
  CdmFileAssociatedPtrInfo p_cdm_file{};
  CdmStorage_Open_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadFileForReading(&p_file_for_reading))
    success = false;
  p_cdm_file =
      input_data_view.TakeCdmFile<decltype(p_cdm_file)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CdmStorage::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_file_for_reading), 
std::move(p_cdm_file));
  return true;
}

void CdmStorage_Open_ProxyToResponder::Run(
    CdmStorage::Status in_status, base::File in_file_for_reading, CdmFileAssociatedPtrInfo in_cdm_file) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmStorage_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmStorage_Open_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::CdmStorage_Status>(
      in_status, &params->status);
  typename decltype(params->file_for_reading)::BaseType::BufferWriter
      file_for_reading_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_file_for_reading, buffer, &file_for_reading_writer, &serialization_context);
  params->file_for_reading.Set(
      file_for_reading_writer.is_null() ? nullptr : file_for_reading_writer.data());
  mojo::internal::Serialize<::media::mojom::CdmFileAssociatedPtrInfoDataView>(
      in_cdm_file, &params->cdm_file, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CdmStorage::OpenCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CdmStorage::Name_);
  message.set_method_name("Open");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CdmStorageStubDispatch::Accept(
    CdmStorage* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCdmStorage_Open_Name: {
      break;
    }
  }
  return false;
}

// static
bool CdmStorageStubDispatch::AcceptWithResponder(
    CdmStorage* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCdmStorage_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CdmStorage::Open",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CdmStorage_Open_Params_Data* params =
          reinterpret_cast<
              internal::CdmStorage_Open_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_file_name{};
      CdmStorage_Open_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFileName(&p_file_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CdmStorage::Name_, 0, false);
        return false;
      }
      CdmStorage::OpenCallback callback =
          CdmStorage_Open_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Open(
std::move(p_file_name), std::move(callback));
      return true;
    }
  }
  return false;
}

bool CdmStorageRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CdmStorage RequestValidator");

  switch (message->header()->name) {
    case internal::kCdmStorage_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmStorage_Open_Params_Data>(
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

bool CdmStorageResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CdmStorage ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCdmStorage_Open_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmStorage_Open_ResponseParams_Data>(
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
const char CdmFile::Name_[] = "media.mojom.CdmFile";

class CdmFile_OpenFileForWriting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CdmFile_OpenFileForWriting_ForwardToCallback(
      CdmFile::OpenFileForWritingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CdmFile::OpenFileForWritingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CdmFile_OpenFileForWriting_ForwardToCallback);
};

class CdmFile_CommitWrite_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CdmFile_CommitWrite_ForwardToCallback(
      CdmFile::CommitWriteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CdmFile::CommitWriteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CdmFile_CommitWrite_ForwardToCallback);
};

CdmFileProxy::CdmFileProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CdmFileProxy::OpenFileForWriting(
    OpenFileForWritingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CdmFile::OpenFileForWriting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmFile_OpenFileForWriting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmFile_OpenFileForWriting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CdmFile::Name_);
  message.set_method_name("OpenFileForWriting");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CdmFile_OpenFileForWriting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CdmFileProxy::CommitWrite(
    CommitWriteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CdmFile::CommitWrite");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmFile_CommitWrite_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmFile_CommitWrite_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CdmFile::Name_);
  message.set_method_name("CommitWrite");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CdmFile_CommitWrite_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CdmFile_OpenFileForWriting_ProxyToResponder {
 public:
  static CdmFile::OpenFileForWritingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CdmFile_OpenFileForWriting_ProxyToResponder> proxy(
        new CdmFile_OpenFileForWriting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CdmFile_OpenFileForWriting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CdmFile_OpenFileForWriting_ProxyToResponder() {
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
  CdmFile_OpenFileForWriting_ProxyToResponder(
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
        << "CdmFile::OpenFileForWritingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::File in_file_for_writing);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CdmFile_OpenFileForWriting_ProxyToResponder);
};

bool CdmFile_OpenFileForWriting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CdmFile::OpenFileForWritingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CdmFile_OpenFileForWriting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CdmFile_OpenFileForWriting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File p_file_for_writing{};
  CdmFile_OpenFileForWriting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFileForWriting(&p_file_for_writing))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CdmFile::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_file_for_writing));
  return true;
}

void CdmFile_OpenFileForWriting_ProxyToResponder::Run(
    base::File in_file_for_writing) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmFile_OpenFileForWriting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmFile_OpenFileForWriting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_for_writing)::BaseType::BufferWriter
      file_for_writing_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_file_for_writing, buffer, &file_for_writing_writer, &serialization_context);
  params->file_for_writing.Set(
      file_for_writing_writer.is_null() ? nullptr : file_for_writing_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CdmFile::OpenFileForWritingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CdmFile::Name_);
  message.set_method_name("OpenFileForWriting");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CdmFile_CommitWrite_ProxyToResponder {
 public:
  static CdmFile::CommitWriteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CdmFile_CommitWrite_ProxyToResponder> proxy(
        new CdmFile_CommitWrite_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CdmFile_CommitWrite_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CdmFile_CommitWrite_ProxyToResponder() {
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
  CdmFile_CommitWrite_ProxyToResponder(
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
        << "CdmFile::CommitWriteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::File in_updated_file_for_reading);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CdmFile_CommitWrite_ProxyToResponder);
};

bool CdmFile_CommitWrite_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CdmFile::CommitWriteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CdmFile_CommitWrite_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CdmFile_CommitWrite_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File p_updated_file_for_reading{};
  CdmFile_CommitWrite_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadUpdatedFileForReading(&p_updated_file_for_reading))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CdmFile::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_updated_file_for_reading));
  return true;
}

void CdmFile_CommitWrite_ProxyToResponder::Run(
    base::File in_updated_file_for_reading) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmFile_CommitWrite_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmFile_CommitWrite_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->updated_file_for_reading)::BaseType::BufferWriter
      updated_file_for_reading_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_updated_file_for_reading, buffer, &updated_file_for_reading_writer, &serialization_context);
  params->updated_file_for_reading.Set(
      updated_file_for_reading_writer.is_null() ? nullptr : updated_file_for_reading_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CdmFile::CommitWriteCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CdmFile::Name_);
  message.set_method_name("CommitWrite");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CdmFileStubDispatch::Accept(
    CdmFile* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCdmFile_OpenFileForWriting_Name: {
      break;
    }
    case internal::kCdmFile_CommitWrite_Name: {
      break;
    }
  }
  return false;
}

// static
bool CdmFileStubDispatch::AcceptWithResponder(
    CdmFile* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCdmFile_OpenFileForWriting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CdmFile::OpenFileForWriting",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CdmFile_OpenFileForWriting_Params_Data* params =
          reinterpret_cast<
              internal::CdmFile_OpenFileForWriting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CdmFile_OpenFileForWriting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CdmFile::Name_, 0, false);
        return false;
      }
      CdmFile::OpenFileForWritingCallback callback =
          CdmFile_OpenFileForWriting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenFileForWriting(std::move(callback));
      return true;
    }
    case internal::kCdmFile_CommitWrite_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CdmFile::CommitWrite",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CdmFile_CommitWrite_Params_Data* params =
          reinterpret_cast<
              internal::CdmFile_CommitWrite_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CdmFile_CommitWrite_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CdmFile::Name_, 1, false);
        return false;
      }
      CdmFile::CommitWriteCallback callback =
          CdmFile_CommitWrite_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CommitWrite(std::move(callback));
      return true;
    }
  }
  return false;
}

bool CdmFileRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CdmFile RequestValidator");

  switch (message->header()->name) {
    case internal::kCdmFile_OpenFileForWriting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmFile_OpenFileForWriting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCdmFile_CommitWrite_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmFile_CommitWrite_Params_Data>(
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

bool CdmFileResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CdmFile ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCdmFile_OpenFileForWriting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmFile_OpenFileForWriting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCdmFile_CommitWrite_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmFile_CommitWrite_ResponseParams_Data>(
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
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif