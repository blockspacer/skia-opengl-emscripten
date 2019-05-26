// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_INTERNAL_H_

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
class SSLConfig_Data;

struct SSLVersion_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
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
class  SSLConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SSLConfig_Data));
      new (data()) SSLConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SSLConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SSLConfig_Data>(index_);
    }
    SSLConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t rev_checking_enabled : 1;
  uint8_t rev_checking_required_local_anchors : 1;
  uint8_t sha1_local_anchors_enabled : 1;
  uint8_t symantec_enforcement_disabled : 1;
  uint8_t pad3_[3];
  int32_t version_min;
  int32_t version_max;
  uint8_t pad5_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint16_t>> disabled_cipher_suites;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> client_cert_pooling_policy;

 private:
  SSLConfig_Data();
  ~SSLConfig_Data() = delete;
};
static_assert(sizeof(SSLConfig_Data) == 40,
              "Bad sizeof(SSLConfig_Data)");
// Used by SSLConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SSLConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SSLConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SSLConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SSLConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SSLConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_INTERNAL_H_