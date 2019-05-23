// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
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
using MediaLogEvent_Data = mojo::native::internal::NativeStruct_Data;
class VideoTransformation_Data;
class EncryptionPattern_Data;
class EncryptionScheme_Data;
class VideoColorSpace_Data;
class MasteringMetadata_Data;
class HDRMetadata_Data;
class AudioDecoderConfig_Data;
class VideoDecoderConfig_Data;
using SubsampleEntry_Data = mojo::native::internal::NativeStruct_Data;
class DecryptConfig_Data;
class DecoderBuffer_Data;
class AudioBuffer_Data;
class VideoFrame_Data;
class EosVideoFrameData_Data;
class SharedBufferVideoFrameData_Data;
class MailboxVideoFrameData_Data;
class PipelineStatistics_Data;
class PredictionFeatures_Data;
class PredictionTargets_Data;
class VideoFrameData_Data;
using AudioCodec_Data =
    mojo::internal::NativeEnum_Data;
using BufferingState_Data =
    mojo::internal::NativeEnum_Data;
using ChannelLayout_Data =
    mojo::internal::NativeEnum_Data;
using ColorSpace_Data =
    mojo::internal::NativeEnum_Data;
using DecodeStatus_Data =
    mojo::internal::NativeEnum_Data;
using OutputDeviceStatus_Data =
    mojo::internal::NativeEnum_Data;
using PipelineStatus_Data =
    mojo::internal::NativeEnum_Data;
using SampleFormat_Data =
    mojo::internal::NativeEnum_Data;
using VideoCodec_Data =
    mojo::internal::NativeEnum_Data;
using VideoCodecProfile_Data =
    mojo::internal::NativeEnum_Data;
using VideoPixelFormat_Data =
    mojo::internal::NativeEnum_Data;
using VideoRotation_Data =
    mojo::internal::NativeEnum_Data;
using WaitingReason_Data =
    mojo::internal::NativeEnum_Data;
using WatchTimeKey_Data =
    mojo::internal::NativeEnum_Data;
using EncryptionMode_Data =
    mojo::internal::NativeEnum_Data;
using MediaContainerName_Data =
    mojo::internal::NativeEnum_Data;
using MediaStatusState_Data =
    mojo::internal::NativeEnum_Data;
using EncryptionScheme_CipherMode_Data =
    mojo::internal::NativeEnum_Data;
using VideoColorSpace_PrimaryID_Data =
    mojo::internal::NativeEnum_Data;
using VideoColorSpace_TransferID_Data =
    mojo::internal::NativeEnum_Data;
using VideoColorSpace_MatrixID_Data =
    mojo::internal::NativeEnum_Data;
using VideoColorSpace_RangeID_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)


class  VideoFrameData_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  VideoFrameData_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~VideoFrameData_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoFrameData_Data));
      new (data()) VideoFrameData_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) VideoFrameData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoFrameData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoFrameData_Data>(index_);
    }
    VideoFrameData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<VideoFrameData_Tag>(0);
    data.unknown = 0U;
  }

  enum class VideoFrameData_Tag : uint32_t {

    
    EOS_DATA,
    
    SHARED_BUFFER_DATA,
    
    MAILBOX_DATA,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::EosVideoFrameData_Data> f_eos_data;
    mojo::internal::Pointer<internal::SharedBufferVideoFrameData_Data> f_shared_buffer_data;
    mojo::internal::Pointer<internal::MailboxVideoFrameData_Data> f_mailbox_data;
    uint64_t unknown;
  };

  uint32_t size;
  VideoFrameData_Tag tag;
  Union_ data;
};
static_assert(sizeof(VideoFrameData_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(VideoFrameData_Data)");
class  VideoTransformation_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoTransformation_Data));
      new (data()) VideoTransformation_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoTransformation_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoTransformation_Data>(index_);
    }
    VideoTransformation_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t rotation;
  uint8_t mirrored : 1;
  uint8_t padfinal_[3];

 private:
  VideoTransformation_Data();
  ~VideoTransformation_Data() = delete;
};
static_assert(sizeof(VideoTransformation_Data) == 16,
              "Bad sizeof(VideoTransformation_Data)");
