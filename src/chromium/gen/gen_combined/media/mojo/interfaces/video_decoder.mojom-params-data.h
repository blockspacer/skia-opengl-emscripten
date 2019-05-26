// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_PARAMS_DATA_H_

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
class  VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data));
      new (data()) VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data>(index_);
    }
    VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> release_token;
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> release_sync_token;

 private:
  VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data();
  ~VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data() = delete;
};
static_assert(sizeof(VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data) == 24,
              "Bad sizeof(VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data)");
class  VideoDecoder_GetSupportedConfigs_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_GetSupportedConfigs_Params_Data));
      new (data()) VideoDecoder_GetSupportedConfigs_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_GetSupportedConfigs_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_GetSupportedConfigs_Params_Data>(index_);
    }
    VideoDecoder_GetSupportedConfigs_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoDecoder_GetSupportedConfigs_Params_Data();
  ~VideoDecoder_GetSupportedConfigs_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_GetSupportedConfigs_Params_Data) == 8,
              "Bad sizeof(VideoDecoder_GetSupportedConfigs_Params_Data)");
class  VideoDecoder_GetSupportedConfigs_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_GetSupportedConfigs_ResponseParams_Data));
      new (data()) VideoDecoder_GetSupportedConfigs_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_GetSupportedConfigs_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_GetSupportedConfigs_ResponseParams_Data>(index_);
    }
    VideoDecoder_GetSupportedConfigs_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SupportedVideoDecoderConfig_Data>>>>> supported_configs;

 private:
  VideoDecoder_GetSupportedConfigs_ResponseParams_Data();
  ~VideoDecoder_GetSupportedConfigs_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecoder_GetSupportedConfigs_ResponseParams_Data) == 16,
              "Bad sizeof(VideoDecoder_GetSupportedConfigs_ResponseParams_Data)");
class  VideoDecoder_Construct_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Construct_Params_Data));
      new (data()) VideoDecoder_Construct_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Construct_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Construct_Params_Data>(index_);
    }
    VideoDecoder_Construct_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;
  mojo::internal::AssociatedInterface_Data media_log;
  mojo::internal::Handle_Data video_frame_handle_releaser;
  mojo::internal::Handle_Data decoder_buffer_pipe;
  mojo::internal::Pointer<internal::CommandBufferId_Data> command_buffer_id;
  int32_t implementation;
  uint8_t pad5_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::ColorSpace_Data> target_color_space;

 private:
  VideoDecoder_Construct_Params_Data();
  ~VideoDecoder_Construct_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Construct_Params_Data) == 56,
              "Bad sizeof(VideoDecoder_Construct_Params_Data)");
class  VideoDecoder_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Initialize_Params_Data));
      new (data()) VideoDecoder_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Initialize_Params_Data>(index_);
    }
    VideoDecoder_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoDecoderConfig_Data> config;
  uint8_t low_delay : 1;
  uint8_t pad1_[3];
  int32_t cdm_id;

 private:
  VideoDecoder_Initialize_Params_Data();
  ~VideoDecoder_Initialize_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Initialize_Params_Data) == 24,
              "Bad sizeof(VideoDecoder_Initialize_Params_Data)");
class  VideoDecoder_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Initialize_ResponseParams_Data));
      new (data()) VideoDecoder_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Initialize_ResponseParams_Data>(index_);
    }
    VideoDecoder_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t needs_bitstream_conversion : 1;
  uint8_t pad1_[3];
  int32_t max_decode_requests;

 private:
  VideoDecoder_Initialize_ResponseParams_Data();
  ~VideoDecoder_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(VideoDecoder_Initialize_ResponseParams_Data)");
class  VideoDecoder_Decode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Decode_Params_Data));
      new (data()) VideoDecoder_Decode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Decode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Decode_Params_Data>(index_);
    }
    VideoDecoder_Decode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> buffer;

 private:
  VideoDecoder_Decode_Params_Data();
  ~VideoDecoder_Decode_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Decode_Params_Data) == 16,
              "Bad sizeof(VideoDecoder_Decode_Params_Data)");
