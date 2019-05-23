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

#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom.h"

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

#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-params-data.h"
#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "third_party/blink/public/common/fetch/fetch_api_request_headers_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
CacheStorageVerboseError::CacheStorageVerboseError()
    : value(),
      message() {}

CacheStorageVerboseError::CacheStorageVerboseError(
    CacheStorageError value_in,
    const base::Optional<std::string>& message_in)
    : value(std::move(value_in)),
      message(std::move(message_in)) {}

CacheStorageVerboseError::~CacheStorageVerboseError() = default;

bool CacheStorageVerboseError::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CacheQueryOptions::CacheQueryOptions()
    : ignore_search(false),
      ignore_method(false),
      ignore_vary(false) {}

CacheQueryOptions::CacheQueryOptions(
    bool ignore_search_in,
    bool ignore_method_in,
    bool ignore_vary_in)
    : ignore_search(std::move(ignore_search_in)),
      ignore_method(std::move(ignore_method_in)),
      ignore_vary(std::move(ignore_vary_in)) {}

CacheQueryOptions::~CacheQueryOptions() = default;
size_t CacheQueryOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->ignore_search);
  seed = mojo::internal::Hash(seed, this->ignore_method);
  seed = mojo::internal::Hash(seed, this->ignore_vary);
  return seed;
}

bool CacheQueryOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MultiCacheQueryOptions::MultiCacheQueryOptions()
    : query_options(),
      cache_name() {}

MultiCacheQueryOptions::MultiCacheQueryOptions(
    CacheQueryOptionsPtr query_options_in,
    const base::Optional<base::string16>& cache_name_in)
    : query_options(std::move(query_options_in)),
      cache_name(std::move(cache_name_in)) {}

MultiCacheQueryOptions::~MultiCacheQueryOptions() = default;

bool MultiCacheQueryOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BatchOperation::BatchOperation()
    : operation_type(),
      request(),
      response(),
      match_options() {}

BatchOperation::BatchOperation(
    OperationType operation_type_in,
    ::blink::mojom::FetchAPIRequestPtr request_in,
    ::blink::mojom::FetchAPIResponsePtr response_in,
    CacheQueryOptionsPtr match_options_in)
    : operation_type(std::move(operation_type_in)),
      request(std::move(request_in)),
      response(std::move(response_in)),
      match_options(std::move(match_options_in)) {}

BatchOperation::~BatchOperation() = default;

bool BatchOperation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
OpenResult::OpenResult() : tag_(Tag::STATUS) {
  data_.status = CacheStorageError();
}

OpenResult::~OpenResult() {
  DestroyActive();
}


void OpenResult::set_status(
    CacheStorageError status) {
  if (tag_ != Tag::STATUS) {
    DestroyActive();
    tag_ = Tag::STATUS;
  }
  data_.status = status;
}
void OpenResult::set_cache(
    CacheStorageCacheAssociatedPtrInfo cache) {
  if (tag_ == Tag::CACHE) {
    *(data_.cache) = std::move(cache);
  } else {
    DestroyActive();
    tag_ = Tag::CACHE;
    data_.cache = new CacheStorageCacheAssociatedPtrInfo(
        std::move(cache));
  }
}

void OpenResult::DestroyActive() {
  switch (tag_) {

    case Tag::STATUS:

      break;
    case Tag::CACHE:

      delete data_.cache;
      break;
  }
}

bool OpenResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
MatchResult::MatchResult() : tag_(Tag::STATUS) {
  data_.status = CacheStorageError();
}

MatchResult::~MatchResult() {
  DestroyActive();
}


void MatchResult::set_status(
    CacheStorageError status) {
  if (tag_ != Tag::STATUS) {
    DestroyActive();
    tag_ = Tag::STATUS;
  }
  data_.status = status;
}
void MatchResult::set_response(
    ::blink::mojom::FetchAPIResponsePtr response) {
  if (tag_ == Tag::RESPONSE) {
    *(data_.response) = std::move(response);
  } else {
    DestroyActive();
    tag_ = Tag::RESPONSE;
    data_.response = new ::blink::mojom::FetchAPIResponsePtr(
        std::move(response));
  }
}

void MatchResult::DestroyActive() {
  switch (tag_) {

    case Tag::STATUS:

      break;
    case Tag::RESPONSE:

      delete data_.response;
      break;
  }
}

bool MatchResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
MatchAllResult::MatchAllResult() : tag_(Tag::STATUS) {
  data_.status = CacheStorageError();
}

MatchAllResult::~MatchAllResult() {
  DestroyActive();
}


