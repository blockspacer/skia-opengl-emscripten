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

#include "components/services/leveldb/public/interfaces/leveldb.mojom.h"

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

#include "components/services/leveldb/public/interfaces/leveldb.mojom-params-data.h"
#include "components/services/leveldb/public/interfaces/leveldb.mojom-shared-message-ids.h"

#include "components/services/leveldb/public/interfaces/leveldb.mojom-import-headers.h"


#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_JUMBO_H_
#include "components/services/leveldb/leveldb_struct_traits.h"
#include "mojo/public/cpp/base/memory_allocator_dump_cross_process_uid_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif
namespace leveldb {
namespace mojom {
BatchedOperation::BatchedOperation()
    : type(),
      key(),
      value() {}

BatchedOperation::BatchedOperation(
    BatchOperationType type_in,
    const std::vector<uint8_t>& key_in,
    const base::Optional<std::vector<uint8_t>>& value_in)
    : type(std::move(type_in)),
      key(std::move(key_in)),
      value(std::move(value_in)) {}

BatchedOperation::~BatchedOperation() = default;

bool BatchedOperation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
KeyValue::KeyValue()
    : key(),
      value() {}

KeyValue::KeyValue(
    const std::vector<uint8_t>& key_in,
    const std::vector<uint8_t>& value_in)
    : key(std::move(key_in)),
      value(std::move(value_in)) {}

KeyValue::~KeyValue() = default;

bool KeyValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
OpenOptions::OpenOptions()
    : create_if_missing(),
      error_if_exists(),
      paranoid_checks(),
      write_buffer_size(),
      max_open_files(),
      shared_block_read_cache(SharedReadCache::Default) {}

OpenOptions::OpenOptions(
    bool create_if_missing_in,
    bool error_if_exists_in,
    bool paranoid_checks_in,
    uint64_t write_buffer_size_in,
    int32_t max_open_files_in,
    SharedReadCache shared_block_read_cache_in)
    : create_if_missing(std::move(create_if_missing_in)),
      error_if_exists(std::move(error_if_exists_in)),
      paranoid_checks(std::move(paranoid_checks_in)),
      write_buffer_size(std::move(write_buffer_size_in)),
      max_open_files(std::move(max_open_files_in)),
      shared_block_read_cache(std::move(shared_block_read_cache_in)) {}

OpenOptions::~OpenOptions() = default;

bool OpenOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char LevelDBService::Name_[] = "leveldb.mojom.LevelDBService";

class LevelDBService_Open_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBService_Open_ForwardToCallback(
      LevelDBService::OpenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBService::OpenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBService_Open_ForwardToCallback);
};

class LevelDBService_OpenWithOptions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBService_OpenWithOptions_ForwardToCallback(
      LevelDBService::OpenWithOptionsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBService::OpenWithOptionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBService_OpenWithOptions_ForwardToCallback);
};

class LevelDBService_OpenInMemory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBService_OpenInMemory_ForwardToCallback(
      LevelDBService::OpenInMemoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBService::OpenInMemoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBService_OpenInMemory_ForwardToCallback);
};

class LevelDBService_Destroy_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBService_Destroy_ForwardToCallback(
      LevelDBService::DestroyCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBService::DestroyCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBService_Destroy_ForwardToCallback);
};

LevelDBServiceProxy::LevelDBServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void LevelDBServiceProxy::Open(
    ::filesystem::mojom::DirectoryPtr in_directory, const std::string& in_dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& in_memory_dump_id, LevelDBDatabaseAssociatedRequest in_database, OpenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBService::Open");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBService_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBService_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryPtrDataView>(
      in_directory, &params->directory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in LevelDBService.Open request");
  typename decltype(params->dbname)::BaseType::BufferWriter
      dbname_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_dbname, buffer, &dbname_writer, &serialization_context);
  params->dbname.Set(
      dbname_writer.is_null() ? nullptr : dbname_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dbname.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dbname in LevelDBService.Open request");
  typename decltype(params->memory_dump_id)::BaseType::BufferWriter
      memory_dump_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView>(
      in_memory_dump_id, buffer, &memory_dump_id_writer, &serialization_context);
  params->memory_dump_id.Set(
      memory_dump_id_writer.is_null() ? nullptr : memory_dump_id_writer.data());
  mojo::internal::Serialize<::leveldb::mojom::LevelDBDatabaseAssociatedRequestDataView>(
      in_database, &params->database, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->database),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid database in LevelDBService.Open request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBService::Name_);
  message.set_method_name("Open");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBService_Open_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void LevelDBServiceProxy::OpenWithOptions(
    const ::leveldb_env::Options& in_options, ::filesystem::mojom::DirectoryPtr in_directory, const std::string& in_dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& in_memory_dump_id, LevelDBDatabaseAssociatedRequest in_database, OpenWithOptionsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBService::OpenWithOptions");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBService_OpenWithOptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBService_OpenWithOptions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::leveldb::mojom::OpenOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in LevelDBService.OpenWithOptions request");
  mojo::internal::Serialize<::filesystem::mojom::DirectoryPtrDataView>(
      in_directory, &params->directory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in LevelDBService.OpenWithOptions request");
  typename decltype(params->dbname)::BaseType::BufferWriter
      dbname_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_dbname, buffer, &dbname_writer, &serialization_context);
  params->dbname.Set(
      dbname_writer.is_null() ? nullptr : dbname_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dbname.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dbname in LevelDBService.OpenWithOptions request");
  typename decltype(params->memory_dump_id)::BaseType::BufferWriter
      memory_dump_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView>(
      in_memory_dump_id, buffer, &memory_dump_id_writer, &serialization_context);
  params->memory_dump_id.Set(
      memory_dump_id_writer.is_null() ? nullptr : memory_dump_id_writer.data());
  mojo::internal::Serialize<::leveldb::mojom::LevelDBDatabaseAssociatedRequestDataView>(
      in_database, &params->database, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->database),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid database in LevelDBService.OpenWithOptions request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBService::Name_);
  message.set_method_name("OpenWithOptions");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBService_OpenWithOptions_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void LevelDBServiceProxy::OpenInMemory(
    const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& in_memory_dump_id, const std::string& in_tracking_name, LevelDBDatabaseAssociatedRequest in_database, OpenInMemoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBService::OpenInMemory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBService_OpenInMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBService_OpenInMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->memory_dump_id)::BaseType::BufferWriter
      memory_dump_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::MemoryAllocatorDumpCrossProcessUidDataView>(
      in_memory_dump_id, buffer, &memory_dump_id_writer, &serialization_context);
  params->memory_dump_id.Set(
      memory_dump_id_writer.is_null() ? nullptr : memory_dump_id_writer.data());
  typename decltype(params->tracking_name)::BaseType::BufferWriter
      tracking_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_tracking_name, buffer, &tracking_name_writer, &serialization_context);
  params->tracking_name.Set(
      tracking_name_writer.is_null() ? nullptr : tracking_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->tracking_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null tracking_name in LevelDBService.OpenInMemory request");
  mojo::internal::Serialize<::leveldb::mojom::LevelDBDatabaseAssociatedRequestDataView>(
      in_database, &params->database, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->database),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid database in LevelDBService.OpenInMemory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBService::Name_);
  message.set_method_name("OpenInMemory");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBService_OpenInMemory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBServiceProxy_Destroy_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBServiceProxy_Destroy_Message(
      uint32_t message_flags
      , ::filesystem::mojom::DirectoryPtr param_directory
      , const std::string& param_dbname
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBService_Destroy_Name,
          message_flags)
      , param_directory_(param_directory.PassInterface())
      , param_dbname_(std::move(param_dbname)){}
  ~LevelDBServiceProxy_Destroy_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ::filesystem::mojom::DirectoryPtr param_directory, const std::string& param_dbname) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBServiceProxy_Destroy_Message>(
          kFlags
          , std::move(param_directory)
          , std::move(param_dbname)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBService_Destroy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBService_Destroy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryPtrDataView>(
      param_directory, &params->directory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in LevelDBService.Destroy request");
  typename decltype(params->dbname)::BaseType::BufferWriter
      dbname_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_dbname, buffer, &dbname_writer, &serialization_context);
  params->dbname.Set(
      dbname_writer.is_null() ? nullptr : dbname_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dbname.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dbname in LevelDBService.Destroy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBService* impl, LevelDBService::DestroyCallback callback) {
    impl->Destroy(
        ::filesystem::mojom::DirectoryPtr(std::move(param_directory_)),
        std::move(param_dbname_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBService_Destroy_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::filesystem::mojom::DirectoryPtrDataView>(
      param_directory_, &params->directory, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->directory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid directory in LevelDBService.Destroy request");
  typename decltype(params->dbname)::BaseType::BufferWriter
      dbname_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_dbname_, buffer, &dbname_writer, serialization_context);
  params->dbname.Set(
      dbname_writer.is_null() ? nullptr : dbname_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dbname.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dbname in LevelDBService.Destroy request");
  }
  ::filesystem::mojom::DirectoryPtrInfo param_directory_;
  std::string param_dbname_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBServiceProxy_Destroy_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBServiceProxy_Destroy_Message::kMessageTag = {};

void LevelDBServiceProxy::Destroy(
    ::filesystem::mojom::DirectoryPtr in_directory, const std::string& in_dbname, DestroyCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBService::Destroy");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBServiceProxy_Destroy_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_directory), std::move(in_dbname));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBService::Name_);
  message.set_method_name("Destroy");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBService_Destroy_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBService_Open_ProxyToResponder {
 public:
  static LevelDBService::OpenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBService_Open_ProxyToResponder> proxy(
        new LevelDBService_Open_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBService_Open_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBService_Open_ProxyToResponder() {
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
  LevelDBService_Open_ProxyToResponder(
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
        << "LevelDBService::OpenCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBService_Open_ProxyToResponder);
};

bool LevelDBService_Open_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBService::OpenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LevelDBService_Open_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBService_Open_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  LevelDBService_Open_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void LevelDBService_Open_ProxyToResponder::Run(
    DatabaseError in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBService_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBService_Open_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBService::OpenCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBService::Name_);
  message.set_method_name("Open");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBService_OpenWithOptions_ProxyToResponder {
 public:
  static LevelDBService::OpenWithOptionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBService_OpenWithOptions_ProxyToResponder> proxy(
        new LevelDBService_OpenWithOptions_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBService_OpenWithOptions_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBService_OpenWithOptions_ProxyToResponder() {
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
  LevelDBService_OpenWithOptions_ProxyToResponder(
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
        << "LevelDBService::OpenWithOptionsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBService_OpenWithOptions_ProxyToResponder);
};

bool LevelDBService_OpenWithOptions_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBService::OpenWithOptionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LevelDBService_OpenWithOptions_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBService_OpenWithOptions_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  LevelDBService_OpenWithOptions_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBService::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void LevelDBService_OpenWithOptions_ProxyToResponder::Run(
    DatabaseError in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBService_OpenWithOptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBService_OpenWithOptions_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBService::OpenWithOptionsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBService::Name_);
  message.set_method_name("OpenWithOptions");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBService_OpenInMemory_ProxyToResponder {
 public:
  static LevelDBService::OpenInMemoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBService_OpenInMemory_ProxyToResponder> proxy(
        new LevelDBService_OpenInMemory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBService_OpenInMemory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBService_OpenInMemory_ProxyToResponder() {
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
  LevelDBService_OpenInMemory_ProxyToResponder(
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
        << "LevelDBService::OpenInMemoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBService_OpenInMemory_ProxyToResponder);
};

bool LevelDBService_OpenInMemory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBService::OpenInMemoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LevelDBService_OpenInMemory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBService_OpenInMemory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  LevelDBService_OpenInMemory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBService::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void LevelDBService_OpenInMemory_ProxyToResponder::Run(
    DatabaseError in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBService_OpenInMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBService_OpenInMemory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBService::OpenInMemoryCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBService::Name_);
  message.set_method_name("OpenInMemory");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBService_Destroy_ProxyToResponder {
 public:
  static LevelDBService::DestroyCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBService_Destroy_ProxyToResponder> proxy(
        new LevelDBService_Destroy_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBService_Destroy_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBService_Destroy_ProxyToResponder() {
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
  LevelDBService_Destroy_ProxyToResponder(
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
        << "LevelDBService::DestroyCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBService_Destroy_ProxyToResponder);
};
class LevelDBService_Destroy_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBService_Destroy_Response_Message(
      uint32_t message_flags
      , DatabaseError param_status
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBService_Destroy_Name,
          message_flags)
      , param_status_(std::move(param_status)){}
  ~LevelDBService_Destroy_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      DatabaseError param_status) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBService_Destroy_Response_Message>(
          kFlags
          , std::move(param_status)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBService_Destroy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBService_Destroy_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBService::DestroyCallback* callback) {
    std::move(*callback).Run(
        std::move(param_status_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBService_Destroy_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  }
  DatabaseError param_status_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBService_Destroy_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBService_Destroy_Response_Message::kMessageTag = {};

bool LevelDBService_Destroy_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBService::DestroyCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBService_Destroy_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBService_Destroy_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBService_Destroy_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  LevelDBService_Destroy_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBService::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void LevelDBService_Destroy_ProxyToResponder::Run(
    DatabaseError in_status) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBService_Destroy_Response_Message::Build(kSerialize, is_sync_, std::move(in_status));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBService::DestroyCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBService::Name_);
  message.set_method_name("Destroy");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool LevelDBServiceStubDispatch::Accept(
    LevelDBService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLevelDBService_Open_Name: {
      break;
    }
    case internal::kLevelDBService_OpenWithOptions_Name: {
      break;
    }
    case internal::kLevelDBService_OpenInMemory_Name: {
      break;
    }
    case internal::kLevelDBService_Destroy_Name: {
      break;
    }
  }
  return false;
}

// static
bool LevelDBServiceStubDispatch::AcceptWithResponder(
    LevelDBService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kLevelDBService_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBService::Open",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::LevelDBService_Open_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBService_Open_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::filesystem::mojom::DirectoryPtr p_directory{};
      std::string p_dbname{};
      base::Optional<base::trace_event::MemoryAllocatorDumpGuid> p_memory_dump_id{};
      LevelDBDatabaseAssociatedRequest p_database{};
      LevelDBService_Open_ParamsDataView input_data_view(params, &serialization_context);
      
      p_directory =
          input_data_view.TakeDirectory<decltype(p_directory)>();
      if (!input_data_view.ReadDbname(&p_dbname))
        success = false;
      if (!input_data_view.ReadMemoryDumpId(&p_memory_dump_id))
        success = false;
      p_database =
          input_data_view.TakeDatabase<decltype(p_database)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBService::Name_, 0, false);
        return false;
      }
      LevelDBService::OpenCallback callback =
          LevelDBService_Open_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Open(
std::move(p_directory), 
std::move(p_dbname), 
std::move(p_memory_dump_id), 
std::move(p_database), std::move(callback));
      return true;
    }
    case internal::kLevelDBService_OpenWithOptions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBService::OpenWithOptions",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::LevelDBService_OpenWithOptions_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBService_OpenWithOptions_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::leveldb_env::Options p_options{};
      ::filesystem::mojom::DirectoryPtr p_directory{};
      std::string p_dbname{};
      base::Optional<base::trace_event::MemoryAllocatorDumpGuid> p_memory_dump_id{};
      LevelDBDatabaseAssociatedRequest p_database{};
      LevelDBService_OpenWithOptions_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      p_directory =
          input_data_view.TakeDirectory<decltype(p_directory)>();
      if (!input_data_view.ReadDbname(&p_dbname))
        success = false;
      if (!input_data_view.ReadMemoryDumpId(&p_memory_dump_id))
        success = false;
      p_database =
          input_data_view.TakeDatabase<decltype(p_database)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBService::Name_, 1, false);
        return false;
      }
      LevelDBService::OpenWithOptionsCallback callback =
          LevelDBService_OpenWithOptions_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenWithOptions(
std::move(p_options), 
std::move(p_directory), 
std::move(p_dbname), 
std::move(p_memory_dump_id), 
std::move(p_database), std::move(callback));
      return true;
    }
    case internal::kLevelDBService_OpenInMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBService::OpenInMemory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::LevelDBService_OpenInMemory_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBService_OpenInMemory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<base::trace_event::MemoryAllocatorDumpGuid> p_memory_dump_id{};
      std::string p_tracking_name{};
      LevelDBDatabaseAssociatedRequest p_database{};
      LevelDBService_OpenInMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMemoryDumpId(&p_memory_dump_id))
        success = false;
      if (!input_data_view.ReadTrackingName(&p_tracking_name))
        success = false;
      p_database =
          input_data_view.TakeDatabase<decltype(p_database)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBService::Name_, 2, false);
        return false;
      }
      LevelDBService::OpenInMemoryCallback callback =
          LevelDBService_OpenInMemory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenInMemory(
std::move(p_memory_dump_id), 
std::move(p_tracking_name), 
std::move(p_database), std::move(callback));
      return true;
    }
    case internal::kLevelDBService_Destroy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBService::Destroy",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBServiceProxy_Destroy_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBService::DestroyCallback callback =
              LevelDBService_Destroy_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBService_Destroy_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBService_Destroy_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::filesystem::mojom::DirectoryPtr p_directory{};
      std::string p_dbname{};
      LevelDBService_Destroy_ParamsDataView input_data_view(params, &serialization_context);
      
      p_directory =
          input_data_view.TakeDirectory<decltype(p_directory)>();
      if (!input_data_view.ReadDbname(&p_dbname))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBService::Name_, 3, false);
        return false;
      }
      LevelDBService::DestroyCallback callback =
          LevelDBService_Destroy_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Destroy(
std::move(p_directory), 
std::move(p_dbname), std::move(callback));
      return true;
    }
  }
  return false;
}

bool LevelDBServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LevelDBService RequestValidator");

  switch (message->header()->name) {
    case internal::kLevelDBService_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBService_Open_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBService_OpenWithOptions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBService_OpenWithOptions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBService_OpenInMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBService_OpenInMemory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBService_Destroy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBService_Destroy_Params_Data>(
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

bool LevelDBServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LevelDBService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kLevelDBService_Open_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBService_Open_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBService_OpenWithOptions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBService_OpenWithOptions_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBService_OpenInMemory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBService_OpenInMemory_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBService_Destroy_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBService_Destroy_ResponseParams_Data>(
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
const char LevelDBDatabase::Name_[] = "leveldb.mojom.LevelDBDatabase";
bool LevelDBDatabase::IteratorSeekToFirst(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) {
  NOTREACHED();
  return false;
}
bool LevelDBDatabase::IteratorSeekToLast(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) {
  NOTREACHED();
  return false;
}
bool LevelDBDatabase::IteratorSeek(const base::UnguessableToken& iterator, const std::vector<uint8_t>& target, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) {
  NOTREACHED();
  return false;
}
bool LevelDBDatabase::IteratorNext(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) {
  NOTREACHED();
  return false;
}
bool LevelDBDatabase::IteratorPrev(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) {
  NOTREACHED();
  return false;
}

class LevelDBDatabase_Put_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_Put_ForwardToCallback(
      LevelDBDatabase::PutCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::PutCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Put_ForwardToCallback);
};

class LevelDBDatabase_Delete_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_Delete_ForwardToCallback(
      LevelDBDatabase::DeleteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::DeleteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Delete_ForwardToCallback);
};

class LevelDBDatabase_DeletePrefixed_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_DeletePrefixed_ForwardToCallback(
      LevelDBDatabase::DeletePrefixedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::DeletePrefixedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_DeletePrefixed_ForwardToCallback);
};

class LevelDBDatabase_RewriteDB_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_RewriteDB_ForwardToCallback(
      LevelDBDatabase::RewriteDBCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::RewriteDBCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_RewriteDB_ForwardToCallback);
};

class LevelDBDatabase_Write_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_Write_ForwardToCallback(
      LevelDBDatabase::WriteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::WriteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Write_ForwardToCallback);
};

