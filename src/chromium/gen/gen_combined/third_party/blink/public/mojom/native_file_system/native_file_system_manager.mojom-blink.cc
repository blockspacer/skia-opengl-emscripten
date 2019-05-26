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

#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-blink.h"

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

#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-params-data.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
ChooseFileSystemEntryAcceptsOption::ChooseFileSystemEntryAcceptsOption()
    : description(),
      mime_types(),
      extensions() {}

ChooseFileSystemEntryAcceptsOption::ChooseFileSystemEntryAcceptsOption(
    const WTF::String& description_in,
    const WTF::Vector<WTF::String>& mime_types_in,
    const WTF::Vector<WTF::String>& extensions_in)
    : description(std::move(description_in)),
      mime_types(std::move(mime_types_in)),
      extensions(std::move(extensions_in)) {}

ChooseFileSystemEntryAcceptsOption::~ChooseFileSystemEntryAcceptsOption() = default;

bool ChooseFileSystemEntryAcceptsOption::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char NativeFileSystemManager::Name_[] = "blink.mojom.NativeFileSystemManager";

class NativeFileSystemManager_GetSandboxedFileSystem_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemManager_GetSandboxedFileSystem_ForwardToCallback(
      NativeFileSystemManager::GetSandboxedFileSystemCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemManager::GetSandboxedFileSystemCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemManager_GetSandboxedFileSystem_ForwardToCallback);
};

class NativeFileSystemManager_ChooseEntries_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemManager_ChooseEntries_ForwardToCallback(
      NativeFileSystemManager::ChooseEntriesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemManager::ChooseEntriesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemManager_ChooseEntries_ForwardToCallback);
};

NativeFileSystemManagerProxy::NativeFileSystemManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NativeFileSystemManagerProxy::GetSandboxedFileSystem(
    GetSandboxedFileSystemCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemManager::GetSandboxedFileSystem");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemManager_GetSandboxedFileSystem_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemManager_GetSandboxedFileSystem_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemManager::Name_);
  message.set_method_name("GetSandboxedFileSystem");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemManager_GetSandboxedFileSystem_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NativeFileSystemManagerProxy::ChooseEntries(
    ChooseFileSystemEntryType in_type, WTF::Vector<ChooseFileSystemEntryAcceptsOptionPtr> in_accepts, bool in_include_accepts_all, ChooseEntriesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemManager::ChooseEntries");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemManager_ChooseEntries_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemManager_ChooseEntries_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ChooseFileSystemEntryType>(
      in_type, &params->type);
  typename decltype(params->accepts)::BaseType::BufferWriter
      accepts_writer;
  const mojo::internal::ContainerValidateParams accepts_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ChooseFileSystemEntryAcceptsOptionDataView>>(
      in_accepts, buffer, &accepts_writer, &accepts_validate_params,
      &serialization_context);
  params->accepts.Set(
      accepts_writer.is_null() ? nullptr : accepts_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->accepts.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null accepts in NativeFileSystemManager.ChooseEntries request");
  params->include_accepts_all = in_include_accepts_all;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemManager::Name_);
  message.set_method_name("ChooseEntries");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemManager_ChooseEntries_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NativeFileSystemManager_GetSandboxedFileSystem_ProxyToResponder {
 public:
  static NativeFileSystemManager::GetSandboxedFileSystemCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemManager_GetSandboxedFileSystem_ProxyToResponder> proxy(
        new NativeFileSystemManager_GetSandboxedFileSystem_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemManager_GetSandboxedFileSystem_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemManager_GetSandboxedFileSystem_ProxyToResponder() {
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
  NativeFileSystemManager_GetSandboxedFileSystem_ProxyToResponder(
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
        << "NativeFileSystemManager::GetSandboxedFileSystemCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::NativeFileSystemErrorPtr in_result, ::blink::mojom::blink::NativeFileSystemDirectoryHandlePtr in_directory);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemManager_GetSandboxedFileSystem_ProxyToResponder);
};

bool NativeFileSystemManager_GetSandboxedFileSystem_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemManager::GetSandboxedFileSystemCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::NativeFileSystemErrorPtr p_result{};
  ::blink::mojom::blink::NativeFileSystemDirectoryHandlePtr p_directory{};
  NativeFileSystemManager_GetSandboxedFileSystem_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_directory =
      input_data_view.TakeDirectory<decltype(p_directory)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_directory));
  return true;
}

void NativeFileSystemManager_GetSandboxedFileSystem_ProxyToResponder::Run(
    ::blink::mojom::blink::NativeFileSystemErrorPtr in_result, ::blink::mojom::blink::NativeFileSystemDirectoryHandlePtr in_directory) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemManager_GetSandboxedFileSystem_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemManager::GetSandboxedFileSystemCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemManager::Name_);
  message.set_method_name("GetSandboxedFileSystem");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NativeFileSystemManager_ChooseEntries_ProxyToResponder {
 public:
  static NativeFileSystemManager::ChooseEntriesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemManager_ChooseEntries_ProxyToResponder> proxy(
        new NativeFileSystemManager_ChooseEntries_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemManager_ChooseEntries_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemManager_ChooseEntries_ProxyToResponder() {
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
  NativeFileSystemManager_ChooseEntries_ProxyToResponder(
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
        << "NativeFileSystemManager::ChooseEntriesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::NativeFileSystemErrorPtr in_result, WTF::Vector<::blink::mojom::blink::NativeFileSystemEntryPtr> in_entries);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemManager_ChooseEntries_ProxyToResponder);
};

bool NativeFileSystemManager_ChooseEntries_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemManager::ChooseEntriesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemManager_ChooseEntries_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemManager_ChooseEntries_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::NativeFileSystemErrorPtr p_result{};
  WTF::Vector<::blink::mojom::blink::NativeFileSystemEntryPtr> p_entries{};
  NativeFileSystemManager_ChooseEntries_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_entries));
  return true;
}