void MatchAllResult::set_status(
    CacheStorageError status) {
  if (tag_ != Tag::STATUS) {
    DestroyActive();
    tag_ = Tag::STATUS;
  }
  data_.status = status;
}
void MatchAllResult::set_responses(
    std::vector<::blink::mojom::FetchAPIResponsePtr> responses) {
  if (tag_ == Tag::RESPONSES) {
    *(data_.responses) = std::move(responses);
  } else {
    DestroyActive();
    tag_ = Tag::RESPONSES;
    data_.responses = new std::vector<::blink::mojom::FetchAPIResponsePtr>(
        std::move(responses));
  }
}

void MatchAllResult::DestroyActive() {
  switch (tag_) {

    case Tag::STATUS:

      break;
    case Tag::RESPONSES:

      delete data_.responses;
      break;
  }
}

bool MatchAllResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
CacheKeysResult::CacheKeysResult() : tag_(Tag::STATUS) {
  data_.status = CacheStorageError();
}

CacheKeysResult::~CacheKeysResult() {
  DestroyActive();
}


void CacheKeysResult::set_status(
    CacheStorageError status) {
  if (tag_ != Tag::STATUS) {
    DestroyActive();
    tag_ = Tag::STATUS;
  }
  data_.status = status;
}
void CacheKeysResult::set_keys(
    std::vector<::blink::mojom::FetchAPIRequestPtr> keys) {
  if (tag_ == Tag::KEYS) {
    *(data_.keys) = std::move(keys);
  } else {
    DestroyActive();
    tag_ = Tag::KEYS;
    data_.keys = new std::vector<::blink::mojom::FetchAPIRequestPtr>(
        std::move(keys));
  }
}

void CacheKeysResult::DestroyActive() {
  switch (tag_) {

    case Tag::STATUS:

      break;
    case Tag::KEYS:

      delete data_.keys;
      break;
  }
}

bool CacheKeysResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char CacheStorageCache::Name_[] = "blink.mojom.CacheStorageCache";

class CacheStorageCache_Match_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorageCache_Match_ForwardToCallback(
      CacheStorageCache::MatchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorageCache::MatchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Match_ForwardToCallback);
};

class CacheStorageCache_MatchAll_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorageCache_MatchAll_ForwardToCallback(
      CacheStorageCache::MatchAllCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorageCache::MatchAllCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_MatchAll_ForwardToCallback);
};

class CacheStorageCache_Keys_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorageCache_Keys_ForwardToCallback(
      CacheStorageCache::KeysCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorageCache::KeysCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Keys_ForwardToCallback);
};

class CacheStorageCache_Batch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorageCache_Batch_ForwardToCallback(
      CacheStorageCache::BatchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorageCache::BatchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Batch_ForwardToCallback);
};

class CacheStorageCache_SetSideData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorageCache_SetSideData_ForwardToCallback(
      CacheStorageCache::SetSideDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorageCache::SetSideDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_SetSideData_ForwardToCallback);
};

