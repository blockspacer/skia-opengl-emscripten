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

#include "third_party/blink/public/mojom/webdatabase/web_database.mojom.h"

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

#include "third_party/blink/public/mojom/webdatabase/web_database.mojom-params-data.h"
#include "third_party/blink/public/mojom/webdatabase/web_database.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/webdatabase/web_database.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char WebDatabase::Name_[] = "blink.mojom.WebDatabase";

WebDatabaseProxy::WebDatabaseProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebDatabaseProxy::UpdateSize(
    const url::Origin& in_origin, const base::string16& in_name, int64_t in_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabase::UpdateSize");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabase_UpdateSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabase_UpdateSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in WebDatabase.UpdateSize request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WebDatabase.UpdateSize request");
  params->size = in_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabase::Name_);
  message.set_method_name("UpdateSize");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebDatabaseProxy::CloseImmediately(
    const url::Origin& in_origin, const base::string16& in_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabase::CloseImmediately");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabase_CloseImmediately_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabase_CloseImmediately_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in WebDatabase.CloseImmediately request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WebDatabase.CloseImmediately request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabase::Name_);
  message.set_method_name("CloseImmediately");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WebDatabaseStubDispatch::Accept(
    WebDatabase* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebDatabase_UpdateSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabase::UpdateSize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebDatabase_UpdateSize_Params_Data* params =
          reinterpret_cast<internal::WebDatabase_UpdateSize_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      base::string16 p_name{};
      int64_t p_size{};
      WebDatabase_UpdateSize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_size = input_data_view.size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabase::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateSize(
std::move(p_origin), 
std::move(p_name), 
std::move(p_size));
      return true;
    }
    case internal::kWebDatabase_CloseImmediately_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabase::CloseImmediately",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebDatabase_CloseImmediately_Params_Data* params =
          reinterpret_cast<internal::WebDatabase_CloseImmediately_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      base::string16 p_name{};
      WebDatabase_CloseImmediately_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabase::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CloseImmediately(
std::move(p_origin), 
std::move(p_name));
      return true;
    }
  }
  return false;
}

// static
bool WebDatabaseStubDispatch::AcceptWithResponder(
    WebDatabase* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWebDatabase_UpdateSize_Name: {
      break;
    }
    case internal::kWebDatabase_CloseImmediately_Name: {
      break;
    }
  }
  return false;
}

bool WebDatabaseRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebDatabase RequestValidator");

  switch (message->header()->name) {
    case internal::kWebDatabase_UpdateSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabase_UpdateSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabase_CloseImmediately_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabase_CloseImmediately_Params_Data>(
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

const char WebDatabaseHost::Name_[] = "blink.mojom.WebDatabaseHost";
bool WebDatabaseHost::OpenFile(const base::string16& vfs_file_name, int32_t desired_flags, base::File* out_file) {
  NOTREACHED();
  return false;
}
bool WebDatabaseHost::DeleteFile(const base::string16& vfs_file_name, bool sync_dir, int32_t* out_sqlite_error_code) {
  NOTREACHED();
  return false;
}
bool WebDatabaseHost::GetFileAttributes(const base::string16& vfs_file_name, int32_t* out_attributes) {
  NOTREACHED();
  return false;
}
bool WebDatabaseHost::GetFileSize(const base::string16& vfs_file_name, int64_t* out_size) {
  NOTREACHED();
  return false;
}
bool WebDatabaseHost::SetFileSize(const base::string16& vfs_file_name, int64_t expected_size, bool* out_success) {
  NOTREACHED();
  return false;
}
bool WebDatabaseHost::GetSpaceAvailable(const url::Origin& origin, int64_t* out_space_available) {
  NOTREACHED();
  return false;
}
class WebDatabaseHost_OpenFile_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_OpenFile_HandleSyncResponse(
      bool* result, base::File* out_file)
      : result_(result), out_file_(out_file) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::File* out_file_;DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_OpenFile_HandleSyncResponse);
};

