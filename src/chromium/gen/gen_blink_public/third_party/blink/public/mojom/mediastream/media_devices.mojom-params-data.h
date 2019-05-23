// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_EnumerateDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_EnumerateDevices_Params_Data));
      new (data()) MediaDevicesDispatcherHost_EnumerateDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_EnumerateDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_EnumerateDevices_Params_Data>(index_);
    }
    MediaDevicesDispatcherHost_EnumerateDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t request_audio_input : 1;
  uint8_t request_video_input : 1;
  uint8_t request_audio_output : 1;
  uint8_t request_video_input_capabilities : 1;
  uint8_t request_audio_input_capabilities : 1;
  uint8_t padfinal_[7];

 private:
  MediaDevicesDispatcherHost_EnumerateDevices_Params_Data();
  ~MediaDevicesDispatcherHost_EnumerateDevices_Params_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_EnumerateDevices_Params_Data) == 16,
              "Bad sizeof(MediaDevicesDispatcherHost_EnumerateDevices_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data));
      new (data()) MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data>(index_);
    }
    MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaDeviceInfo_Data>>>>> enumeration;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::VideoInputDeviceCapabilities_Data>>> video_input_device_capabilities;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AudioInputDeviceCapabilities_Data>>> audio_input_device_capabilities;

 private:
  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data();
  ~MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data) == 32,
              "Bad sizeof(MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data));
      new (data()) MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data>(index_);
    }
    MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data();
  ~MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data) == 8,
              "Bad sizeof(MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data));
      new (data()) MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data>(index_);
    }
    MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::VideoInputDeviceCapabilities_Data>>> video_input_device_capabilities;

 private:
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data();
  ~MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data) == 16,
              "Bad sizeof(MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data));
      new (data()) MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data>(index_);
    }
    MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;

 private:
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data();
  ~MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data) == 16,
              "Bad sizeof(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data));
      new (data()) MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data>(index_);
    }
    MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::VideoCaptureFormat_Data>>> formats;

 private:
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data();
  ~MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data) == 16,
              "Bad sizeof(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data));
      new (data()) MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data>(index_);
    }
    MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;

 private:
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data();
  ~MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data) == 16,
              "Bad sizeof(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data));
      new (data()) MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data>(index_);
    }
    MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::VideoCaptureFormat_Data>>> formats;

 private:
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data();
  ~MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data) == 16,
              "Bad sizeof(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data));
      new (data()) MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data>(index_);
    }
    MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data();
  ~MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data) == 8,
              "Bad sizeof(MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data));
      new (data()) MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data>(index_);
    }
    MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AudioInputDeviceCapabilities_Data>>> audio_input_device_capabilities;

 private:
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data();
  ~MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data) == 16,
              "Bad sizeof(MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data));
      new (data()) MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data>(index_);
    }
    MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t subscribe_audio_input : 1;
  uint8_t subscribe_video_input : 1;
  uint8_t subscribe_audio_output : 1;
  uint8_t pad2_[3];
  mojo::internal::Interface_Data listener;
  uint8_t padfinal_[4];

 private:
  MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data();
  ~MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data() = delete;
};
static_assert(sizeof(MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data) == 24,
              "Bad sizeof(MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaDevicesListener_OnDevicesChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDevicesListener_OnDevicesChanged_Params_Data));
      new (data()) MediaDevicesListener_OnDevicesChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDevicesListener_OnDevicesChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDevicesListener_OnDevicesChanged_Params_Data>(index_);
    }
    MediaDevicesListener_OnDevicesChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaDeviceInfo_Data>>> device_infos;

 private:
  MediaDevicesListener_OnDevicesChanged_Params_Data();
  ~MediaDevicesListener_OnDevicesChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaDevicesListener_OnDevicesChanged_Params_Data) == 24,
              "Bad sizeof(MediaDevicesListener_OnDevicesChanged_Params_Data)");

}  // namespace internal
class MediaDevicesDispatcherHost_EnumerateDevices_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_EnumerateDevices_ParamsDataView() {}

  MediaDevicesDispatcherHost_EnumerateDevices_ParamsDataView(
      internal::MediaDevicesDispatcherHost_EnumerateDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool request_audio_input() const {
    return data_->request_audio_input;
  }
  bool request_video_input() const {
    return data_->request_video_input;
  }
  bool request_audio_output() const {
    return data_->request_audio_output;
  }
  bool request_video_input_capabilities() const {
    return data_->request_video_input_capabilities;
  }
  bool request_audio_input_capabilities() const {
    return data_->request_audio_input_capabilities;
  }
 private:
  internal::MediaDevicesDispatcherHost_EnumerateDevices_Params_Data* data_ = nullptr;
};

class MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView {
 public:
  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView() {}

  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView(
      internal::MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEnumerationDataView(
      mojo::ArrayDataView<mojo::ArrayDataView<MediaDeviceInfoDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEnumeration(UserType* output) {
    auto* pointer = data_->enumeration.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<::blink::mojom::MediaDeviceInfoDataView>>>(
        pointer, output, context_);
  }
  inline void GetVideoInputDeviceCapabilitiesDataView(
      mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoInputDeviceCapabilities(UserType* output) {
    auto* pointer = data_->video_input_device_capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::VideoInputDeviceCapabilitiesDataView>>(
        pointer, output, context_);
  }
  inline void GetAudioInputDeviceCapabilitiesDataView(
      mojo::ArrayDataView<AudioInputDeviceCapabilitiesDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioInputDeviceCapabilities(UserType* output) {
    auto* pointer = data_->audio_input_device_capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::AudioInputDeviceCapabilitiesDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetVideoInputCapabilities_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ParamsDataView() {}

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ParamsDataView(
      internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data* data_ = nullptr;
};

class MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParamsDataView() {}

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParamsDataView(
      internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVideoInputDeviceCapabilitiesDataView(
      mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoInputDeviceCapabilities(UserType* output) {
    auto* pointer = data_->video_input_device_capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::VideoInputDeviceCapabilitiesDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ParamsDataView() {}

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParamsDataView() {}

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormatsDataView(
      mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormats(UserType* output) {
    auto* pointer = data_->formats.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ParamsDataView() {}

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParamsDataView() {}

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormatsDataView(
      mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormats(UserType* output) {
    auto* pointer = data_->formats.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAudioInputCapabilities_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ParamsDataView() {}

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data* data_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParamsDataView() {}

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAudioInputDeviceCapabilitiesDataView(
      mojo::ArrayDataView<AudioInputDeviceCapabilitiesDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioInputDeviceCapabilities(UserType* output) {
    auto* pointer = data_->audio_input_device_capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::AudioInputDeviceCapabilitiesDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_AddMediaDevicesListener_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_AddMediaDevicesListener_ParamsDataView() {}

  MediaDevicesDispatcherHost_AddMediaDevicesListener_ParamsDataView(
      internal::MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool subscribe_audio_input() const {
    return data_->subscribe_audio_input;
  }
  bool subscribe_video_input() const {
    return data_->subscribe_video_input;
  }
  bool subscribe_audio_output() const {
    return data_->subscribe_audio_output;
  }
  template <typename UserType>
  UserType TakeListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::MediaDevicesListenerPtrDataView>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesListener_OnDevicesChanged_ParamsDataView {
 public:
  MediaDevicesListener_OnDevicesChanged_ParamsDataView() {}

  MediaDevicesListener_OnDevicesChanged_ParamsDataView(
      internal::MediaDevicesListener_OnDevicesChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::MediaDeviceType>(
        data_value, output);
  }

  MediaDeviceType type() const {
    return static_cast<MediaDeviceType>(data_->type);
  }
  inline void GetDeviceInfosDataView(
      mojo::ArrayDataView<MediaDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceInfos(UserType* output) {
    auto* pointer = data_->device_infos.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::MediaDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesListener_OnDevicesChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView::GetEnumerationDataView(
    mojo::ArrayDataView<mojo::ArrayDataView<MediaDeviceInfoDataView>>* output) {
  auto pointer = data_->enumeration.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<MediaDeviceInfoDataView>>(pointer, context_);
}
inline void MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView::GetVideoInputDeviceCapabilitiesDataView(
    mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>* output) {
  auto pointer = data_->video_input_device_capabilities.Get();
  *output = mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>(pointer, context_);
}
inline void MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView::GetAudioInputDeviceCapabilitiesDataView(
    mojo::ArrayDataView<AudioInputDeviceCapabilitiesDataView>* output) {
  auto pointer = data_->audio_input_device_capabilities.Get();
  *output = mojo::ArrayDataView<AudioInputDeviceCapabilitiesDataView>(pointer, context_);
}




inline void MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParamsDataView::GetVideoInputDeviceCapabilitiesDataView(
    mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>* output) {
  auto pointer = data_->video_input_device_capabilities.Get();
  *output = mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>(pointer, context_);
}


inline void MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParamsDataView::GetFormatsDataView(
    mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output) {
  auto pointer = data_->formats.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>(pointer, context_);
}


inline void MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParamsDataView::GetFormatsDataView(
    mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output) {
  auto pointer = data_->formats.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>(pointer, context_);
}




inline void MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParamsDataView::GetAudioInputDeviceCapabilitiesDataView(
    mojo::ArrayDataView<AudioInputDeviceCapabilitiesDataView>* output) {
  auto pointer = data_->audio_input_device_capabilities.Get();
  *output = mojo::ArrayDataView<AudioInputDeviceCapabilitiesDataView>(pointer, context_);
}




inline void MediaDevicesListener_OnDevicesChanged_ParamsDataView::GetDeviceInfosDataView(
    mojo::ArrayDataView<MediaDeviceInfoDataView>* output) {
  auto pointer = data_->device_infos.Get();
  *output = mojo::ArrayDataView<MediaDeviceInfoDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_PARAMS_DATA_H_