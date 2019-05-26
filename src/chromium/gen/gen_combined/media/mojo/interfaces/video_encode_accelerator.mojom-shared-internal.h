// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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
class VideoBitrateAllocation_Data;
class VideoEncodeAcceleratorConfig_Data;
class Vp8Metadata_Data;
class BitstreamBufferMetadata_Data;

struct VideoEncodeAcceleratorConfig_ContentType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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

struct VideoEncodeAccelerator_Error_Data {
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
class  VideoBitrateAllocation_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoBitrateAllocation_Data));
      new (data()) VideoBitrateAllocation_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoBitrateAllocation_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoBitrateAllocation_Data>(index_);
    }
    VideoBitrateAllocation_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> bitrates;

 private:
  VideoBitrateAllocation_Data();
  ~VideoBitrateAllocation_Data() = delete;
};
static_assert(sizeof(VideoBitrateAllocation_Data) == 16,
              "Bad sizeof(VideoBitrateAllocation_Data)");
// Used by VideoBitrateAllocation::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoBitrateAllocation_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoBitrateAllocation_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoBitrateAllocation_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoBitrateAllocation_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoBitrateAllocation_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoEncodeAcceleratorConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAcceleratorConfig_Data));
      new (data()) VideoEncodeAcceleratorConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAcceleratorConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAcceleratorConfig_Data>(index_);
    }
    VideoEncodeAcceleratorConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t input_format;
  int32_t output_profile;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> input_visible_size;
  uint32_t initial_bitrate;
  uint32_t initial_framerate;
  uint8_t has_initial_framerate : 1;
  uint8_t has_gop_length : 1;
  uint8_t has_h264_output_level : 1;
  uint8_t h264_output_level;
  uint8_t pad8_[2];
  uint32_t gop_length;
  int32_t content_type;
  uint8_t padfinal_[4];

 private:
  VideoEncodeAcceleratorConfig_Data();
  ~VideoEncodeAcceleratorConfig_Data() = delete;
};
static_assert(sizeof(VideoEncodeAcceleratorConfig_Data) == 48,
              "Bad sizeof(VideoEncodeAcceleratorConfig_Data)");
// Used by VideoEncodeAcceleratorConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoEncodeAcceleratorConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoEncodeAcceleratorConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoEncodeAcceleratorConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoEncodeAcceleratorConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoEncodeAcceleratorConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Vp8Metadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Vp8Metadata_Data));
      new (data()) Vp8Metadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Vp8Metadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Vp8Metadata_Data>(index_);
    }
    Vp8Metadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t non_reference : 1;
  uint8_t layer_sync : 1;
  uint8_t temporal_idx;
  uint8_t padfinal_[6];

 private:
  Vp8Metadata_Data();
  ~Vp8Metadata_Data() = delete;
};
static_assert(sizeof(Vp8Metadata_Data) == 16,
              "Bad sizeof(Vp8Metadata_Data)");
// Used by Vp8Metadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Vp8Metadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Vp8Metadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Vp8Metadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Vp8Metadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Vp8Metadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  BitstreamBufferMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BitstreamBufferMetadata_Data));
      new (data()) BitstreamBufferMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BitstreamBufferMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BitstreamBufferMetadata_Data>(index_);
    }
    BitstreamBufferMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t payload_size_bytes;
  uint8_t key_frame : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timestamp;
  mojo::internal::Pointer<internal::Vp8Metadata_Data> vp8;

 private:
  BitstreamBufferMetadata_Data();
  ~BitstreamBufferMetadata_Data() = delete;
};
static_assert(sizeof(BitstreamBufferMetadata_Data) == 32,
              "Bad sizeof(BitstreamBufferMetadata_Data)");
// Used by BitstreamBufferMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BitstreamBufferMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BitstreamBufferMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BitstreamBufferMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BitstreamBufferMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BitstreamBufferMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_INTERNAL_H_