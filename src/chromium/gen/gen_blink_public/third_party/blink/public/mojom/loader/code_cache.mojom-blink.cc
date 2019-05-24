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

#include "third_party/blink/public/mojom/loader/code_cache.mojom-blink.h"

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

#include "third_party/blink/public/mojom/loader/code_cache.mojom-params-data.h"
#include "third_party/blink/public/mojom/loader/code_cache.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/loader/code_cache.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char CodeCacheHost::Name_[] = "blink.mojom.CodeCacheHost";

class CodeCacheHost_FetchCachedCode_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CodeCacheHost_FetchCachedCode_ForwardToCallback(
      CodeCacheHost::FetchCachedCodeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CodeCacheHost::FetchCachedCodeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CodeCacheHost_FetchCachedCode_ForwardToCallback);
};

CodeCacheHostProxy::CodeCacheHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CodeCacheHostProxy::DidGenerateCacheableMetadata(
    CodeCacheType in_cache_type, const ::blink::KURL& in_url, base::Time in_expected_response_time, mojo_base::BigBuffer in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CodeCacheHost::DidGenerateCacheableMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCodeCacheHost_DidGenerateCacheableMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CodeCacheHost_DidGenerateCacheableMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::CodeCacheType>(
      in_cache_type, &params->cache_type);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in CodeCacheHost.DidGenerateCacheableMetadata request");
  typename decltype(params->expected_response_time)::BaseType::BufferWriter
      expected_response_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_expected_response_time, buffer, &expected_response_time_writer, &serialization_context);
  params->expected_response_time.Set(
      expected_response_time_writer.is_null() ? nullptr : expected_response_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expected_response_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expected_response_time in CodeCacheHost.DidGenerateCacheableMetadata request");
  typename decltype(params->data)::BufferWriter data_writer;
  data_writer.AllocateInline(buffer, &params->data);
  mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
      in_data, buffer, &data_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in CodeCacheHost.DidGenerateCacheableMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CodeCacheHost::Name_);
  message.set_method_name("DidGenerateCacheableMetadata");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CodeCacheHostProxy::FetchCachedCode(
    CodeCacheType in_cache_type, const ::blink::KURL& in_url, FetchCachedCodeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CodeCacheHost::FetchCachedCode");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCodeCacheHost_FetchCachedCode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CodeCacheHost_FetchCachedCode_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::CodeCacheType>(
      in_cache_type, &params->cache_type);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in CodeCacheHost.FetchCachedCode request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CodeCacheHost::Name_);
  message.set_method_name("FetchCachedCode");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CodeCacheHost_FetchCachedCode_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CodeCacheHostProxy::ClearCodeCacheEntry(
    CodeCacheType in_cache_type, const ::blink::KURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CodeCacheHost::ClearCodeCacheEntry");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCodeCacheHost_ClearCodeCacheEntry_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CodeCacheHost_ClearCodeCacheEntry_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::CodeCacheType>(
      in_cache_type, &params->cache_type);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in CodeCacheHost.ClearCodeCacheEntry request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CodeCacheHost::Name_);
  message.set_method_name("ClearCodeCacheEntry");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CodeCacheHostProxy::DidGenerateCacheableMetadataInCacheStorage(
    const ::blink::KURL& in_url, base::Time in_expected_response_time, mojo_base::BigBuffer in_data, const scoped_refptr<const ::blink::SecurityOrigin>& in_cache_storage_origin, const WTF::String& in_cache_storage_cache_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CodeCacheHost::DidGenerateCacheableMetadataInCacheStorage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in CodeCacheHost.DidGenerateCacheableMetadataInCacheStorage request");
  typename decltype(params->expected_response_time)::BaseType::BufferWriter
      expected_response_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_expected_response_time, buffer, &expected_response_time_writer, &serialization_context);
  params->expected_response_time.Set(
      expected_response_time_writer.is_null() ? nullptr : expected_response_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expected_response_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expected_response_time in CodeCacheHost.DidGenerateCacheableMetadataInCacheStorage request");
  typename decltype(params->data)::BufferWriter data_writer;
  data_writer.AllocateInline(buffer, &params->data);
  mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
      in_data, buffer, &data_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in CodeCacheHost.DidGenerateCacheableMetadataInCacheStorage request");
  typename decltype(params->cache_storage_origin)::BaseType::BufferWriter
      cache_storage_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_cache_storage_origin, buffer, &cache_storage_origin_writer, &serialization_context);
  params->cache_storage_origin.Set(
      cache_storage_origin_writer.is_null() ? nullptr : cache_storage_origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_storage_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_storage_origin in CodeCacheHost.DidGenerateCacheableMetadataInCacheStorage request");
  typename decltype(params->cache_storage_cache_name)::BaseType::BufferWriter
      cache_storage_cache_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_cache_storage_cache_name, buffer, &cache_storage_cache_name_writer, &serialization_context);
  params->cache_storage_cache_name.Set(
      cache_storage_cache_name_writer.is_null() ? nullptr : cache_storage_cache_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_storage_cache_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_storage_cache_name in CodeCacheHost.DidGenerateCacheableMetadataInCacheStorage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CodeCacheHost::Name_);
  message.set_method_name("DidGenerateCacheableMetadataInCacheStorage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class CodeCacheHost_FetchCachedCode_ProxyToResponder {
 public:
  static CodeCacheHost::FetchCachedCodeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CodeCacheHost_FetchCachedCode_ProxyToResponder> proxy(
        new CodeCacheHost_FetchCachedCode_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CodeCacheHost_FetchCachedCode_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CodeCacheHost_FetchCachedCode_ProxyToResponder() {
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
  CodeCacheHost_FetchCachedCode_ProxyToResponder(
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
        << "CodeCacheHost::FetchCachedCodeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Time in_response_time, mojo_base::BigBuffer in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CodeCacheHost_FetchCachedCode_ProxyToResponder);
};

bool CodeCacheHost_FetchCachedCode_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CodeCacheHost::FetchCachedCodeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CodeCacheHost_FetchCachedCode_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CodeCacheHost_FetchCachedCode_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Time p_response_time{};
  mojo_base::BigBuffer p_data{};
  CodeCacheHost_FetchCachedCode_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResponseTime(&p_response_time))
    success = false;
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CodeCacheHost::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_response_time), 
std::move(p_data));
  return true;
}