class WebDatabaseHost_OpenFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_OpenFile_ForwardToCallback(
      WebDatabaseHost::OpenFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebDatabaseHost::OpenFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_OpenFile_ForwardToCallback);
};
class WebDatabaseHost_DeleteFile_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_DeleteFile_HandleSyncResponse(
      bool* result, int32_t* out_sqlite_error_code)
      : result_(result), out_sqlite_error_code_(out_sqlite_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_sqlite_error_code_;DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_DeleteFile_HandleSyncResponse);
};

class WebDatabaseHost_DeleteFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_DeleteFile_ForwardToCallback(
      WebDatabaseHost::DeleteFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebDatabaseHost::DeleteFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_DeleteFile_ForwardToCallback);
};
class WebDatabaseHost_GetFileAttributes_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_GetFileAttributes_HandleSyncResponse(
      bool* result, int32_t* out_attributes)
      : result_(result), out_attributes_(out_attributes) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_attributes_;DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_GetFileAttributes_HandleSyncResponse);
};

class WebDatabaseHost_GetFileAttributes_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_GetFileAttributes_ForwardToCallback(
      WebDatabaseHost::GetFileAttributesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebDatabaseHost::GetFileAttributesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_GetFileAttributes_ForwardToCallback);
};
class WebDatabaseHost_GetFileSize_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_GetFileSize_HandleSyncResponse(
      bool* result, int64_t* out_size)
      : result_(result), out_size_(out_size) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int64_t* out_size_;DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_GetFileSize_HandleSyncResponse);
};

class WebDatabaseHost_GetFileSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_GetFileSize_ForwardToCallback(
      WebDatabaseHost::GetFileSizeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebDatabaseHost::GetFileSizeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_GetFileSize_ForwardToCallback);
};
class WebDatabaseHost_SetFileSize_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_SetFileSize_HandleSyncResponse(
      bool* result, bool* out_success)
      : result_(result), out_success_(out_success) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_success_;DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_SetFileSize_HandleSyncResponse);
};

class WebDatabaseHost_SetFileSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_SetFileSize_ForwardToCallback(
      WebDatabaseHost::SetFileSizeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebDatabaseHost::SetFileSizeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_SetFileSize_ForwardToCallback);
};
class WebDatabaseHost_GetSpaceAvailable_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_GetSpaceAvailable_HandleSyncResponse(
      bool* result, int64_t* out_space_available)
      : result_(result), out_space_available_(out_space_available) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int64_t* out_space_available_;DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_GetSpaceAvailable_HandleSyncResponse);
};

class WebDatabaseHost_GetSpaceAvailable_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebDatabaseHost_GetSpaceAvailable_ForwardToCallback(
      WebDatabaseHost::GetSpaceAvailableCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebDatabaseHost::GetSpaceAvailableCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_GetSpaceAvailable_ForwardToCallback);
};

