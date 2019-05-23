// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_PARAMS_DATA_H_

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
class  AudioDecoder_Construct_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Construct_Params_Data));
      new (data()) AudioDecoder_Construct_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Construct_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Construct_Params_Data>(index_);
    }
    AudioDecoder_Construct_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;

 private:
  AudioDecoder_Construct_Params_Data();
  ~AudioDecoder_Construct_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Construct_Params_Data) == 16,
              "Bad sizeof(AudioDecoder_Construct_Params_Data)");
class  AudioDecoder_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Initialize_Params_Data));
      new (data()) AudioDecoder_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Initialize_Params_Data>(index_);
    }
    AudioDecoder_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioDecoderConfig_Data> config;
  int32_t cdm_id;
  uint8_t padfinal_[4];

 private:
  AudioDecoder_Initialize_Params_Data();
  ~AudioDecoder_Initialize_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Initialize_Params_Data) == 24,
              "Bad sizeof(AudioDecoder_Initialize_Params_Data)");
class  AudioDecoder_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Initialize_ResponseParams_Data));
      new (data()) AudioDecoder_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Initialize_ResponseParams_Data>(index_);
    }
    AudioDecoder_Initialize_ResponseParams_Data* operator->() { return data(); }

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
  uint8_t padfinal_[7];

 private:
  AudioDecoder_Initialize_ResponseParams_Data();
  ~AudioDecoder_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(AudioDecoder_Initialize_ResponseParams_Data)");
class  AudioDecoder_SetDataSource_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_SetDataSource_Params_Data));
      new (data()) AudioDecoder_SetDataSource_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_SetDataSource_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_SetDataSource_Params_Data>(index_);
    }
    AudioDecoder_SetDataSource_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receive_pipe;
  uint8_t padfinal_[4];

 private:
  AudioDecoder_SetDataSource_Params_Data();
  ~AudioDecoder_SetDataSource_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoder_SetDataSource_Params_Data) == 16,
              "Bad sizeof(AudioDecoder_SetDataSource_Params_Data)");
class  AudioDecoder_Decode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Decode_Params_Data));
      new (data()) AudioDecoder_Decode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Decode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Decode_Params_Data>(index_);
    }
    AudioDecoder_Decode_Params_Data* operator->() { return data(); }

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
  AudioDecoder_Decode_Params_Data();
  ~AudioDecoder_Decode_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Decode_Params_Data) == 16,
              "Bad sizeof(AudioDecoder_Decode_Params_Data)");
class  AudioDecoder_Decode_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Decode_ResponseParams_Data));
      new (data()) AudioDecoder_Decode_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Decode_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Decode_ResponseParams_Data>(index_);
    }
    AudioDecoder_Decode_ResponseParams_Data* operator->() { return data(); }

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
  AudioDecoder_Decode_ResponseParams_Data();
  ~AudioDecoder_Decode_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Decode_ResponseParams_Data) == 16,
              "Bad sizeof(AudioDecoder_Decode_ResponseParams_Data)");
class  AudioDecoder_Reset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Reset_Params_Data));
      new (data()) AudioDecoder_Reset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Reset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Reset_Params_Data>(index_);
    }
    AudioDecoder_Reset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioDecoder_Reset_Params_Data();
  ~AudioDecoder_Reset_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Reset_Params_Data) == 8,
              "Bad sizeof(AudioDecoder_Reset_Params_Data)");
class  AudioDecoder_Reset_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoder_Reset_ResponseParams_Data));
      new (data()) AudioDecoder_Reset_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoder_Reset_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoder_Reset_ResponseParams_Data>(index_);
    }
    AudioDecoder_Reset_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioDecoder_Reset_ResponseParams_Data();
  ~AudioDecoder_Reset_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioDecoder_Reset_ResponseParams_Data) == 8,
              "Bad sizeof(AudioDecoder_Reset_ResponseParams_Data)");
class  AudioDecoderClient_OnBufferDecoded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoderClient_OnBufferDecoded_Params_Data));
      new (data()) AudioDecoderClient_OnBufferDecoded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoderClient_OnBufferDecoded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoderClient_OnBufferDecoded_Params_Data>(index_);
    }
    AudioDecoderClient_OnBufferDecoded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioBuffer_Data> buffer;

 private:
  AudioDecoderClient_OnBufferDecoded_Params_Data();
  ~AudioDecoderClient_OnBufferDecoded_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoderClient_OnBufferDecoded_Params_Data) == 16,
              "Bad sizeof(AudioDecoderClient_OnBufferDecoded_Params_Data)");
