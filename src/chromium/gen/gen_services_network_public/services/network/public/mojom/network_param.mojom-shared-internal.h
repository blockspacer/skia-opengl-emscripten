// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
using AuthChallengeInfo_Data = mojo::native::internal::NativeStruct_Data;
using AuthCredentials_Data = mojo::native::internal::NativeStruct_Data;
using CertVerifyResult_Data = mojo::native::internal::NativeStruct_Data;
using CTVerifyResult_Data = mojo::native::internal::NativeStruct_Data;
using HttpResponseHeaders_Data = mojo::native::internal::NativeStruct_Data;
class HttpVersion_Data;
using HostPortPair_Data = mojo::native::internal::NativeStruct_Data;
using X509Certificate_Data = mojo::native::internal::NativeStruct_Data;
using SSLCertRequestInfo_Data = mojo::native::internal::NativeStruct_Data;
using SSLInfo_Data = mojo::native::internal::NativeStruct_Data;

#pragma pack(push, 1)
class  HttpVersion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HttpVersion_Data));
      new (data()) HttpVersion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HttpVersion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HttpVersion_Data>(index_);
    }
    HttpVersion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint16_t major_value;
  uint16_t minor_value;
  uint8_t padfinal_[4];

 private:
  HttpVersion_Data();
  ~HttpVersion_Data() = delete;
};
static_assert(sizeof(HttpVersion_Data) == 16,
              "Bad sizeof(HttpVersion_Data)");
// Used by HttpVersion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HttpVersion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HttpVersion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HttpVersion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HttpVersion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HttpVersion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_SHARED_INTERNAL_H_