class LevelDBDatabase_Get_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_Get_ForwardToCallback(
      LevelDBDatabase::GetCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::GetCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Get_ForwardToCallback);
};

class LevelDBDatabase_GetPrefixed_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_GetPrefixed_ForwardToCallback(
      LevelDBDatabase::GetPrefixedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::GetPrefixedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_GetPrefixed_ForwardToCallback);
};

class LevelDBDatabase_CopyPrefixed_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_CopyPrefixed_ForwardToCallback(
      LevelDBDatabase::CopyPrefixedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::CopyPrefixedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_CopyPrefixed_ForwardToCallback);
};

class LevelDBDatabase_GetSnapshot_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_GetSnapshot_ForwardToCallback(
      LevelDBDatabase::GetSnapshotCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::GetSnapshotCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_GetSnapshot_ForwardToCallback);
};

class LevelDBDatabase_GetFromSnapshot_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_GetFromSnapshot_ForwardToCallback(
      LevelDBDatabase::GetFromSnapshotCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::GetFromSnapshotCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_GetFromSnapshot_ForwardToCallback);
};

class LevelDBDatabase_NewIterator_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_NewIterator_ForwardToCallback(
      LevelDBDatabase::NewIteratorCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::NewIteratorCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_NewIterator_ForwardToCallback);
};

class LevelDBDatabase_NewIteratorFromSnapshot_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_NewIteratorFromSnapshot_ForwardToCallback(
      LevelDBDatabase::NewIteratorFromSnapshotCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::NewIteratorFromSnapshotCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_NewIteratorFromSnapshot_ForwardToCallback);
};
class LevelDBDatabase_IteratorSeekToFirst_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_IteratorSeekToFirst_HandleSyncResponse(
      bool* result, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value)
      : result_(result), out_valid_(out_valid), out_status_(out_status), out_key_(out_key), out_value_(out_value) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_valid_;
  DatabaseError* out_status_;
  base::Optional<std::vector<uint8_t>>* out_key_;
  base::Optional<std::vector<uint8_t>>* out_value_;DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeekToFirst_HandleSyncResponse);
};

class LevelDBDatabase_IteratorSeekToFirst_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_IteratorSeekToFirst_ForwardToCallback(
      LevelDBDatabase::IteratorSeekToFirstCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::IteratorSeekToFirstCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeekToFirst_ForwardToCallback);
};
class LevelDBDatabase_IteratorSeekToLast_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_IteratorSeekToLast_HandleSyncResponse(
      bool* result, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value)
      : result_(result), out_valid_(out_valid), out_status_(out_status), out_key_(out_key), out_value_(out_value) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_valid_;
  DatabaseError* out_status_;
  base::Optional<std::vector<uint8_t>>* out_key_;
  base::Optional<std::vector<uint8_t>>* out_value_;DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeekToLast_HandleSyncResponse);
};

class LevelDBDatabase_IteratorSeekToLast_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_IteratorSeekToLast_ForwardToCallback(
      LevelDBDatabase::IteratorSeekToLastCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::IteratorSeekToLastCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeekToLast_ForwardToCallback);
};
class LevelDBDatabase_IteratorSeek_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_IteratorSeek_HandleSyncResponse(
      bool* result, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value)
      : result_(result), out_valid_(out_valid), out_status_(out_status), out_key_(out_key), out_value_(out_value) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_valid_;
  DatabaseError* out_status_;
  base::Optional<std::vector<uint8_t>>* out_key_;
  base::Optional<std::vector<uint8_t>>* out_value_;DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeek_HandleSyncResponse);
};

class LevelDBDatabase_IteratorSeek_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_IteratorSeek_ForwardToCallback(
      LevelDBDatabase::IteratorSeekCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::IteratorSeekCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeek_ForwardToCallback);
};
class LevelDBDatabase_IteratorNext_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_IteratorNext_HandleSyncResponse(
      bool* result, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value)
      : result_(result), out_valid_(out_valid), out_status_(out_status), out_key_(out_key), out_value_(out_value) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_valid_;
  DatabaseError* out_status_;
  base::Optional<std::vector<uint8_t>>* out_key_;
  base::Optional<std::vector<uint8_t>>* out_value_;DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorNext_HandleSyncResponse);
};

class LevelDBDatabase_IteratorNext_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_IteratorNext_ForwardToCallback(
      LevelDBDatabase::IteratorNextCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::IteratorNextCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorNext_ForwardToCallback);
};
class LevelDBDatabase_IteratorPrev_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_IteratorPrev_HandleSyncResponse(
      bool* result, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value)
      : result_(result), out_valid_(out_valid), out_status_(out_status), out_key_(out_key), out_value_(out_value) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_valid_;
  DatabaseError* out_status_;
  base::Optional<std::vector<uint8_t>>* out_key_;
  base::Optional<std::vector<uint8_t>>* out_value_;DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorPrev_HandleSyncResponse);
};

class LevelDBDatabase_IteratorPrev_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBDatabase_IteratorPrev_ForwardToCallback(
      LevelDBDatabase::IteratorPrevCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBDatabase::IteratorPrevCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorPrev_ForwardToCallback);
};

