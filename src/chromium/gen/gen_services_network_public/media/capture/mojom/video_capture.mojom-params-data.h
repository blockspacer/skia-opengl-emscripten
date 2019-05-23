// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_PARAMS_DATA_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_PARAMS_DATA_H_

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
namespace media {
namespace mojom {
namespace internal {
class  VideoCaptureObserver_OnStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureObserver_OnStateChanged_Params_Data));
      new (data()) VideoCaptureObserver_OnStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureObserver_OnStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureObserver_OnStateChanged_Params_Data>(index_);
    }
    VideoCaptureObserver_OnStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  VideoCaptureObserver_OnStateChanged_Params_Data();
  ~VideoCaptureObserver_OnStateChanged_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureObserver_OnStateChanged_Params_Data) == 16,
              "Bad sizeof(VideoCaptureObserver_OnStateChanged_Params_Data)");
class  VideoCaptureObserver_OnNewBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureObserver_OnNewBuffer_Params_Data));
      new (data()) VideoCaptureObserver_OnNewBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureObserver_OnNewBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureObserver_OnNewBuffer_Params_Data>(index_);
    }
    VideoCaptureObserver_OnNewBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  uint8_t pad0_[4];
  ::media::mojom::internal::VideoBufferHandle_Data buffer_handle;

 private:
  VideoCaptureObserver_OnNewBuffer_Params_Data();
  ~VideoCaptureObserver_OnNewBuffer_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureObserver_OnNewBuffer_Params_Data) == 32,
              "Bad sizeof(VideoCaptureObserver_OnNewBuffer_Params_Data)");
class  VideoCaptureObserver_OnBufferReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureObserver_OnBufferReady_Params_Data));
      new (data()) VideoCaptureObserver_OnBufferReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureObserver_OnBufferReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureObserver_OnBufferReady_Params_Data>(index_);
    }
    VideoCaptureObserver_OnBufferReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::media::mojom::internal::VideoFrameInfo_Data> info;

 private:
  VideoCaptureObserver_OnBufferReady_Params_Data();
  ~VideoCaptureObserver_OnBufferReady_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureObserver_OnBufferReady_Params_Data) == 24,
              "Bad sizeof(VideoCaptureObserver_OnBufferReady_Params_Data)");
class  VideoCaptureObserver_OnBufferDestroyed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureObserver_OnBufferDestroyed_Params_Data));
      new (data()) VideoCaptureObserver_OnBufferDestroyed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureObserver_OnBufferDestroyed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureObserver_OnBufferDestroyed_Params_Data>(index_);
    }
    VideoCaptureObserver_OnBufferDestroyed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t buffer_id;
  uint8_t padfinal_[4];

 private:
  VideoCaptureObserver_OnBufferDestroyed_Params_Data();
  ~VideoCaptureObserver_OnBufferDestroyed_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureObserver_OnBufferDestroyed_Params_Data) == 16,
              "Bad sizeof(VideoCaptureObserver_OnBufferDestroyed_Params_Data)");
class  VideoCaptureHost_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_Start_Params_Data));
      new (data()) VideoCaptureHost_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_Start_Params_Data>(index_);
    }
    VideoCaptureHost_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t session_id;
  mojo::internal::Pointer<::media::mojom::internal::VideoCaptureParams_Data> params;
  mojo::internal::Interface_Data observer;

 private:
  VideoCaptureHost_Start_Params_Data();
  ~VideoCaptureHost_Start_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_Start_Params_Data) == 32,
              "Bad sizeof(VideoCaptureHost_Start_Params_Data)");
class  VideoCaptureHost_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_Stop_Params_Data));
      new (data()) VideoCaptureHost_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_Stop_Params_Data>(index_);
    }
    VideoCaptureHost_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  uint8_t padfinal_[4];

 private:
  VideoCaptureHost_Stop_Params_Data();
  ~VideoCaptureHost_Stop_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_Stop_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_Stop_Params_Data)");
class  VideoCaptureHost_Pause_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_Pause_Params_Data));
      new (data()) VideoCaptureHost_Pause_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_Pause_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_Pause_Params_Data>(index_);
    }
    VideoCaptureHost_Pause_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  uint8_t padfinal_[4];

 private:
  VideoCaptureHost_Pause_Params_Data();
  ~VideoCaptureHost_Pause_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_Pause_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_Pause_Params_Data)");