WebDatabaseHostProxy::WebDatabaseHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool WebDatabaseHostProxy::OpenFile(
    const base::string16& param_vfs_file_name, int32_t param_desired_flags, base::File* out_param_file) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::OpenFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_OpenFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_OpenFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vfs_file_name)::BaseType::BufferWriter
      vfs_file_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      param_vfs_file_name, buffer, &vfs_file_name_writer, &serialization_context);
  params->vfs_file_name.Set(
      vfs_file_name_writer.is_null() ? nullptr : vfs_file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vfs_file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vfs_file_name in WebDatabaseHost.OpenFile request");
  params->desired_flags = param_desired_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("OpenFile");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_OpenFile_HandleSyncResponse(
          &result, out_param_file));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void WebDatabaseHostProxy::OpenFile(
    const base::string16& in_vfs_file_name, int32_t in_desired_flags, OpenFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::OpenFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_OpenFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_OpenFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vfs_file_name)::BaseType::BufferWriter
      vfs_file_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_vfs_file_name, buffer, &vfs_file_name_writer, &serialization_context);
  params->vfs_file_name.Set(
      vfs_file_name_writer.is_null() ? nullptr : vfs_file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vfs_file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vfs_file_name in WebDatabaseHost.OpenFile request");
  params->desired_flags = in_desired_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("OpenFile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_OpenFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool WebDatabaseHostProxy::DeleteFile(
    const base::string16& param_vfs_file_name, bool param_sync_dir, int32_t* out_param_sqlite_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::DeleteFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_DeleteFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_DeleteFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vfs_file_name)::BaseType::BufferWriter
      vfs_file_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      param_vfs_file_name, buffer, &vfs_file_name_writer, &serialization_context);
  params->vfs_file_name.Set(
      vfs_file_name_writer.is_null() ? nullptr : vfs_file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vfs_file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vfs_file_name in WebDatabaseHost.DeleteFile request");
  params->sync_dir = param_sync_dir;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("DeleteFile");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_DeleteFile_HandleSyncResponse(
          &result, out_param_sqlite_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void WebDatabaseHostProxy::DeleteFile(
    const base::string16& in_vfs_file_name, bool in_sync_dir, DeleteFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::DeleteFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_DeleteFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_DeleteFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vfs_file_name)::BaseType::BufferWriter
      vfs_file_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_vfs_file_name, buffer, &vfs_file_name_writer, &serialization_context);
  params->vfs_file_name.Set(
      vfs_file_name_writer.is_null() ? nullptr : vfs_file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vfs_file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vfs_file_name in WebDatabaseHost.DeleteFile request");
  params->sync_dir = in_sync_dir;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("DeleteFile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_DeleteFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool WebDatabaseHostProxy::GetFileAttributes(
    const base::string16& param_vfs_file_name, int32_t* out_param_attributes) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetFileAttributes");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_GetFileAttributes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_GetFileAttributes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vfs_file_name)::BaseType::BufferWriter
      vfs_file_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      param_vfs_file_name, buffer, &vfs_file_name_writer, &serialization_context);
  params->vfs_file_name.Set(
      vfs_file_name_writer.is_null() ? nullptr : vfs_file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vfs_file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vfs_file_name in WebDatabaseHost.GetFileAttributes request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("GetFileAttributes");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_GetFileAttributes_HandleSyncResponse(
          &result, out_param_attributes));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void WebDatabaseHostProxy::GetFileAttributes(
    const base::string16& in_vfs_file_name, GetFileAttributesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetFileAttributes");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_GetFileAttributes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_GetFileAttributes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vfs_file_name)::BaseType::BufferWriter
      vfs_file_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_vfs_file_name, buffer, &vfs_file_name_writer, &serialization_context);
  params->vfs_file_name.Set(
      vfs_file_name_writer.is_null() ? nullptr : vfs_file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vfs_file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vfs_file_name in WebDatabaseHost.GetFileAttributes request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("GetFileAttributes");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_GetFileAttributes_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool WebDatabaseHostProxy::GetFileSize(
    const base::string16& param_vfs_file_name, int64_t* out_param_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetFileSize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_GetFileSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_GetFileSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vfs_file_name)::BaseType::BufferWriter
      vfs_file_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      param_vfs_file_name, buffer, &vfs_file_name_writer, &serialization_context);
  params->vfs_file_name.Set(
      vfs_file_name_writer.is_null() ? nullptr : vfs_file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vfs_file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vfs_file_name in WebDatabaseHost.GetFileSize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("GetFileSize");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_GetFileSize_HandleSyncResponse(
          &result, out_param_size));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void WebDatabaseHostProxy::GetFileSize(
    const base::string16& in_vfs_file_name, GetFileSizeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetFileSize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_GetFileSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_GetFileSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vfs_file_name)::BaseType::BufferWriter
      vfs_file_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_vfs_file_name, buffer, &vfs_file_name_writer, &serialization_context);
  params->vfs_file_name.Set(
      vfs_file_name_writer.is_null() ? nullptr : vfs_file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vfs_file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vfs_file_name in WebDatabaseHost.GetFileSize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("GetFileSize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_GetFileSize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool WebDatabaseHostProxy::SetFileSize(
    const base::string16& param_vfs_file_name, int64_t param_expected_size, bool* out_param_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::SetFileSize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_SetFileSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_SetFileSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vfs_file_name)::BaseType::BufferWriter
      vfs_file_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      param_vfs_file_name, buffer, &vfs_file_name_writer, &serialization_context);
  params->vfs_file_name.Set(
      vfs_file_name_writer.is_null() ? nullptr : vfs_file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vfs_file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vfs_file_name in WebDatabaseHost.SetFileSize request");
  params->expected_size = param_expected_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("SetFileSize");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_SetFileSize_HandleSyncResponse(
          &result, out_param_success));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void WebDatabaseHostProxy::SetFileSize(
    const base::string16& in_vfs_file_name, int64_t in_expected_size, SetFileSizeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::SetFileSize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_SetFileSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_SetFileSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vfs_file_name)::BaseType::BufferWriter
      vfs_file_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_vfs_file_name, buffer, &vfs_file_name_writer, &serialization_context);
  params->vfs_file_name.Set(
      vfs_file_name_writer.is_null() ? nullptr : vfs_file_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vfs_file_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vfs_file_name in WebDatabaseHost.SetFileSize request");
  params->expected_size = in_expected_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("SetFileSize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_SetFileSize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool WebDatabaseHostProxy::GetSpaceAvailable(
    const url::Origin& param_origin, int64_t* out_param_space_available) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetSpaceAvailable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_GetSpaceAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_GetSpaceAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      param_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in WebDatabaseHost.GetSpaceAvailable request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("GetSpaceAvailable");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_GetSpaceAvailable_HandleSyncResponse(
          &result, out_param_space_available));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void WebDatabaseHostProxy::GetSpaceAvailable(
    const url::Origin& in_origin, GetSpaceAvailableCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetSpaceAvailable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_GetSpaceAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_GetSpaceAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in WebDatabaseHost.GetSpaceAvailable request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("GetSpaceAvailable");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebDatabaseHost_GetSpaceAvailable_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WebDatabaseHostProxy::Opened(
    const url::Origin& in_origin, const base::string16& in_database_name, const base::string16& in_database_description, int64_t in_estimated_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::Opened");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_Opened_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_Opened_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in WebDatabaseHost.Opened request");
  typename decltype(params->database_name)::BaseType::BufferWriter
      database_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_database_name, buffer, &database_name_writer, &serialization_context);
  params->database_name.Set(
      database_name_writer.is_null() ? nullptr : database_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->database_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null database_name in WebDatabaseHost.Opened request");
  typename decltype(params->database_description)::BaseType::BufferWriter
      database_description_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_database_description, buffer, &database_description_writer, &serialization_context);
  params->database_description.Set(
      database_description_writer.is_null() ? nullptr : database_description_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->database_description.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null database_description in WebDatabaseHost.Opened request");
  params->estimated_size = in_estimated_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("Opened");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebDatabaseHostProxy::Modified(
    const url::Origin& in_origin, const base::string16& in_database_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::Modified");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_Modified_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_Modified_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in WebDatabaseHost.Modified request");
  typename decltype(params->database_name)::BaseType::BufferWriter
      database_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_database_name, buffer, &database_name_writer, &serialization_context);
  params->database_name.Set(
      database_name_writer.is_null() ? nullptr : database_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->database_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null database_name in WebDatabaseHost.Modified request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("Modified");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebDatabaseHostProxy::Closed(
    const url::Origin& in_origin, const base::string16& in_database_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::Closed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_Closed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_Closed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in WebDatabaseHost.Closed request");
  typename decltype(params->database_name)::BaseType::BufferWriter
      database_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_database_name, buffer, &database_name_writer, &serialization_context);
  params->database_name.Set(
      database_name_writer.is_null() ? nullptr : database_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->database_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null database_name in WebDatabaseHost.Closed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("Closed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebDatabaseHostProxy::HandleSqliteError(
    const url::Origin& in_origin, const base::string16& in_database_name, int32_t in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::HandleSqliteError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_HandleSqliteError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_HandleSqliteError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in WebDatabaseHost.HandleSqliteError request");
  typename decltype(params->database_name)::BaseType::BufferWriter
      database_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_database_name, buffer, &database_name_writer, &serialization_context);
  params->database_name.Set(
      database_name_writer.is_null() ? nullptr : database_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->database_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null database_name in WebDatabaseHost.HandleSqliteError request");
  params->error = in_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("HandleSqliteError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class WebDatabaseHost_OpenFile_ProxyToResponder {
 public:
  static WebDatabaseHost::OpenFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebDatabaseHost_OpenFile_ProxyToResponder> proxy(
        new WebDatabaseHost_OpenFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebDatabaseHost_OpenFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebDatabaseHost_OpenFile_ProxyToResponder() {
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
  WebDatabaseHost_OpenFile_ProxyToResponder(
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
        << "WebDatabaseHost::OpenFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::File in_file);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_OpenFile_ProxyToResponder);
};

bool WebDatabaseHost_OpenFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::OpenFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_OpenFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebDatabaseHost_OpenFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File p_file{};
  WebDatabaseHost_OpenFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFile(&p_file))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_file));
  return true;
}

void WebDatabaseHost_OpenFile_ProxyToResponder::Run(
    base::File in_file) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_OpenFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_OpenFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file)::BaseType::BufferWriter
      file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_file, buffer, &file_writer, &serialization_context);
  params->file.Set(
      file_writer.is_null() ? nullptr : file_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::OpenFileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("OpenFile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool WebDatabaseHost_OpenFile_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_OpenFile_ResponseParams_Data* params =
      reinterpret_cast<internal::WebDatabaseHost_OpenFile_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File p_file{};
  WebDatabaseHost_OpenFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFile(&p_file))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 0, true);
    return false;
  }
  *out_file_ = std::move(p_file);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class WebDatabaseHost_DeleteFile_ProxyToResponder {
 public:
  static WebDatabaseHost::DeleteFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebDatabaseHost_DeleteFile_ProxyToResponder> proxy(
        new WebDatabaseHost_DeleteFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebDatabaseHost_DeleteFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebDatabaseHost_DeleteFile_ProxyToResponder() {
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
  WebDatabaseHost_DeleteFile_ProxyToResponder(
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
        << "WebDatabaseHost::DeleteFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_sqlite_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_DeleteFile_ProxyToResponder);
};

bool WebDatabaseHost_DeleteFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::DeleteFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_DeleteFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebDatabaseHost_DeleteFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_sqlite_error_code{};
  WebDatabaseHost_DeleteFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sqlite_error_code = input_data_view.sqlite_error_code();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_sqlite_error_code));
  return true;
}