LevelDBDatabaseProxy::LevelDBDatabaseProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class LevelDBDatabaseProxy_Put_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_Put_Message(
      uint32_t message_flags
      , const std::vector<uint8_t>& param_key
      , const std::vector<uint8_t>& param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_Put_Name,
          message_flags)
      , param_key_(std::move(param_key))
      , param_value_(std::move(param_value)){}
  ~LevelDBDatabaseProxy_Put_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::vector<uint8_t>& param_key, const std::vector<uint8_t>& param_value) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_Put_Message>(
          kFlags
          , std::move(param_key)
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_Put_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_Put_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBDatabase.Put request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBDatabase.Put request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::PutCallback callback) {
    impl->Put(
        std::move(param_key_),
        std::move(param_value_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_Put_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_, buffer, &key_writer, &key_validate_params,
      serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBDatabase.Put request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value_, buffer, &value_writer, &value_validate_params,
      serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBDatabase.Put request");
  }
  std::vector<uint8_t> param_key_;
  std::vector<uint8_t> param_value_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_Put_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_Put_Message::kMessageTag = {};

void LevelDBDatabaseProxy::Put(
    const std::vector<uint8_t>& in_key, const std::vector<uint8_t>& in_value, PutCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::Put");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_Put_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_key), std::move(in_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("Put");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_Put_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_Delete_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_Delete_Message(
      uint32_t message_flags
      , const std::vector<uint8_t>& param_key
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_Delete_Name,
          message_flags)
      , param_key_(std::move(param_key)){}
  ~LevelDBDatabaseProxy_Delete_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::vector<uint8_t>& param_key) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_Delete_Message>(
          kFlags
          , std::move(param_key)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_Delete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBDatabase.Delete request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::DeleteCallback callback) {
    impl->Delete(
        std::move(param_key_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_Delete_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_, buffer, &key_writer, &key_validate_params,
      serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBDatabase.Delete request");
  }
  std::vector<uint8_t> param_key_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_Delete_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_Delete_Message::kMessageTag = {};

void LevelDBDatabaseProxy::Delete(
    const std::vector<uint8_t>& in_key, DeleteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::Delete");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_Delete_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_key));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("Delete");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_Delete_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_DeletePrefixed_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_DeletePrefixed_Message(
      uint32_t message_flags
      , const std::vector<uint8_t>& param_key_prefix
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_DeletePrefixed_Name,
          message_flags)
      , param_key_prefix_(std::move(param_key_prefix)){}
  ~LevelDBDatabaseProxy_DeletePrefixed_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::vector<uint8_t>& param_key_prefix) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_DeletePrefixed_Message>(
          kFlags
          , std::move(param_key_prefix)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_DeletePrefixed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_DeletePrefixed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_prefix)::BaseType::BufferWriter
      key_prefix_writer;
  const mojo::internal::ContainerValidateParams key_prefix_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_prefix, buffer, &key_prefix_writer, &key_prefix_validate_params,
      &serialization_context);
  params->key_prefix.Set(
      key_prefix_writer.is_null() ? nullptr : key_prefix_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_prefix.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_prefix in LevelDBDatabase.DeletePrefixed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::DeletePrefixedCallback callback) {
    impl->DeletePrefixed(
        std::move(param_key_prefix_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_DeletePrefixed_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->key_prefix)::BaseType::BufferWriter
      key_prefix_writer;
  const mojo::internal::ContainerValidateParams key_prefix_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_prefix_, buffer, &key_prefix_writer, &key_prefix_validate_params,
      serialization_context);
  params->key_prefix.Set(
      key_prefix_writer.is_null() ? nullptr : key_prefix_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_prefix.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_prefix in LevelDBDatabase.DeletePrefixed request");
  }
  std::vector<uint8_t> param_key_prefix_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_DeletePrefixed_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_DeletePrefixed_Message::kMessageTag = {};

void LevelDBDatabaseProxy::DeletePrefixed(
    const std::vector<uint8_t>& in_key_prefix, DeletePrefixedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::DeletePrefixed");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_DeletePrefixed_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_key_prefix));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("DeletePrefixed");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_DeletePrefixed_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_RewriteDB_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_RewriteDB_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_RewriteDB_Name,
          message_flags){}
  ~LevelDBDatabaseProxy_RewriteDB_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_RewriteDB_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_RewriteDB_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_RewriteDB_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::RewriteDBCallback callback) {
    impl->RewriteDB(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_RewriteDB_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_RewriteDB_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_RewriteDB_Message::kMessageTag = {};

void LevelDBDatabaseProxy::RewriteDB(
    RewriteDBCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::RewriteDB");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_RewriteDB_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("RewriteDB");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_RewriteDB_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_Write_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_Write_Message(
      uint32_t message_flags
      , std::vector<BatchedOperationPtr> param_operations
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_Write_Name,
          message_flags)
      , param_operations_(std::move(param_operations)){}
  ~LevelDBDatabaseProxy_Write_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      std::vector<BatchedOperationPtr> param_operations) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_Write_Message>(
          kFlags
          , std::move(param_operations)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_Write_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->operations)::BaseType::BufferWriter
      operations_writer;
  const mojo::internal::ContainerValidateParams operations_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::leveldb::mojom::BatchedOperationDataView>>(
      param_operations, buffer, &operations_writer, &operations_validate_params,
      &serialization_context);
  params->operations.Set(
      operations_writer.is_null() ? nullptr : operations_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->operations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null operations in LevelDBDatabase.Write request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::WriteCallback callback) {
    impl->Write(
        std::move(param_operations_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_Write_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->operations)::BaseType::BufferWriter
      operations_writer;
  const mojo::internal::ContainerValidateParams operations_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::leveldb::mojom::BatchedOperationDataView>>(
      param_operations_, buffer, &operations_writer, &operations_validate_params,
      serialization_context);
  params->operations.Set(
      operations_writer.is_null() ? nullptr : operations_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->operations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null operations in LevelDBDatabase.Write request");
  }
  std::vector<BatchedOperationPtr> param_operations_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_Write_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_Write_Message::kMessageTag = {};

void LevelDBDatabaseProxy::Write(
    std::vector<BatchedOperationPtr> in_operations, WriteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::Write");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_Write_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_operations));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("Write");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_Write_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_Get_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_Get_Message(
      uint32_t message_flags
      , const std::vector<uint8_t>& param_key
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_Get_Name,
          message_flags)
      , param_key_(std::move(param_key)){}
  ~LevelDBDatabaseProxy_Get_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::vector<uint8_t>& param_key) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_Get_Message>(
          kFlags
          , std::move(param_key)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_Get_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_Get_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBDatabase.Get request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::GetCallback callback) {
    impl->Get(
        std::move(param_key_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_Get_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_, buffer, &key_writer, &key_validate_params,
      serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBDatabase.Get request");
  }
  std::vector<uint8_t> param_key_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_Get_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_Get_Message::kMessageTag = {};

void LevelDBDatabaseProxy::Get(
    const std::vector<uint8_t>& in_key, GetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::Get");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_Get_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_key));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("Get");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_Get_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_GetPrefixed_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_GetPrefixed_Message(
      uint32_t message_flags
      , const std::vector<uint8_t>& param_key_prefix
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_GetPrefixed_Name,
          message_flags)
      , param_key_prefix_(std::move(param_key_prefix)){}
  ~LevelDBDatabaseProxy_GetPrefixed_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::vector<uint8_t>& param_key_prefix) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_GetPrefixed_Message>(
          kFlags
          , std::move(param_key_prefix)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_GetPrefixed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_GetPrefixed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_prefix)::BaseType::BufferWriter
      key_prefix_writer;
  const mojo::internal::ContainerValidateParams key_prefix_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_prefix, buffer, &key_prefix_writer, &key_prefix_validate_params,
      &serialization_context);
  params->key_prefix.Set(
      key_prefix_writer.is_null() ? nullptr : key_prefix_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_prefix.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_prefix in LevelDBDatabase.GetPrefixed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::GetPrefixedCallback callback) {
    impl->GetPrefixed(
        std::move(param_key_prefix_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_GetPrefixed_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->key_prefix)::BaseType::BufferWriter
      key_prefix_writer;
  const mojo::internal::ContainerValidateParams key_prefix_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_prefix_, buffer, &key_prefix_writer, &key_prefix_validate_params,
      serialization_context);
  params->key_prefix.Set(
      key_prefix_writer.is_null() ? nullptr : key_prefix_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_prefix.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_prefix in LevelDBDatabase.GetPrefixed request");
  }
  std::vector<uint8_t> param_key_prefix_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_GetPrefixed_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_GetPrefixed_Message::kMessageTag = {};

void LevelDBDatabaseProxy::GetPrefixed(
    const std::vector<uint8_t>& in_key_prefix, GetPrefixedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetPrefixed");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_GetPrefixed_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_key_prefix));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("GetPrefixed");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_GetPrefixed_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_CopyPrefixed_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_CopyPrefixed_Message(
      uint32_t message_flags
      , const std::vector<uint8_t>& param_source_key_prefix
      , const std::vector<uint8_t>& param_destination_key_prefix
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_CopyPrefixed_Name,
          message_flags)
      , param_source_key_prefix_(std::move(param_source_key_prefix))
      , param_destination_key_prefix_(std::move(param_destination_key_prefix)){}
  ~LevelDBDatabaseProxy_CopyPrefixed_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::vector<uint8_t>& param_source_key_prefix, const std::vector<uint8_t>& param_destination_key_prefix) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_CopyPrefixed_Message>(
          kFlags
          , std::move(param_source_key_prefix)
          , std::move(param_destination_key_prefix)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_CopyPrefixed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_CopyPrefixed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source_key_prefix)::BaseType::BufferWriter
      source_key_prefix_writer;
  const mojo::internal::ContainerValidateParams source_key_prefix_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_source_key_prefix, buffer, &source_key_prefix_writer, &source_key_prefix_validate_params,
      &serialization_context);
  params->source_key_prefix.Set(
      source_key_prefix_writer.is_null() ? nullptr : source_key_prefix_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_key_prefix.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_key_prefix in LevelDBDatabase.CopyPrefixed request");
  typename decltype(params->destination_key_prefix)::BaseType::BufferWriter
      destination_key_prefix_writer;
  const mojo::internal::ContainerValidateParams destination_key_prefix_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_destination_key_prefix, buffer, &destination_key_prefix_writer, &destination_key_prefix_validate_params,
      &serialization_context);
  params->destination_key_prefix.Set(
      destination_key_prefix_writer.is_null() ? nullptr : destination_key_prefix_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->destination_key_prefix.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null destination_key_prefix in LevelDBDatabase.CopyPrefixed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::CopyPrefixedCallback callback) {
    impl->CopyPrefixed(
        std::move(param_source_key_prefix_),
        std::move(param_destination_key_prefix_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_CopyPrefixed_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->source_key_prefix)::BaseType::BufferWriter
      source_key_prefix_writer;
  const mojo::internal::ContainerValidateParams source_key_prefix_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_source_key_prefix_, buffer, &source_key_prefix_writer, &source_key_prefix_validate_params,
      serialization_context);
  params->source_key_prefix.Set(
      source_key_prefix_writer.is_null() ? nullptr : source_key_prefix_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_key_prefix.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_key_prefix in LevelDBDatabase.CopyPrefixed request");
  typename decltype(params->destination_key_prefix)::BaseType::BufferWriter
      destination_key_prefix_writer;
  const mojo::internal::ContainerValidateParams destination_key_prefix_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_destination_key_prefix_, buffer, &destination_key_prefix_writer, &destination_key_prefix_validate_params,
      serialization_context);
  params->destination_key_prefix.Set(
      destination_key_prefix_writer.is_null() ? nullptr : destination_key_prefix_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->destination_key_prefix.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null destination_key_prefix in LevelDBDatabase.CopyPrefixed request");
  }
  std::vector<uint8_t> param_source_key_prefix_;
  std::vector<uint8_t> param_destination_key_prefix_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_CopyPrefixed_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_CopyPrefixed_Message::kMessageTag = {};

void LevelDBDatabaseProxy::CopyPrefixed(
    const std::vector<uint8_t>& in_source_key_prefix, const std::vector<uint8_t>& in_destination_key_prefix, CopyPrefixedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::CopyPrefixed");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_CopyPrefixed_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_source_key_prefix), std::move(in_destination_key_prefix));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("CopyPrefixed");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_CopyPrefixed_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_GetSnapshot_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_GetSnapshot_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_GetSnapshot_Name,
          message_flags){}
  ~LevelDBDatabaseProxy_GetSnapshot_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_GetSnapshot_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_GetSnapshot_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_GetSnapshot_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::GetSnapshotCallback callback) {
    impl->GetSnapshot(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_GetSnapshot_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_GetSnapshot_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_GetSnapshot_Message::kMessageTag = {};

void LevelDBDatabaseProxy::GetSnapshot(
    GetSnapshotCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetSnapshot");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_GetSnapshot_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("GetSnapshot");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_GetSnapshot_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_ReleaseSnapshot_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_ReleaseSnapshot_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_snapshot
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_ReleaseSnapshot_Name,
          message_flags)
      , param_snapshot_(std::move(param_snapshot)){}
  ~LevelDBDatabaseProxy_ReleaseSnapshot_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::UnguessableToken& param_snapshot) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_ReleaseSnapshot_Message>(
          kFlags
          , std::move(param_snapshot)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_ReleaseSnapshot_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_ReleaseSnapshot_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->snapshot)::BaseType::BufferWriter
      snapshot_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_snapshot, buffer, &snapshot_writer, &serialization_context);
  params->snapshot.Set(
      snapshot_writer.is_null() ? nullptr : snapshot_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshot.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshot in LevelDBDatabase.ReleaseSnapshot request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl) {
    impl->ReleaseSnapshot(
        std::move(param_snapshot_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_ReleaseSnapshot_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->snapshot)::BaseType::BufferWriter
      snapshot_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_snapshot_, buffer, &snapshot_writer, serialization_context);
  params->snapshot.Set(
      snapshot_writer.is_null() ? nullptr : snapshot_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshot.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshot in LevelDBDatabase.ReleaseSnapshot request");
  }
  base::UnguessableToken param_snapshot_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_ReleaseSnapshot_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_ReleaseSnapshot_Message::kMessageTag = {};

void LevelDBDatabaseProxy::ReleaseSnapshot(
    const base::UnguessableToken& in_snapshot) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::ReleaseSnapshot");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_ReleaseSnapshot_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_snapshot));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("ReleaseSnapshot");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class LevelDBDatabaseProxy_GetFromSnapshot_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_GetFromSnapshot_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_snapshot
      , const std::vector<uint8_t>& param_key
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_GetFromSnapshot_Name,
          message_flags)
      , param_snapshot_(std::move(param_snapshot))
      , param_key_(std::move(param_key)){}
  ~LevelDBDatabaseProxy_GetFromSnapshot_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::UnguessableToken& param_snapshot, const std::vector<uint8_t>& param_key) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_GetFromSnapshot_Message>(
          kFlags
          , std::move(param_snapshot)
          , std::move(param_key)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_GetFromSnapshot_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_GetFromSnapshot_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->snapshot)::BaseType::BufferWriter
      snapshot_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_snapshot, buffer, &snapshot_writer, &serialization_context);
  params->snapshot.Set(
      snapshot_writer.is_null() ? nullptr : snapshot_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshot.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshot in LevelDBDatabase.GetFromSnapshot request");
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBDatabase.GetFromSnapshot request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::GetFromSnapshotCallback callback) {
    impl->GetFromSnapshot(
        std::move(param_snapshot_),
        std::move(param_key_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_GetFromSnapshot_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->snapshot)::BaseType::BufferWriter
      snapshot_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_snapshot_, buffer, &snapshot_writer, serialization_context);
  params->snapshot.Set(
      snapshot_writer.is_null() ? nullptr : snapshot_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshot.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshot in LevelDBDatabase.GetFromSnapshot request");
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_, buffer, &key_writer, &key_validate_params,
      serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBDatabase.GetFromSnapshot request");
  }
  base::UnguessableToken param_snapshot_;
  std::vector<uint8_t> param_key_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_GetFromSnapshot_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_GetFromSnapshot_Message::kMessageTag = {};

void LevelDBDatabaseProxy::GetFromSnapshot(
    const base::UnguessableToken& in_snapshot, const std::vector<uint8_t>& in_key, GetFromSnapshotCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetFromSnapshot");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_GetFromSnapshot_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_snapshot), std::move(in_key));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("GetFromSnapshot");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_GetFromSnapshot_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_NewIterator_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_NewIterator_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_NewIterator_Name,
          message_flags){}
  ~LevelDBDatabaseProxy_NewIterator_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_NewIterator_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_NewIterator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_NewIterator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::NewIteratorCallback callback) {
    impl->NewIterator(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_NewIterator_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_NewIterator_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_NewIterator_Message::kMessageTag = {};

void LevelDBDatabaseProxy::NewIterator(
    NewIteratorCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::NewIterator");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_NewIterator_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("NewIterator");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_NewIterator_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_NewIteratorFromSnapshot_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_NewIteratorFromSnapshot_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_snapshot
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_NewIteratorFromSnapshot_Name,
          message_flags)
      , param_snapshot_(std::move(param_snapshot)){}
  ~LevelDBDatabaseProxy_NewIteratorFromSnapshot_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::UnguessableToken& param_snapshot) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_NewIteratorFromSnapshot_Message>(
          kFlags
          , std::move(param_snapshot)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_NewIteratorFromSnapshot_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_NewIteratorFromSnapshot_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->snapshot)::BaseType::BufferWriter
      snapshot_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_snapshot, buffer, &snapshot_writer, &serialization_context);
  params->snapshot.Set(
      snapshot_writer.is_null() ? nullptr : snapshot_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshot.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshot in LevelDBDatabase.NewIteratorFromSnapshot request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::NewIteratorFromSnapshotCallback callback) {
    impl->NewIteratorFromSnapshot(
        std::move(param_snapshot_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_NewIteratorFromSnapshot_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->snapshot)::BaseType::BufferWriter
      snapshot_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_snapshot_, buffer, &snapshot_writer, serialization_context);
  params->snapshot.Set(
      snapshot_writer.is_null() ? nullptr : snapshot_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshot.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshot in LevelDBDatabase.NewIteratorFromSnapshot request");
  }
  base::UnguessableToken param_snapshot_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_NewIteratorFromSnapshot_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_NewIteratorFromSnapshot_Message::kMessageTag = {};

void LevelDBDatabaseProxy::NewIteratorFromSnapshot(
    const base::UnguessableToken& in_snapshot, NewIteratorFromSnapshotCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::NewIteratorFromSnapshot");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_NewIteratorFromSnapshot_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_snapshot));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("NewIteratorFromSnapshot");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_NewIteratorFromSnapshot_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_ReleaseIterator_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_ReleaseIterator_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_iterator
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_ReleaseIterator_Name,
          message_flags)
      , param_iterator_(std::move(param_iterator)){}
  ~LevelDBDatabaseProxy_ReleaseIterator_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::UnguessableToken& param_iterator) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_ReleaseIterator_Message>(
          kFlags
          , std::move(param_iterator)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_ReleaseIterator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_ReleaseIterator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator, buffer, &iterator_writer, &serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.ReleaseIterator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl) {
    impl->ReleaseIterator(
        std::move(param_iterator_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_ReleaseIterator_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator_, buffer, &iterator_writer, serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.ReleaseIterator request");
  }
  base::UnguessableToken param_iterator_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_ReleaseIterator_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_ReleaseIterator_Message::kMessageTag = {};

void LevelDBDatabaseProxy::ReleaseIterator(
    const base::UnguessableToken& in_iterator) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::ReleaseIterator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_ReleaseIterator_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_iterator));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("ReleaseIterator");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class LevelDBDatabaseProxy_IteratorSeekToFirst_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_IteratorSeekToFirst_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_iterator
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_IteratorSeekToFirst_Name,
          message_flags)
      , param_iterator_(std::move(param_iterator)){}
  ~LevelDBDatabaseProxy_IteratorSeekToFirst_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::UnguessableToken& param_iterator) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_IteratorSeekToFirst_Message>(
          kFlags
          , std::move(param_iterator)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_IteratorSeekToFirst_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeekToFirst_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator, buffer, &iterator_writer, &serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.IteratorSeekToFirst request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::IteratorSeekToFirstCallback callback) {
    impl->IteratorSeekToFirst(
        std::move(param_iterator_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeekToFirst_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator_, buffer, &iterator_writer, serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.IteratorSeekToFirst request");
  }
  base::UnguessableToken param_iterator_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_IteratorSeekToFirst_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_IteratorSeekToFirst_Message::kMessageTag = {};
bool LevelDBDatabaseProxy::IteratorSeekToFirst(
    const base::UnguessableToken& param_iterator, bool* out_param_valid, DatabaseError* out_param_status, base::Optional<std::vector<uint8_t>>* out_param_key, base::Optional<std::vector<uint8_t>>* out_param_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekToFirst");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_IteratorSeekToFirst_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_iterator));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorSeekToFirst");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_IteratorSeekToFirst_HandleSyncResponse(
          &result, out_param_valid, out_param_status, out_param_key, out_param_value));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void LevelDBDatabaseProxy::IteratorSeekToFirst(
    const base::UnguessableToken& in_iterator, IteratorSeekToFirstCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekToFirst");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_IteratorSeekToFirst_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_iterator));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorSeekToFirst");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_IteratorSeekToFirst_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_IteratorSeekToLast_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_IteratorSeekToLast_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_iterator
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_IteratorSeekToLast_Name,
          message_flags)
      , param_iterator_(std::move(param_iterator)){}
  ~LevelDBDatabaseProxy_IteratorSeekToLast_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::UnguessableToken& param_iterator) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_IteratorSeekToLast_Message>(
          kFlags
          , std::move(param_iterator)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_IteratorSeekToLast_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeekToLast_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator, buffer, &iterator_writer, &serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.IteratorSeekToLast request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::IteratorSeekToLastCallback callback) {
    impl->IteratorSeekToLast(
        std::move(param_iterator_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeekToLast_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator_, buffer, &iterator_writer, serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.IteratorSeekToLast request");
  }
  base::UnguessableToken param_iterator_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_IteratorSeekToLast_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_IteratorSeekToLast_Message::kMessageTag = {};
bool LevelDBDatabaseProxy::IteratorSeekToLast(
    const base::UnguessableToken& param_iterator, bool* out_param_valid, DatabaseError* out_param_status, base::Optional<std::vector<uint8_t>>* out_param_key, base::Optional<std::vector<uint8_t>>* out_param_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekToLast");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_IteratorSeekToLast_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_iterator));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorSeekToLast");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_IteratorSeekToLast_HandleSyncResponse(
          &result, out_param_valid, out_param_status, out_param_key, out_param_value));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void LevelDBDatabaseProxy::IteratorSeekToLast(
    const base::UnguessableToken& in_iterator, IteratorSeekToLastCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekToLast");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_IteratorSeekToLast_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_iterator));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorSeekToLast");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_IteratorSeekToLast_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_IteratorSeek_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_IteratorSeek_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_iterator
      , const std::vector<uint8_t>& param_target
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_IteratorSeek_Name,
          message_flags)
      , param_iterator_(std::move(param_iterator))
      , param_target_(std::move(param_target)){}
  ~LevelDBDatabaseProxy_IteratorSeek_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::UnguessableToken& param_iterator, const std::vector<uint8_t>& param_target) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_IteratorSeek_Message>(
          kFlags
          , std::move(param_iterator)
          , std::move(param_target)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_IteratorSeek_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeek_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator, buffer, &iterator_writer, &serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.IteratorSeek request");
  typename decltype(params->target)::BaseType::BufferWriter
      target_writer;
  const mojo::internal::ContainerValidateParams target_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_target, buffer, &target_writer, &target_validate_params,
      &serialization_context);
  params->target.Set(
      target_writer.is_null() ? nullptr : target_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target in LevelDBDatabase.IteratorSeek request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::IteratorSeekCallback callback) {
    impl->IteratorSeek(
        std::move(param_iterator_),
        std::move(param_target_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeek_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator_, buffer, &iterator_writer, serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.IteratorSeek request");
  typename decltype(params->target)::BaseType::BufferWriter
      target_writer;
  const mojo::internal::ContainerValidateParams target_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_target_, buffer, &target_writer, &target_validate_params,
      serialization_context);
  params->target.Set(
      target_writer.is_null() ? nullptr : target_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target in LevelDBDatabase.IteratorSeek request");
  }
  base::UnguessableToken param_iterator_;
  std::vector<uint8_t> param_target_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_IteratorSeek_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_IteratorSeek_Message::kMessageTag = {};
bool LevelDBDatabaseProxy::IteratorSeek(
    const base::UnguessableToken& param_iterator, const std::vector<uint8_t>& param_target, bool* out_param_valid, DatabaseError* out_param_status, base::Optional<std::vector<uint8_t>>* out_param_key, base::Optional<std::vector<uint8_t>>* out_param_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeek");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_IteratorSeek_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_iterator), std::move(param_target));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorSeek");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_IteratorSeek_HandleSyncResponse(
          &result, out_param_valid, out_param_status, out_param_key, out_param_value));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void LevelDBDatabaseProxy::IteratorSeek(
    const base::UnguessableToken& in_iterator, const std::vector<uint8_t>& in_target, IteratorSeekCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeek");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_IteratorSeek_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_iterator), std::move(in_target));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorSeek");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_IteratorSeek_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_IteratorNext_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_IteratorNext_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_iterator
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_IteratorNext_Name,
          message_flags)
      , param_iterator_(std::move(param_iterator)){}
  ~LevelDBDatabaseProxy_IteratorNext_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::UnguessableToken& param_iterator) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_IteratorNext_Message>(
          kFlags
          , std::move(param_iterator)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_IteratorNext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_IteratorNext_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator, buffer, &iterator_writer, &serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.IteratorNext request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::IteratorNextCallback callback) {
    impl->IteratorNext(
        std::move(param_iterator_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_IteratorNext_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator_, buffer, &iterator_writer, serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.IteratorNext request");
  }
  base::UnguessableToken param_iterator_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_IteratorNext_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_IteratorNext_Message::kMessageTag = {};
bool LevelDBDatabaseProxy::IteratorNext(
    const base::UnguessableToken& param_iterator, bool* out_param_valid, DatabaseError* out_param_status, base::Optional<std::vector<uint8_t>>* out_param_key, base::Optional<std::vector<uint8_t>>* out_param_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorNext");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_IteratorNext_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_iterator));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorNext");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_IteratorNext_HandleSyncResponse(
          &result, out_param_valid, out_param_status, out_param_key, out_param_value));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void LevelDBDatabaseProxy::IteratorNext(
    const base::UnguessableToken& in_iterator, IteratorNextCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorNext");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_IteratorNext_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_iterator));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorNext");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_IteratorNext_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabaseProxy_IteratorPrev_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabaseProxy_IteratorPrev_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_iterator
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_IteratorPrev_Name,
          message_flags)
      , param_iterator_(std::move(param_iterator)){}
  ~LevelDBDatabaseProxy_IteratorPrev_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const base::UnguessableToken& param_iterator) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabaseProxy_IteratorPrev_Message>(
          kFlags
          , std::move(param_iterator)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_IteratorPrev_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_IteratorPrev_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator, buffer, &iterator_writer, &serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.IteratorPrev request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase* impl, LevelDBDatabase::IteratorPrevCallback callback) {
    impl->IteratorPrev(
        std::move(param_iterator_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_IteratorPrev_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator_, buffer, &iterator_writer, serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.IteratorPrev request");
  }
  base::UnguessableToken param_iterator_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseProxy_IteratorPrev_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabaseProxy_IteratorPrev_Message::kMessageTag = {};
bool LevelDBDatabaseProxy::IteratorPrev(
    const base::UnguessableToken& param_iterator, bool* out_param_valid, DatabaseError* out_param_status, base::Optional<std::vector<uint8_t>>* out_param_key, base::Optional<std::vector<uint8_t>>* out_param_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorPrev");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_IteratorPrev_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_iterator));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorPrev");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_IteratorPrev_HandleSyncResponse(
          &result, out_param_valid, out_param_status, out_param_key, out_param_value));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void LevelDBDatabaseProxy::IteratorPrev(
    const base::UnguessableToken& in_iterator, IteratorPrevCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorPrev");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = LevelDBDatabaseProxy_IteratorPrev_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_iterator));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorPrev");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBDatabase_IteratorPrev_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBDatabase_Put_ProxyToResponder {
 public:
  static LevelDBDatabase::PutCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_Put_ProxyToResponder> proxy(
        new LevelDBDatabase_Put_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_Put_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_Put_ProxyToResponder() {
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
  LevelDBDatabase_Put_ProxyToResponder(
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
        << "LevelDBDatabase::PutCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Put_ProxyToResponder);
};
class LevelDBDatabase_Put_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_Put_Response_Message(
      uint32_t message_flags
      , DatabaseError param_status
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_Put_Name,
          message_flags)
      , param_status_(std::move(param_status)){}
  ~LevelDBDatabase_Put_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      DatabaseError param_status) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_Put_Response_Message>(
          kFlags
          , std::move(param_status)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_Put_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_Put_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::PutCallback* callback) {
    std::move(*callback).Run(
        std::move(param_status_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_Put_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  }
  DatabaseError param_status_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Put_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_Put_Response_Message::kMessageTag = {};

bool LevelDBDatabase_Put_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::PutCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_Put_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_Put_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_Put_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  LevelDBDatabase_Put_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void LevelDBDatabase_Put_ProxyToResponder::Run(
    DatabaseError in_status) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_Put_Response_Message::Build(kSerialize, is_sync_, std::move(in_status));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::PutCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("Put");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_Delete_ProxyToResponder {
 public:
  static LevelDBDatabase::DeleteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_Delete_ProxyToResponder> proxy(
        new LevelDBDatabase_Delete_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_Delete_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_Delete_ProxyToResponder() {
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
  LevelDBDatabase_Delete_ProxyToResponder(
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
        << "LevelDBDatabase::DeleteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Delete_ProxyToResponder);
};
class LevelDBDatabase_Delete_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_Delete_Response_Message(
      uint32_t message_flags
      , DatabaseError param_status
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_Delete_Name,
          message_flags)
      , param_status_(std::move(param_status)){}
  ~LevelDBDatabase_Delete_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      DatabaseError param_status) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_Delete_Response_Message>(
          kFlags
          , std::move(param_status)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_Delete_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::DeleteCallback* callback) {
    std::move(*callback).Run(
        std::move(param_status_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_Delete_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  }
  DatabaseError param_status_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Delete_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_Delete_Response_Message::kMessageTag = {};

bool LevelDBDatabase_Delete_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::DeleteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_Delete_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_Delete_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_Delete_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  LevelDBDatabase_Delete_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void LevelDBDatabase_Delete_ProxyToResponder::Run(
    DatabaseError in_status) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_Delete_Response_Message::Build(kSerialize, is_sync_, std::move(in_status));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::DeleteCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("Delete");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_DeletePrefixed_ProxyToResponder {
 public:
  static LevelDBDatabase::DeletePrefixedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_DeletePrefixed_ProxyToResponder> proxy(
        new LevelDBDatabase_DeletePrefixed_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_DeletePrefixed_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_DeletePrefixed_ProxyToResponder() {
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
  LevelDBDatabase_DeletePrefixed_ProxyToResponder(
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
        << "LevelDBDatabase::DeletePrefixedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_DeletePrefixed_ProxyToResponder);
};
class LevelDBDatabase_DeletePrefixed_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_DeletePrefixed_Response_Message(
      uint32_t message_flags
      , DatabaseError param_status
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_DeletePrefixed_Name,
          message_flags)
      , param_status_(std::move(param_status)){}
  ~LevelDBDatabase_DeletePrefixed_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      DatabaseError param_status) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_DeletePrefixed_Response_Message>(
          kFlags
          , std::move(param_status)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_DeletePrefixed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_DeletePrefixed_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::DeletePrefixedCallback* callback) {
    std::move(*callback).Run(
        std::move(param_status_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_DeletePrefixed_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  }
  DatabaseError param_status_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_DeletePrefixed_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_DeletePrefixed_Response_Message::kMessageTag = {};

bool LevelDBDatabase_DeletePrefixed_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::DeletePrefixedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_DeletePrefixed_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_DeletePrefixed_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_DeletePrefixed_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  LevelDBDatabase_DeletePrefixed_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void LevelDBDatabase_DeletePrefixed_ProxyToResponder::Run(
    DatabaseError in_status) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_DeletePrefixed_Response_Message::Build(kSerialize, is_sync_, std::move(in_status));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::DeletePrefixedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("DeletePrefixed");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_RewriteDB_ProxyToResponder {
 public:
  static LevelDBDatabase::RewriteDBCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_RewriteDB_ProxyToResponder> proxy(
        new LevelDBDatabase_RewriteDB_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_RewriteDB_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_RewriteDB_ProxyToResponder() {
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
  LevelDBDatabase_RewriteDB_ProxyToResponder(
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
        << "LevelDBDatabase::RewriteDBCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_RewriteDB_ProxyToResponder);
};
class LevelDBDatabase_RewriteDB_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_RewriteDB_Response_Message(
      uint32_t message_flags
      , DatabaseError param_status
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_RewriteDB_Name,
          message_flags)
      , param_status_(std::move(param_status)){}
  ~LevelDBDatabase_RewriteDB_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      DatabaseError param_status) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_RewriteDB_Response_Message>(
          kFlags
          , std::move(param_status)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_RewriteDB_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_RewriteDB_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::RewriteDBCallback* callback) {
    std::move(*callback).Run(
        std::move(param_status_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_RewriteDB_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  }
  DatabaseError param_status_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_RewriteDB_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_RewriteDB_Response_Message::kMessageTag = {};

bool LevelDBDatabase_RewriteDB_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::RewriteDBCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_RewriteDB_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_RewriteDB_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_RewriteDB_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  LevelDBDatabase_RewriteDB_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void LevelDBDatabase_RewriteDB_ProxyToResponder::Run(
    DatabaseError in_status) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_RewriteDB_Response_Message::Build(kSerialize, is_sync_, std::move(in_status));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::RewriteDBCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("RewriteDB");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_Write_ProxyToResponder {
 public:
  static LevelDBDatabase::WriteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_Write_ProxyToResponder> proxy(
        new LevelDBDatabase_Write_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_Write_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_Write_ProxyToResponder() {
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
  LevelDBDatabase_Write_ProxyToResponder(
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
        << "LevelDBDatabase::WriteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Write_ProxyToResponder);
};
class LevelDBDatabase_Write_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_Write_Response_Message(
      uint32_t message_flags
      , DatabaseError param_status
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_Write_Name,
          message_flags)
      , param_status_(std::move(param_status)){}
  ~LevelDBDatabase_Write_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      DatabaseError param_status) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_Write_Response_Message>(
          kFlags
          , std::move(param_status)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_Write_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_Write_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::WriteCallback* callback) {
    std::move(*callback).Run(
        std::move(param_status_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_Write_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  }
  DatabaseError param_status_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Write_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_Write_Response_Message::kMessageTag = {};

bool LevelDBDatabase_Write_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::WriteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_Write_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_Write_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_Write_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  LevelDBDatabase_Write_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void LevelDBDatabase_Write_ProxyToResponder::Run(
    DatabaseError in_status) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_Write_Response_Message::Build(kSerialize, is_sync_, std::move(in_status));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::WriteCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("Write");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_Get_ProxyToResponder {
 public:
  static LevelDBDatabase::GetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_Get_ProxyToResponder> proxy(
        new LevelDBDatabase_Get_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_Get_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_Get_ProxyToResponder() {
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
  LevelDBDatabase_Get_ProxyToResponder(
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
        << "LevelDBDatabase::GetCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status, const std::vector<uint8_t>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Get_ProxyToResponder);
};
class LevelDBDatabase_Get_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_Get_Response_Message(
      uint32_t message_flags
      , DatabaseError param_status
      , const std::vector<uint8_t>& param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_Get_Name,
          message_flags)
      , param_status_(std::move(param_status))
      , param_value_(std::move(param_value)){}
  ~LevelDBDatabase_Get_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      DatabaseError param_status, const std::vector<uint8_t>& param_value) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_Get_Response_Message>(
          kFlags
          , std::move(param_status)
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_Get_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_Get_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBDatabase.Get response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::GetCallback* callback) {
    std::move(*callback).Run(
        std::move(param_status_), 
        std::move(param_value_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_Get_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value_, buffer, &value_writer, &value_validate_params,
      serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBDatabase.Get response");
  }
  DatabaseError param_status_;
  std::vector<uint8_t> param_value_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_Get_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_Get_Response_Message::kMessageTag = {};

bool LevelDBDatabase_Get_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_Get_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_Get_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_Get_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  std::vector<uint8_t> p_value{};
  LevelDBDatabase_Get_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_value));
  return true;
}

void LevelDBDatabase_Get_ProxyToResponder::Run(
    DatabaseError in_status, const std::vector<uint8_t>& in_value) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_Get_Response_Message::Build(kSerialize, is_sync_, std::move(in_status), std::move(in_value));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("Get");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_GetPrefixed_ProxyToResponder {
 public:
  static LevelDBDatabase::GetPrefixedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_GetPrefixed_ProxyToResponder> proxy(
        new LevelDBDatabase_GetPrefixed_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_GetPrefixed_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_GetPrefixed_ProxyToResponder() {
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
  LevelDBDatabase_GetPrefixed_ProxyToResponder(
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
        << "LevelDBDatabase::GetPrefixedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status, std::vector<KeyValuePtr> in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_GetPrefixed_ProxyToResponder);
};
class LevelDBDatabase_GetPrefixed_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_GetPrefixed_Response_Message(
      uint32_t message_flags
      , DatabaseError param_status
      , std::vector<KeyValuePtr> param_data
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_GetPrefixed_Name,
          message_flags)
      , param_status_(std::move(param_status))
      , param_data_(std::move(param_data)){}
  ~LevelDBDatabase_GetPrefixed_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      DatabaseError param_status, std::vector<KeyValuePtr> param_data) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_GetPrefixed_Response_Message>(
          kFlags
          , std::move(param_status)
          , std::move(param_data)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_GetPrefixed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_GetPrefixed_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::leveldb::mojom::KeyValueDataView>>(
      param_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in LevelDBDatabase.GetPrefixed response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::GetPrefixedCallback* callback) {
    std::move(*callback).Run(
        std::move(param_status_), 
        std::move(param_data_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_GetPrefixed_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::leveldb::mojom::KeyValueDataView>>(
      param_data_, buffer, &data_writer, &data_validate_params,
      serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in LevelDBDatabase.GetPrefixed response");
  }
  DatabaseError param_status_;
  std::vector<KeyValuePtr> param_data_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_GetPrefixed_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_GetPrefixed_Response_Message::kMessageTag = {};

bool LevelDBDatabase_GetPrefixed_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetPrefixedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_GetPrefixed_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_GetPrefixed_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_GetPrefixed_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  std::vector<KeyValuePtr> p_data{};
  LevelDBDatabase_GetPrefixed_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_data));
  return true;
}

void LevelDBDatabase_GetPrefixed_ProxyToResponder::Run(
    DatabaseError in_status, std::vector<KeyValuePtr> in_data) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_GetPrefixed_Response_Message::Build(kSerialize, is_sync_, std::move(in_status), std::move(in_data));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetPrefixedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("GetPrefixed");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_CopyPrefixed_ProxyToResponder {
 public:
  static LevelDBDatabase::CopyPrefixedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_CopyPrefixed_ProxyToResponder> proxy(
        new LevelDBDatabase_CopyPrefixed_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_CopyPrefixed_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_CopyPrefixed_ProxyToResponder() {
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
  LevelDBDatabase_CopyPrefixed_ProxyToResponder(
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
        << "LevelDBDatabase::CopyPrefixedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_CopyPrefixed_ProxyToResponder);
};
class LevelDBDatabase_CopyPrefixed_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_CopyPrefixed_Response_Message(
      uint32_t message_flags
      , DatabaseError param_status
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_CopyPrefixed_Name,
          message_flags)
      , param_status_(std::move(param_status)){}
  ~LevelDBDatabase_CopyPrefixed_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      DatabaseError param_status) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_CopyPrefixed_Response_Message>(
          kFlags
          , std::move(param_status)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_CopyPrefixed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_CopyPrefixed_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::CopyPrefixedCallback* callback) {
    std::move(*callback).Run(
        std::move(param_status_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_CopyPrefixed_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  }
  DatabaseError param_status_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_CopyPrefixed_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_CopyPrefixed_Response_Message::kMessageTag = {};

bool LevelDBDatabase_CopyPrefixed_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::CopyPrefixedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_CopyPrefixed_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_CopyPrefixed_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_CopyPrefixed_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  LevelDBDatabase_CopyPrefixed_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void LevelDBDatabase_CopyPrefixed_ProxyToResponder::Run(
    DatabaseError in_status) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_CopyPrefixed_Response_Message::Build(kSerialize, is_sync_, std::move(in_status));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::CopyPrefixedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("CopyPrefixed");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_GetSnapshot_ProxyToResponder {
 public:
  static LevelDBDatabase::GetSnapshotCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_GetSnapshot_ProxyToResponder> proxy(
        new LevelDBDatabase_GetSnapshot_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_GetSnapshot_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_GetSnapshot_ProxyToResponder() {
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
  LevelDBDatabase_GetSnapshot_ProxyToResponder(
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
        << "LevelDBDatabase::GetSnapshotCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_snapshot);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_GetSnapshot_ProxyToResponder);
};
class LevelDBDatabase_GetSnapshot_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_GetSnapshot_Response_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_snapshot
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_GetSnapshot_Name,
          message_flags)
      , param_snapshot_(std::move(param_snapshot)){}
  ~LevelDBDatabase_GetSnapshot_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      const base::UnguessableToken& param_snapshot) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_GetSnapshot_Response_Message>(
          kFlags
          , std::move(param_snapshot)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_GetSnapshot_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_GetSnapshot_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->snapshot)::BaseType::BufferWriter
      snapshot_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_snapshot, buffer, &snapshot_writer, &serialization_context);
  params->snapshot.Set(
      snapshot_writer.is_null() ? nullptr : snapshot_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshot.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshot in LevelDBDatabase.GetSnapshot response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::GetSnapshotCallback* callback) {
    std::move(*callback).Run(
        std::move(param_snapshot_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_GetSnapshot_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->snapshot)::BaseType::BufferWriter
      snapshot_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_snapshot_, buffer, &snapshot_writer, serialization_context);
  params->snapshot.Set(
      snapshot_writer.is_null() ? nullptr : snapshot_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshot.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshot in LevelDBDatabase.GetSnapshot response");
  }
  base::UnguessableToken param_snapshot_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_GetSnapshot_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_GetSnapshot_Response_Message::kMessageTag = {};

bool LevelDBDatabase_GetSnapshot_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetSnapshotCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_GetSnapshot_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_GetSnapshot_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_GetSnapshot_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_snapshot{};
  LevelDBDatabase_GetSnapshot_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSnapshot(&p_snapshot))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 8, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_snapshot));
  return true;
}

void LevelDBDatabase_GetSnapshot_ProxyToResponder::Run(
    const base::UnguessableToken& in_snapshot) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_GetSnapshot_Response_Message::Build(kSerialize, is_sync_, std::move(in_snapshot));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetSnapshotCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("GetSnapshot");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_GetFromSnapshot_ProxyToResponder {
 public:
  static LevelDBDatabase::GetFromSnapshotCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_GetFromSnapshot_ProxyToResponder> proxy(
        new LevelDBDatabase_GetFromSnapshot_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_GetFromSnapshot_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_GetFromSnapshot_ProxyToResponder() {
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
  LevelDBDatabase_GetFromSnapshot_ProxyToResponder(
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
        << "LevelDBDatabase::GetFromSnapshotCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      DatabaseError in_status, const std::vector<uint8_t>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_GetFromSnapshot_ProxyToResponder);
};
class LevelDBDatabase_GetFromSnapshot_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_GetFromSnapshot_Response_Message(
      uint32_t message_flags
      , DatabaseError param_status
      , const std::vector<uint8_t>& param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_GetFromSnapshot_Name,
          message_flags)
      , param_status_(std::move(param_status))
      , param_value_(std::move(param_value)){}
  ~LevelDBDatabase_GetFromSnapshot_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      DatabaseError param_status, const std::vector<uint8_t>& param_value) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_GetFromSnapshot_Response_Message>(
          kFlags
          , std::move(param_status)
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_GetFromSnapshot_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_GetFromSnapshot_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBDatabase.GetFromSnapshot response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::GetFromSnapshotCallback* callback) {
    std::move(*callback).Run(
        std::move(param_status_), 
        std::move(param_value_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_GetFromSnapshot_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value_, buffer, &value_writer, &value_validate_params,
      serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBDatabase.GetFromSnapshot response");
  }
  DatabaseError param_status_;
  std::vector<uint8_t> param_value_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_GetFromSnapshot_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_GetFromSnapshot_Response_Message::kMessageTag = {};

bool LevelDBDatabase_GetFromSnapshot_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetFromSnapshotCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_GetFromSnapshot_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_GetFromSnapshot_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_GetFromSnapshot_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DatabaseError p_status{};
  std::vector<uint8_t> p_value{};
  LevelDBDatabase_GetFromSnapshot_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_value));
  return true;
}

void LevelDBDatabase_GetFromSnapshot_ProxyToResponder::Run(
    DatabaseError in_status, const std::vector<uint8_t>& in_value) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_GetFromSnapshot_Response_Message::Build(kSerialize, is_sync_, std::move(in_status), std::move(in_value));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetFromSnapshotCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("GetFromSnapshot");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_NewIterator_ProxyToResponder {
 public:
  static LevelDBDatabase::NewIteratorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_NewIterator_ProxyToResponder> proxy(
        new LevelDBDatabase_NewIterator_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_NewIterator_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_NewIterator_ProxyToResponder() {
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
  LevelDBDatabase_NewIterator_ProxyToResponder(
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
        << "LevelDBDatabase::NewIteratorCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_iterator);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_NewIterator_ProxyToResponder);
};
class LevelDBDatabase_NewIterator_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_NewIterator_Response_Message(
      uint32_t message_flags
      , const base::UnguessableToken& param_iterator
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_NewIterator_Name,
          message_flags)
      , param_iterator_(std::move(param_iterator)){}
  ~LevelDBDatabase_NewIterator_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      const base::UnguessableToken& param_iterator) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_NewIterator_Response_Message>(
          kFlags
          , std::move(param_iterator)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_NewIterator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_NewIterator_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator, buffer, &iterator_writer, &serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.NewIterator response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::NewIteratorCallback* callback) {
    std::move(*callback).Run(
        std::move(param_iterator_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_NewIterator_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator_, buffer, &iterator_writer, serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->iterator.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null iterator in LevelDBDatabase.NewIterator response");
  }
  base::UnguessableToken param_iterator_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_NewIterator_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_NewIterator_Response_Message::kMessageTag = {};

bool LevelDBDatabase_NewIterator_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::NewIteratorCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_NewIterator_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_NewIterator_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_NewIterator_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_iterator{};
  LevelDBDatabase_NewIterator_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadIterator(&p_iterator))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 11, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_iterator));
  return true;
}

void LevelDBDatabase_NewIterator_ProxyToResponder::Run(
    const base::UnguessableToken& in_iterator) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_NewIterator_Response_Message::Build(kSerialize, is_sync_, std::move(in_iterator));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::NewIteratorCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("NewIterator");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_NewIteratorFromSnapshot_ProxyToResponder {
 public:
  static LevelDBDatabase::NewIteratorFromSnapshotCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_NewIteratorFromSnapshot_ProxyToResponder> proxy(
        new LevelDBDatabase_NewIteratorFromSnapshot_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_NewIteratorFromSnapshot_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_NewIteratorFromSnapshot_ProxyToResponder() {
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
  LevelDBDatabase_NewIteratorFromSnapshot_ProxyToResponder(
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
        << "LevelDBDatabase::NewIteratorFromSnapshotCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<base::UnguessableToken>& in_iterator);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_NewIteratorFromSnapshot_ProxyToResponder);
};
class LevelDBDatabase_NewIteratorFromSnapshot_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_NewIteratorFromSnapshot_Response_Message(
      uint32_t message_flags
      , const base::Optional<base::UnguessableToken>& param_iterator
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_NewIteratorFromSnapshot_Name,
          message_flags)
      , param_iterator_(std::move(param_iterator)){}
  ~LevelDBDatabase_NewIteratorFromSnapshot_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      const base::Optional<base::UnguessableToken>& param_iterator) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_NewIteratorFromSnapshot_Response_Message>(
          kFlags
          , std::move(param_iterator)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_NewIteratorFromSnapshot_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator, buffer, &iterator_writer, &serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::NewIteratorFromSnapshotCallback* callback) {
    std::move(*callback).Run(
        std::move(param_iterator_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->iterator)::BaseType::BufferWriter
      iterator_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      param_iterator_, buffer, &iterator_writer, serialization_context);
  params->iterator.Set(
      iterator_writer.is_null() ? nullptr : iterator_writer.data());
  }
  base::Optional<base::UnguessableToken> param_iterator_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_NewIteratorFromSnapshot_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_NewIteratorFromSnapshot_Response_Message::kMessageTag = {};

bool LevelDBDatabase_NewIteratorFromSnapshot_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::NewIteratorFromSnapshotCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_NewIteratorFromSnapshot_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<base::UnguessableToken> p_iterator{};
  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadIterator(&p_iterator))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 12, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_iterator));
  return true;
}

void LevelDBDatabase_NewIteratorFromSnapshot_ProxyToResponder::Run(
    const base::Optional<base::UnguessableToken>& in_iterator) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_NewIteratorFromSnapshot_Response_Message::Build(kSerialize, is_sync_, std::move(in_iterator));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::NewIteratorFromSnapshotCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("NewIteratorFromSnapshot");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBDatabase_IteratorSeekToFirst_ProxyToResponder {
 public:
  static LevelDBDatabase::IteratorSeekToFirstCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_IteratorSeekToFirst_ProxyToResponder> proxy(
        new LevelDBDatabase_IteratorSeekToFirst_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_IteratorSeekToFirst_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_IteratorSeekToFirst_ProxyToResponder() {
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
  LevelDBDatabase_IteratorSeekToFirst_ProxyToResponder(
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
        << "LevelDBDatabase::IteratorSeekToFirstCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_valid, DatabaseError in_status, const base::Optional<std::vector<uint8_t>>& in_key, const base::Optional<std::vector<uint8_t>>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeekToFirst_ProxyToResponder);
};
class LevelDBDatabase_IteratorSeekToFirst_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_IteratorSeekToFirst_Response_Message(
      uint32_t message_flags
      , bool param_valid
      , DatabaseError param_status
      , const base::Optional<std::vector<uint8_t>>& param_key
      , const base::Optional<std::vector<uint8_t>>& param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_IteratorSeekToFirst_Name,
          message_flags)
      , param_valid_(std::move(param_valid))
      , param_status_(std::move(param_status))
      , param_key_(std::move(param_key))
      , param_value_(std::move(param_value)){}
  ~LevelDBDatabase_IteratorSeekToFirst_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      bool param_valid, DatabaseError param_status, const base::Optional<std::vector<uint8_t>>& param_key, const base::Optional<std::vector<uint8_t>>& param_value) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_IteratorSeekToFirst_Response_Message>(
          kFlags
          , std::move(param_valid)
          , std::move(param_status)
          , std::move(param_key)
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_IteratorSeekToFirst_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->valid = param_valid;
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::IteratorSeekToFirstCallback* callback) {
    std::move(*callback).Run(
        std::move(param_valid_), 
        std::move(param_status_), 
        std::move(param_key_), 
        std::move(param_value_));
  }


  void HandleSyncResponse(

      bool* out_valid, 
      DatabaseError* out_status, 
      base::Optional<std::vector<uint8_t>>* out_key, 
      base::Optional<std::vector<uint8_t>>* out_value) {

    *out_valid = std::move(param_valid_);

    *out_status = std::move(param_status_);

    *out_key = std::move(param_key_);

    *out_value = std::move(param_value_);

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->valid = param_valid_;
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_, buffer, &key_writer, &key_validate_params,
      serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value_, buffer, &value_writer, &value_validate_params,
      serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  }
  bool param_valid_;
  DatabaseError param_status_;
  base::Optional<std::vector<uint8_t>> param_key_;
  base::Optional<std::vector<uint8_t>> param_value_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeekToFirst_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_IteratorSeekToFirst_Response_Message::kMessageTag = {};

bool LevelDBDatabase_IteratorSeekToFirst_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekToFirstCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_IteratorSeekToFirst_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_valid{};
  DatabaseError p_status{};
  base::Optional<std::vector<uint8_t>> p_key{};
  base::Optional<std::vector<uint8_t>> p_value{};
  LevelDBDatabase_IteratorSeekToFirst_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_valid = input_data_view.valid();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadKey(&p_key))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 14, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_valid), 
std::move(p_status), 
std::move(p_key), 
std::move(p_value));
  return true;
}

void LevelDBDatabase_IteratorSeekToFirst_ProxyToResponder::Run(
    bool in_valid, DatabaseError in_status, const base::Optional<std::vector<uint8_t>>& in_key, const base::Optional<std::vector<uint8_t>>& in_value) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_IteratorSeekToFirst_Response_Message::Build(kSerialize, is_sync_, std::move(in_valid), std::move(in_status), std::move(in_key), std::move(in_value));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekToFirstCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorSeekToFirst");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool LevelDBDatabase_IteratorSeekToFirst_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_IteratorSeekToFirst_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse(
          out_valid_, 
          out_status_, 
          out_key_, 
          out_value_);
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_valid{};
  DatabaseError p_status{};
  base::Optional<std::vector<uint8_t>> p_key{};
  base::Optional<std::vector<uint8_t>> p_value{};
  LevelDBDatabase_IteratorSeekToFirst_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_valid = input_data_view.valid();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadKey(&p_key))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 14, true);
    return false;
  }
  *out_valid_ = std::move(p_valid);
  *out_status_ = std::move(p_status);
  *out_key_ = std::move(p_key);
  *out_value_ = std::move(p_value);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class LevelDBDatabase_IteratorSeekToLast_ProxyToResponder {
 public:
  static LevelDBDatabase::IteratorSeekToLastCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_IteratorSeekToLast_ProxyToResponder> proxy(
        new LevelDBDatabase_IteratorSeekToLast_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_IteratorSeekToLast_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_IteratorSeekToLast_ProxyToResponder() {
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
  LevelDBDatabase_IteratorSeekToLast_ProxyToResponder(
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
        << "LevelDBDatabase::IteratorSeekToLastCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_valid, DatabaseError in_status, const base::Optional<std::vector<uint8_t>>& in_key, const base::Optional<std::vector<uint8_t>>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeekToLast_ProxyToResponder);
};
class LevelDBDatabase_IteratorSeekToLast_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_IteratorSeekToLast_Response_Message(
      uint32_t message_flags
      , bool param_valid
      , DatabaseError param_status
      , const base::Optional<std::vector<uint8_t>>& param_key
      , const base::Optional<std::vector<uint8_t>>& param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_IteratorSeekToLast_Name,
          message_flags)
      , param_valid_(std::move(param_valid))
      , param_status_(std::move(param_status))
      , param_key_(std::move(param_key))
      , param_value_(std::move(param_value)){}
  ~LevelDBDatabase_IteratorSeekToLast_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      bool param_valid, DatabaseError param_status, const base::Optional<std::vector<uint8_t>>& param_key, const base::Optional<std::vector<uint8_t>>& param_value) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_IteratorSeekToLast_Response_Message>(
          kFlags
          , std::move(param_valid)
          , std::move(param_status)
          , std::move(param_key)
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_IteratorSeekToLast_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->valid = param_valid;
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::IteratorSeekToLastCallback* callback) {
    std::move(*callback).Run(
        std::move(param_valid_), 
        std::move(param_status_), 
        std::move(param_key_), 
        std::move(param_value_));
  }


  void HandleSyncResponse(

      bool* out_valid, 
      DatabaseError* out_status, 
      base::Optional<std::vector<uint8_t>>* out_key, 
      base::Optional<std::vector<uint8_t>>* out_value) {

    *out_valid = std::move(param_valid_);

    *out_status = std::move(param_status_);

    *out_key = std::move(param_key_);

    *out_value = std::move(param_value_);

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->valid = param_valid_;
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_, buffer, &key_writer, &key_validate_params,
      serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value_, buffer, &value_writer, &value_validate_params,
      serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  }
  bool param_valid_;
  DatabaseError param_status_;
  base::Optional<std::vector<uint8_t>> param_key_;
  base::Optional<std::vector<uint8_t>> param_value_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeekToLast_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_IteratorSeekToLast_Response_Message::kMessageTag = {};

bool LevelDBDatabase_IteratorSeekToLast_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekToLastCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_IteratorSeekToLast_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_valid{};
  DatabaseError p_status{};
  base::Optional<std::vector<uint8_t>> p_key{};
  base::Optional<std::vector<uint8_t>> p_value{};
  LevelDBDatabase_IteratorSeekToLast_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_valid = input_data_view.valid();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadKey(&p_key))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 15, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_valid), 
std::move(p_status), 
std::move(p_key), 
std::move(p_value));
  return true;
}

void LevelDBDatabase_IteratorSeekToLast_ProxyToResponder::Run(
    bool in_valid, DatabaseError in_status, const base::Optional<std::vector<uint8_t>>& in_key, const base::Optional<std::vector<uint8_t>>& in_value) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_IteratorSeekToLast_Response_Message::Build(kSerialize, is_sync_, std::move(in_valid), std::move(in_status), std::move(in_key), std::move(in_value));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekToLastCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorSeekToLast");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool LevelDBDatabase_IteratorSeekToLast_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_IteratorSeekToLast_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse(
          out_valid_, 
          out_status_, 
          out_key_, 
          out_value_);
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_valid{};
  DatabaseError p_status{};
  base::Optional<std::vector<uint8_t>> p_key{};
  base::Optional<std::vector<uint8_t>> p_value{};
  LevelDBDatabase_IteratorSeekToLast_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_valid = input_data_view.valid();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadKey(&p_key))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 15, true);
    return false;
  }
  *out_valid_ = std::move(p_valid);
  *out_status_ = std::move(p_status);
  *out_key_ = std::move(p_key);
  *out_value_ = std::move(p_value);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class LevelDBDatabase_IteratorSeek_ProxyToResponder {
 public:
  static LevelDBDatabase::IteratorSeekCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_IteratorSeek_ProxyToResponder> proxy(
        new LevelDBDatabase_IteratorSeek_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_IteratorSeek_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_IteratorSeek_ProxyToResponder() {
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
  LevelDBDatabase_IteratorSeek_ProxyToResponder(
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
        << "LevelDBDatabase::IteratorSeekCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_valid, DatabaseError in_status, const base::Optional<std::vector<uint8_t>>& in_key, const base::Optional<std::vector<uint8_t>>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeek_ProxyToResponder);
};
class LevelDBDatabase_IteratorSeek_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_IteratorSeek_Response_Message(
      uint32_t message_flags
      , bool param_valid
      , DatabaseError param_status
      , const base::Optional<std::vector<uint8_t>>& param_key
      , const base::Optional<std::vector<uint8_t>>& param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_IteratorSeek_Name,
          message_flags)
      , param_valid_(std::move(param_valid))
      , param_status_(std::move(param_status))
      , param_key_(std::move(param_key))
      , param_value_(std::move(param_value)){}
  ~LevelDBDatabase_IteratorSeek_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      bool param_valid, DatabaseError param_status, const base::Optional<std::vector<uint8_t>>& param_key, const base::Optional<std::vector<uint8_t>>& param_value) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_IteratorSeek_Response_Message>(
          kFlags
          , std::move(param_valid)
          , std::move(param_status)
          , std::move(param_key)
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_IteratorSeek_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeek_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->valid = param_valid;
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::IteratorSeekCallback* callback) {
    std::move(*callback).Run(
        std::move(param_valid_), 
        std::move(param_status_), 
        std::move(param_key_), 
        std::move(param_value_));
  }


  void HandleSyncResponse(

      bool* out_valid, 
      DatabaseError* out_status, 
      base::Optional<std::vector<uint8_t>>* out_key, 
      base::Optional<std::vector<uint8_t>>* out_value) {

    *out_valid = std::move(param_valid_);

    *out_status = std::move(param_status_);

    *out_key = std::move(param_key_);

    *out_value = std::move(param_value_);

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_IteratorSeek_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->valid = param_valid_;
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_, buffer, &key_writer, &key_validate_params,
      serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value_, buffer, &value_writer, &value_validate_params,
      serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  }
  bool param_valid_;
  DatabaseError param_status_;
  base::Optional<std::vector<uint8_t>> param_key_;
  base::Optional<std::vector<uint8_t>> param_value_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorSeek_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_IteratorSeek_Response_Message::kMessageTag = {};

bool LevelDBDatabase_IteratorSeek_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_IteratorSeek_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_IteratorSeek_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_IteratorSeek_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_valid{};
  DatabaseError p_status{};
  base::Optional<std::vector<uint8_t>> p_key{};
  base::Optional<std::vector<uint8_t>> p_value{};
  LevelDBDatabase_IteratorSeek_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_valid = input_data_view.valid();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadKey(&p_key))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 16, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_valid), 
std::move(p_status), 
std::move(p_key), 
std::move(p_value));
  return true;
}

void LevelDBDatabase_IteratorSeek_ProxyToResponder::Run(
    bool in_valid, DatabaseError in_status, const base::Optional<std::vector<uint8_t>>& in_key, const base::Optional<std::vector<uint8_t>>& in_value) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_IteratorSeek_Response_Message::Build(kSerialize, is_sync_, std::move(in_valid), std::move(in_status), std::move(in_key), std::move(in_value));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorSeek");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool LevelDBDatabase_IteratorSeek_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_IteratorSeek_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse(
          out_valid_, 
          out_status_, 
          out_key_, 
          out_value_);
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_IteratorSeek_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBDatabase_IteratorSeek_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_valid{};
  DatabaseError p_status{};
  base::Optional<std::vector<uint8_t>> p_key{};
  base::Optional<std::vector<uint8_t>> p_value{};
  LevelDBDatabase_IteratorSeek_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_valid = input_data_view.valid();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadKey(&p_key))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 16, true);
    return false;
  }
  *out_valid_ = std::move(p_valid);
  *out_status_ = std::move(p_status);
  *out_key_ = std::move(p_key);
  *out_value_ = std::move(p_value);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class LevelDBDatabase_IteratorNext_ProxyToResponder {
 public:
  static LevelDBDatabase::IteratorNextCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_IteratorNext_ProxyToResponder> proxy(
        new LevelDBDatabase_IteratorNext_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_IteratorNext_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_IteratorNext_ProxyToResponder() {
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
  LevelDBDatabase_IteratorNext_ProxyToResponder(
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
        << "LevelDBDatabase::IteratorNextCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_valid, DatabaseError in_status, const base::Optional<std::vector<uint8_t>>& in_key, const base::Optional<std::vector<uint8_t>>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorNext_ProxyToResponder);
};
class LevelDBDatabase_IteratorNext_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_IteratorNext_Response_Message(
      uint32_t message_flags
      , bool param_valid
      , DatabaseError param_status
      , const base::Optional<std::vector<uint8_t>>& param_key
      , const base::Optional<std::vector<uint8_t>>& param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_IteratorNext_Name,
          message_flags)
      , param_valid_(std::move(param_valid))
      , param_status_(std::move(param_status))
      , param_key_(std::move(param_key))
      , param_value_(std::move(param_value)){}
  ~LevelDBDatabase_IteratorNext_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      bool param_valid, DatabaseError param_status, const base::Optional<std::vector<uint8_t>>& param_key, const base::Optional<std::vector<uint8_t>>& param_value) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_IteratorNext_Response_Message>(
          kFlags
          , std::move(param_valid)
          , std::move(param_status)
          , std::move(param_key)
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_IteratorNext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_IteratorNext_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->valid = param_valid;
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::IteratorNextCallback* callback) {
    std::move(*callback).Run(
        std::move(param_valid_), 
        std::move(param_status_), 
        std::move(param_key_), 
        std::move(param_value_));
  }


  void HandleSyncResponse(

      bool* out_valid, 
      DatabaseError* out_status, 
      base::Optional<std::vector<uint8_t>>* out_key, 
      base::Optional<std::vector<uint8_t>>* out_value) {

    *out_valid = std::move(param_valid_);

    *out_status = std::move(param_status_);

    *out_key = std::move(param_key_);

    *out_value = std::move(param_value_);

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_IteratorNext_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->valid = param_valid_;
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_, buffer, &key_writer, &key_validate_params,
      serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value_, buffer, &value_writer, &value_validate_params,
      serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  }
  bool param_valid_;
  DatabaseError param_status_;
  base::Optional<std::vector<uint8_t>> param_key_;
  base::Optional<std::vector<uint8_t>> param_value_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorNext_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_IteratorNext_Response_Message::kMessageTag = {};

bool LevelDBDatabase_IteratorNext_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorNextCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_IteratorNext_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_IteratorNext_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_IteratorNext_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_valid{};
  DatabaseError p_status{};
  base::Optional<std::vector<uint8_t>> p_key{};
  base::Optional<std::vector<uint8_t>> p_value{};
  LevelDBDatabase_IteratorNext_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_valid = input_data_view.valid();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadKey(&p_key))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 17, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_valid), 
std::move(p_status), 
std::move(p_key), 
std::move(p_value));
  return true;
}

void LevelDBDatabase_IteratorNext_ProxyToResponder::Run(
    bool in_valid, DatabaseError in_status, const base::Optional<std::vector<uint8_t>>& in_key, const base::Optional<std::vector<uint8_t>>& in_value) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_IteratorNext_Response_Message::Build(kSerialize, is_sync_, std::move(in_valid), std::move(in_status), std::move(in_key), std::move(in_value));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorNextCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorNext");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool LevelDBDatabase_IteratorNext_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_IteratorNext_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse(
          out_valid_, 
          out_status_, 
          out_key_, 
          out_value_);
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_IteratorNext_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBDatabase_IteratorNext_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_valid{};
  DatabaseError p_status{};
  base::Optional<std::vector<uint8_t>> p_key{};
  base::Optional<std::vector<uint8_t>> p_value{};
  LevelDBDatabase_IteratorNext_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_valid = input_data_view.valid();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadKey(&p_key))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 17, true);
    return false;
  }
  *out_valid_ = std::move(p_valid);
  *out_status_ = std::move(p_status);
  *out_key_ = std::move(p_key);
  *out_value_ = std::move(p_value);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class LevelDBDatabase_IteratorPrev_ProxyToResponder {
 public:
  static LevelDBDatabase::IteratorPrevCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBDatabase_IteratorPrev_ProxyToResponder> proxy(
        new LevelDBDatabase_IteratorPrev_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBDatabase_IteratorPrev_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBDatabase_IteratorPrev_ProxyToResponder() {
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
  LevelDBDatabase_IteratorPrev_ProxyToResponder(
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
        << "LevelDBDatabase::IteratorPrevCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_valid, DatabaseError in_status, const base::Optional<std::vector<uint8_t>>& in_key, const base::Optional<std::vector<uint8_t>>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorPrev_ProxyToResponder);
};
class LevelDBDatabase_IteratorPrev_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit LevelDBDatabase_IteratorPrev_Response_Message(
      uint32_t message_flags
      , bool param_valid
      , DatabaseError param_status
      , const base::Optional<std::vector<uint8_t>>& param_key
      , const base::Optional<std::vector<uint8_t>>& param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kLevelDBDatabase_IteratorPrev_Name,
          message_flags)
      , param_valid_(std::move(param_valid))
      , param_status_(std::move(param_status))
      , param_key_(std::move(param_key))
      , param_value_(std::move(param_value)){}
  ~LevelDBDatabase_IteratorPrev_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      bool param_valid, DatabaseError param_status, const base::Optional<std::vector<uint8_t>>& param_key, const base::Optional<std::vector<uint8_t>>& param_value) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<LevelDBDatabase_IteratorPrev_Response_Message>(
          kFlags
          , std::move(param_valid)
          , std::move(param_status)
          , std::move(param_key)
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kLevelDBDatabase_IteratorPrev_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::leveldb::mojom::internal::LevelDBDatabase_IteratorPrev_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->valid = param_valid;
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status, &params->status);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(LevelDBDatabase::IteratorPrevCallback* callback) {
    std::move(*callback).Run(
        std::move(param_valid_), 
        std::move(param_status_), 
        std::move(param_key_), 
        std::move(param_value_));
  }


  void HandleSyncResponse(

      bool* out_valid, 
      DatabaseError* out_status, 
      base::Optional<std::vector<uint8_t>>* out_key, 
      base::Optional<std::vector<uint8_t>>* out_value) {

    *out_valid = std::move(param_valid_);

    *out_status = std::move(param_status_);

    *out_key = std::move(param_key_);

    *out_value = std::move(param_value_);

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::leveldb::mojom::internal::LevelDBDatabase_IteratorPrev_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->valid = param_valid_;
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      param_status_, &params->status);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_key_, buffer, &key_writer, &key_validate_params,
      serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      param_value_, buffer, &value_writer, &value_validate_params,
      serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  }
  bool param_valid_;
  DatabaseError param_status_;
  base::Optional<std::vector<uint8_t>> param_key_;
  base::Optional<std::vector<uint8_t>> param_value_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabase_IteratorPrev_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
LevelDBDatabase_IteratorPrev_Response_Message::kMessageTag = {};

bool LevelDBDatabase_IteratorPrev_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorPrevCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_IteratorPrev_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_IteratorPrev_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBDatabase_IteratorPrev_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_valid{};
  DatabaseError p_status{};
  base::Optional<std::vector<uint8_t>> p_key{};
  base::Optional<std::vector<uint8_t>> p_value{};
  LevelDBDatabase_IteratorPrev_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_valid = input_data_view.valid();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadKey(&p_key))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 18, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_valid), 
