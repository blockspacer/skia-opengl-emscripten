// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-shared-internal.h"
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
class FetchEventPreloadHandle_Data;
class DispatchFetchEventParams_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FetchEventPreloadHandle_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FetchEventPreloadHandle_Data));
      new (data()) FetchEventPreloadHandle_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FetchEventPreloadHandle_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FetchEventPreloadHandle_Data>(index_);
    }
    FetchEventPreloadHandle_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data url_loader;
  mojo::internal::Handle_Data url_loader_client_request;
  uint8_t padfinal_[4];

 private:
  FetchEventPreloadHandle_Data();
  ~FetchEventPreloadHandle_Data() = delete;
};
static_assert(sizeof(FetchEventPreloadHandle_Data) == 24,
              "Bad sizeof(FetchEventPreloadHandle_Data)");
// Used by FetchEventPreloadHandle::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FetchEventPreloadHandle_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FetchEventPreloadHandle_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FetchEventPreloadHandle_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FetchEventPreloadHandle_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FetchEventPreloadHandle_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DispatchFetchEventParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DispatchFetchEventParams_Data));
      new (data()) DispatchFetchEventParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DispatchFetchEventParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DispatchFetchEventParams_Data>(index_);
    }
    DispatchFetchEventParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<mojo::internal::String_Data> client_id;
  mojo::internal::Pointer<internal::FetchEventPreloadHandle_Data> preload_handle;

 private:
  DispatchFetchEventParams_Data();
  ~DispatchFetchEventParams_Data() = delete;
};
static_assert(sizeof(DispatchFetchEventParams_Data) == 32,
              "Bad sizeof(DispatchFetchEventParams_Data)");
// Used by DispatchFetchEventParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DispatchFetchEventParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DispatchFetchEventParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DispatchFetchEventParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DispatchFetchEventParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DispatchFetchEventParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_SHARED_INTERNAL_H_