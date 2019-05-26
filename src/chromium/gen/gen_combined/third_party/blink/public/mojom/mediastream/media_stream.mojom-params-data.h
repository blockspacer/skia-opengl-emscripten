// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDeviceObserver_OnDeviceStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDeviceObserver_OnDeviceStopped_Params_Data));
      new (data()) MediaStreamDeviceObserver_OnDeviceStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDeviceObserver_OnDeviceStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDeviceObserver_OnDeviceStopped_Params_Data>(index_);
    }
    MediaStreamDeviceObserver_OnDeviceStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  mojo::internal::Pointer<internal::MediaStreamDevice_Data> device;

 private:
  MediaStreamDeviceObserver_OnDeviceStopped_Params_Data();
  ~MediaStreamDeviceObserver_OnDeviceStopped_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDeviceObserver_OnDeviceStopped_Params_Data) == 24,
              "Bad sizeof(MediaStreamDeviceObserver_OnDeviceStopped_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDeviceObserver_OnDeviceChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDeviceObserver_OnDeviceChanged_Params_Data));
      new (data()) MediaStreamDeviceObserver_OnDeviceChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDeviceObserver_OnDeviceChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDeviceObserver_OnDeviceChanged_Params_Data>(index_);
    }
    MediaStreamDeviceObserver_OnDeviceChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  mojo::internal::Pointer<internal::MediaStreamDevice_Data> old_device;
  mojo::internal::Pointer<internal::MediaStreamDevice_Data> new_device;

 private:
  MediaStreamDeviceObserver_OnDeviceChanged_Params_Data();
  ~MediaStreamDeviceObserver_OnDeviceChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDeviceObserver_OnDeviceChanged_Params_Data) == 32,
              "Bad sizeof(MediaStreamDeviceObserver_OnDeviceChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDispatcherHost_GenerateStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_GenerateStream_Params_Data));
      new (data()) MediaStreamDispatcherHost_GenerateStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_GenerateStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_GenerateStream_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_GenerateStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  uint8_t user_gesture : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<internal::StreamControls_Data> controls;

 private:
  MediaStreamDispatcherHost_GenerateStream_Params_Data();
  ~MediaStreamDispatcherHost_GenerateStream_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_GenerateStream_Params_Data) == 24,
              "Bad sizeof(MediaStreamDispatcherHost_GenerateStream_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data));
      new (data()) MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data>(index_);
    }
    MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaStreamDevice_Data>>> audio_devices;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaStreamDevice_Data>>> video_devices;

 private:
  MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data();
  ~MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data) == 40,
              "Bad sizeof(MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDispatcherHost_CancelRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_CancelRequest_Params_Data));
      new (data()) MediaStreamDispatcherHost_CancelRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_CancelRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_CancelRequest_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_CancelRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  uint8_t padfinal_[4];

 private:
  MediaStreamDispatcherHost_CancelRequest_Params_Data();
  ~MediaStreamDispatcherHost_CancelRequest_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_CancelRequest_Params_Data) == 16,
              "Bad sizeof(MediaStreamDispatcherHost_CancelRequest_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDispatcherHost_StopStreamDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_StopStreamDevice_Params_Data));
      new (data()) MediaStreamDispatcherHost_StopStreamDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_StopStreamDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_StopStreamDevice_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_StopStreamDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;
  int32_t session_id;
  uint8_t padfinal_[4];

 private:
  MediaStreamDispatcherHost_StopStreamDevice_Params_Data();
  ~MediaStreamDispatcherHost_StopStreamDevice_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_StopStreamDevice_Params_Data) == 24,
              "Bad sizeof(MediaStreamDispatcherHost_StopStreamDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDispatcherHost_OpenDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_OpenDevice_Params_Data));
      new (data()) MediaStreamDispatcherHost_OpenDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_OpenDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_OpenDevice_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_OpenDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  int32_t type;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;

 private:
  MediaStreamDispatcherHost_OpenDevice_Params_Data();
  ~MediaStreamDispatcherHost_OpenDevice_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_OpenDevice_Params_Data) == 24,
              "Bad sizeof(MediaStreamDispatcherHost_OpenDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data));
      new (data()) MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data>(index_);
    }
    MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  mojo::internal::Pointer<internal::MediaStreamDevice_Data> device;

 private:
  MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data();
  ~MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data) == 32,
              "Bad sizeof(MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDispatcherHost_CloseDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_CloseDevice_Params_Data));
      new (data()) MediaStreamDispatcherHost_CloseDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_CloseDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_CloseDevice_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_CloseDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> label;

 private:
  MediaStreamDispatcherHost_CloseDevice_Params_Data();
  ~MediaStreamDispatcherHost_CloseDevice_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_CloseDevice_Params_Data) == 16,
              "Bad sizeof(MediaStreamDispatcherHost_CloseDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data));
      new (data()) MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t session_id;
  int32_t type;
  uint8_t is_secure : 1;
  uint8_t padfinal_[7];

 private:
  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data();
  ~MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data) == 24,
              "Bad sizeof(MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamDispatcherHost_OnStreamStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_OnStreamStarted_Params_Data));
      new (data()) MediaStreamDispatcherHost_OnStreamStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_OnStreamStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_OnStreamStarted_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_OnStreamStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> label;

 private:
  MediaStreamDispatcherHost_OnStreamStarted_Params_Data();
  ~MediaStreamDispatcherHost_OnStreamStarted_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_OnStreamStarted_Params_Data) == 16,
              "Bad sizeof(MediaStreamDispatcherHost_OnStreamStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamTrackMetricsHost_AddTrack_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamTrackMetricsHost_AddTrack_Params_Data));
      new (data()) MediaStreamTrackMetricsHost_AddTrack_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamTrackMetricsHost_AddTrack_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamTrackMetricsHost_AddTrack_Params_Data>(index_);
    }
    MediaStreamTrackMetricsHost_AddTrack_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t id;
  uint8_t is_audio : 1;
  uint8_t is_remote : 1;
  uint8_t padfinal_[7];

 private:
  MediaStreamTrackMetricsHost_AddTrack_Params_Data();
  ~MediaStreamTrackMetricsHost_AddTrack_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamTrackMetricsHost_AddTrack_Params_Data) == 24,
              "Bad sizeof(MediaStreamTrackMetricsHost_AddTrack_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaStreamTrackMetricsHost_RemoveTrack_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamTrackMetricsHost_RemoveTrack_Params_Data));
      new (data()) MediaStreamTrackMetricsHost_RemoveTrack_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamTrackMetricsHost_RemoveTrack_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamTrackMetricsHost_RemoveTrack_Params_Data>(index_);
    }
    MediaStreamTrackMetricsHost_RemoveTrack_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t id;

 private:
  MediaStreamTrackMetricsHost_RemoveTrack_Params_Data();
  ~MediaStreamTrackMetricsHost_RemoveTrack_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamTrackMetricsHost_RemoveTrack_Params_Data) == 16,
              "Bad sizeof(MediaStreamTrackMetricsHost_RemoveTrack_Params_Data)");

}  // namespace internal
class MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView {
 public:
  MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView() {}

  MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView(
      internal::MediaStreamDeviceObserver_OnDeviceStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDeviceDataView(
      MediaStreamDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevice(UserType* output) {
    auto* pointer = data_->device.Get();
    return mojo::internal::Deserialize<::blink::mojom::MediaStreamDeviceDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDeviceObserver_OnDeviceStopped_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDeviceObserver_OnDeviceChanged_ParamsDataView {
 public:
  MediaStreamDeviceObserver_OnDeviceChanged_ParamsDataView() {}

  MediaStreamDeviceObserver_OnDeviceChanged_ParamsDataView(
      internal::MediaStreamDeviceObserver_OnDeviceChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOldDeviceDataView(
      MediaStreamDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOldDevice(UserType* output) {
    auto* pointer = data_->old_device.Get();
    return mojo::internal::Deserialize<::blink::mojom::MediaStreamDeviceDataView>(
        pointer, output, context_);
  }
  inline void GetNewDeviceDataView(
      MediaStreamDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewDevice(UserType* output) {
    auto* pointer = data_->new_device.Get();
    return mojo::internal::Deserialize<::blink::mojom::MediaStreamDeviceDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDeviceObserver_OnDeviceChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_GenerateStream_ParamsDataView {
 public:
  MediaStreamDispatcherHost_GenerateStream_ParamsDataView() {}

  MediaStreamDispatcherHost_GenerateStream_ParamsDataView(
      internal::MediaStreamDispatcherHost_GenerateStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
  inline void GetControlsDataView(
      StreamControlsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadControls(UserType* output) {
    auto* pointer = data_->controls.Get();
    return mojo::internal::Deserialize<::blink::mojom::StreamControlsDataView>(
        pointer, output, context_);
  }
  bool user_gesture() const {
    return data_->user_gesture;
  }
 private:
  internal::MediaStreamDispatcherHost_GenerateStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView {
 public:
  MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView() {}

  MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView(
      internal::MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::MediaStreamRequestResult>(
        data_value, output);
  }

  MediaStreamRequestResult result() const {
    return static_cast<MediaStreamRequestResult>(data_->result);
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAudioDevicesDataView(
      mojo::ArrayDataView<MediaStreamDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioDevices(UserType* output) {
    auto* pointer = data_->audio_devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::MediaStreamDeviceDataView>>(
        pointer, output, context_);
  }
  inline void GetVideoDevicesDataView(
      mojo::ArrayDataView<MediaStreamDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoDevices(UserType* output) {
    auto* pointer = data_->video_devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::MediaStreamDeviceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_CancelRequest_ParamsDataView {
 public:
  MediaStreamDispatcherHost_CancelRequest_ParamsDataView() {}

  MediaStreamDispatcherHost_CancelRequest_ParamsDataView(
      internal::MediaStreamDispatcherHost_CancelRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
 private:
  internal::MediaStreamDispatcherHost_CancelRequest_Params_Data* data_ = nullptr;
};

class MediaStreamDispatcherHost_StopStreamDevice_ParamsDataView {
 public:
  MediaStreamDispatcherHost_StopStreamDevice_ParamsDataView() {}

  MediaStreamDispatcherHost_StopStreamDevice_ParamsDataView(
      internal::MediaStreamDispatcherHost_StopStreamDevice_Params_Data* data,
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
  int32_t session_id() const {
    return data_->session_id;
  }
 private:
  internal::MediaStreamDispatcherHost_StopStreamDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_OpenDevice_ParamsDataView {
 public:
  MediaStreamDispatcherHost_OpenDevice_ParamsDataView() {}

  MediaStreamDispatcherHost_OpenDevice_ParamsDataView(
      internal::MediaStreamDispatcherHost_OpenDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::MediaStreamType>(
        data_value, output);
  }

  MediaStreamType type() const {
    return static_cast<MediaStreamType>(data_->type);
  }
 private:
  internal::MediaStreamDispatcherHost_OpenDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView {
 public:
  MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView() {}

  MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView(
      internal::MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDeviceDataView(
      MediaStreamDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevice(UserType* output) {
    auto* pointer = data_->device.Get();
    return mojo::internal::Deserialize<::blink::mojom::MediaStreamDeviceDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_CloseDevice_ParamsDataView {
 public:
  MediaStreamDispatcherHost_CloseDevice_ParamsDataView() {}

  MediaStreamDispatcherHost_CloseDevice_ParamsDataView(
      internal::MediaStreamDispatcherHost_CloseDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDispatcherHost_CloseDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_SetCapturingLinkSecured_ParamsDataView {
 public:
  MediaStreamDispatcherHost_SetCapturingLinkSecured_ParamsDataView() {}

  MediaStreamDispatcherHost_SetCapturingLinkSecured_ParamsDataView(
      internal::MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t session_id() const {
    return data_->session_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::MediaStreamType>(
        data_value, output);
  }

  MediaStreamType type() const {
    return static_cast<MediaStreamType>(data_->type);
  }
  bool is_secure() const {
    return data_->is_secure;
  }
 private:
  internal::MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data* data_ = nullptr;
};

class MediaStreamDispatcherHost_OnStreamStarted_ParamsDataView {
 public:
  MediaStreamDispatcherHost_OnStreamStarted_ParamsDataView() {}

  MediaStreamDispatcherHost_OnStreamStarted_ParamsDataView(
      internal::MediaStreamDispatcherHost_OnStreamStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDispatcherHost_OnStreamStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamTrackMetricsHost_AddTrack_ParamsDataView {
 public:
  MediaStreamTrackMetricsHost_AddTrack_ParamsDataView() {}

  MediaStreamTrackMetricsHost_AddTrack_ParamsDataView(
      internal::MediaStreamTrackMetricsHost_AddTrack_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
  bool is_audio() const {
    return data_->is_audio;
  }
  bool is_remote() const {
    return data_->is_remote;
  }
 private:
  internal::MediaStreamTrackMetricsHost_AddTrack_Params_Data* data_ = nullptr;
};

class MediaStreamTrackMetricsHost_RemoveTrack_ParamsDataView {
 public:
  MediaStreamTrackMetricsHost_RemoveTrack_ParamsDataView() {}

  MediaStreamTrackMetricsHost_RemoveTrack_ParamsDataView(
      internal::MediaStreamTrackMetricsHost_RemoveTrack_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
 private:
  internal::MediaStreamTrackMetricsHost_RemoveTrack_Params_Data* data_ = nullptr;
};


inline void MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView::GetDeviceDataView(
    MediaStreamDeviceDataView* output) {
  auto pointer = data_->device.Get();
  *output = MediaStreamDeviceDataView(pointer, context_);
}


inline void MediaStreamDeviceObserver_OnDeviceChanged_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDeviceObserver_OnDeviceChanged_ParamsDataView::GetOldDeviceDataView(
    MediaStreamDeviceDataView* output) {
  auto pointer = data_->old_device.Get();
  *output = MediaStreamDeviceDataView(pointer, context_);
}
inline void MediaStreamDeviceObserver_OnDeviceChanged_ParamsDataView::GetNewDeviceDataView(
    MediaStreamDeviceDataView* output) {
  auto pointer = data_->new_device.Get();
  *output = MediaStreamDeviceDataView(pointer, context_);
}


inline void MediaStreamDispatcherHost_GenerateStream_ParamsDataView::GetControlsDataView(
    StreamControlsDataView* output) {
  auto pointer = data_->controls.Get();
  *output = StreamControlsDataView(pointer, context_);
}


inline void MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView::GetAudioDevicesDataView(
    mojo::ArrayDataView<MediaStreamDeviceDataView>* output) {
  auto pointer = data_->audio_devices.Get();
  *output = mojo::ArrayDataView<MediaStreamDeviceDataView>(pointer, context_);
}
inline void MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView::GetVideoDevicesDataView(
    mojo::ArrayDataView<MediaStreamDeviceDataView>* output) {
  auto pointer = data_->video_devices.Get();
  *output = mojo::ArrayDataView<MediaStreamDeviceDataView>(pointer, context_);
}




inline void MediaStreamDispatcherHost_StopStreamDevice_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaStreamDispatcherHost_OpenDevice_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView::GetDeviceDataView(
    MediaStreamDeviceDataView* output) {
  auto pointer = data_->device.Get();
  *output = MediaStreamDeviceDataView(pointer, context_);
}


inline void MediaStreamDispatcherHost_CloseDevice_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void MediaStreamDispatcherHost_OnStreamStarted_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_PARAMS_DATA_H_