CacheStorageCacheProxy::CacheStorageCacheProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CacheStorageCacheProxy::Match(
    ::blink::mojom::FetchAPIRequestPtr in_request, CacheQueryOptionsPtr in_query_options, int64_t in_trace_id, MatchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorageCache::Match");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Match_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Match_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in CacheStorageCache.Match request");
  typename decltype(params->query_options)::BaseType::BufferWriter
      query_options_writer;
  mojo::internal::Serialize<::blink::mojom::CacheQueryOptionsDataView>(
      in_query_options, buffer, &query_options_writer, &serialization_context);
  params->query_options.Set(
      query_options_writer.is_null() ? nullptr : query_options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->query_options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null query_options in CacheStorageCache.Match request");
  params->trace_id = in_trace_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorageCache::Name_);
  message.set_method_name("Match");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorageCache_Match_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageCacheProxy::MatchAll(
    ::blink::mojom::FetchAPIRequestPtr in_request, CacheQueryOptionsPtr in_query_options, int64_t in_trace_id, MatchAllCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorageCache::MatchAll");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_MatchAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_MatchAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  typename decltype(params->query_options)::BaseType::BufferWriter
      query_options_writer;
  mojo::internal::Serialize<::blink::mojom::CacheQueryOptionsDataView>(
      in_query_options, buffer, &query_options_writer, &serialization_context);
  params->query_options.Set(
      query_options_writer.is_null() ? nullptr : query_options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->query_options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null query_options in CacheStorageCache.MatchAll request");
  params->trace_id = in_trace_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorageCache::Name_);
  message.set_method_name("MatchAll");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorageCache_MatchAll_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageCacheProxy::Keys(
    ::blink::mojom::FetchAPIRequestPtr in_request, CacheQueryOptionsPtr in_query_options, int64_t in_trace_id, KeysCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorageCache::Keys");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Keys_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Keys_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  typename decltype(params->query_options)::BaseType::BufferWriter
      query_options_writer;
  mojo::internal::Serialize<::blink::mojom::CacheQueryOptionsDataView>(
      in_query_options, buffer, &query_options_writer, &serialization_context);
  params->query_options.Set(
      query_options_writer.is_null() ? nullptr : query_options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->query_options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null query_options in CacheStorageCache.Keys request");
  params->trace_id = in_trace_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorageCache::Name_);
  message.set_method_name("Keys");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorageCache_Keys_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageCacheProxy::Batch(
    std::vector<BatchOperationPtr> in_batch_operations, int64_t in_trace_id, BatchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorageCache::Batch");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Batch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Batch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->batch_operations)::BaseType::BufferWriter
      batch_operations_writer;
  const mojo::internal::ContainerValidateParams batch_operations_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::BatchOperationDataView>>(
      in_batch_operations, buffer, &batch_operations_writer, &batch_operations_validate_params,
      &serialization_context);
  params->batch_operations.Set(
      batch_operations_writer.is_null() ? nullptr : batch_operations_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->batch_operations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null batch_operations in CacheStorageCache.Batch request");
  params->trace_id = in_trace_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorageCache::Name_);
  message.set_method_name("Batch");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorageCache_Batch_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageCacheProxy::SetSideData(
    const GURL& in_url, base::Time in_response_time, const std::vector<uint8_t>& in_side_data, int64_t in_trace_id, SetSideDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorageCache::SetSideData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_SetSideData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_SetSideData_Params_Data::BufferWriter
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
      "null url in CacheStorageCache.SetSideData request");
  typename decltype(params->response_time)::BaseType::BufferWriter
      response_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_response_time, buffer, &response_time_writer, &serialization_context);
  params->response_time.Set(
      response_time_writer.is_null() ? nullptr : response_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response_time in CacheStorageCache.SetSideData request");
  typename decltype(params->side_data)::BaseType::BufferWriter
      side_data_writer;
  const mojo::internal::ContainerValidateParams side_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_side_data, buffer, &side_data_writer, &side_data_validate_params,
      &serialization_context);
  params->side_data.Set(
      side_data_writer.is_null() ? nullptr : side_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->side_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null side_data in CacheStorageCache.SetSideData request");
  params->trace_id = in_trace_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorageCache::Name_);
  message.set_method_name("SetSideData");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorageCache_SetSideData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CacheStorageCache_Match_ProxyToResponder {
 public:
  static CacheStorageCache::MatchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorageCache_Match_ProxyToResponder> proxy(
        new CacheStorageCache_Match_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorageCache_Match_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorageCache_Match_ProxyToResponder() {
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
  CacheStorageCache_Match_ProxyToResponder(
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
        << "CacheStorageCache::MatchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MatchResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Match_ProxyToResponder);
};

bool CacheStorageCache_Match_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorageCache::MatchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorageCache_Match_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorageCache_Match_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MatchResultPtr p_result{};
  CacheStorageCache_Match_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CacheStorageCache::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorageCache_Match_ProxyToResponder::Run(
    MatchResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Match_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Match_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::blink::mojom::MatchResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorageCache::MatchCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorageCache::Name_);
  message.set_method_name("Match");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorageCache_MatchAll_ProxyToResponder {
 public:
  static CacheStorageCache::MatchAllCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorageCache_MatchAll_ProxyToResponder> proxy(
        new CacheStorageCache_MatchAll_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorageCache_MatchAll_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorageCache_MatchAll_ProxyToResponder() {
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
  CacheStorageCache_MatchAll_ProxyToResponder(
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
        << "CacheStorageCache::MatchAllCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MatchAllResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_MatchAll_ProxyToResponder);
};

bool CacheStorageCache_MatchAll_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorageCache::MatchAllCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorageCache_MatchAll_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorageCache_MatchAll_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MatchAllResultPtr p_result{};
  CacheStorageCache_MatchAll_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CacheStorageCache::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorageCache_MatchAll_ProxyToResponder::Run(
    MatchAllResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_MatchAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_MatchAll_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::blink::mojom::MatchAllResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorageCache::MatchAllCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorageCache::Name_);
  message.set_method_name("MatchAll");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorageCache_Keys_ProxyToResponder {
 public:
  static CacheStorageCache::KeysCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorageCache_Keys_ProxyToResponder> proxy(
        new CacheStorageCache_Keys_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorageCache_Keys_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorageCache_Keys_ProxyToResponder() {
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
  CacheStorageCache_Keys_ProxyToResponder(
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
        << "CacheStorageCache::KeysCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CacheKeysResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Keys_ProxyToResponder);
};

bool CacheStorageCache_Keys_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorageCache::KeysCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorageCache_Keys_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorageCache_Keys_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CacheKeysResultPtr p_result{};
  CacheStorageCache_Keys_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CacheStorageCache::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorageCache_Keys_ProxyToResponder::Run(
    CacheKeysResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Keys_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Keys_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::blink::mojom::CacheKeysResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorageCache::KeysCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorageCache::Name_);
  message.set_method_name("Keys");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorageCache_Batch_ProxyToResponder {
 public:
  static CacheStorageCache::BatchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorageCache_Batch_ProxyToResponder> proxy(
        new CacheStorageCache_Batch_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorageCache_Batch_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorageCache_Batch_ProxyToResponder() {
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
  CacheStorageCache_Batch_ProxyToResponder(
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
        << "CacheStorageCache::BatchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CacheStorageVerboseErrorPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_Batch_ProxyToResponder);
};

bool CacheStorageCache_Batch_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorageCache::BatchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorageCache_Batch_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorageCache_Batch_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CacheStorageVerboseErrorPtr p_result{};
  CacheStorageCache_Batch_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CacheStorageCache::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorageCache_Batch_ProxyToResponder::Run(
    CacheStorageVerboseErrorPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_Batch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_Batch_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::CacheStorageVerboseErrorDataView>(
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorageCache::BatchCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorageCache::Name_);
  message.set_method_name("Batch");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorageCache_SetSideData_ProxyToResponder {
 public:
  static CacheStorageCache::SetSideDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorageCache_SetSideData_ProxyToResponder> proxy(
        new CacheStorageCache_SetSideData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorageCache_SetSideData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorageCache_SetSideData_ProxyToResponder() {
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
  CacheStorageCache_SetSideData_ProxyToResponder(
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
        << "CacheStorageCache::SetSideDataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CacheStorageError in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCache_SetSideData_ProxyToResponder);
};

bool CacheStorageCache_SetSideData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorageCache::SetSideDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorageCache_SetSideData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorageCache_SetSideData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CacheStorageError p_result{};
  CacheStorageCache_SetSideData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CacheStorageCache::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorageCache_SetSideData_ProxyToResponder::Run(
    CacheStorageError in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorageCache_SetSideData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorageCache_SetSideData_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorageCache::SetSideDataCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorageCache::Name_);
  message.set_method_name("SetSideData");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CacheStorageCacheStubDispatch::Accept(
    CacheStorageCache* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCacheStorageCache_Match_Name: {
      break;
    }
    case internal::kCacheStorageCache_MatchAll_Name: {
      break;
    }
    case internal::kCacheStorageCache_Keys_Name: {
      break;
    }
    case internal::kCacheStorageCache_Batch_Name: {
      break;
    }
    case internal::kCacheStorageCache_SetSideData_Name: {
      break;
    }
  }
  return false;
}

// static
bool CacheStorageCacheStubDispatch::AcceptWithResponder(
    CacheStorageCache* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCacheStorageCache_Match_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorageCache::Match",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorageCache_Match_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorageCache_Match_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::FetchAPIRequestPtr p_request{};
      CacheQueryOptionsPtr p_query_options{};
      int64_t p_trace_id{};
      CacheStorageCache_Match_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!input_data_view.ReadQueryOptions(&p_query_options))
        success = false;
      p_trace_id = input_data_view.trace_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CacheStorageCache::Name_, 0, false);
        return false;
      }
      CacheStorageCache::MatchCallback callback =
          CacheStorageCache_Match_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Match(
std::move(p_request), 
std::move(p_query_options), 
std::move(p_trace_id), std::move(callback));
      return true;
    }
    case internal::kCacheStorageCache_MatchAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorageCache::MatchAll",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorageCache_MatchAll_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorageCache_MatchAll_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::FetchAPIRequestPtr p_request{};
      CacheQueryOptionsPtr p_query_options{};
      int64_t p_trace_id{};
      CacheStorageCache_MatchAll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!input_data_view.ReadQueryOptions(&p_query_options))
        success = false;
      p_trace_id = input_data_view.trace_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CacheStorageCache::Name_, 1, false);
        return false;
      }
      CacheStorageCache::MatchAllCallback callback =
          CacheStorageCache_MatchAll_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MatchAll(
std::move(p_request), 
std::move(p_query_options), 
std::move(p_trace_id), std::move(callback));
      return true;
    }
    case internal::kCacheStorageCache_Keys_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorageCache::Keys",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorageCache_Keys_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorageCache_Keys_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::FetchAPIRequestPtr p_request{};
      CacheQueryOptionsPtr p_query_options{};
      int64_t p_trace_id{};
      CacheStorageCache_Keys_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!input_data_view.ReadQueryOptions(&p_query_options))
        success = false;
      p_trace_id = input_data_view.trace_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CacheStorageCache::Name_, 2, false);
        return false;
      }
      CacheStorageCache::KeysCallback callback =
          CacheStorageCache_Keys_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Keys(
std::move(p_request), 
std::move(p_query_options), 
std::move(p_trace_id), std::move(callback));
      return true;
    }
    case internal::kCacheStorageCache_Batch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorageCache::Batch",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorageCache_Batch_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorageCache_Batch_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<BatchOperationPtr> p_batch_operations{};
      int64_t p_trace_id{};
      CacheStorageCache_Batch_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBatchOperations(&p_batch_operations))
        success = false;
      p_trace_id = input_data_view.trace_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CacheStorageCache::Name_, 3, false);
        return false;
      }
      CacheStorageCache::BatchCallback callback =
          CacheStorageCache_Batch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Batch(
std::move(p_batch_operations), 
std::move(p_trace_id), std::move(callback));
      return true;
    }
    case internal::kCacheStorageCache_SetSideData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorageCache::SetSideData",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorageCache_SetSideData_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorageCache_SetSideData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      base::Time p_response_time{};
      std::vector<uint8_t> p_side_data{};
      int64_t p_trace_id{};
      CacheStorageCache_SetSideData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadResponseTime(&p_response_time))
        success = false;
      if (!input_data_view.ReadSideData(&p_side_data))
        success = false;
      p_trace_id = input_data_view.trace_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CacheStorageCache::Name_, 4, false);
        return false;
      }
      CacheStorageCache::SetSideDataCallback callback =
          CacheStorageCache_SetSideData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSideData(
std::move(p_url), 
std::move(p_response_time), 
std::move(p_side_data), 
std::move(p_trace_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool CacheStorageCacheRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CacheStorageCache RequestValidator");

  switch (message->header()->name) {
    case internal::kCacheStorageCache_Match_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Match_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_MatchAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_MatchAll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_Keys_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Keys_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_Batch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Batch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_SetSideData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_SetSideData_Params_Data>(
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

bool CacheStorageCacheResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CacheStorageCache ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCacheStorageCache_Match_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Match_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_MatchAll_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_MatchAll_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_Keys_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Keys_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_Batch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_Batch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorageCache_SetSideData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorageCache_SetSideData_ResponseParams_Data>(
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
const char CacheStorage::Name_[] = "blink.mojom.CacheStorage";

class CacheStorage_Has_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorage_Has_ForwardToCallback(
      CacheStorage::HasCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorage::HasCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Has_ForwardToCallback);
};

class CacheStorage_Delete_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorage_Delete_ForwardToCallback(
      CacheStorage::DeleteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorage::DeleteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Delete_ForwardToCallback);
};

class CacheStorage_Keys_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorage_Keys_ForwardToCallback(
      CacheStorage::KeysCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorage::KeysCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Keys_ForwardToCallback);
};

class CacheStorage_Match_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorage_Match_ForwardToCallback(
      CacheStorage::MatchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorage::MatchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Match_ForwardToCallback);
};

class CacheStorage_Open_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CacheStorage_Open_ForwardToCallback(
      CacheStorage::OpenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CacheStorage::OpenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Open_ForwardToCallback);
};

