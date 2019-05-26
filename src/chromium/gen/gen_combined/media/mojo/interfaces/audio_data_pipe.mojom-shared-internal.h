// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared-internal.h"
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
class ReadWriteAudioDataPipe_Data;
class ReadOnlyAudioDataPipe_Data;

#pragma pack(push, 1)
class  ReadWriteAudioDataPipe_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReadWriteAudioDataPipe_Data));
      new (data()) ReadWriteAudioDataPipe_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReadWriteAudioDataPipe_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReadWriteAudioDataPipe_Data>(index_);
    }
    ReadWriteAudioDataPipe_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnsafeSharedMemoryRegion_Data> shared_memory;
  mojo::internal::Handle_Data socket;
  uint8_t padfinal_[4];

 private:
  ReadWriteAudioDataPipe_Data();
  ~ReadWriteAudioDataPipe_Data() = delete;
};
static_assert(sizeof(ReadWriteAudioDataPipe_Data) == 24,
              "Bad sizeof(ReadWriteAudioDataPipe_Data)");
// Used by ReadWriteAudioDataPipe::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ReadWriteAudioDataPipe_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ReadWriteAudioDataPipe_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ReadWriteAudioDataPipe_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ReadWriteAudioDataPipe_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ReadWriteAudioDataPipe_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ReadOnlyAudioDataPipe_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReadOnlyAudioDataPipe_Data));
      new (data()) ReadOnlyAudioDataPipe_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReadOnlyAudioDataPipe_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReadOnlyAudioDataPipe_Data>(index_);
    }
    ReadOnlyAudioDataPipe_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlySharedMemoryRegion_Data> shared_memory;
  mojo::internal::Handle_Data socket;
  uint8_t padfinal_[4];

 private:
  ReadOnlyAudioDataPipe_Data();
  ~ReadOnlyAudioDataPipe_Data() = delete;
};
static_assert(sizeof(ReadOnlyAudioDataPipe_Data) == 24,
              "Bad sizeof(ReadOnlyAudioDataPipe_Data)");
// Used by ReadOnlyAudioDataPipe::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ReadOnlyAudioDataPipe_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ReadOnlyAudioDataPipe_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ReadOnlyAudioDataPipe_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ReadOnlyAudioDataPipe_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ReadOnlyAudioDataPipe_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_SHARED_INTERNAL_H_