// Used by VideoTransformation::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoTransformation_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoTransformation_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoTransformation_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoTransformation_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoTransformation_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  EncryptionPattern_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EncryptionPattern_Data));
      new (data()) EncryptionPattern_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EncryptionPattern_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EncryptionPattern_Data>(index_);
    }
    EncryptionPattern_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t crypt_byte_block;
  uint32_t skip_byte_block;

 private:
  EncryptionPattern_Data();
  ~EncryptionPattern_Data() = delete;
};
static_assert(sizeof(EncryptionPattern_Data) == 16,
              "Bad sizeof(EncryptionPattern_Data)");
// Used by EncryptionPattern::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EncryptionPattern_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EncryptionPattern_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EncryptionPattern_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EncryptionPattern_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EncryptionPattern_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  EncryptionScheme_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EncryptionScheme_Data));
      new (data()) EncryptionScheme_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EncryptionScheme_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EncryptionScheme_Data>(index_);
    }
    EncryptionScheme_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t mode;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::EncryptionPattern_Data> pattern;

 private:
  EncryptionScheme_Data();
  ~EncryptionScheme_Data() = delete;
};
static_assert(sizeof(EncryptionScheme_Data) == 24,
              "Bad sizeof(EncryptionScheme_Data)");
// Used by EncryptionScheme::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EncryptionScheme_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EncryptionScheme_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EncryptionScheme_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EncryptionScheme_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EncryptionScheme_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoColorSpace_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoColorSpace_Data));
      new (data()) VideoColorSpace_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoColorSpace_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoColorSpace_Data>(index_);
    }
    VideoColorSpace_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t primaries;
  int32_t transfer;
  int32_t matrix;
  int32_t range;

 private:
  VideoColorSpace_Data();
  ~VideoColorSpace_Data() = delete;
};
static_assert(sizeof(VideoColorSpace_Data) == 24,
              "Bad sizeof(VideoColorSpace_Data)");
// Used by VideoColorSpace::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoColorSpace_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoColorSpace_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoColorSpace_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoColorSpace_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoColorSpace_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MasteringMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MasteringMetadata_Data));
      new (data()) MasteringMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MasteringMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MasteringMetadata_Data>(index_);
    }
    MasteringMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> primary_r;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> primary_g;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> primary_b;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> white_point;
  float luminance_max;
  float luminance_min;

 private:
  MasteringMetadata_Data();
  ~MasteringMetadata_Data() = delete;
};
static_assert(sizeof(MasteringMetadata_Data) == 48,
              "Bad sizeof(MasteringMetadata_Data)");
// Used by MasteringMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MasteringMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MasteringMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MasteringMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MasteringMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MasteringMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HDRMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HDRMetadata_Data));
      new (data()) HDRMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HDRMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HDRMetadata_Data>(index_);
    }
    HDRMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MasteringMetadata_Data> mastering_metadata;
  uint32_t max_content_light_level;
  uint32_t max_frame_average_light_level;

 private:
  HDRMetadata_Data();
  ~HDRMetadata_Data() = delete;
};
static_assert(sizeof(HDRMetadata_Data) == 24,
              "Bad sizeof(HDRMetadata_Data)");
// Used by HDRMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HDRMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HDRMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HDRMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HDRMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HDRMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  AudioDecoderConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoderConfig_Data));
      new (data()) AudioDecoderConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoderConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoderConfig_Data>(index_);
    }
    AudioDecoderConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t codec;
  int32_t sample_format;
  int32_t channel_layout;
  int32_t samples_per_second;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> extra_data;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> seek_preroll;
  int32_t codec_delay;
  uint8_t pad6_[4];
  mojo::internal::Pointer<internal::EncryptionScheme_Data> encryption_scheme;

 private:
  AudioDecoderConfig_Data();
  ~AudioDecoderConfig_Data() = delete;
};
static_assert(sizeof(AudioDecoderConfig_Data) == 56,
              "Bad sizeof(AudioDecoderConfig_Data)");
