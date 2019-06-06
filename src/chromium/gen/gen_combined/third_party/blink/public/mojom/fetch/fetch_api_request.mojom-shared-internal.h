// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/fetch_api.mojom-shared-internal.h"
#include "services/network/public/mojom/request_context_frame_type.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/referrer.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class FetchAPIRequestHeaders_Data;
class FetchAPIRequest_Data;

struct RequestContextType_Data {
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
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
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

struct FetchCacheMode_Data {
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

struct FetchImportanceMode_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FetchAPIRequestHeaders_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FetchAPIRequestHeaders_Data));
      new (data()) FetchAPIRequestHeaders_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FetchAPIRequestHeaders_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FetchAPIRequestHeaders_Data>(index_);
    }
    FetchAPIRequestHeaders_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> headers;

 private:
  FetchAPIRequestHeaders_Data();
  ~FetchAPIRequestHeaders_Data() = delete;
};
static_assert(sizeof(FetchAPIRequestHeaders_Data) == 16,
              "Bad sizeof(FetchAPIRequestHeaders_Data)");
// Used by FetchAPIRequestHeaders::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FetchAPIRequestHeaders_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FetchAPIRequestHeaders_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FetchAPIRequestHeaders_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FetchAPIRequestHeaders_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FetchAPIRequestHeaders_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FetchAPIRequest_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FetchAPIRequest_Data));
      new (data()) FetchAPIRequest_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FetchAPIRequest_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FetchAPIRequest_Data>(index_);
    }
    FetchAPIRequest_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t mode;
  uint8_t is_main_resource_load : 1;
  uint8_t keepalive : 1;
  uint8_t is_reload : 1;
  uint8_t is_history_navigation : 1;
  uint8_t pad4_[3];
  int32_t request_context_type;
  int32_t frame_type;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> method;
  mojo::internal::Pointer<internal::FetchAPIRequestHeaders_Data> headers;
  mojo::internal::Pointer<::blink::mojom::internal::SerializedBlob_Data> blob;
  mojo::internal::Pointer<::network::mojom::internal::URLRequestBody_Data> body;
  mojo::internal::Pointer<::blink::mojom::internal::Referrer_Data> referrer;
  int32_t credentials_mode;
  int32_t cache_mode;
  int32_t redirect_mode;
  int32_t priority;
  mojo::internal::Pointer<mojo::internal::String_Data> integrity;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> fetch_window_id;

 private:
  FetchAPIRequest_Data();
  ~FetchAPIRequest_Data() = delete;
};
static_assert(sizeof(FetchAPIRequest_Data) == 104,
              "Bad sizeof(FetchAPIRequest_Data)");
// Used by FetchAPIRequest::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FetchAPIRequest_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FetchAPIRequest_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FetchAPIRequest_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FetchAPIRequest_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FetchAPIRequest_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_SHARED_INTERNAL_H_