std::move(p_status), 
std::move(p_key), 
std::move(p_value));
  return true;
}

void LevelDBDatabase_IteratorPrev_ProxyToResponder::Run(
    bool in_valid, DatabaseError in_status, const base::Optional<std::vector<uint8_t>>& in_key, const base::Optional<std::vector<uint8_t>>& in_value) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = LevelDBDatabase_IteratorPrev_Response_Message::Build(kSerialize, is_sync_, std::move(in_valid), std::move(in_status), std::move(in_key), std::move(in_value));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorPrevCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LevelDBDatabase::Name_);
  message.set_method_name("IteratorPrev");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool LevelDBDatabase_IteratorPrev_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<LevelDBDatabase_IteratorPrev_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse(
          out_valid_, 
          out_status_, 
          out_key_, 
          out_value_);
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::LevelDBDatabase_IteratorPrev_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBDatabase_IteratorPrev_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_valid{};
  DatabaseError p_status{};
  base::Optional<std::vector<uint8_t>> p_key{};
  base::Optional<std::vector<uint8_t>> p_value{};
  LevelDBDatabase_IteratorPrev_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_valid = input_data_view.valid();
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadKey(&p_key))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LevelDBDatabase::Name_, 18, true);
    return false;
  }
  *out_valid_ = std::move(p_valid);
  *out_status_ = std::move(p_status);
  *out_key_ = std::move(p_key);
  *out_value_ = std::move(p_value);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool LevelDBDatabaseStubDispatch::Accept(
    LevelDBDatabase* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLevelDBDatabase_Put_Name: {
      break;
    }
    case internal::kLevelDBDatabase_Delete_Name: {
      break;
    }
    case internal::kLevelDBDatabase_DeletePrefixed_Name: {
      break;
    }
    case internal::kLevelDBDatabase_RewriteDB_Name: {
      break;
    }
    case internal::kLevelDBDatabase_Write_Name: {
      break;
    }
    case internal::kLevelDBDatabase_Get_Name: {
      break;
    }
    case internal::kLevelDBDatabase_GetPrefixed_Name: {
      break;
    }
    case internal::kLevelDBDatabase_CopyPrefixed_Name: {
      break;
    }
    case internal::kLevelDBDatabase_GetSnapshot_Name: {
      break;
    }
    case internal::kLevelDBDatabase_ReleaseSnapshot_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::ReleaseSnapshot",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_ReleaseSnapshot_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::LevelDBDatabase_ReleaseSnapshot_Params_Data* params =
          reinterpret_cast<internal::LevelDBDatabase_ReleaseSnapshot_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_snapshot{};
      LevelDBDatabase_ReleaseSnapshot_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSnapshot(&p_snapshot))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReleaseSnapshot(
std::move(p_snapshot));
      return true;
    }
    case internal::kLevelDBDatabase_GetFromSnapshot_Name: {
      break;
    }
    case internal::kLevelDBDatabase_NewIterator_Name: {
      break;
    }
    case internal::kLevelDBDatabase_NewIteratorFromSnapshot_Name: {
      break;
    }
    case internal::kLevelDBDatabase_ReleaseIterator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::ReleaseIterator",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_ReleaseIterator_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::LevelDBDatabase_ReleaseIterator_Params_Data* params =
          reinterpret_cast<internal::LevelDBDatabase_ReleaseIterator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_iterator{};
      LevelDBDatabase_ReleaseIterator_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIterator(&p_iterator))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 13, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReleaseIterator(
std::move(p_iterator));
      return true;
    }
    case internal::kLevelDBDatabase_IteratorSeekToFirst_Name: {
      break;
    }
    case internal::kLevelDBDatabase_IteratorSeekToLast_Name: {
      break;
    }
    case internal::kLevelDBDatabase_IteratorSeek_Name: {
      break;
    }
    case internal::kLevelDBDatabase_IteratorNext_Name: {
      break;
    }
    case internal::kLevelDBDatabase_IteratorPrev_Name: {
      break;
    }
  }
  return false;
}