// Used by AudioDecoderConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AudioDecoderConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AudioDecoderConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AudioDecoderConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AudioDecoderConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AudioDecoderConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoDecoderConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoderConfig_Data));
      new (data()) VideoDecoderConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoderConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoderConfig_Data>(index_);
    }
    VideoDecoderConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t codec;
  int32_t profile;
  int32_t format;
  uint8_t pad2_[4];
  mojo::internal::Pointer<internal::VideoTransformation_Data> transformation;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> coded_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> visible_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> natural_size;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> extra_data;
  mojo::internal::Pointer<internal::EncryptionScheme_Data> encryption_scheme;
  mojo::internal::Pointer<internal::VideoColorSpace_Data> color_space_info;
  mojo::internal::Pointer<internal::HDRMetadata_Data> hdr_metadata;

 private:
  VideoDecoderConfig_Data();
  ~VideoDecoderConfig_Data() = delete;
};
static_assert(sizeof(VideoDecoderConfig_Data) == 88,
              "Bad sizeof(VideoDecoderConfig_Data)");
// Used by VideoDecoderConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoDecoderConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoDecoderConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoDecoderConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoDecoderConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoDecoderConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DecryptConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DecryptConfig_Data));
      new (data()) DecryptConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DecryptConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DecryptConfig_Data>(index_);
    }
    DecryptConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t encryption_mode;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> key_id;
  mojo::internal::Pointer<mojo::internal::String_Data> iv;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SubsampleEntry_Data>>> subsamples;
  mojo::internal::Pointer<internal::EncryptionPattern_Data> encryption_pattern;

 private:
  DecryptConfig_Data();
  ~DecryptConfig_Data() = delete;
};
static_assert(sizeof(DecryptConfig_Data) == 48,
              "Bad sizeof(DecryptConfig_Data)");
// Used by DecryptConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DecryptConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DecryptConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DecryptConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DecryptConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DecryptConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DecoderBuffer_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DecoderBuffer_Data));
      new (data()) DecoderBuffer_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DecoderBuffer_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DecoderBuffer_Data>(index_);
    }
    DecoderBuffer_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timestamp;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;
  uint8_t is_end_of_stream : 1;
  uint8_t is_key_frame : 1;
  uint8_t pad3_[3];
  uint32_t data_size;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> side_data;
  mojo::internal::Pointer<internal::DecryptConfig_Data> decrypt_config;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> front_discard;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> back_discard;

 private:
  DecoderBuffer_Data();
  ~DecoderBuffer_Data() = delete;
};
static_assert(sizeof(DecoderBuffer_Data) == 64,
              "Bad sizeof(DecoderBuffer_Data)");
// Used by DecoderBuffer::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DecoderBuffer_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DecoderBuffer_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DecoderBuffer_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DecoderBuffer_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DecoderBuffer_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  AudioBuffer_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioBuffer_Data));
      new (data()) AudioBuffer_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioBuffer_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioBuffer_Data>(index_);
    }
    AudioBuffer_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t sample_format;
  int32_t channel_layout;
  int32_t channel_count;
  int32_t sample_rate;
  int32_t frame_count;
  uint8_t end_of_stream : 1;
  uint8_t pad5_[3];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timestamp;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  AudioBuffer_Data();
  ~AudioBuffer_Data() = delete;
};
static_assert(sizeof(AudioBuffer_Data) == 48,
              "Bad sizeof(AudioBuffer_Data)");
// Used by AudioBuffer::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AudioBuffer_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AudioBuffer_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AudioBuffer_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AudioBuffer_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AudioBuffer_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoFrame_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoFrame_Data));
      new (data()) VideoFrame_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoFrame_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoFrame_Data>(index_);
    }
    VideoFrame_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t format;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> coded_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> visible_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> natural_size;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timestamp;
  internal::VideoFrameData_Data data;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> metadata;
  mojo::internal::Pointer<::gfx::mojom::internal::ColorSpace_Data> color_space;

 private:
  VideoFrame_Data();
  ~VideoFrame_Data() = delete;
};
static_assert(sizeof(VideoFrame_Data) == 80,
              "Bad sizeof(VideoFrame_Data)");
// Used by VideoFrame::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoFrame_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoFrame_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoFrame_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoFrame_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoFrame_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  EosVideoFrameData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EosVideoFrameData_Data));
      new (data()) EosVideoFrameData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EosVideoFrameData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EosVideoFrameData_Data>(index_);
    }
    EosVideoFrameData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EosVideoFrameData_Data();
  ~EosVideoFrameData_Data() = delete;
};
static_assert(sizeof(EosVideoFrameData_Data) == 8,
              "Bad sizeof(EosVideoFrameData_Data)");