void CodeCacheHost_FetchCachedCode_ProxyToResponder::Run(
    base::Time in_response_time, mojo_base::BigBuffer in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCodeCacheHost_FetchCachedCode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CodeCacheHost_FetchCachedCode_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response_time)::BaseType::BufferWriter
      response_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_response_time, buffer, &response_time_writer, &serialization_context);
  params->response_time.Set(
      response_time_writer.is_null() ? nullptr : response_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response_time in ");
  typename decltype(params->data)::BufferWriter data_writer;
  data_writer.AllocateInline(buffer, &params->data);
  mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
      in_data, buffer, &data_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CodeCacheHost::FetchCachedCodeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CodeCacheHost::Name_);
  message.set_method_name("FetchCachedCode");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CodeCacheHostStubDispatch::Accept(
    CodeCacheHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCodeCacheHost_DidGenerateCacheableMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CodeCacheHost::DidGenerateCacheableMetadata",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CodeCacheHost_DidGenerateCacheableMetadata_Params_Data* params =
          reinterpret_cast<internal::CodeCacheHost_DidGenerateCacheableMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CodeCacheType p_cache_type{};
      ::blink::KURL p_url{};
      base::Time p_expected_response_time{};
      mojo_base::BigBuffer p_data{};
      CodeCacheHost_DidGenerateCacheableMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCacheType(&p_cache_type))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadExpectedResponseTime(&p_expected_response_time))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CodeCacheHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidGenerateCacheableMetadata(
std::move(p_cache_type), 
std::move(p_url), 
std::move(p_expected_response_time), 
std::move(p_data));
      return true;
    }
    case internal::kCodeCacheHost_FetchCachedCode_Name: {
      break;
    }
    case internal::kCodeCacheHost_ClearCodeCacheEntry_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CodeCacheHost::ClearCodeCacheEntry",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CodeCacheHost_ClearCodeCacheEntry_Params_Data* params =
          reinterpret_cast<internal::CodeCacheHost_ClearCodeCacheEntry_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CodeCacheType p_cache_type{};
      ::blink::KURL p_url{};
      CodeCacheHost_ClearCodeCacheEntry_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCacheType(&p_cache_type))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CodeCacheHost::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearCodeCacheEntry(
std::move(p_cache_type), 
std::move(p_url));
      return true;
    }
    case internal::kCodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CodeCacheHost::DidGenerateCacheableMetadataInCacheStorage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data* params =
          reinterpret_cast<internal::CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      base::Time p_expected_response_time{};
      mojo_base::BigBuffer p_data{};
      scoped_refptr<const ::blink::SecurityOrigin> p_cache_storage_origin{};
      WTF::String p_cache_storage_cache_name{};
      CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadExpectedResponseTime(&p_expected_response_time))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!input_data_view.ReadCacheStorageOrigin(&p_cache_storage_origin))
        success = false;
      if (!input_data_view.ReadCacheStorageCacheName(&p_cache_storage_cache_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CodeCacheHost::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidGenerateCacheableMetadataInCacheStorage(
std::move(p_url), 
std::move(p_expected_response_time), 
std::move(p_data), 
std::move(p_cache_storage_origin), 
std::move(p_cache_storage_cache_name));
      return true;
    }
  }
  return false;
}

// static
bool CodeCacheHostStubDispatch::AcceptWithResponder(
    CodeCacheHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCodeCacheHost_DidGenerateCacheableMetadata_Name: {
      break;
    }
    case internal::kCodeCacheHost_FetchCachedCode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CodeCacheHost::FetchCachedCode",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CodeCacheHost_FetchCachedCode_Params_Data* params =
          reinterpret_cast<
              internal::CodeCacheHost_FetchCachedCode_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CodeCacheType p_cache_type{};
      ::blink::KURL p_url{};
      CodeCacheHost_FetchCachedCode_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCacheType(&p_cache_type))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CodeCacheHost::Name_, 1, false);
        return false;
      }
      CodeCacheHost::FetchCachedCodeCallback callback =
          CodeCacheHost_FetchCachedCode_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FetchCachedCode(
std::move(p_cache_type), 
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kCodeCacheHost_ClearCodeCacheEntry_Name: {
      break;
    }
    case internal::kCodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Name: {
      break;
    }
  }
  return false;
}

bool CodeCacheHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CodeCacheHost RequestValidator");

  switch (message->header()->name) {
    case internal::kCodeCacheHost_DidGenerateCacheableMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CodeCacheHost_DidGenerateCacheableMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCodeCacheHost_FetchCachedCode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CodeCacheHost_FetchCachedCode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCodeCacheHost_ClearCodeCacheEntry_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CodeCacheHost_ClearCodeCacheEntry_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data>(
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

bool CodeCacheHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CodeCacheHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCodeCacheHost_FetchCachedCode_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CodeCacheHost_FetchCachedCode_ResponseParams_Data>(
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