// static
bool LevelDBDatabaseStubDispatch::AcceptWithResponder(
    LevelDBDatabase* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kLevelDBDatabase_Put_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::Put",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_Put_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::PutCallback callback =
              LevelDBDatabase_Put_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_Put_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_Put_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key{};
      std::vector<uint8_t> p_value{};
      LevelDBDatabase_Put_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 0, false);
        return false;
      }
      LevelDBDatabase::PutCallback callback =
          LevelDBDatabase_Put_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Put(
std::move(p_key), 
std::move(p_value), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_Delete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::Delete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_Delete_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::DeleteCallback callback =
              LevelDBDatabase_Delete_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_Delete_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_Delete_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key{};
      LevelDBDatabase_Delete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 1, false);
        return false;
      }
      LevelDBDatabase::DeleteCallback callback =
          LevelDBDatabase_Delete_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Delete(
std::move(p_key), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_DeletePrefixed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::DeletePrefixed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_DeletePrefixed_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::DeletePrefixedCallback callback =
              LevelDBDatabase_DeletePrefixed_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_DeletePrefixed_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_DeletePrefixed_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key_prefix{};
      LevelDBDatabase_DeletePrefixed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeyPrefix(&p_key_prefix))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 2, false);
        return false;
      }
      LevelDBDatabase::DeletePrefixedCallback callback =
          LevelDBDatabase_DeletePrefixed_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeletePrefixed(
std::move(p_key_prefix), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_RewriteDB_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::RewriteDB",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_RewriteDB_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::RewriteDBCallback callback =
              LevelDBDatabase_RewriteDB_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_RewriteDB_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_RewriteDB_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LevelDBDatabase_RewriteDB_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 3, false);
        return false;
      }
      LevelDBDatabase::RewriteDBCallback callback =
          LevelDBDatabase_RewriteDB_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RewriteDB(std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_Write_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::Write",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_Write_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::WriteCallback callback =
              LevelDBDatabase_Write_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_Write_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_Write_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<BatchedOperationPtr> p_operations{};
      LevelDBDatabase_Write_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOperations(&p_operations))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 4, false);
        return false;
      }
      LevelDBDatabase::WriteCallback callback =
          LevelDBDatabase_Write_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Write(
std::move(p_operations), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_Get_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::Get",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_Get_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::GetCallback callback =
              LevelDBDatabase_Get_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_Get_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_Get_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key{};
      LevelDBDatabase_Get_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 5, false);
        return false;
      }
      LevelDBDatabase::GetCallback callback =
          LevelDBDatabase_Get_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Get(
std::move(p_key), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_GetPrefixed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetPrefixed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_GetPrefixed_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::GetPrefixedCallback callback =
              LevelDBDatabase_GetPrefixed_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_GetPrefixed_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_GetPrefixed_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key_prefix{};
      LevelDBDatabase_GetPrefixed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeyPrefix(&p_key_prefix))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 6, false);
        return false;
      }
      LevelDBDatabase::GetPrefixedCallback callback =
          LevelDBDatabase_GetPrefixed_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPrefixed(
std::move(p_key_prefix), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_CopyPrefixed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::CopyPrefixed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_CopyPrefixed_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::CopyPrefixedCallback callback =
              LevelDBDatabase_CopyPrefixed_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_CopyPrefixed_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_CopyPrefixed_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_source_key_prefix{};
      std::vector<uint8_t> p_destination_key_prefix{};
      LevelDBDatabase_CopyPrefixed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSourceKeyPrefix(&p_source_key_prefix))
        success = false;
      if (!input_data_view.ReadDestinationKeyPrefix(&p_destination_key_prefix))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 7, false);
        return false;
      }
      LevelDBDatabase::CopyPrefixedCallback callback =
          LevelDBDatabase_CopyPrefixed_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CopyPrefixed(
std::move(p_source_key_prefix), 
std::move(p_destination_key_prefix), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_GetSnapshot_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetSnapshot",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_GetSnapshot_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::GetSnapshotCallback callback =
              LevelDBDatabase_GetSnapshot_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_GetSnapshot_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_GetSnapshot_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LevelDBDatabase_GetSnapshot_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 8, false);
        return false;
      }
      LevelDBDatabase::GetSnapshotCallback callback =
          LevelDBDatabase_GetSnapshot_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetSnapshot(std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_ReleaseSnapshot_Name: {
      break;
    }
    case internal::kLevelDBDatabase_GetFromSnapshot_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::GetFromSnapshot",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_GetFromSnapshot_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::GetFromSnapshotCallback callback =
              LevelDBDatabase_GetFromSnapshot_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_GetFromSnapshot_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_GetFromSnapshot_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_snapshot{};
      std::vector<uint8_t> p_key{};
      LevelDBDatabase_GetFromSnapshot_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSnapshot(&p_snapshot))
        success = false;
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 10, false);
        return false;
      }
      LevelDBDatabase::GetFromSnapshotCallback callback =
          LevelDBDatabase_GetFromSnapshot_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetFromSnapshot(
std::move(p_snapshot), 
std::move(p_key), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_NewIterator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::NewIterator",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_NewIterator_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::NewIteratorCallback callback =
              LevelDBDatabase_NewIterator_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_NewIterator_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_NewIterator_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LevelDBDatabase_NewIterator_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 11, false);
        return false;
      }
      LevelDBDatabase::NewIteratorCallback callback =
          LevelDBDatabase_NewIterator_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NewIterator(std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_NewIteratorFromSnapshot_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::NewIteratorFromSnapshot",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_NewIteratorFromSnapshot_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::NewIteratorFromSnapshotCallback callback =
              LevelDBDatabase_NewIteratorFromSnapshot_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_NewIteratorFromSnapshot_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_NewIteratorFromSnapshot_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_snapshot{};
      LevelDBDatabase_NewIteratorFromSnapshot_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSnapshot(&p_snapshot))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 12, false);
        return false;
      }
      LevelDBDatabase::NewIteratorFromSnapshotCallback callback =
          LevelDBDatabase_NewIteratorFromSnapshot_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NewIteratorFromSnapshot(
std::move(p_snapshot), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_ReleaseIterator_Name: {
      break;
    }
    case internal::kLevelDBDatabase_IteratorSeekToFirst_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekToFirst",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_IteratorSeekToFirst_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::IteratorSeekToFirstCallback callback =
              LevelDBDatabase_IteratorSeekToFirst_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_IteratorSeekToFirst_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_IteratorSeekToFirst_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_iterator{};
      LevelDBDatabase_IteratorSeekToFirst_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIterator(&p_iterator))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 14, false);
        return false;
      }
      LevelDBDatabase::IteratorSeekToFirstCallback callback =
          LevelDBDatabase_IteratorSeekToFirst_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IteratorSeekToFirst(
std::move(p_iterator), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_IteratorSeekToLast_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeekToLast",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_IteratorSeekToLast_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::IteratorSeekToLastCallback callback =
              LevelDBDatabase_IteratorSeekToLast_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_IteratorSeekToLast_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_IteratorSeekToLast_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_iterator{};
      LevelDBDatabase_IteratorSeekToLast_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIterator(&p_iterator))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 15, false);
        return false;
      }
      LevelDBDatabase::IteratorSeekToLastCallback callback =
          LevelDBDatabase_IteratorSeekToLast_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IteratorSeekToLast(
std::move(p_iterator), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_IteratorSeek_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorSeek",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_IteratorSeek_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::IteratorSeekCallback callback =
              LevelDBDatabase_IteratorSeek_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_IteratorSeek_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_IteratorSeek_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_iterator{};
      std::vector<uint8_t> p_target{};
      LevelDBDatabase_IteratorSeek_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIterator(&p_iterator))
        success = false;
      if (!input_data_view.ReadTarget(&p_target))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 16, false);
        return false;
      }
      LevelDBDatabase::IteratorSeekCallback callback =
          LevelDBDatabase_IteratorSeek_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IteratorSeek(
std::move(p_iterator), 
std::move(p_target), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_IteratorNext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorNext",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_IteratorNext_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::IteratorNextCallback callback =
              LevelDBDatabase_IteratorNext_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_IteratorNext_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_IteratorNext_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_iterator{};
      LevelDBDatabase_IteratorNext_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIterator(&p_iterator))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 17, false);
        return false;
      }
      LevelDBDatabase::IteratorNextCallback callback =
          LevelDBDatabase_IteratorNext_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IteratorNext(
std::move(p_iterator), std::move(callback));
      return true;
    }
    case internal::kLevelDBDatabase_IteratorPrev_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LevelDBDatabase::IteratorPrev",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            LevelDBDatabaseProxy_IteratorPrev_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          LevelDBDatabase::IteratorPrevCallback callback =
              LevelDBDatabase_IteratorPrev_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::LevelDBDatabase_IteratorPrev_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBDatabase_IteratorPrev_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_iterator{};
      LevelDBDatabase_IteratorPrev_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIterator(&p_iterator))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LevelDBDatabase::Name_, 18, false);
        return false;
      }
      LevelDBDatabase::IteratorPrevCallback callback =
          LevelDBDatabase_IteratorPrev_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IteratorPrev(
std::move(p_iterator), std::move(callback));
      return true;
    }
  }
  return false;
}

