// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media {
namespace mojom {
namespace internal {
class KeySystemCapability_Data;

#pragma pack(push, 1)
class  KeySystemCapability_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeySystemCapability_Data));
      new (data()) KeySystemCapability_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeySystemCapability_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeySystemCapability_Data>(index_);
    }
    KeySystemCapability_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> video_codecs;
  uint8_t supports_vp9_profile2 : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> encryption_schemes;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> hw_secure_video_codecs;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> hw_secure_encryption_schemes;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> session_types;

 private:
  KeySystemCapability_Data();
  ~KeySystemCapability_Data() = delete;
};
static_assert(sizeof(KeySystemCapability_Data) == 56,
              "Bad sizeof(KeySystemCapability_Data)");
// Used by KeySystemCapability::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct KeySystemCapability_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  KeySystemCapability_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~KeySystemCapability_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    KeySystemCapability_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    KeySystemCapability_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_INTERNAL_H_