// Used by EosVideoFrameData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EosVideoFrameData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EosVideoFrameData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EosVideoFrameData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EosVideoFrameData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EosVideoFrameData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SharedBufferVideoFrameData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedBufferVideoFrameData_Data));
      new (data()) SharedBufferVideoFrameData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedBufferVideoFrameData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedBufferVideoFrameData_Data>(index_);
    }
    SharedBufferVideoFrameData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data frame_data;
  int32_t y_stride;
  uint64_t frame_data_size;
  int32_t u_stride;
  int32_t v_stride;
  uint64_t y_offset;
  uint64_t u_offset;
  uint64_t v_offset;

 private:
  SharedBufferVideoFrameData_Data();
  ~SharedBufferVideoFrameData_Data() = delete;
};
static_assert(sizeof(SharedBufferVideoFrameData_Data) == 56,
              "Bad sizeof(SharedBufferVideoFrameData_Data)");
// Used by SharedBufferVideoFrameData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SharedBufferVideoFrameData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SharedBufferVideoFrameData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SharedBufferVideoFrameData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SharedBufferVideoFrameData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SharedBufferVideoFrameData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MailboxVideoFrameData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MailboxVideoFrameData_Data));
      new (data()) MailboxVideoFrameData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MailboxVideoFrameData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MailboxVideoFrameData_Data>(index_);
    }
    MailboxVideoFrameData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gpu::mojom::internal::MailboxHolder_Data>>> mailbox_holder;

 private:
  MailboxVideoFrameData_Data();
  ~MailboxVideoFrameData_Data() = delete;
};
static_assert(sizeof(MailboxVideoFrameData_Data) == 16,
              "Bad sizeof(MailboxVideoFrameData_Data)");
// Used by MailboxVideoFrameData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MailboxVideoFrameData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MailboxVideoFrameData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MailboxVideoFrameData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MailboxVideoFrameData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MailboxVideoFrameData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PipelineStatistics_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PipelineStatistics_Data));
      new (data()) PipelineStatistics_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PipelineStatistics_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PipelineStatistics_Data>(index_);
    }
    PipelineStatistics_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t audio_bytes_decoded;
  uint64_t video_bytes_decoded;
  uint32_t video_frames_decoded;
  uint32_t video_frames_dropped;
  int64_t audio_memory_usage;
  int64_t video_memory_usage;

 private:
  PipelineStatistics_Data();
  ~PipelineStatistics_Data() = delete;
};
static_assert(sizeof(PipelineStatistics_Data) == 48,
              "Bad sizeof(PipelineStatistics_Data)");
// Used by PipelineStatistics::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PipelineStatistics_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PipelineStatistics_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PipelineStatistics_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PipelineStatistics_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PipelineStatistics_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PredictionFeatures_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PredictionFeatures_Data));
      new (data()) PredictionFeatures_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PredictionFeatures_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PredictionFeatures_Data>(index_);
    }
    PredictionFeatures_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t profile;
  int32_t frames_per_sec;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> video_size;
  mojo::internal::Pointer<mojo::internal::String_Data> key_system;
  uint8_t use_hw_secure_codecs : 1;
  uint8_t padfinal_[7];

 private:
  PredictionFeatures_Data();
  ~PredictionFeatures_Data() = delete;
};
static_assert(sizeof(PredictionFeatures_Data) == 40,
              "Bad sizeof(PredictionFeatures_Data)");
// Used by PredictionFeatures::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PredictionFeatures_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PredictionFeatures_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PredictionFeatures_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PredictionFeatures_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PredictionFeatures_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PredictionTargets_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PredictionTargets_Data));
      new (data()) PredictionTargets_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PredictionTargets_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PredictionTargets_Data>(index_);
    }
    PredictionTargets_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t frames_decoded;
  uint32_t frames_dropped;
  uint32_t frames_power_efficient;
  uint8_t padfinal_[4];

 private:
  PredictionTargets_Data();
  ~PredictionTargets_Data() = delete;
};
static_assert(sizeof(PredictionTargets_Data) == 24,
              "Bad sizeof(PredictionTargets_Data)");
// Used by PredictionTargets::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PredictionTargets_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PredictionTargets_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PredictionTargets_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PredictionTargets_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PredictionTargets_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_SHARED_INTERNAL_H_