class  AudioDecoderClient_OnWaiting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDecoderClient_OnWaiting_Params_Data));
      new (data()) AudioDecoderClient_OnWaiting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDecoderClient_OnWaiting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDecoderClient_OnWaiting_Params_Data>(index_);
    }
    AudioDecoderClient_OnWaiting_Params_Data* operator->() { return data(); }

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
  AudioDecoderClient_OnWaiting_Params_Data();
  ~AudioDecoderClient_OnWaiting_Params_Data() = delete;
};
static_assert(sizeof(AudioDecoderClient_OnWaiting_Params_Data) == 16,
              "Bad sizeof(AudioDecoderClient_OnWaiting_Params_Data)");

}  // namespace internal
class AudioDecoder_Construct_ParamsDataView {
 public:
  AudioDecoder_Construct_ParamsDataView() {}

  AudioDecoder_Construct_ParamsDataView(
      internal::AudioDecoder_Construct_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioDecoderClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::AudioDecoder_Construct_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioDecoder_Initialize_ParamsDataView {
 public:
  AudioDecoder_Initialize_ParamsDataView() {}

  AudioDecoder_Initialize_ParamsDataView(
      internal::AudioDecoder_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      ::media::mojom::AudioDecoderConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDecoderConfigDataView>(
        pointer, output, context_);
  }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
 private:
  internal::AudioDecoder_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioDecoder_Initialize_ResponseParamsDataView {
 public:
  AudioDecoder_Initialize_ResponseParamsDataView() {}

  AudioDecoder_Initialize_ResponseParamsDataView(
      internal::AudioDecoder_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  bool needs_bitstream_conversion() const {
    return data_->needs_bitstream_conversion;
  }
 private:
  internal::AudioDecoder_Initialize_ResponseParams_Data* data_ = nullptr;
};

class AudioDecoder_SetDataSource_ParamsDataView {
 public:
  AudioDecoder_SetDataSource_ParamsDataView() {}

  AudioDecoder_SetDataSource_ParamsDataView(
      internal::AudioDecoder_SetDataSource_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakeReceivePipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->receive_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::AudioDecoder_SetDataSource_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioDecoder_Decode_ParamsDataView {
 public:
  AudioDecoder_Decode_ParamsDataView() {}

  AudioDecoder_Decode_ParamsDataView(
      internal::AudioDecoder_Decode_Params_Data* data,
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
  internal::AudioDecoder_Decode_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioDecoder_Decode_ResponseParamsDataView {
 public:
  AudioDecoder_Decode_ResponseParamsDataView() {}

  AudioDecoder_Decode_ResponseParamsDataView(
      internal::AudioDecoder_Decode_ResponseParams_Data* data,
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
  internal::AudioDecoder_Decode_ResponseParams_Data* data_ = nullptr;
};

class AudioDecoder_Reset_ParamsDataView {
 public:
  AudioDecoder_Reset_ParamsDataView() {}

  AudioDecoder_Reset_ParamsDataView(
      internal::AudioDecoder_Reset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioDecoder_Reset_Params_Data* data_ = nullptr;
};

class AudioDecoder_Reset_ResponseParamsDataView {
 public:
  AudioDecoder_Reset_ResponseParamsDataView() {}

  AudioDecoder_Reset_ResponseParamsDataView(
      internal::AudioDecoder_Reset_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioDecoder_Reset_ResponseParams_Data* data_ = nullptr;
};

class AudioDecoderClient_OnBufferDecoded_ParamsDataView {
 public:
  AudioDecoderClient_OnBufferDecoded_ParamsDataView() {}

  AudioDecoderClient_OnBufferDecoded_ParamsDataView(
      internal::AudioDecoderClient_OnBufferDecoded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBufferDataView(
      ::media::mojom::AudioBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioDecoderClient_OnBufferDecoded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioDecoderClient_OnWaiting_ParamsDataView {
 public:
  AudioDecoderClient_OnWaiting_ParamsDataView() {}

  AudioDecoderClient_OnWaiting_ParamsDataView(
      internal::AudioDecoderClient_OnWaiting_Params_Data* data,
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
  internal::AudioDecoderClient_OnWaiting_Params_Data* data_ = nullptr;
};




inline void AudioDecoder_Initialize_ParamsDataView::GetConfigDataView(
    ::media::mojom::AudioDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::AudioDecoderConfigDataView(pointer, context_);
}






inline void AudioDecoder_Decode_ParamsDataView::GetBufferDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}








inline void AudioDecoderClient_OnBufferDecoded_ParamsDataView::GetBufferDataView(
    ::media::mojom::AudioBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::AudioBufferDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_PARAMS_DATA_H_