class  VideoCaptureHost_Resume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_Resume_Params_Data));
      new (data()) VideoCaptureHost_Resume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_Resume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_Resume_Params_Data>(index_);
    }
    VideoCaptureHost_Resume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t session_id;
  mojo::internal::Pointer<::media::mojom::internal::VideoCaptureParams_Data> params;

 private:
  VideoCaptureHost_Resume_Params_Data();
  ~VideoCaptureHost_Resume_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_Resume_Params_Data) == 24,
              "Bad sizeof(VideoCaptureHost_Resume_Params_Data)");
class  VideoCaptureHost_RequestRefreshFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_RequestRefreshFrame_Params_Data));
      new (data()) VideoCaptureHost_RequestRefreshFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_RequestRefreshFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_RequestRefreshFrame_Params_Data>(index_);
    }
    VideoCaptureHost_RequestRefreshFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  uint8_t padfinal_[4];

 private:
  VideoCaptureHost_RequestRefreshFrame_Params_Data();
  ~VideoCaptureHost_RequestRefreshFrame_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_RequestRefreshFrame_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_RequestRefreshFrame_Params_Data)");
class  VideoCaptureHost_ReleaseBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_ReleaseBuffer_Params_Data));
      new (data()) VideoCaptureHost_ReleaseBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_ReleaseBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_ReleaseBuffer_Params_Data>(index_);
    }
    VideoCaptureHost_ReleaseBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t buffer_id;
  double consumer_resource_utilization;

 private:
  VideoCaptureHost_ReleaseBuffer_Params_Data();
  ~VideoCaptureHost_ReleaseBuffer_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_ReleaseBuffer_Params_Data) == 24,
              "Bad sizeof(VideoCaptureHost_ReleaseBuffer_Params_Data)");
class  VideoCaptureHost_GetDeviceSupportedFormats_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_GetDeviceSupportedFormats_Params_Data));
      new (data()) VideoCaptureHost_GetDeviceSupportedFormats_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_GetDeviceSupportedFormats_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_GetDeviceSupportedFormats_Params_Data>(index_);
    }
    VideoCaptureHost_GetDeviceSupportedFormats_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t session_id;

 private:
  VideoCaptureHost_GetDeviceSupportedFormats_Params_Data();
  ~VideoCaptureHost_GetDeviceSupportedFormats_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_GetDeviceSupportedFormats_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_GetDeviceSupportedFormats_Params_Data)");
class  VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data));
      new (data()) VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data>(index_);
    }
    VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::VideoCaptureFormat_Data>>> formats_supported;

 private:
  VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data();
  ~VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data) == 16,
              "Bad sizeof(VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data)");
class  VideoCaptureHost_GetDeviceFormatsInUse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_GetDeviceFormatsInUse_Params_Data));
      new (data()) VideoCaptureHost_GetDeviceFormatsInUse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_GetDeviceFormatsInUse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_GetDeviceFormatsInUse_Params_Data>(index_);
    }
    VideoCaptureHost_GetDeviceFormatsInUse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t session_id;

 private:
  VideoCaptureHost_GetDeviceFormatsInUse_Params_Data();
  ~VideoCaptureHost_GetDeviceFormatsInUse_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_GetDeviceFormatsInUse_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_GetDeviceFormatsInUse_Params_Data)");
class  VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data));
      new (data()) VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data>(index_);
    }
    VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::VideoCaptureFormat_Data>>> formats_in_use;

 private:
  VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data();
  ~VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data) == 16,
              "Bad sizeof(VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data)");
class  VideoCaptureHost_OnFrameDropped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_OnFrameDropped_Params_Data));
      new (data()) VideoCaptureHost_OnFrameDropped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_OnFrameDropped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_OnFrameDropped_Params_Data>(index_);
    }
    VideoCaptureHost_OnFrameDropped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  int32_t reason;

 private:
  VideoCaptureHost_OnFrameDropped_Params_Data();
  ~VideoCaptureHost_OnFrameDropped_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_OnFrameDropped_Params_Data) == 16,
              "Bad sizeof(VideoCaptureHost_OnFrameDropped_Params_Data)");
class  VideoCaptureHost_OnLog_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureHost_OnLog_Params_Data));
      new (data()) VideoCaptureHost_OnLog_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureHost_OnLog_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureHost_OnLog_Params_Data>(index_);
    }
    VideoCaptureHost_OnLog_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  VideoCaptureHost_OnLog_Params_Data();
  ~VideoCaptureHost_OnLog_Params_Data() = delete;
};
static_assert(sizeof(VideoCaptureHost_OnLog_Params_Data) == 24,
              "Bad sizeof(VideoCaptureHost_OnLog_Params_Data)");

}  // namespace internal
class VideoCaptureObserver_OnStateChanged_ParamsDataView {
 public:
  VideoCaptureObserver_OnStateChanged_ParamsDataView() {}