bool LevelDBDatabaseRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LevelDBDatabase RequestValidator");

  switch (message->header()->name) {
    case internal::kLevelDBDatabase_Put_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_Put_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_Delete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_Delete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_DeletePrefixed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_DeletePrefixed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_RewriteDB_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_RewriteDB_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_Write_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_Write_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_Get_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_Get_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_GetPrefixed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_GetPrefixed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_CopyPrefixed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_CopyPrefixed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_GetSnapshot_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_GetSnapshot_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_ReleaseSnapshot_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_ReleaseSnapshot_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_GetFromSnapshot_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_GetFromSnapshot_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_NewIterator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_NewIterator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_NewIteratorFromSnapshot_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_NewIteratorFromSnapshot_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_ReleaseIterator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_ReleaseIterator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_IteratorSeekToFirst_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_IteratorSeekToFirst_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_IteratorSeekToLast_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_IteratorSeekToLast_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_IteratorSeek_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_IteratorSeek_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_IteratorNext_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_IteratorNext_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_IteratorPrev_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_IteratorPrev_Params_Data>(
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

bool LevelDBDatabaseResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LevelDBDatabase ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kLevelDBDatabase_Put_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_Put_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_Delete_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_Delete_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_DeletePrefixed_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_DeletePrefixed_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_RewriteDB_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_RewriteDB_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_Write_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_Write_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_Get_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_Get_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_GetPrefixed_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_GetPrefixed_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_CopyPrefixed_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_CopyPrefixed_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_GetSnapshot_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_GetSnapshot_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_GetFromSnapshot_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_GetFromSnapshot_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_NewIterator_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_NewIterator_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_NewIteratorFromSnapshot_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_IteratorSeekToFirst_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_IteratorSeekToLast_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_IteratorSeek_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_IteratorSeek_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_IteratorNext_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_IteratorNext_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBDatabase_IteratorPrev_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBDatabase_IteratorPrev_ResponseParams_Data>(
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
}  // namespace leveldb

namespace mojo {


// static
bool StructTraits<::leveldb::mojom::BatchedOperation::DataView, ::leveldb::mojom::BatchedOperationPtr>::Read(
    ::leveldb::mojom::BatchedOperation::DataView input,
    ::leveldb::mojom::BatchedOperationPtr* output) {
  bool success = true;
  ::leveldb::mojom::BatchedOperationPtr result(::leveldb::mojom::BatchedOperation::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::leveldb::mojom::KeyValue::DataView, ::leveldb::mojom::KeyValuePtr>::Read(
    ::leveldb::mojom::KeyValue::DataView input,
    ::leveldb::mojom::KeyValuePtr* output) {
  bool success = true;
  ::leveldb::mojom::KeyValuePtr result(::leveldb::mojom::KeyValue::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::leveldb::mojom::OpenOptions::DataView, ::leveldb::mojom::OpenOptionsPtr>::Read(
    ::leveldb::mojom::OpenOptions::DataView input,
    ::leveldb::mojom::OpenOptionsPtr* output) {
  bool success = true;
  ::leveldb::mojom::OpenOptionsPtr result(::leveldb::mojom::OpenOptions::New());
  
      result->create_if_missing = input.create_if_missing();
      result->error_if_exists = input.error_if_exists();
      result->paranoid_checks = input.paranoid_checks();
      result->write_buffer_size = input.write_buffer_size();
      result->max_open_files = input.max_open_files();
      if (!input.ReadSharedBlockReadCache(&result->shared_block_read_cache))
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