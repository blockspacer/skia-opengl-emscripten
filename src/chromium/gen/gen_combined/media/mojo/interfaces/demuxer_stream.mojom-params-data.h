// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_PARAMS_DATA_H_

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
class  DemuxerStream_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DemuxerStream_Initialize_Params_Data));
      new (data()) DemuxerStream_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DemuxerStream_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DemuxerStream_Initialize_Params_Data>(index_);
    }
    DemuxerStream_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DemuxerStream_Initialize_Params_Data();
  ~DemuxerStream_Initialize_Params_Data() = delete;
};
static_assert(sizeof(DemuxerStream_Initialize_Params_Data) == 8,
              "Bad sizeof(DemuxerStream_Initialize_Params_Data)");
class  DemuxerStream_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DemuxerStream_Initialize_ResponseParams_Data));
      new (data()) DemuxerStream_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DemuxerStream_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DemuxerStream_Initialize_ResponseParams_Data>(index_);
    }
    DemuxerStream_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  mojo::internal::Handle_Data pipe;
  mojo::internal::Pointer<::media::mojom::internal::AudioDecoderConfig_Data> audio_config;
  mojo::internal::Pointer<::media::mojom::internal::VideoDecoderConfig_Data> video_config;

 private:
  DemuxerStream_Initialize_ResponseParams_Data();
  ~DemuxerStream_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(DemuxerStream_Initialize_ResponseParams_Data) == 32,
              "Bad sizeof(DemuxerStream_Initialize_ResponseParams_Data)");
class  DemuxerStream_Read_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DemuxerStream_Read_Params_Data));
      new (data()) DemuxerStream_Read_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DemuxerStream_Read_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DemuxerStream_Read_Params_Data>(index_);
    }
    DemuxerStream_Read_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DemuxerStream_Read_Params_Data();
  ~DemuxerStream_Read_Params_Data() = delete;
};
static_assert(sizeof(DemuxerStream_Read_Params_Data) == 8,
              "Bad sizeof(DemuxerStream_Read_Params_Data)");
class  DemuxerStream_Read_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DemuxerStream_Read_ResponseParams_Data));
      new (data()) DemuxerStream_Read_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DemuxerStream_Read_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DemuxerStream_Read_ResponseParams_Data>(index_);
    }
    DemuxerStream_Read_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> buffer;
  mojo::internal::Pointer<::media::mojom::internal::AudioDecoderConfig_Data> audio_config;
  mojo::internal::Pointer<::media::mojom::internal::VideoDecoderConfig_Data> video_config;

 private:
  DemuxerStream_Read_ResponseParams_Data();
  ~DemuxerStream_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(DemuxerStream_Read_ResponseParams_Data) == 40,
              "Bad sizeof(DemuxerStream_Read_ResponseParams_Data)");
class  DemuxerStream_EnableBitstreamConverter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DemuxerStream_EnableBitstreamConverter_Params_Data));
      new (data()) DemuxerStream_EnableBitstreamConverter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DemuxerStream_EnableBitstreamConverter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DemuxerStream_EnableBitstreamConverter_Params_Data>(index_);
    }
    DemuxerStream_EnableBitstreamConverter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DemuxerStream_EnableBitstreamConverter_Params_Data();
  ~DemuxerStream_EnableBitstreamConverter_Params_Data() = delete;
};
static_assert(sizeof(DemuxerStream_EnableBitstreamConverter_Params_Data) == 8,
              "Bad sizeof(DemuxerStream_EnableBitstreamConverter_Params_Data)");

}  // namespace internal
class DemuxerStream_Initialize_ParamsDataView {
 public:
  DemuxerStream_Initialize_ParamsDataView() {}

  DemuxerStream_Initialize_ParamsDataView(
      internal::DemuxerStream_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DemuxerStream_Initialize_Params_Data* data_ = nullptr;
};

class DemuxerStream_Initialize_ResponseParamsDataView {
 public:
  DemuxerStream_Initialize_ResponseParamsDataView() {}

  DemuxerStream_Initialize_ResponseParamsDataView(
      internal::DemuxerStream_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::media::mojom::DemuxerStream_Type>(
        data_value, output);
  }

  DemuxerStream_Type type() const {
    return static_cast<DemuxerStream_Type>(data_->type);
  }
  mojo::ScopedDataPipeConsumerHandle TakePipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetAudioConfigDataView(
      ::media::mojom::AudioDecoderConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioConfig(UserType* output) {
    auto* pointer = data_->audio_config.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDecoderConfigDataView>(
        pointer, output, context_);
  }
  inline void GetVideoConfigDataView(
      ::media::mojom::VideoDecoderConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoConfig(UserType* output) {
    auto* pointer = data_->video_config.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoDecoderConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::DemuxerStream_Initialize_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DemuxerStream_Read_ParamsDataView {
 public:
  DemuxerStream_Read_ParamsDataView() {}

  DemuxerStream_Read_ParamsDataView(
      internal::DemuxerStream_Read_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DemuxerStream_Read_Params_Data* data_ = nullptr;
};

class DemuxerStream_Read_ResponseParamsDataView {
 public:
  DemuxerStream_Read_ResponseParamsDataView() {}

  DemuxerStream_Read_ResponseParamsDataView(
      internal::DemuxerStream_Read_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::DemuxerStream_Status>(
        data_value, output);
  }

  DemuxerStream_Status status() const {
    return static_cast<DemuxerStream_Status>(data_->status);
  }
  inline void GetBufferDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferDataView>(
        pointer, output, context_);
  }
  inline void GetAudioConfigDataView(
      ::media::mojom::AudioDecoderConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioConfig(UserType* output) {
    auto* pointer = data_->audio_config.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDecoderConfigDataView>(
        pointer, output, context_);
  }
  inline void GetVideoConfigDataView(
      ::media::mojom::VideoDecoderConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoConfig(UserType* output) {
    auto* pointer = data_->video_config.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoDecoderConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::DemuxerStream_Read_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DemuxerStream_EnableBitstreamConverter_ParamsDataView {
 public:
  DemuxerStream_EnableBitstreamConverter_ParamsDataView() {}

  DemuxerStream_EnableBitstreamConverter_ParamsDataView(
      internal::DemuxerStream_EnableBitstreamConverter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DemuxerStream_EnableBitstreamConverter_Params_Data* data_ = nullptr;
};




inline void DemuxerStream_Initialize_ResponseParamsDataView::GetAudioConfigDataView(
    ::media::mojom::AudioDecoderConfigDataView* output) {
  auto pointer = data_->audio_config.Get();
  *output = ::media::mojom::AudioDecoderConfigDataView(pointer, context_);
}
inline void DemuxerStream_Initialize_ResponseParamsDataView::GetVideoConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->video_config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, context_);
}




inline void DemuxerStream_Read_ResponseParamsDataView::GetBufferDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}
inline void DemuxerStream_Read_ResponseParamsDataView::GetAudioConfigDataView(
    ::media::mojom::AudioDecoderConfigDataView* output) {
  auto pointer = data_->audio_config.Get();
  *output = ::media::mojom::AudioDecoderConfigDataView(pointer, context_);
}
inline void DemuxerStream_Read_ResponseParamsDataView::GetVideoConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->video_config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_PARAMS_DATA_H_