  VideoCaptureObserver_OnStateChanged_ParamsDataView(
      internal::VideoCaptureObserver_OnStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureState>(
        data_value, output);
  }

  VideoCaptureState state() const {
    return static_cast<VideoCaptureState>(data_->state);
  }
 private:
  internal::VideoCaptureObserver_OnStateChanged_Params_Data* data_ = nullptr;
};

class VideoCaptureObserver_OnNewBuffer_ParamsDataView {
 public:
  VideoCaptureObserver_OnNewBuffer_ParamsDataView() {}

  VideoCaptureObserver_OnNewBuffer_ParamsDataView(
      internal::VideoCaptureObserver_OnNewBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  inline void GetBufferHandleDataView(
      ::media::mojom::VideoBufferHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBufferHandle(UserType* output) {
    auto* pointer = !data_->buffer_handle.is_null() ? &data_->buffer_handle : nullptr;
    return mojo::internal::Deserialize<::media::mojom::VideoBufferHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoCaptureObserver_OnNewBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureObserver_OnBufferReady_ParamsDataView {
 public:
  VideoCaptureObserver_OnBufferReady_ParamsDataView() {}

  VideoCaptureObserver_OnBufferReady_ParamsDataView(
      internal::VideoCaptureObserver_OnBufferReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  inline void GetInfoDataView(
      ::media::mojom::VideoFrameInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFrameInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoCaptureObserver_OnBufferReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureObserver_OnBufferDestroyed_ParamsDataView {
 public:
  VideoCaptureObserver_OnBufferDestroyed_ParamsDataView() {}

  VideoCaptureObserver_OnBufferDestroyed_ParamsDataView(
      internal::VideoCaptureObserver_OnBufferDestroyed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
 private:
  internal::VideoCaptureObserver_OnBufferDestroyed_Params_Data* data_ = nullptr;
};

class VideoCaptureHost_Start_ParamsDataView {
 public:
  VideoCaptureHost_Start_ParamsDataView() {}

  VideoCaptureHost_Start_ParamsDataView(
      internal::VideoCaptureHost_Start_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t device_id() const {
    return data_->device_id;
  }
  int32_t session_id() const {
    return data_->session_id;
  }
  inline void GetParamsDataView(
      ::media::mojom::VideoCaptureParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureParamsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoCaptureObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoCaptureHost_Start_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureHost_Stop_ParamsDataView {
 public:
  VideoCaptureHost_Stop_ParamsDataView() {}

  VideoCaptureHost_Stop_ParamsDataView(
      internal::VideoCaptureHost_Stop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t device_id() const {
    return data_->device_id;
  }
 private:
  internal::VideoCaptureHost_Stop_Params_Data* data_ = nullptr;
};

class VideoCaptureHost_Pause_ParamsDataView {
 public:
  VideoCaptureHost_Pause_ParamsDataView() {}

  VideoCaptureHost_Pause_ParamsDataView(
      internal::VideoCaptureHost_Pause_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t device_id() const {
    return data_->device_id;
  }
 private:
  internal::VideoCaptureHost_Pause_Params_Data* data_ = nullptr;
};

class VideoCaptureHost_Resume_ParamsDataView {
 public:
  VideoCaptureHost_Resume_ParamsDataView() {}

  VideoCaptureHost_Resume_ParamsDataView(
      internal::VideoCaptureHost_Resume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t device_id() const {
    return data_->device_id;
  }
  int32_t session_id() const {
    return data_->session_id;
  }
  inline void GetParamsDataView(
      ::media::mojom::VideoCaptureParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoCaptureHost_Resume_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureHost_RequestRefreshFrame_ParamsDataView {
 public:
  VideoCaptureHost_RequestRefreshFrame_ParamsDataView() {}

  VideoCaptureHost_RequestRefreshFrame_ParamsDataView(
      internal::VideoCaptureHost_RequestRefreshFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t device_id() const {
    return data_->device_id;
  }
 private:
  internal::VideoCaptureHost_RequestRefreshFrame_Params_Data* data_ = nullptr;
};

class VideoCaptureHost_ReleaseBuffer_ParamsDataView {
 public:
  VideoCaptureHost_ReleaseBuffer_ParamsDataView() {}

  VideoCaptureHost_ReleaseBuffer_ParamsDataView(
      internal::VideoCaptureHost_ReleaseBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t device_id() const {
    return data_->device_id;
  }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  double consumer_resource_utilization() const {
    return data_->consumer_resource_utilization;
  }
 private:
  internal::VideoCaptureHost_ReleaseBuffer_Params_Data* data_ = nullptr;
};

class VideoCaptureHost_GetDeviceSupportedFormats_ParamsDataView {
 public:
  VideoCaptureHost_GetDeviceSupportedFormats_ParamsDataView() {}

  VideoCaptureHost_GetDeviceSupportedFormats_ParamsDataView(
      internal::VideoCaptureHost_GetDeviceSupportedFormats_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t device_id() const {
    return data_->device_id;
  }
  int32_t session_id() const {
    return data_->session_id;
  }
 private:
  internal::VideoCaptureHost_GetDeviceSupportedFormats_Params_Data* data_ = nullptr;
};

class VideoCaptureHost_GetDeviceSupportedFormats_ResponseParamsDataView {
 public:
  VideoCaptureHost_GetDeviceSupportedFormats_ResponseParamsDataView() {}

  VideoCaptureHost_GetDeviceSupportedFormats_ResponseParamsDataView(
      internal::VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormatsSupportedDataView(
      mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormatsSupported(UserType* output) {
    auto* pointer = data_->formats_supported.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        pointer, output, context_);
  }
 private:
  internal::VideoCaptureHost_GetDeviceSupportedFormats_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureHost_GetDeviceFormatsInUse_ParamsDataView {
 public:
  VideoCaptureHost_GetDeviceFormatsInUse_ParamsDataView() {}

  VideoCaptureHost_GetDeviceFormatsInUse_ParamsDataView(
      internal::VideoCaptureHost_GetDeviceFormatsInUse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t device_id() const {
    return data_->device_id;
  }
  int32_t session_id() const {
    return data_->session_id;
  }
 private:
  internal::VideoCaptureHost_GetDeviceFormatsInUse_Params_Data* data_ = nullptr;
};

class VideoCaptureHost_GetDeviceFormatsInUse_ResponseParamsDataView {
 public:
  VideoCaptureHost_GetDeviceFormatsInUse_ResponseParamsDataView() {}

  VideoCaptureHost_GetDeviceFormatsInUse_ResponseParamsDataView(
      internal::VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormatsInUseDataView(
      mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormatsInUse(UserType* output) {
    auto* pointer = data_->formats_in_use.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        pointer, output, context_);
  }
 private:
  internal::VideoCaptureHost_GetDeviceFormatsInUse_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureHost_OnFrameDropped_ParamsDataView {
 public:
  VideoCaptureHost_OnFrameDropped_ParamsDataView() {}

  VideoCaptureHost_OnFrameDropped_ParamsDataView(
      internal::VideoCaptureHost_OnFrameDropped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t device_id() const {
    return data_->device_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureFrameDropReason>(
        data_value, output);
  }

  ::media::mojom::VideoCaptureFrameDropReason reason() const {
    return static_cast<::media::mojom::VideoCaptureFrameDropReason>(data_->reason);
  }
 private:
  internal::VideoCaptureHost_OnFrameDropped_Params_Data* data_ = nullptr;
};

class VideoCaptureHost_OnLog_ParamsDataView {
 public:
  VideoCaptureHost_OnLog_ParamsDataView() {}

  VideoCaptureHost_OnLog_ParamsDataView(
      internal::VideoCaptureHost_OnLog_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t device_id() const {
    return data_->device_id;
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoCaptureHost_OnLog_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void VideoCaptureObserver_OnNewBuffer_ParamsDataView::GetBufferHandleDataView(
    ::media::mojom::VideoBufferHandleDataView* output) {
  auto pointer = &data_->buffer_handle;
  *output = ::media::mojom::VideoBufferHandleDataView(pointer, context_);
}


inline void VideoCaptureObserver_OnBufferReady_ParamsDataView::GetInfoDataView(
    ::media::mojom::VideoFrameInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::media::mojom::VideoFrameInfoDataView(pointer, context_);
}




inline void VideoCaptureHost_Start_ParamsDataView::GetParamsDataView(
    ::media::mojom::VideoCaptureParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::VideoCaptureParamsDataView(pointer, context_);
}






inline void VideoCaptureHost_Resume_ParamsDataView::GetParamsDataView(
    ::media::mojom::VideoCaptureParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::VideoCaptureParamsDataView(pointer, context_);
}








inline void VideoCaptureHost_GetDeviceSupportedFormats_ResponseParamsDataView::GetFormatsSupportedDataView(
    mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output) {
  auto pointer = data_->formats_supported.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>(pointer, context_);
}




inline void VideoCaptureHost_GetDeviceFormatsInUse_ResponseParamsDataView::GetFormatsInUseDataView(
    mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output) {
  auto pointer = data_->formats_in_use.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>(pointer, context_);
}




inline void VideoCaptureHost_OnLog_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_PARAMS_DATA_H_