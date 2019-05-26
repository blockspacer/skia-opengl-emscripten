// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
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
class PlaybackProperties_Data;
class SecondaryPlaybackProperties_Data;

#pragma pack(push, 1)
class  PlaybackProperties_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlaybackProperties_Data));
      new (data()) PlaybackProperties_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlaybackProperties_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlaybackProperties_Data>(index_);
    }
    PlaybackProperties_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_audio : 1;
  uint8_t has_video : 1;
  uint8_t is_background : 1;
  uint8_t is_muted : 1;
  uint8_t is_mse : 1;
  uint8_t is_eme : 1;
  uint8_t is_embedded_media_experience : 1;
  uint8_t padfinal_[7];

 private:
  PlaybackProperties_Data();
  ~PlaybackProperties_Data() = delete;
};
static_assert(sizeof(PlaybackProperties_Data) == 16,
              "Bad sizeof(PlaybackProperties_Data)");
// Used by PlaybackProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PlaybackProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PlaybackProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PlaybackProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PlaybackProperties_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PlaybackProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SecondaryPlaybackProperties_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SecondaryPlaybackProperties_Data));
      new (data()) SecondaryPlaybackProperties_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SecondaryPlaybackProperties_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SecondaryPlaybackProperties_Data>(index_);
    }
    SecondaryPlaybackProperties_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t audio_codec;
  int32_t video_codec;
  mojo::internal::Pointer<mojo::internal::String_Data> audio_decoder_name;
  mojo::internal::Pointer<mojo::internal::String_Data> video_decoder_name;
  int32_t audio_encryption_scheme;
  int32_t video_encryption_scheme;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> natural_size;

 private:
  SecondaryPlaybackProperties_Data();
  ~SecondaryPlaybackProperties_Data() = delete;
};
static_assert(sizeof(SecondaryPlaybackProperties_Data) == 48,
              "Bad sizeof(SecondaryPlaybackProperties_Data)");
// Used by SecondaryPlaybackProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SecondaryPlaybackProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SecondaryPlaybackProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SecondaryPlaybackProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SecondaryPlaybackProperties_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SecondaryPlaybackProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_INTERNAL_H_