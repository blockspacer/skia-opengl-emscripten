// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_PARAMS_DATA_H_

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
class  MediaMetricsProvider_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_Initialize_Params_Data));
      new (data()) MediaMetricsProvider_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_Initialize_Params_Data>(index_);
    }
    MediaMetricsProvider_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_mse : 1;
  uint8_t pad0_[3];
  int32_t url_scheme;

 private:
  MediaMetricsProvider_Initialize_Params_Data();
  ~MediaMetricsProvider_Initialize_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_Initialize_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_Initialize_Params_Data)");
class  MediaMetricsProvider_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_OnError_Params_Data));
      new (data()) MediaMetricsProvider_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_OnError_Params_Data>(index_);
    }
    MediaMetricsProvider_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  MediaMetricsProvider_OnError_Params_Data();
  ~MediaMetricsProvider_OnError_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_OnError_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_OnError_Params_Data)");
class  MediaMetricsProvider_SetIsAdMedia_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_SetIsAdMedia_Params_Data));
      new (data()) MediaMetricsProvider_SetIsAdMedia_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_SetIsAdMedia_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_SetIsAdMedia_Params_Data>(index_);
    }
    MediaMetricsProvider_SetIsAdMedia_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaMetricsProvider_SetIsAdMedia_Params_Data();
  ~MediaMetricsProvider_SetIsAdMedia_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_SetIsAdMedia_Params_Data) == 8,
              "Bad sizeof(MediaMetricsProvider_SetIsAdMedia_Params_Data)");
class  MediaMetricsProvider_SetIsEME_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_SetIsEME_Params_Data));
      new (data()) MediaMetricsProvider_SetIsEME_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_SetIsEME_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_SetIsEME_Params_Data>(index_);
    }
    MediaMetricsProvider_SetIsEME_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaMetricsProvider_SetIsEME_Params_Data();
  ~MediaMetricsProvider_SetIsEME_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_SetIsEME_Params_Data) == 8,
              "Bad sizeof(MediaMetricsProvider_SetIsEME_Params_Data)");
class  MediaMetricsProvider_SetTimeToMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_SetTimeToMetadata_Params_Data));
      new (data()) MediaMetricsProvider_SetTimeToMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_SetTimeToMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_SetTimeToMetadata_Params_Data>(index_);
    }
    MediaMetricsProvider_SetTimeToMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> elapsed;

 private:
  MediaMetricsProvider_SetTimeToMetadata_Params_Data();
  ~MediaMetricsProvider_SetTimeToMetadata_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_SetTimeToMetadata_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_SetTimeToMetadata_Params_Data)");
class  MediaMetricsProvider_SetTimeToFirstFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_SetTimeToFirstFrame_Params_Data));
      new (data()) MediaMetricsProvider_SetTimeToFirstFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_SetTimeToFirstFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_SetTimeToFirstFrame_Params_Data>(index_);
    }
    MediaMetricsProvider_SetTimeToFirstFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> elapsed;

 private:
  MediaMetricsProvider_SetTimeToFirstFrame_Params_Data();
  ~MediaMetricsProvider_SetTimeToFirstFrame_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_SetTimeToFirstFrame_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_SetTimeToFirstFrame_Params_Data)");
class  MediaMetricsProvider_SetTimeToPlayReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_SetTimeToPlayReady_Params_Data));
      new (data()) MediaMetricsProvider_SetTimeToPlayReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_SetTimeToPlayReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_SetTimeToPlayReady_Params_Data>(index_);
    }
    MediaMetricsProvider_SetTimeToPlayReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> elapsed;

 private:
  MediaMetricsProvider_SetTimeToPlayReady_Params_Data();
  ~MediaMetricsProvider_SetTimeToPlayReady_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_SetTimeToPlayReady_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_SetTimeToPlayReady_Params_Data)");
class  MediaMetricsProvider_SetContainerName_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_SetContainerName_Params_Data));
      new (data()) MediaMetricsProvider_SetContainerName_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_SetContainerName_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_SetContainerName_Params_Data>(index_);
    }
    MediaMetricsProvider_SetContainerName_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t container_name;
  uint8_t padfinal_[4];

 private:
  MediaMetricsProvider_SetContainerName_Params_Data();
  ~MediaMetricsProvider_SetContainerName_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_SetContainerName_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_SetContainerName_Params_Data)");
class  MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data));
      new (data()) MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data>(index_);
    }
    MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PlaybackProperties_Data> properties;
  mojo::internal::Handle_Data recorder;
  uint8_t padfinal_[4];

 private:
  MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data();
  ~MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data) == 24,
              "Bad sizeof(MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data)");
class  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data));
      new (data()) MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data>(index_);
    }
    MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data recorder;
  uint8_t padfinal_[4];

 private:
  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data();
  ~MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data)");
class  MediaMetricsProvider_AddBytesReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetricsProvider_AddBytesReceived_Params_Data));
      new (data()) MediaMetricsProvider_AddBytesReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetricsProvider_AddBytesReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetricsProvider_AddBytesReceived_Params_Data>(index_);
    }
    MediaMetricsProvider_AddBytesReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t bytes_received;

 private:
  MediaMetricsProvider_AddBytesReceived_Params_Data();
  ~MediaMetricsProvider_AddBytesReceived_Params_Data() = delete;
};
static_assert(sizeof(MediaMetricsProvider_AddBytesReceived_Params_Data) == 16,
              "Bad sizeof(MediaMetricsProvider_AddBytesReceived_Params_Data)");

}  // namespace internal
class MediaMetricsProvider_Initialize_ParamsDataView {
 public:
  MediaMetricsProvider_Initialize_ParamsDataView() {}