class  VideoDecoder_Decode_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Decode_ResponseParams_Data));
      new (data()) VideoDecoder_Decode_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Decode_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Decode_ResponseParams_Data>(index_);
    }
    VideoDecoder_Decode_ResponseParams_Data* operator->() { return data(); }

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
  VideoDecoder_Decode_ResponseParams_Data();
  ~VideoDecoder_Decode_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Decode_ResponseParams_Data) == 16,
              "Bad sizeof(VideoDecoder_Decode_ResponseParams_Data)");
class  VideoDecoder_Reset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Reset_Params_Data));
      new (data()) VideoDecoder_Reset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Reset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Reset_Params_Data>(index_);
    }
    VideoDecoder_Reset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoDecoder_Reset_Params_Data();
  ~VideoDecoder_Reset_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Reset_Params_Data) == 8,
              "Bad sizeof(VideoDecoder_Reset_Params_Data)");
class  VideoDecoder_Reset_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_Reset_ResponseParams_Data));
      new (data()) VideoDecoder_Reset_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_Reset_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_Reset_ResponseParams_Data>(index_);
    }
    VideoDecoder_Reset_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoDecoder_Reset_ResponseParams_Data();
  ~VideoDecoder_Reset_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecoder_Reset_ResponseParams_Data) == 8,
              "Bad sizeof(VideoDecoder_Reset_ResponseParams_Data)");
class  VideoDecoder_OnOverlayInfoChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoder_OnOverlayInfoChanged_Params_Data));
      new (data()) VideoDecoder_OnOverlayInfoChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoder_OnOverlayInfoChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoder_OnOverlayInfoChanged_Params_Data>(index_);
    }
    VideoDecoder_OnOverlayInfoChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::OverlayInfo_Data> overlay_info;

 private:
  VideoDecoder_OnOverlayInfoChanged_Params_Data();
  ~VideoDecoder_OnOverlayInfoChanged_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoder_OnOverlayInfoChanged_Params_Data) == 16,
              "Bad sizeof(VideoDecoder_OnOverlayInfoChanged_Params_Data)");
class  VideoDecoderClient_OnVideoFrameDecoded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoderClient_OnVideoFrameDecoded_Params_Data));
      new (data()) VideoDecoderClient_OnVideoFrameDecoded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoderClient_OnVideoFrameDecoded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoderClient_OnVideoFrameDecoded_Params_Data>(index_);
    }
    VideoDecoderClient_OnVideoFrameDecoded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoFrame_Data> frame;
  uint8_t can_read_without_stalling : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> release_token;

 private:
  VideoDecoderClient_OnVideoFrameDecoded_Params_Data();
  ~VideoDecoderClient_OnVideoFrameDecoded_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoderClient_OnVideoFrameDecoded_Params_Data) == 32,
              "Bad sizeof(VideoDecoderClient_OnVideoFrameDecoded_Params_Data)");
class  VideoDecoderClient_OnWaiting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoderClient_OnWaiting_Params_Data));
      new (data()) VideoDecoderClient_OnWaiting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoderClient_OnWaiting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoderClient_OnWaiting_Params_Data>(index_);
    }
    VideoDecoderClient_OnWaiting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  VideoDecoderClient_OnWaiting_Params_Data();
  ~VideoDecoderClient_OnWaiting_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoderClient_OnWaiting_Params_Data) == 16,
              "Bad sizeof(VideoDecoderClient_OnWaiting_Params_Data)");
class  VideoDecoderClient_RequestOverlayInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecoderClient_RequestOverlayInfo_Params_Data));
      new (data()) VideoDecoderClient_RequestOverlayInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecoderClient_RequestOverlayInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecoderClient_RequestOverlayInfo_Params_Data>(index_);
    }
    VideoDecoderClient_RequestOverlayInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t restart_for_transitions : 1;
  uint8_t padfinal_[7];

 private:
  VideoDecoderClient_RequestOverlayInfo_Params_Data();
  ~VideoDecoderClient_RequestOverlayInfo_Params_Data() = delete;
};
static_assert(sizeof(VideoDecoderClient_RequestOverlayInfo_Params_Data) == 16,
              "Bad sizeof(VideoDecoderClient_RequestOverlayInfo_Params_Data)");

}  // namespace internal
class VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView {
 public:
  VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView() {}

  VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView(
      internal::VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetReleaseTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReleaseToken(UserType* output) {
    auto* pointer = data_->release_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetReleaseSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReleaseSyncToken(UserType* output) {
    auto* pointer = data_->release_sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoder_GetSupportedConfigs_ParamsDataView {
 public:
  VideoDecoder_GetSupportedConfigs_ParamsDataView() {}

  VideoDecoder_GetSupportedConfigs_ParamsDataView(
      internal::VideoDecoder_GetSupportedConfigs_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDecoder_GetSupportedConfigs_Params_Data* data_ = nullptr;
};

class VideoDecoder_GetSupportedConfigs_ResponseParamsDataView {
 public:
  VideoDecoder_GetSupportedConfigs_ResponseParamsDataView() {}

  VideoDecoder_GetSupportedConfigs_ResponseParamsDataView(
      internal::VideoDecoder_GetSupportedConfigs_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSupportedConfigsDataView(
      mojo::MapDataView<VideoDecoderImplementation, mojo::ArrayDataView<SupportedVideoDecoderConfigDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedConfigs(UserType* output) {
    auto* pointer = data_->supported_configs.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::media::mojom::VideoDecoderImplementation, mojo::ArrayDataView<::media::mojom::SupportedVideoDecoderConfigDataView>>>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoder_GetSupportedConfigs_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoder_Construct_ParamsDataView {
 public:
  VideoDecoder_Construct_ParamsDataView() {}

  VideoDecoder_Construct_ParamsDataView(
      internal::VideoDecoder_Construct_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoDecoderClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeMediaLog() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::MediaLogAssociatedPtrInfoDataView>(
            &data_->media_log, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeVideoFrameHandleReleaser() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoFrameHandleReleaserRequestDataView>(
            &data_->video_frame_handle_releaser, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeDecoderBufferPipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->decoder_buffer_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetCommandBufferIdDataView(
      CommandBufferIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCommandBufferId(UserType* output) {
    auto* pointer = data_->command_buffer_id.Get();
    return mojo::internal::Deserialize<::media::mojom::CommandBufferIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImplementation(UserType* output) const {
    auto data_value = data_->implementation;
    return mojo::internal::Deserialize<::media::mojom::VideoDecoderImplementation>(
        data_value, output);
  }

  VideoDecoderImplementation implementation() const {
    return static_cast<VideoDecoderImplementation>(data_->implementation);
  }
  inline void GetTargetColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargetColorSpace(UserType* output) {
    auto* pointer = data_->target_color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoder_Construct_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoder_Initialize_ParamsDataView {
 public:
  VideoDecoder_Initialize_ParamsDataView() {}

  VideoDecoder_Initialize_ParamsDataView(
      internal::VideoDecoder_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      ::media::mojom::VideoDecoderConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoDecoderConfigDataView>(
        pointer, output, context_);
  }
  bool low_delay() const {
    return data_->low_delay;
  }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
 private:
  internal::VideoDecoder_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoder_Initialize_ResponseParamsDataView {
 public:
  VideoDecoder_Initialize_ResponseParamsDataView() {}

  VideoDecoder_Initialize_ResponseParamsDataView(
      internal::VideoDecoder_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  bool needs_bitstream_conversion() const {
    return data_->needs_bitstream_conversion;
  }
  int32_t max_decode_requests() const {
    return data_->max_decode_requests;
  }
 private:
  internal::VideoDecoder_Initialize_ResponseParams_Data* data_ = nullptr;
};

class VideoDecoder_Decode_ParamsDataView {
 public:
  VideoDecoder_Decode_ParamsDataView() {}

  VideoDecoder_Decode_ParamsDataView(
      internal::VideoDecoder_Decode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBufferDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoder_Decode_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoder_Decode_ResponseParamsDataView {
 public:
  VideoDecoder_Decode_ResponseParamsDataView() {}

  VideoDecoder_Decode_ResponseParamsDataView(
      internal::VideoDecoder_Decode_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::DecodeStatus>(
        data_value, output);
  }

  ::media::mojom::DecodeStatus status() const {
    return static_cast<::media::mojom::DecodeStatus>(data_->status);
  }
 private:
  internal::VideoDecoder_Decode_ResponseParams_Data* data_ = nullptr;
};

class VideoDecoder_Reset_ParamsDataView {
 public:
  VideoDecoder_Reset_ParamsDataView() {}

  VideoDecoder_Reset_ParamsDataView(
      internal::VideoDecoder_Reset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDecoder_Reset_Params_Data* data_ = nullptr;
};

class VideoDecoder_Reset_ResponseParamsDataView {
 public:
  VideoDecoder_Reset_ResponseParamsDataView() {}

  VideoDecoder_Reset_ResponseParamsDataView(
      internal::VideoDecoder_Reset_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDecoder_Reset_ResponseParams_Data* data_ = nullptr;
};

class VideoDecoder_OnOverlayInfoChanged_ParamsDataView {
 public:
  VideoDecoder_OnOverlayInfoChanged_ParamsDataView() {}

  VideoDecoder_OnOverlayInfoChanged_ParamsDataView(
      internal::VideoDecoder_OnOverlayInfoChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOverlayInfoDataView(
      OverlayInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOverlayInfo(UserType* output) {
    auto* pointer = data_->overlay_info.Get();
    return mojo::internal::Deserialize<::media::mojom::OverlayInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoder_OnOverlayInfoChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView {
 public:
  VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView() {}

  VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView(
      internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data* data,
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
  bool can_read_without_stalling() const {
    return data_->can_read_without_stalling;
  }
  inline void GetReleaseTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReleaseToken(UserType* output) {
    auto* pointer = data_->release_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoderClient_OnWaiting_ParamsDataView {
 public:
  VideoDecoderClient_OnWaiting_ParamsDataView() {}

  VideoDecoderClient_OnWaiting_ParamsDataView(
      internal::VideoDecoderClient_OnWaiting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::media::mojom::WaitingReason>(
        data_value, output);
  }

  ::media::mojom::WaitingReason reason() const {
    return static_cast<::media::mojom::WaitingReason>(data_->reason);
  }
 private:
  internal::VideoDecoderClient_OnWaiting_Params_Data* data_ = nullptr;
};

class VideoDecoderClient_RequestOverlayInfo_ParamsDataView {
 public:
  VideoDecoderClient_RequestOverlayInfo_ParamsDataView() {}

  VideoDecoderClient_RequestOverlayInfo_ParamsDataView(
      internal::VideoDecoderClient_RequestOverlayInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool restart_for_transitions() const {
    return data_->restart_for_transitions;
  }
 private:
  internal::VideoDecoderClient_RequestOverlayInfo_Params_Data* data_ = nullptr;
};


inline void VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView::GetReleaseTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->release_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView::GetReleaseSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->release_sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}




inline void VideoDecoder_GetSupportedConfigs_ResponseParamsDataView::GetSupportedConfigsDataView(
    mojo::MapDataView<VideoDecoderImplementation, mojo::ArrayDataView<SupportedVideoDecoderConfigDataView>>* output) {
  auto pointer = data_->supported_configs.Get();
  *output = mojo::MapDataView<VideoDecoderImplementation, mojo::ArrayDataView<SupportedVideoDecoderConfigDataView>>(pointer, context_);
}


inline void VideoDecoder_Construct_ParamsDataView::GetCommandBufferIdDataView(
    CommandBufferIdDataView* output) {
  auto pointer = data_->command_buffer_id.Get();
  *output = CommandBufferIdDataView(pointer, context_);
}
inline void VideoDecoder_Construct_ParamsDataView::GetTargetColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->target_color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}


inline void VideoDecoder_Initialize_ParamsDataView::GetConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, context_);
}




inline void VideoDecoder_Decode_ParamsDataView::GetBufferDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}








inline void VideoDecoder_OnOverlayInfoChanged_ParamsDataView::GetOverlayInfoDataView(
    OverlayInfoDataView* output) {
  auto pointer = data_->overlay_info.Get();
  *output = OverlayInfoDataView(pointer, context_);
}


inline void VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView::GetFrameDataView(
    ::media::mojom::VideoFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::media::mojom::VideoFrameDataView(pointer, context_);
}
inline void VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView::GetReleaseTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->release_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_PARAMS_DATA_H_