void WebDatabaseHost_DeleteFile_ProxyToResponder::Run(
    int32_t in_sqlite_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_DeleteFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_DeleteFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->sqlite_error_code = in_sqlite_error_code;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::DeleteFileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("DeleteFile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool WebDatabaseHost_DeleteFile_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_DeleteFile_ResponseParams_Data* params =
      reinterpret_cast<internal::WebDatabaseHost_DeleteFile_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_sqlite_error_code{};
  WebDatabaseHost_DeleteFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sqlite_error_code = input_data_view.sqlite_error_code();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 1, true);
    return false;
  }
  *out_sqlite_error_code_ = std::move(p_sqlite_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class WebDatabaseHost_GetFileAttributes_ProxyToResponder {
 public:
  static WebDatabaseHost::GetFileAttributesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebDatabaseHost_GetFileAttributes_ProxyToResponder> proxy(
        new WebDatabaseHost_GetFileAttributes_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebDatabaseHost_GetFileAttributes_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebDatabaseHost_GetFileAttributes_ProxyToResponder() {
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
  WebDatabaseHost_GetFileAttributes_ProxyToResponder(
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
        << "WebDatabaseHost::GetFileAttributesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_attributes);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_GetFileAttributes_ProxyToResponder);
};

bool WebDatabaseHost_GetFileAttributes_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetFileAttributesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_GetFileAttributes_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebDatabaseHost_GetFileAttributes_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_attributes{};
  WebDatabaseHost_GetFileAttributes_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_attributes = input_data_view.attributes();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_attributes));
  return true;
}

void WebDatabaseHost_GetFileAttributes_ProxyToResponder::Run(
    int32_t in_attributes) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_GetFileAttributes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_GetFileAttributes_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->attributes = in_attributes;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetFileAttributesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("GetFileAttributes");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool WebDatabaseHost_GetFileAttributes_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_GetFileAttributes_ResponseParams_Data* params =
      reinterpret_cast<internal::WebDatabaseHost_GetFileAttributes_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_attributes{};
  WebDatabaseHost_GetFileAttributes_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_attributes = input_data_view.attributes();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 2, true);
    return false;
  }
  *out_attributes_ = std::move(p_attributes);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class WebDatabaseHost_GetFileSize_ProxyToResponder {
 public:
  static WebDatabaseHost::GetFileSizeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebDatabaseHost_GetFileSize_ProxyToResponder> proxy(
        new WebDatabaseHost_GetFileSize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebDatabaseHost_GetFileSize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebDatabaseHost_GetFileSize_ProxyToResponder() {
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
  WebDatabaseHost_GetFileSize_ProxyToResponder(
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
        << "WebDatabaseHost::GetFileSizeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int64_t in_size);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_GetFileSize_ProxyToResponder);
};

bool WebDatabaseHost_GetFileSize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetFileSizeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_GetFileSize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebDatabaseHost_GetFileSize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int64_t p_size{};
  WebDatabaseHost_GetFileSize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_size = input_data_view.size();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_size));
  return true;
}

