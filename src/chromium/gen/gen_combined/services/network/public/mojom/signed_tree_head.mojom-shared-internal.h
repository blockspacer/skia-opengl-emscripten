// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/network/public/mojom/digitally_signed.mojom-shared-internal.h"
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
class SignedTreeHead_Data;

struct SignedTreeHeadVersion_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
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
class  SignedTreeHead_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SignedTreeHead_Data));
      new (data()) SignedTreeHead_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SignedTreeHead_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SignedTreeHead_Data>(index_);
    }
    SignedTreeHead_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t version;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> timestamp;
  uint64_t tree_size;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> sha256_root_hash;
  mojo::internal::Pointer<::network::mojom::internal::DigitallySigned_Data> signature;
  mojo::internal::Pointer<mojo::internal::String_Data> log_id;

 private:
  SignedTreeHead_Data();
  ~SignedTreeHead_Data() = delete;
};
static_assert(sizeof(SignedTreeHead_Data) == 56,
              "Bad sizeof(SignedTreeHead_Data)");
// Used by SignedTreeHead::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SignedTreeHead_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SignedTreeHead_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SignedTreeHead_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SignedTreeHead_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SignedTreeHead_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_SHARED_INTERNAL_H_