void NativeFileSystemManager_ChooseEntries_ProxyToResponder::Run(
    ::blink::mojom::blink::NativeFileSystemErrorPtr in_result, WTF::Vector<::blink::mojom::blink::NativeFileSystemEntryPtr> in_entries) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemManager_ChooseEntries_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemManager_ChooseEntries_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemManager::ChooseEntriesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemManager::Name_);
  message.set_method_name("ChooseEntries");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NativeFileSystemManagerStubDispatch::Accept(
    NativeFileSystemManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNativeFileSystemManager_GetSandboxedFileSystem_Name: {
      break;
    }
    case internal::kNativeFileSystemManager_ChooseEntries_Name: {
      break;
    }
  }
  return false;
}

// static
bool NativeFileSystemManagerStubDispatch::AcceptWithResponder(
    NativeFileSystemManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNativeFileSystemManager_GetSandboxedFileSystem_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemManager::GetSandboxedFileSystem",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemManager_GetSandboxedFileSystem_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemManager_GetSandboxedFileSystem_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NativeFileSystemManager_GetSandboxedFileSystem_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemManager::Name_, 0, false);
        return false;
      }
      NativeFileSystemManager::GetSandboxedFileSystemCallback callback =
          NativeFileSystemManager_GetSandboxedFileSystem_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetSandboxedFileSystem(std::move(callback));
      return true;
    }
    case internal::kNativeFileSystemManager_ChooseEntries_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemManager::ChooseEntries",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemManager_ChooseEntries_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemManager_ChooseEntries_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ChooseFileSystemEntryType p_type{};
      WTF::Vector<ChooseFileSystemEntryAcceptsOptionPtr> p_accepts{};
      bool p_include_accepts_all{};
      NativeFileSystemManager_ChooseEntries_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadAccepts(&p_accepts))
        success = false;
      p_include_accepts_all = input_data_view.include_accepts_all();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemManager::Name_, 1, false);
        return false;
      }
      NativeFileSystemManager::ChooseEntriesCallback callback =
          NativeFileSystemManager_ChooseEntries_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ChooseEntries(
std::move(p_type), 
std::move(p_accepts), 
std::move(p_include_accepts_all), std::move(callback));
      return true;
    }
  }
  return false;
}

bool NativeFileSystemManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeFileSystemManager RequestValidator");

  switch (message->header()->name) {
    case internal::kNativeFileSystemManager_GetSandboxedFileSystem_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemManager_GetSandboxedFileSystem_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemManager_ChooseEntries_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemManager_ChooseEntries_Params_Data>(
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

bool NativeFileSystemManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeFileSystemManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNativeFileSystemManager_GetSandboxedFileSystem_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNativeFileSystemManager_ChooseEntries_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemManager_ChooseEntries_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::blink::ChooseFileSystemEntryAcceptsOption::DataView, ::blink::mojom::blink::ChooseFileSystemEntryAcceptsOptionPtr>::Read(
    ::blink::mojom::blink::ChooseFileSystemEntryAcceptsOption::DataView input,
    ::blink::mojom::blink::ChooseFileSystemEntryAcceptsOptionPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ChooseFileSystemEntryAcceptsOptionPtr result(::blink::mojom::blink::ChooseFileSystemEntryAcceptsOption::New());
  
      if (!input.ReadDescription(&result->description))
        success = false;
      if (!input.ReadMimeTypes(&result->mime_types))
        success = false;
      if (!input.ReadExtensions(&result->extensions))
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