void WebDatabaseHost_GetFileSize_ProxyToResponder::Run(
    int64_t in_size) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_GetFileSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_GetFileSize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->size = in_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetFileSizeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("GetFileSize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool WebDatabaseHost_GetFileSize_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_GetFileSize_ResponseParams_Data* params =
      reinterpret_cast<internal::WebDatabaseHost_GetFileSize_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int64_t p_size{};
  WebDatabaseHost_GetFileSize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_size = input_data_view.size();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 3, true);
    return false;
  }
  *out_size_ = std::move(p_size);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class WebDatabaseHost_SetFileSize_ProxyToResponder {
 public:
  static WebDatabaseHost::SetFileSizeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebDatabaseHost_SetFileSize_ProxyToResponder> proxy(
        new WebDatabaseHost_SetFileSize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebDatabaseHost_SetFileSize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebDatabaseHost_SetFileSize_ProxyToResponder() {
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
  WebDatabaseHost_SetFileSize_ProxyToResponder(
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
        << "WebDatabaseHost::SetFileSizeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_SetFileSize_ProxyToResponder);
};

bool WebDatabaseHost_SetFileSize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::SetFileSizeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_SetFileSize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebDatabaseHost_SetFileSize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WebDatabaseHost_SetFileSize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WebDatabaseHost_SetFileSize_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_SetFileSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_SetFileSize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::SetFileSizeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("SetFileSize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool WebDatabaseHost_SetFileSize_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_SetFileSize_ResponseParams_Data* params =
      reinterpret_cast<internal::WebDatabaseHost_SetFileSize_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WebDatabaseHost_SetFileSize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 4, true);
    return false;
  }
  *out_success_ = std::move(p_success);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class WebDatabaseHost_GetSpaceAvailable_ProxyToResponder {
 public:
  static WebDatabaseHost::GetSpaceAvailableCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebDatabaseHost_GetSpaceAvailable_ProxyToResponder> proxy(
        new WebDatabaseHost_GetSpaceAvailable_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WebDatabaseHost_GetSpaceAvailable_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebDatabaseHost_GetSpaceAvailable_ProxyToResponder() {
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
  WebDatabaseHost_GetSpaceAvailable_ProxyToResponder(
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
        << "WebDatabaseHost::GetSpaceAvailableCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int64_t in_space_available);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHost_GetSpaceAvailable_ProxyToResponder);
};

bool WebDatabaseHost_GetSpaceAvailable_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetSpaceAvailableCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int64_t p_space_available{};
  WebDatabaseHost_GetSpaceAvailable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_space_available = input_data_view.space_available();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_space_available));
  return true;
}

void WebDatabaseHost_GetSpaceAvailable_ProxyToResponder::Run(
    int64_t in_space_available) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebDatabaseHost_GetSpaceAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->space_available = in_space_available;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetSpaceAvailableCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebDatabaseHost::Name_);
  message.set_method_name("GetSpaceAvailable");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool WebDatabaseHost_GetSpaceAvailable_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data* params =
      reinterpret_cast<internal::WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int64_t p_space_available{};
  WebDatabaseHost_GetSpaceAvailable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_space_available = input_data_view.space_available();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebDatabaseHost::Name_, 5, true);
    return false;
  }
  *out_space_available_ = std::move(p_space_available);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool WebDatabaseHostStubDispatch::Accept(
    WebDatabaseHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebDatabaseHost_OpenFile_Name: {
      break;
    }
    case internal::kWebDatabaseHost_DeleteFile_Name: {
      break;
    }
    case internal::kWebDatabaseHost_GetFileAttributes_Name: {
      break;
    }
    case internal::kWebDatabaseHost_GetFileSize_Name: {
      break;
    }
    case internal::kWebDatabaseHost_SetFileSize_Name: {
      break;
    }
    case internal::kWebDatabaseHost_GetSpaceAvailable_Name: {
      break;
    }
    case internal::kWebDatabaseHost_Opened_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::Opened",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebDatabaseHost_Opened_Params_Data* params =
          reinterpret_cast<internal::WebDatabaseHost_Opened_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      base::string16 p_database_name{};
      base::string16 p_database_description{};
      int64_t p_estimated_size{};
      WebDatabaseHost_Opened_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadDatabaseName(&p_database_name))
        success = false;
      if (!input_data_view.ReadDatabaseDescription(&p_database_description))
        success = false;
      p_estimated_size = input_data_view.estimated_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabaseHost::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Opened(
std::move(p_origin), 
std::move(p_database_name), 
std::move(p_database_description), 
std::move(p_estimated_size));
      return true;
    }
    case internal::kWebDatabaseHost_Modified_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::Modified",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebDatabaseHost_Modified_Params_Data* params =
          reinterpret_cast<internal::WebDatabaseHost_Modified_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      base::string16 p_database_name{};
      WebDatabaseHost_Modified_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadDatabaseName(&p_database_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabaseHost::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Modified(
std::move(p_origin), 
std::move(p_database_name));
      return true;
    }
    case internal::kWebDatabaseHost_Closed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::Closed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebDatabaseHost_Closed_Params_Data* params =
          reinterpret_cast<internal::WebDatabaseHost_Closed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      base::string16 p_database_name{};
      WebDatabaseHost_Closed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadDatabaseName(&p_database_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabaseHost::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Closed(
std::move(p_origin), 
std::move(p_database_name));
      return true;
    }
    case internal::kWebDatabaseHost_HandleSqliteError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::HandleSqliteError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebDatabaseHost_HandleSqliteError_Params_Data* params =
          reinterpret_cast<internal::WebDatabaseHost_HandleSqliteError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      base::string16 p_database_name{};
      int32_t p_error{};
      WebDatabaseHost_HandleSqliteError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadDatabaseName(&p_database_name))
        success = false;
      p_error = input_data_view.error();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabaseHost::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->HandleSqliteError(
std::move(p_origin), 
std::move(p_database_name), 
std::move(p_error));
      return true;
    }
  }
  return false;
}