  MediaMetricsProvider_Initialize_ParamsDataView(
      internal::MediaMetricsProvider_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_mse() const {
    return data_->is_mse;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrlScheme(UserType* output) const {
    auto data_value = data_->url_scheme;
    return mojo::internal::Deserialize<::media::mojom::MediaURLScheme>(
        data_value, output);
  }

  MediaURLScheme url_scheme() const {
    return static_cast<MediaURLScheme>(data_->url_scheme);
  }
 private:
  internal::MediaMetricsProvider_Initialize_Params_Data* data_ = nullptr;
};

class MediaMetricsProvider_OnError_ParamsDataView {
 public:
  MediaMetricsProvider_OnError_ParamsDataView() {}

  MediaMetricsProvider_OnError_ParamsDataView(
      internal::MediaMetricsProvider_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::PipelineStatus>(
        data_value, output);
  }

  ::media::mojom::PipelineStatus status() const {
    return static_cast<::media::mojom::PipelineStatus>(data_->status);
  }
 private:
  internal::MediaMetricsProvider_OnError_Params_Data* data_ = nullptr;
};

class MediaMetricsProvider_SetIsAdMedia_ParamsDataView {
 public:
  MediaMetricsProvider_SetIsAdMedia_ParamsDataView() {}

  MediaMetricsProvider_SetIsAdMedia_ParamsDataView(
      internal::MediaMetricsProvider_SetIsAdMedia_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaMetricsProvider_SetIsAdMedia_Params_Data* data_ = nullptr;
};

class MediaMetricsProvider_SetIsEME_ParamsDataView {
 public:
  MediaMetricsProvider_SetIsEME_ParamsDataView() {}

  MediaMetricsProvider_SetIsEME_ParamsDataView(
      internal::MediaMetricsProvider_SetIsEME_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaMetricsProvider_SetIsEME_Params_Data* data_ = nullptr;
};

class MediaMetricsProvider_SetTimeToMetadata_ParamsDataView {
 public:
  MediaMetricsProvider_SetTimeToMetadata_ParamsDataView() {}

  MediaMetricsProvider_SetTimeToMetadata_ParamsDataView(
      internal::MediaMetricsProvider_SetTimeToMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetElapsedDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElapsed(UserType* output) {
    auto* pointer = data_->elapsed.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaMetricsProvider_SetTimeToMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetricsProvider_SetTimeToFirstFrame_ParamsDataView {
 public:
  MediaMetricsProvider_SetTimeToFirstFrame_ParamsDataView() {}

  MediaMetricsProvider_SetTimeToFirstFrame_ParamsDataView(
      internal::MediaMetricsProvider_SetTimeToFirstFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetElapsedDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElapsed(UserType* output) {
    auto* pointer = data_->elapsed.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaMetricsProvider_SetTimeToFirstFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetricsProvider_SetTimeToPlayReady_ParamsDataView {
 public:
  MediaMetricsProvider_SetTimeToPlayReady_ParamsDataView() {}

  MediaMetricsProvider_SetTimeToPlayReady_ParamsDataView(
      internal::MediaMetricsProvider_SetTimeToPlayReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetElapsedDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElapsed(UserType* output) {
    auto* pointer = data_->elapsed.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaMetricsProvider_SetTimeToPlayReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetricsProvider_SetContainerName_ParamsDataView {
 public:
  MediaMetricsProvider_SetContainerName_ParamsDataView() {}

  MediaMetricsProvider_SetContainerName_ParamsDataView(
      internal::MediaMetricsProvider_SetContainerName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContainerName(UserType* output) const {
    auto data_value = data_->container_name;
    return mojo::internal::Deserialize<::media::mojom::MediaContainerName>(
        data_value, output);
  }

  ::media::mojom::MediaContainerName container_name() const {
    return static_cast<::media::mojom::MediaContainerName>(data_->container_name);
  }
 private:
  internal::MediaMetricsProvider_SetContainerName_Params_Data* data_ = nullptr;
};

class MediaMetricsProvider_AcquireWatchTimeRecorder_ParamsDataView {
 public:
  MediaMetricsProvider_AcquireWatchTimeRecorder_ParamsDataView() {}

  MediaMetricsProvider_AcquireWatchTimeRecorder_ParamsDataView(
      internal::MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPropertiesDataView(
      ::media::mojom::PlaybackPropertiesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<::media::mojom::PlaybackPropertiesDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeRecorder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::WatchTimeRecorderRequestDataView>(
            &data_->recorder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_ParamsDataView {
 public:
  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_ParamsDataView() {}

  MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_ParamsDataView(
      internal::MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRecorder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoDecodeStatsRecorderRequestDataView>(
            &data_->recorder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaMetricsProvider_AddBytesReceived_ParamsDataView {
 public:
  MediaMetricsProvider_AddBytesReceived_ParamsDataView() {}

  MediaMetricsProvider_AddBytesReceived_ParamsDataView(
      internal::MediaMetricsProvider_AddBytesReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t bytes_received() const {
    return data_->bytes_received;
  }
 private:
  internal::MediaMetricsProvider_AddBytesReceived_Params_Data* data_ = nullptr;
};










inline void MediaMetricsProvider_SetTimeToMetadata_ParamsDataView::GetElapsedDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->elapsed.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void MediaMetricsProvider_SetTimeToFirstFrame_ParamsDataView::GetElapsedDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->elapsed.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void MediaMetricsProvider_SetTimeToPlayReady_ParamsDataView::GetElapsedDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->elapsed.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}




inline void MediaMetricsProvider_AcquireWatchTimeRecorder_ParamsDataView::GetPropertiesDataView(
    ::media::mojom::PlaybackPropertiesDataView* output) {
  auto pointer = data_->properties.Get();
  *output = ::media::mojom::PlaybackPropertiesDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_PARAMS_DATA_H_