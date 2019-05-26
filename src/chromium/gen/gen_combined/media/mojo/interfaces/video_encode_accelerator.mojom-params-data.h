// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_PARAMS_DATA_H_

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
class  VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data));
      new (data()) VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data>(index_);
    }
    VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data();
  ~VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data) == 16,
              "Bad sizeof(VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data)");
class  VideoEncodeAccelerator_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_Initialize_Params_Data));
      new (data()) VideoEncodeAccelerator_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_Initialize_Params_Data>(index_);
    }
    VideoEncodeAccelerator_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VideoEncodeAcceleratorConfig_Data> config;
  mojo::internal::Interface_Data client;

 private:
  VideoEncodeAccelerator_Initialize_Params_Data();
  ~VideoEncodeAccelerator_Initialize_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Initialize_Params_Data) == 24,
              "Bad sizeof(VideoEncodeAccelerator_Initialize_Params_Data)");
class  VideoEncodeAccelerator_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_Initialize_ResponseParams_Data));
      new (data()) VideoEncodeAccelerator_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_Initialize_ResponseParams_Data>(index_);
    }
    VideoEncodeAccelerator_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  VideoEncodeAccelerator_Initialize_ResponseParams_Data();
  ~VideoEncodeAccelerator_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(VideoEncodeAccelerator_Initialize_ResponseParams_Data)");
class  VideoEncodeAccelerator_Encode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_Encode_Params_Data));
      new (data()) VideoEncodeAccelerator_Encode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_Encode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_Encode_Params_Data>(index_);
    }
    VideoEncodeAccelerator_Encode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoFrame_Data> frame;
  uint8_t force_keyframe : 1;
  uint8_t padfinal_[7];

 private:
  VideoEncodeAccelerator_Encode_Params_Data();
  ~VideoEncodeAccelerator_Encode_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Encode_Params_Data) == 24,
              "Bad sizeof(VideoEncodeAccelerator_Encode_Params_Data)");
class  VideoEncodeAccelerator_Encode_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_Encode_ResponseParams_Data));
      new (data()) VideoEncodeAccelerator_Encode_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_Encode_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_Encode_ResponseParams_Data>(index_);
    }
    VideoEncodeAccelerator_Encode_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoEncodeAccelerator_Encode_ResponseParams_Data();
  ~VideoEncodeAccelerator_Encode_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_Encode_ResponseParams_Data) == 8,
              "Bad sizeof(VideoEncodeAccelerator_Encode_ResponseParams_Data)");
class  VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data));
      new (data()) VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data>(index_);
    }
    VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t bitstream_buffer_id;
  mojo::internal::Handle_Data buffer;

 private:
  VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data();
  ~VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data) == 16,
              "Bad sizeof(VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data)");
class  VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data));
      new (data()) VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data>(index_);
    }
    VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VideoBitrateAllocation_Data> bitrate_allocation;
  uint32_t framerate;
  uint8_t padfinal_[4];

 private:
  VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data();
  ~VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data) == 24,
              "Bad sizeof(VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data)");
class  VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data));
      new (data()) VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data>(index_);
    }
    VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t input_count;
  uint32_t output_buffer_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> input_coded_size;

 private:
  VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data();
  ~VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data) == 24,
              "Bad sizeof(VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data)");
class  VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data));
      new (data()) VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data>(index_);
    }
    VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t bitstream_buffer_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::BitstreamBufferMetadata_Data> metadata;

 private:
  VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data();
  ~VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data) == 24,
              "Bad sizeof(VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data)");
class  VideoEncodeAcceleratorClient_NotifyError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAcceleratorClient_NotifyError_Params_Data));
      new (data()) VideoEncodeAcceleratorClient_NotifyError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAcceleratorClient_NotifyError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAcceleratorClient_NotifyError_Params_Data>(index_);
    }
    VideoEncodeAcceleratorClient_NotifyError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  VideoEncodeAcceleratorClient_NotifyError_Params_Data();
  ~VideoEncodeAcceleratorClient_NotifyError_Params_Data() = delete;
};
static_assert(sizeof(VideoEncodeAcceleratorClient_NotifyError_Params_Data) == 16,
              "Bad sizeof(VideoEncodeAcceleratorClient_NotifyError_Params_Data)");

}  // namespace internal
class VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_ParamsDataView {
 public:
  VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_ParamsDataView() {}

  VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_ParamsDataView(
      internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoEncodeAcceleratorRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAccelerator_Initialize_ParamsDataView {
 public:
  VideoEncodeAccelerator_Initialize_ParamsDataView() {}

  VideoEncodeAccelerator_Initialize_ParamsDataView(
      internal::VideoEncodeAccelerator_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      VideoEncodeAcceleratorConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoEncodeAcceleratorConfigDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoEncodeAcceleratorClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoEncodeAccelerator_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAccelerator_Initialize_ResponseParamsDataView {
 public:
  VideoEncodeAccelerator_Initialize_ResponseParamsDataView() {}

  VideoEncodeAccelerator_Initialize_ResponseParamsDataView(
      internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data* data_ = nullptr;
};

class VideoEncodeAccelerator_Encode_ParamsDataView {
 public:
  VideoEncodeAccelerator_Encode_ParamsDataView() {}

  VideoEncodeAccelerator_Encode_ParamsDataView(
      internal::VideoEncodeAccelerator_Encode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameDataView(
      ::media::mojom::VideoFrameDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrame(UserType* output) {
    auto* pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFrameDataView>(
        pointer, output, context_);
  }
  bool force_keyframe() const {
    return data_->force_keyframe;
  }
 private:
  internal::VideoEncodeAccelerator_Encode_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAccelerator_Encode_ResponseParamsDataView {
 public:
  VideoEncodeAccelerator_Encode_ResponseParamsDataView() {}

  VideoEncodeAccelerator_Encode_ResponseParamsDataView(
      internal::VideoEncodeAccelerator_Encode_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoEncodeAccelerator_Encode_ResponseParams_Data* data_ = nullptr;
};

class VideoEncodeAccelerator_UseOutputBitstreamBuffer_ParamsDataView {
 public:
  VideoEncodeAccelerator_UseOutputBitstreamBuffer_ParamsDataView() {}

  VideoEncodeAccelerator_UseOutputBitstreamBuffer_ParamsDataView(
      internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t bitstream_buffer_id() const {
    return data_->bitstream_buffer_id;
  }
  mojo::ScopedSharedBufferHandle TakeBuffer() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAccelerator_RequestEncodingParametersChange_ParamsDataView {
 public:
  VideoEncodeAccelerator_RequestEncodingParametersChange_ParamsDataView() {}

  VideoEncodeAccelerator_RequestEncodingParametersChange_ParamsDataView(
      internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBitrateAllocationDataView(
      VideoBitrateAllocationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBitrateAllocation(UserType* output) {
    auto* pointer = data_->bitrate_allocation.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoBitrateAllocationDataView>(
        pointer, output, context_);
  }
  uint32_t framerate() const {
    return data_->framerate;
  }
 private:
  internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAcceleratorClient_RequireBitstreamBuffers_ParamsDataView {
 public:
  VideoEncodeAcceleratorClient_RequireBitstreamBuffers_ParamsDataView() {}

  VideoEncodeAcceleratorClient_RequireBitstreamBuffers_ParamsDataView(
      internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t input_count() const {
    return data_->input_count;
  }
  inline void GetInputCodedSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputCodedSize(UserType* output) {
    auto* pointer = data_->input_coded_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  uint32_t output_buffer_size() const {
    return data_->output_buffer_size;
  }
 private:
  internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAcceleratorClient_BitstreamBufferReady_ParamsDataView {
 public:
  VideoEncodeAcceleratorClient_BitstreamBufferReady_ParamsDataView() {}

  VideoEncodeAcceleratorClient_BitstreamBufferReady_ParamsDataView(
      internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t bitstream_buffer_id() const {
    return data_->bitstream_buffer_id;
  }
  inline void GetMetadataDataView(
      BitstreamBufferMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::media::mojom::BitstreamBufferMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAcceleratorClient_NotifyError_ParamsDataView {
 public:
  VideoEncodeAcceleratorClient_NotifyError_ParamsDataView() {}

  VideoEncodeAcceleratorClient_NotifyError_ParamsDataView(
      internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::media::mojom::VideoEncodeAccelerator_Error>(
        data_value, output);
  }

  VideoEncodeAccelerator_Error error() const {
    return static_cast<VideoEncodeAccelerator_Error>(data_->error);
  }
 private:
  internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data* data_ = nullptr;
};




inline void VideoEncodeAccelerator_Initialize_ParamsDataView::GetConfigDataView(
    VideoEncodeAcceleratorConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = VideoEncodeAcceleratorConfigDataView(pointer, context_);
}




inline void VideoEncodeAccelerator_Encode_ParamsDataView::GetFrameDataView(
    ::media::mojom::VideoFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::media::mojom::VideoFrameDataView(pointer, context_);
}






inline void VideoEncodeAccelerator_RequestEncodingParametersChange_ParamsDataView::GetBitrateAllocationDataView(
    VideoBitrateAllocationDataView* output) {
  auto pointer = data_->bitrate_allocation.Get();
  *output = VideoBitrateAllocationDataView(pointer, context_);
}


inline void VideoEncodeAcceleratorClient_RequireBitstreamBuffers_ParamsDataView::GetInputCodedSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->input_coded_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void VideoEncodeAcceleratorClient_BitstreamBufferReady_ParamsDataView::GetMetadataDataView(
    BitstreamBufferMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = BitstreamBufferMetadataDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_PARAMS_DATA_H_