// static
bool WebDatabaseHostStubDispatch::AcceptWithResponder(
    WebDatabaseHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWebDatabaseHost_OpenFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::OpenFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WebDatabaseHost_OpenFile_Params_Data* params =
          reinterpret_cast<
              internal::WebDatabaseHost_OpenFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_vfs_file_name{};
      int32_t p_desired_flags{};
      WebDatabaseHost_OpenFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadVfsFileName(&p_vfs_file_name))
        success = false;
      p_desired_flags = input_data_view.desired_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabaseHost::Name_, 0, false);
        return false;
      }
      WebDatabaseHost::OpenFileCallback callback =
          WebDatabaseHost_OpenFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenFile(
std::move(p_vfs_file_name), 
std::move(p_desired_flags), std::move(callback));
      return true;
    }
    case internal::kWebDatabaseHost_DeleteFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::DeleteFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WebDatabaseHost_DeleteFile_Params_Data* params =
          reinterpret_cast<
              internal::WebDatabaseHost_DeleteFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_vfs_file_name{};
      bool p_sync_dir{};
      WebDatabaseHost_DeleteFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadVfsFileName(&p_vfs_file_name))
        success = false;
      p_sync_dir = input_data_view.sync_dir();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabaseHost::Name_, 1, false);
        return false;
      }
      WebDatabaseHost::DeleteFileCallback callback =
          WebDatabaseHost_DeleteFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteFile(
std::move(p_vfs_file_name), 
std::move(p_sync_dir), std::move(callback));
      return true;
    }
    case internal::kWebDatabaseHost_GetFileAttributes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetFileAttributes",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WebDatabaseHost_GetFileAttributes_Params_Data* params =
          reinterpret_cast<
              internal::WebDatabaseHost_GetFileAttributes_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_vfs_file_name{};
      WebDatabaseHost_GetFileAttributes_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadVfsFileName(&p_vfs_file_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabaseHost::Name_, 2, false);
        return false;
      }
      WebDatabaseHost::GetFileAttributesCallback callback =
          WebDatabaseHost_GetFileAttributes_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetFileAttributes(
std::move(p_vfs_file_name), std::move(callback));
      return true;
    }
    case internal::kWebDatabaseHost_GetFileSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetFileSize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WebDatabaseHost_GetFileSize_Params_Data* params =
          reinterpret_cast<
              internal::WebDatabaseHost_GetFileSize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_vfs_file_name{};
      WebDatabaseHost_GetFileSize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadVfsFileName(&p_vfs_file_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabaseHost::Name_, 3, false);
        return false;
      }
      WebDatabaseHost::GetFileSizeCallback callback =
          WebDatabaseHost_GetFileSize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetFileSize(
std::move(p_vfs_file_name), std::move(callback));
      return true;
    }
    case internal::kWebDatabaseHost_SetFileSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::SetFileSize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WebDatabaseHost_SetFileSize_Params_Data* params =
          reinterpret_cast<
              internal::WebDatabaseHost_SetFileSize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_vfs_file_name{};
      int64_t p_expected_size{};
      WebDatabaseHost_SetFileSize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadVfsFileName(&p_vfs_file_name))
        success = false;
      p_expected_size = input_data_view.expected_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabaseHost::Name_, 4, false);
        return false;
      }
      WebDatabaseHost::SetFileSizeCallback callback =
          WebDatabaseHost_SetFileSize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetFileSize(
std::move(p_vfs_file_name), 
std::move(p_expected_size), std::move(callback));
      return true;
    }
    case internal::kWebDatabaseHost_GetSpaceAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebDatabaseHost::GetSpaceAvailable",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WebDatabaseHost_GetSpaceAvailable_Params_Data* params =
          reinterpret_cast<
              internal::WebDatabaseHost_GetSpaceAvailable_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      WebDatabaseHost_GetSpaceAvailable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebDatabaseHost::Name_, 5, false);
        return false;
      }
      WebDatabaseHost::GetSpaceAvailableCallback callback =
          WebDatabaseHost_GetSpaceAvailable_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetSpaceAvailable(
std::move(p_origin), std::move(callback));
      return true;
    }
    case internal::kWebDatabaseHost_Opened_Name: {
      break;
    }
    case internal::kWebDatabaseHost_Modified_Name: {
      break;
    }
    case internal::kWebDatabaseHost_Closed_Name: {
      break;
    }
    case internal::kWebDatabaseHost_HandleSqliteError_Name: {
      break;
    }
  }
  return false;
}

bool WebDatabaseHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebDatabaseHost RequestValidator");

  switch (message->header()->name) {
    case internal::kWebDatabaseHost_OpenFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_OpenFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_DeleteFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_DeleteFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_GetFileAttributes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_GetFileAttributes_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_GetFileSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_GetFileSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_SetFileSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_SetFileSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_GetSpaceAvailable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_GetSpaceAvailable_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_Opened_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_Opened_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_Modified_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_Modified_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_Closed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_Closed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_HandleSqliteError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_HandleSqliteError_Params_Data>(
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

bool WebDatabaseHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebDatabaseHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWebDatabaseHost_OpenFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_OpenFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_DeleteFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_DeleteFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_GetFileAttributes_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_GetFileAttributes_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_GetFileSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_GetFileSize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_SetFileSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_SetFileSize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebDatabaseHost_GetSpaceAvailable_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data>(
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