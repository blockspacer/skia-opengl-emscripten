// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
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
class MediaDeviceInfo_Data;
class VideoInputDeviceCapabilities_Data;
class AudioInputDeviceCapabilities_Data;

struct MediaDeviceType_Data {
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

struct FacingMode_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDeviceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDeviceInfo_Data));
      new (data()) MediaDeviceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDeviceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDeviceInfo_Data>(index_);
    }
    MediaDeviceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  mojo::internal::Pointer<mojo::internal::String_Data> group_id;

 private:
  MediaDeviceInfo_Data();
  ~MediaDeviceInfo_Data() = delete;
};
static_assert(sizeof(MediaDeviceInfo_Data) == 32,
              "Bad sizeof(MediaDeviceInfo_Data)");
// Used by MediaDeviceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaDeviceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaDeviceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaDeviceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MediaDeviceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaDeviceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) VideoInputDeviceCapabilities_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoInputDeviceCapabilities_Data));
      new (data()) VideoInputDeviceCapabilities_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoInputDeviceCapabilities_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoInputDeviceCapabilities_Data>(index_);
    }
    VideoInputDeviceCapabilities_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;
  mojo::internal::Pointer<mojo::internal::String_Data> group_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::VideoCaptureFormat_Data>>> formats;
  int32_t facing_mode;
  uint8_t padfinal_[4];

 private:
  VideoInputDeviceCapabilities_Data();
  ~VideoInputDeviceCapabilities_Data() = delete;
};
static_assert(sizeof(VideoInputDeviceCapabilities_Data) == 40,
              "Bad sizeof(VideoInputDeviceCapabilities_Data)");
// Used by VideoInputDeviceCapabilities::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoInputDeviceCapabilities_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoInputDeviceCapabilities_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoInputDeviceCapabilities_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoInputDeviceCapabilities_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoInputDeviceCapabilities_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AudioInputDeviceCapabilities_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputDeviceCapabilities_Data));
      new (data()) AudioInputDeviceCapabilities_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputDeviceCapabilities_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputDeviceCapabilities_Data>(index_);
    }
    AudioInputDeviceCapabilities_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;
  mojo::internal::Pointer<mojo::internal::String_Data> group_id;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> parameters;
  uint8_t is_valid : 1;
  uint8_t pad3_[3];
  int32_t channels;
  int32_t sample_rate;
  uint8_t pad5_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> latency;

 private:
  AudioInputDeviceCapabilities_Data();
  ~AudioInputDeviceCapabilities_Data() = delete;
};
static_assert(sizeof(AudioInputDeviceCapabilities_Data) == 56,
              "Bad sizeof(AudioInputDeviceCapabilities_Data)");
// Used by AudioInputDeviceCapabilities::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AudioInputDeviceCapabilities_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AudioInputDeviceCapabilities_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AudioInputDeviceCapabilities_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AudioInputDeviceCapabilities_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AudioInputDeviceCapabilities_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_INTERNAL_H_