CacheStorageProxy::CacheStorageProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CacheStorageProxy::Has(
    const base::string16& in_cache_name, int64_t in_trace_id, HasCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorage::Has");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Has_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Has_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cache_name)::BaseType::BufferWriter
      cache_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_cache_name, buffer, &cache_name_writer, &serialization_context);
  params->cache_name.Set(
      cache_name_writer.is_null() ? nullptr : cache_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_name in CacheStorage.Has request");
  params->trace_id = in_trace_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorage::Name_);
  message.set_method_name("Has");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorage_Has_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageProxy::Delete(
    const base::string16& in_cache_name, int64_t in_trace_id, DeleteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorage::Delete");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Delete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cache_name)::BaseType::BufferWriter
      cache_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_cache_name, buffer, &cache_name_writer, &serialization_context);
  params->cache_name.Set(
      cache_name_writer.is_null() ? nullptr : cache_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_name in CacheStorage.Delete request");
  params->trace_id = in_trace_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorage::Name_);
  message.set_method_name("Delete");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorage_Delete_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageProxy::Keys(
    int64_t in_trace_id, KeysCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorage::Keys");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Keys_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Keys_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->trace_id = in_trace_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorage::Name_);
  message.set_method_name("Keys");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorage_Keys_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageProxy::Match(
    ::blink::mojom::FetchAPIRequestPtr in_request, MultiCacheQueryOptionsPtr in_match_options, int64_t in_trace_id, MatchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorage::Match");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Match_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Match_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in CacheStorage.Match request");
  typename decltype(params->match_options)::BaseType::BufferWriter
      match_options_writer;
  mojo::internal::Serialize<::blink::mojom::MultiCacheQueryOptionsDataView>(
      in_match_options, buffer, &match_options_writer, &serialization_context);
  params->match_options.Set(
      match_options_writer.is_null() ? nullptr : match_options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->match_options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null match_options in CacheStorage.Match request");
  params->trace_id = in_trace_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorage::Name_);
  message.set_method_name("Match");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorage_Match_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CacheStorageProxy::Open(
    const base::string16& in_cache_name, int64_t in_trace_id, OpenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorage::Open");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cache_name)::BaseType::BufferWriter
      cache_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_cache_name, buffer, &cache_name_writer, &serialization_context);
  params->cache_name.Set(
      cache_name_writer.is_null() ? nullptr : cache_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_name in CacheStorage.Open request");
  params->trace_id = in_trace_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorage::Name_);
  message.set_method_name("Open");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CacheStorage_Open_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CacheStorage_Has_ProxyToResponder {
 public:
  static CacheStorage::HasCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorage_Has_ProxyToResponder> proxy(
        new CacheStorage_Has_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorage_Has_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorage_Has_ProxyToResponder() {
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
  CacheStorage_Has_ProxyToResponder(
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
        << "CacheStorage::HasCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CacheStorageError in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Has_ProxyToResponder);
};

bool CacheStorage_Has_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorage::HasCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorage_Has_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorage_Has_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CacheStorageError p_result{};
  CacheStorage_Has_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CacheStorage::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorage_Has_ProxyToResponder::Run(
    CacheStorageError in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Has_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Has_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorage::HasCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorage::Name_);
  message.set_method_name("Has");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorage_Delete_ProxyToResponder {
 public:
  static CacheStorage::DeleteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorage_Delete_ProxyToResponder> proxy(
        new CacheStorage_Delete_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorage_Delete_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorage_Delete_ProxyToResponder() {
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
  CacheStorage_Delete_ProxyToResponder(
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
        << "CacheStorage::DeleteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CacheStorageError in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Delete_ProxyToResponder);
};

bool CacheStorage_Delete_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorage::DeleteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorage_Delete_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorage_Delete_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CacheStorageError p_result{};
  CacheStorage_Delete_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CacheStorage::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorage_Delete_ProxyToResponder::Run(
    CacheStorageError in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Delete_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorage::DeleteCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorage::Name_);
  message.set_method_name("Delete");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorage_Keys_ProxyToResponder {
 public:
  static CacheStorage::KeysCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorage_Keys_ProxyToResponder> proxy(
        new CacheStorage_Keys_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorage_Keys_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorage_Keys_ProxyToResponder() {
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
  CacheStorage_Keys_ProxyToResponder(
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
        << "CacheStorage::KeysCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<base::string16>& in_keys);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Keys_ProxyToResponder);
};

bool CacheStorage_Keys_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorage::KeysCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorage_Keys_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorage_Keys_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<base::string16> p_keys{};
  CacheStorage_Keys_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadKeys(&p_keys))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CacheStorage::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_keys));
  return true;
}

void CacheStorage_Keys_ProxyToResponder::Run(
    const std::vector<base::string16>& in_keys) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Keys_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Keys_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->keys)::BaseType::BufferWriter
      keys_writer;
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
      in_keys, buffer, &keys_writer, &keys_validate_params,
      &serialization_context);
  params->keys.Set(
      keys_writer.is_null() ? nullptr : keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null keys in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorage::KeysCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorage::Name_);
  message.set_method_name("Keys");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorage_Match_ProxyToResponder {
 public:
  static CacheStorage::MatchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorage_Match_ProxyToResponder> proxy(
        new CacheStorage_Match_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorage_Match_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorage_Match_ProxyToResponder() {
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
  CacheStorage_Match_ProxyToResponder(
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
        << "CacheStorage::MatchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MatchResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Match_ProxyToResponder);
};

bool CacheStorage_Match_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorage::MatchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorage_Match_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorage_Match_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MatchResultPtr p_result{};
  CacheStorage_Match_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CacheStorage::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorage_Match_ProxyToResponder::Run(
    MatchResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Match_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Match_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::blink::mojom::MatchResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorage::MatchCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorage::Name_);
  message.set_method_name("Match");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CacheStorage_Open_ProxyToResponder {
 public:
  static CacheStorage::OpenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CacheStorage_Open_ProxyToResponder> proxy(
        new CacheStorage_Open_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CacheStorage_Open_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CacheStorage_Open_ProxyToResponder() {
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
  CacheStorage_Open_ProxyToResponder(
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
        << "CacheStorage::OpenCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      OpenResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorage_Open_ProxyToResponder);
};

bool CacheStorage_Open_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CacheStorage::OpenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CacheStorage_Open_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CacheStorage_Open_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  OpenResultPtr p_result{};
  CacheStorage_Open_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CacheStorage::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void CacheStorage_Open_ProxyToResponder::Run(
    OpenResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStorage_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::CacheStorage_Open_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::blink::mojom::OpenResultDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorage::OpenCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CacheStorage::Name_);
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
bool CacheStorageStubDispatch::Accept(
    CacheStorage* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCacheStorage_Has_Name: {
      break;
    }
    case internal::kCacheStorage_Delete_Name: {
      break;
    }
    case internal::kCacheStorage_Keys_Name: {
      break;
    }
    case internal::kCacheStorage_Match_Name: {
      break;
    }
    case internal::kCacheStorage_Open_Name: {
      break;
    }
  }
  return false;
}

// static
bool CacheStorageStubDispatch::AcceptWithResponder(
    CacheStorage* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCacheStorage_Has_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorage::Has",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorage_Has_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorage_Has_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_cache_name{};
      int64_t p_trace_id{};
      CacheStorage_Has_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCacheName(&p_cache_name))
        success = false;
      p_trace_id = input_data_view.trace_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CacheStorage::Name_, 0, false);
        return false;
      }
      CacheStorage::HasCallback callback =
          CacheStorage_Has_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Has(
std::move(p_cache_name), 
std::move(p_trace_id), std::move(callback));
      return true;
    }
    case internal::kCacheStorage_Delete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorage::Delete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorage_Delete_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorage_Delete_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_cache_name{};
      int64_t p_trace_id{};
      CacheStorage_Delete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCacheName(&p_cache_name))
        success = false;
      p_trace_id = input_data_view.trace_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CacheStorage::Name_, 1, false);
        return false;
      }
      CacheStorage::DeleteCallback callback =
          CacheStorage_Delete_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Delete(
std::move(p_cache_name), 
std::move(p_trace_id), std::move(callback));
      return true;
    }
    case internal::kCacheStorage_Keys_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorage::Keys",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorage_Keys_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorage_Keys_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_trace_id{};
      CacheStorage_Keys_ParamsDataView input_data_view(params, &serialization_context);
      
      p_trace_id = input_data_view.trace_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CacheStorage::Name_, 2, false);
        return false;
      }
      CacheStorage::KeysCallback callback =
          CacheStorage_Keys_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Keys(
std::move(p_trace_id), std::move(callback));
      return true;
    }
    case internal::kCacheStorage_Match_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorage::Match",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorage_Match_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorage_Match_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::FetchAPIRequestPtr p_request{};
      MultiCacheQueryOptionsPtr p_match_options{};
      int64_t p_trace_id{};
      CacheStorage_Match_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!input_data_view.ReadMatchOptions(&p_match_options))
        success = false;
      p_trace_id = input_data_view.trace_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CacheStorage::Name_, 3, false);
        return false;
      }
      CacheStorage::MatchCallback callback =
          CacheStorage_Match_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Match(
std::move(p_request), 
std::move(p_match_options), 
std::move(p_trace_id), std::move(callback));
      return true;
    }
    case internal::kCacheStorage_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CacheStorage::Open",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CacheStorage_Open_Params_Data* params =
          reinterpret_cast<
              internal::CacheStorage_Open_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_cache_name{};
      int64_t p_trace_id{};
      CacheStorage_Open_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCacheName(&p_cache_name))
        success = false;
      p_trace_id = input_data_view.trace_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CacheStorage::Name_, 4, false);
        return false;
      }
      CacheStorage::OpenCallback callback =
          CacheStorage_Open_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Open(
std::move(p_cache_name), 
std::move(p_trace_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool CacheStorageRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CacheStorage RequestValidator");

  switch (message->header()->name) {
    case internal::kCacheStorage_Has_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Has_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Delete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Delete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Keys_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Keys_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Match_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Match_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Open_Params_Data>(
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

bool CacheStorageResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CacheStorage ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCacheStorage_Has_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Has_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Delete_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Delete_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Keys_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Keys_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Match_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Match_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCacheStorage_Open_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStorage_Open_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::CacheStorageVerboseError::DataView, ::blink::mojom::CacheStorageVerboseErrorPtr>::Read(
    ::blink::mojom::CacheStorageVerboseError::DataView input,
    ::blink::mojom::CacheStorageVerboseErrorPtr* output) {
  bool success = true;
  ::blink::mojom::CacheStorageVerboseErrorPtr result(::blink::mojom::CacheStorageVerboseError::New());
  
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadMessage(&result->message))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::CacheQueryOptions::DataView, ::blink::mojom::CacheQueryOptionsPtr>::Read(
    ::blink::mojom::CacheQueryOptions::DataView input,
    ::blink::mojom::CacheQueryOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::CacheQueryOptionsPtr result(::blink::mojom::CacheQueryOptions::New());
  
      result->ignore_search = input.ignore_search();
      result->ignore_method = input.ignore_method();
      result->ignore_vary = input.ignore_vary();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::MultiCacheQueryOptions::DataView, ::blink::mojom::MultiCacheQueryOptionsPtr>::Read(
    ::blink::mojom::MultiCacheQueryOptions::DataView input,
    ::blink::mojom::MultiCacheQueryOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::MultiCacheQueryOptionsPtr result(::blink::mojom::MultiCacheQueryOptions::New());
  
      if (!input.ReadQueryOptions(&result->query_options))
        success = false;
      if (!input.ReadCacheName(&result->cache_name))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::BatchOperation::DataView, ::blink::mojom::BatchOperationPtr>::Read(
    ::blink::mojom::BatchOperation::DataView input,
    ::blink::mojom::BatchOperationPtr* output) {
  bool success = true;
  ::blink::mojom::BatchOperationPtr result(::blink::mojom::BatchOperation::New());
  
      if (!input.ReadOperationType(&result->operation_type))
        success = false;
      if (!input.ReadRequest(&result->request))
        success = false;
      if (!input.ReadResponse(&result->response))
        success = false;
      if (!input.ReadMatchOptions(&result->match_options))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::OpenResult::DataView, ::blink::mojom::OpenResultPtr>::Read(
    ::blink::mojom::OpenResult::DataView input,
    ::blink::mojom::OpenResultPtr* output) {
  using UnionType = ::blink::mojom::OpenResult;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STATUS: {
      ::blink::mojom::CacheStorageError result_status;
      if (!input.ReadStatus(&result_status))
        return false;

      *output = UnionType::NewStatus(result_status);
      break;
    }
    case Tag::CACHE: {
      *output = UnionType::NewCache(
          input.TakeCache<::blink::mojom::CacheStorageCacheAssociatedPtrInfo>());
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::blink::mojom::MatchResult::DataView, ::blink::mojom::MatchResultPtr>::Read(
    ::blink::mojom::MatchResult::DataView input,
    ::blink::mojom::MatchResultPtr* output) {
  using UnionType = ::blink::mojom::MatchResult;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STATUS: {
      ::blink::mojom::CacheStorageError result_status;
      if (!input.ReadStatus(&result_status))
        return false;

      *output = UnionType::NewStatus(result_status);
      break;
    }
    case Tag::RESPONSE: {
      ::blink::mojom::FetchAPIResponsePtr result_response;
      if (!input.ReadResponse(&result_response))
        return false;

      *output = UnionType::NewResponse(
          std::move(result_response));
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::blink::mojom::MatchAllResult::DataView, ::blink::mojom::MatchAllResultPtr>::Read(
    ::blink::mojom::MatchAllResult::DataView input,
    ::blink::mojom::MatchAllResultPtr* output) {
  using UnionType = ::blink::mojom::MatchAllResult;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STATUS: {
      ::blink::mojom::CacheStorageError result_status;
      if (!input.ReadStatus(&result_status))
        return false;

      *output = UnionType::NewStatus(result_status);
      break;
    }
    case Tag::RESPONSES: {
      std::vector<::blink::mojom::FetchAPIResponsePtr> result_responses;
      if (!input.ReadResponses(&result_responses))
        return false;

      *output = UnionType::NewResponses(
          std::move(result_responses));
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::blink::mojom::CacheKeysResult::DataView, ::blink::mojom::CacheKeysResultPtr>::Read(
    ::blink::mojom::CacheKeysResult::DataView input,
    ::blink::mojom::CacheKeysResultPtr* output) {
  using UnionType = ::blink::mojom::CacheKeysResult;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STATUS: {
      ::blink::mojom::CacheStorageError result_status;
      if (!input.ReadStatus(&result_status))
        return false;

      *output = UnionType::NewStatus(result_status);
      break;
    }
    case Tag::KEYS: {
      std::vector<::blink::mojom::FetchAPIRequestPtr> result_keys;
      if (!input.ReadKeys(&result_keys))
        return false;

      *output = UnionType::NewKeys(
          std::move(result_keys));
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