// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/network/public/mojom/cors.mojom-shared-internal.h"
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-shared-internal.h"
#include "services/network/public/mojom/data_pipe_getter.mojom-shared-internal.h"
#include "services/network/public/mojom/fetch_api.mojom-shared-internal.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
using URLResponseHead_Data = mojo::native::internal::NativeStruct_Data;
using URLRequestRedirectInfo_Data = mojo::native::internal::NativeStruct_Data;
using CorsErrorStatus_Data = mojo::native::internal::NativeStruct_Data;
using URLLoaderCompletionStatus_Data = mojo::native::internal::NativeStruct_Data;
class URLRequest_Data;
class URLRequestBody_Data;
class DataElement_Data;
class URLLoaderClientEndpoints_Data;

struct RequestPriority_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct URLRequestReferrerPolicy_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct DataElementType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case -1:
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  URLRequest_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLRequest_Data));
      new (data()) URLRequest_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLRequest_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLRequest_Data>(index_);
    }
    URLRequest_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> method;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> site_for_cookies;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> top_frame_origin;
  uint8_t attach_same_site_cookies : 1;
  uint8_t update_first_party_url_on_redirect : 1;
  uint8_t is_prerendering : 1;
  uint8_t allow_credentials : 1;
  uint8_t should_reset_appcache : 1;
  uint8_t is_external_request : 1;
  uint8_t originated_from_service_worker : 1;
  uint8_t skip_service_worker : 1;
  uint8_t corb_detachable : 1;
  uint8_t corb_excluded : 1;
  uint8_t keepalive : 1;
  uint8_t has_user_gesture : 1;
  uint8_t enable_load_timing : 1;
  uint8_t enable_upload_progress : 1;
  uint8_t do_not_prompt_for_login : 1;
  uint8_t is_main_frame : 1;
  uint8_t allow_download : 1;
  uint8_t report_raw_headers : 1;
  uint8_t initiated_in_secure_context : 1;
  uint8_t upgrade_if_insecure : 1;
  uint8_t is_revalidating : 1;
  uint8_t pad24_[1];
  int32_t referrer_policy;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> request_initiator;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> referrer;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> headers;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> cors_exempt_headers;
  int32_t load_flags;
  int32_t plugin_child_id;
  int32_t resource_type;
  int32_t priority;
  int32_t appcache_host_id;
  int32_t cors_preflight_policy;
  int32_t fetch_request_mode;
  int32_t fetch_credentials_mode;
  int32_t fetch_redirect_mode;
  int32_t fetch_request_context_type;
  mojo::internal::Pointer<mojo::internal::String_Data> fetch_integrity;
  mojo::internal::Pointer<internal::URLRequestBody_Data> request_body;
  int32_t render_frame_id;
  int32_t transition_type;
  int32_t previews_state;
  uint8_t pad44_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> throttling_profile_id;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> custom_proxy_pre_cache_headers;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> custom_proxy_post_cache_headers;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> fetch_window_id;
  mojo::internal::Pointer<mojo::internal::String_Data> devtools_request_id;

 private:
  URLRequest_Data();
  ~URLRequest_Data() = delete;
};
static_assert(sizeof(URLRequest_Data) == 192,
              "Bad sizeof(URLRequest_Data)");
// Used by URLRequest::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct URLRequest_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  URLRequest_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~URLRequest_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    URLRequest_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    URLRequest_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  URLRequestBody_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLRequestBody_Data));
      new (data()) URLRequestBody_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLRequestBody_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLRequestBody_Data>(index_);
    }
    URLRequestBody_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::DataElement_Data>>> elements;
  uint64_t identifier;
  uint8_t contains_sensitive_info : 1;
  uint8_t padfinal_[7];

 private:
  URLRequestBody_Data();
  ~URLRequestBody_Data() = delete;
};
static_assert(sizeof(URLRequestBody_Data) == 32,
              "Bad sizeof(URLRequestBody_Data)");
// Used by URLRequestBody::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct URLRequestBody_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  URLRequestBody_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~URLRequestBody_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    URLRequestBody_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    URLRequestBody_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DataElement_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataElement_Data));
      new (data()) DataElement_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataElement_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataElement_Data>(index_);
    }
    DataElement_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> buf;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file;
  mojo::internal::Pointer<mojo::internal::String_Data> blob_uuid;
  mojo::internal::Interface_Data data_pipe_getter;
  mojo::internal::Interface_Data chunked_data_pipe_getter;
  uint64_t offset;
  uint64_t length;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expected_modification_time;

 private:
  DataElement_Data();
  ~DataElement_Data() = delete;
};
static_assert(sizeof(DataElement_Data) == 88,
              "Bad sizeof(DataElement_Data)");
// Used by DataElement::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataElement_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataElement_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataElement_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DataElement_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataElement_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  URLLoaderClientEndpoints_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClientEndpoints_Data));
      new (data()) URLLoaderClientEndpoints_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClientEndpoints_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClientEndpoints_Data>(index_);
    }
    URLLoaderClientEndpoints_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data url_loader;
  mojo::internal::Handle_Data url_loader_client;
  uint8_t padfinal_[4];

 private:
  URLLoaderClientEndpoints_Data();
  ~URLLoaderClientEndpoints_Data() = delete;
};
static_assert(sizeof(URLLoaderClientEndpoints_Data) == 24,
              "Bad sizeof(URLLoaderClientEndpoints_Data)");
// Used by URLLoaderClientEndpoints::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct URLLoaderClientEndpoints_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  URLLoaderClientEndpoints_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~URLLoaderClientEndpoints_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    URLLoaderClientEndpoints_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    URLLoaderClientEndpoints_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_INTERNAL_H_