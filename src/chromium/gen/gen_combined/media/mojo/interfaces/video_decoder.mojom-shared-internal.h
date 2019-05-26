// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_log.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/color_space.mojom-shared-internal.h"
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
class SupportedVideoDecoderConfig_Data;
class CommandBufferId_Data;
using OverlayInfo_Data = mojo::native::internal::NativeStruct_Data;
using VideoDecoderImplementation_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  SupportedVideoDecoderConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SupportedVideoDecoderConfig_Data));
      new (data()) SupportedVideoDecoderConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SupportedVideoDecoderConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SupportedVideoDecoderConfig_Data>(index_);
    }
    SupportedVideoDecoderConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t profile_min;
  int32_t profile_max;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> coded_size_min;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> coded_size_max;
  uint8_t allow_encrypted : 1;
  uint8_t require_encrypted : 1;
  uint8_t padfinal_[7];

 private:
  SupportedVideoDecoderConfig_Data();
  ~SupportedVideoDecoderConfig_Data() = delete;
};
static_assert(sizeof(SupportedVideoDecoderConfig_Data) == 40,
              "Bad sizeof(SupportedVideoDecoderConfig_Data)");
// Used by SupportedVideoDecoderConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SupportedVideoDecoderConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SupportedVideoDecoderConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SupportedVideoDecoderConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SupportedVideoDecoderConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SupportedVideoDecoderConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CommandBufferId_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CommandBufferId_Data));
      new (data()) CommandBufferId_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CommandBufferId_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CommandBufferId_Data>(index_);
    }
    CommandBufferId_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> channel_token;
  int32_t route_id;
  uint8_t padfinal_[4];

 private:
  CommandBufferId_Data();
  ~CommandBufferId_Data() = delete;
};
static_assert(sizeof(CommandBufferId_Data) == 24,
              "Bad sizeof(CommandBufferId_Data)");
// Used by CommandBufferId::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CommandBufferId_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CommandBufferId_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CommandBufferId_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CommandBufferId_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CommandBufferId_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_INTERNAL_H_