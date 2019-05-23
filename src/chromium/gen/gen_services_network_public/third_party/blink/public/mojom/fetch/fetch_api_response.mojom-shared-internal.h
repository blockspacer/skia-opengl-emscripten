// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/network/public/mojom/fetch_api.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared-internal.h"
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
class FetchAPIResponse_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FetchAPIResponse_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FetchAPIResponse_Data));
      new (data()) FetchAPIResponse_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FetchAPIResponse_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FetchAPIResponse_Data>(index_);
    }
    FetchAPIResponse_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> url_list;
  uint16_t status_code;
  uint8_t pad1_[2];
  int32_t response_type;
  mojo::internal::Pointer<mojo::internal::String_Data> status_text;
  int32_t response_source;
  int32_t error;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> headers;
  mojo::internal::Pointer<::blink::mojom::internal::SerializedBlob_Data> blob;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> response_time;
  mojo::internal::Pointer<mojo::internal::String_Data> cache_storage_cache_name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> cors_exposed_header_names;
  mojo::internal::Pointer<::blink::mojom::internal::SerializedBlob_Data> side_data_blob;

 private:
  FetchAPIResponse_Data();
  ~FetchAPIResponse_Data() = delete;
};
static_assert(sizeof(FetchAPIResponse_Data) == 88,
              "Bad sizeof(FetchAPIResponse_Data)");
// Used by FetchAPIResponse::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FetchAPIResponse_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FetchAPIResponse_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FetchAPIResponse_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FetchAPIResponse_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FetchAPIResponse_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_SHARED_INTERNAL_H_