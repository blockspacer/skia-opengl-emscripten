// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_PARAMS_DATA_H_

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
class  Decryptor_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_Initialize_Params_Data));
      new (data()) Decryptor_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_Initialize_Params_Data>(index_);
    }
    Decryptor_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data audio_pipe;
  mojo::internal::Handle_Data video_pipe;
  mojo::internal::Handle_Data decrypt_pipe;
  mojo::internal::Handle_Data decrypted_pipe;

 private:
  Decryptor_Initialize_Params_Data();
  ~Decryptor_Initialize_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_Initialize_Params_Data) == 24,
              "Bad sizeof(Decryptor_Initialize_Params_Data)");
class  Decryptor_Decrypt_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_Decrypt_Params_Data));
      new (data()) Decryptor_Decrypt_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_Decrypt_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_Decrypt_Params_Data>(index_);
    }
    Decryptor_Decrypt_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t stream_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> encrypted;

 private:
  Decryptor_Decrypt_Params_Data();
  ~Decryptor_Decrypt_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_Decrypt_Params_Data) == 24,
              "Bad sizeof(Decryptor_Decrypt_Params_Data)");
class  Decryptor_Decrypt_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_Decrypt_ResponseParams_Data));
      new (data()) Decryptor_Decrypt_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_Decrypt_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_Decrypt_ResponseParams_Data>(index_);
    }
    Decryptor_Decrypt_ResponseParams_Data* operator->() { return data(); }

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

 private:
  Decryptor_Decrypt_ResponseParams_Data();
  ~Decryptor_Decrypt_ResponseParams_Data() = delete;
};
static_assert(sizeof(Decryptor_Decrypt_ResponseParams_Data) == 24,
              "Bad sizeof(Decryptor_Decrypt_ResponseParams_Data)");
class  Decryptor_CancelDecrypt_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_CancelDecrypt_Params_Data));
      new (data()) Decryptor_CancelDecrypt_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_CancelDecrypt_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_CancelDecrypt_Params_Data>(index_);
    }
    Decryptor_CancelDecrypt_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t stream_type;
  uint8_t padfinal_[4];

 private:
  Decryptor_CancelDecrypt_Params_Data();
  ~Decryptor_CancelDecrypt_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_CancelDecrypt_Params_Data) == 16,
              "Bad sizeof(Decryptor_CancelDecrypt_Params_Data)");
class  Decryptor_InitializeAudioDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_InitializeAudioDecoder_Params_Data));
      new (data()) Decryptor_InitializeAudioDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_InitializeAudioDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_InitializeAudioDecoder_Params_Data>(index_);
    }
    Decryptor_InitializeAudioDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioDecoderConfig_Data> config;

 private:
  Decryptor_InitializeAudioDecoder_Params_Data();
  ~Decryptor_InitializeAudioDecoder_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_InitializeAudioDecoder_Params_Data) == 16,
              "Bad sizeof(Decryptor_InitializeAudioDecoder_Params_Data)");
class  Decryptor_InitializeAudioDecoder_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_InitializeAudioDecoder_ResponseParams_Data));
      new (data()) Decryptor_InitializeAudioDecoder_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_InitializeAudioDecoder_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_InitializeAudioDecoder_ResponseParams_Data>(index_);
    }
    Decryptor_InitializeAudioDecoder_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Decryptor_InitializeAudioDecoder_ResponseParams_Data();
  ~Decryptor_InitializeAudioDecoder_ResponseParams_Data() = delete;
};
static_assert(sizeof(Decryptor_InitializeAudioDecoder_ResponseParams_Data) == 16,
              "Bad sizeof(Decryptor_InitializeAudioDecoder_ResponseParams_Data)");
class  Decryptor_InitializeVideoDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_InitializeVideoDecoder_Params_Data));
      new (data()) Decryptor_InitializeVideoDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_InitializeVideoDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_InitializeVideoDecoder_Params_Data>(index_);
    }
    Decryptor_InitializeVideoDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoDecoderConfig_Data> config;

 private:
  Decryptor_InitializeVideoDecoder_Params_Data();
  ~Decryptor_InitializeVideoDecoder_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_InitializeVideoDecoder_Params_Data) == 16,
              "Bad sizeof(Decryptor_InitializeVideoDecoder_Params_Data)");
class  Decryptor_InitializeVideoDecoder_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_InitializeVideoDecoder_ResponseParams_Data));
      new (data()) Decryptor_InitializeVideoDecoder_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_InitializeVideoDecoder_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_InitializeVideoDecoder_ResponseParams_Data>(index_);
    }
    Decryptor_InitializeVideoDecoder_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Decryptor_InitializeVideoDecoder_ResponseParams_Data();
  ~Decryptor_InitializeVideoDecoder_ResponseParams_Data() = delete;
};
static_assert(sizeof(Decryptor_InitializeVideoDecoder_ResponseParams_Data) == 16,
              "Bad sizeof(Decryptor_InitializeVideoDecoder_ResponseParams_Data)");
class  Decryptor_DecryptAndDecodeAudio_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_DecryptAndDecodeAudio_Params_Data));
      new (data()) Decryptor_DecryptAndDecodeAudio_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_DecryptAndDecodeAudio_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_DecryptAndDecodeAudio_Params_Data>(index_);
    }
    Decryptor_DecryptAndDecodeAudio_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> encrypted;

 private:
  Decryptor_DecryptAndDecodeAudio_Params_Data();
  ~Decryptor_DecryptAndDecodeAudio_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_DecryptAndDecodeAudio_Params_Data) == 16,
              "Bad sizeof(Decryptor_DecryptAndDecodeAudio_Params_Data)");
class  Decryptor_DecryptAndDecodeAudio_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_DecryptAndDecodeAudio_ResponseParams_Data));
      new (data()) Decryptor_DecryptAndDecodeAudio_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_DecryptAndDecodeAudio_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_DecryptAndDecodeAudio_ResponseParams_Data>(index_);
    }
    Decryptor_DecryptAndDecodeAudio_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::AudioBuffer_Data>>> audio_buffers;

 private:
  Decryptor_DecryptAndDecodeAudio_ResponseParams_Data();
  ~Decryptor_DecryptAndDecodeAudio_ResponseParams_Data() = delete;
};
static_assert(sizeof(Decryptor_DecryptAndDecodeAudio_ResponseParams_Data) == 24,
              "Bad sizeof(Decryptor_DecryptAndDecodeAudio_ResponseParams_Data)");
class  Decryptor_DecryptAndDecodeVideo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_DecryptAndDecodeVideo_Params_Data));
      new (data()) Decryptor_DecryptAndDecodeVideo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_DecryptAndDecodeVideo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_DecryptAndDecodeVideo_Params_Data>(index_);
    }
    Decryptor_DecryptAndDecodeVideo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::DecoderBuffer_Data> encrypted;

 private:
  Decryptor_DecryptAndDecodeVideo_Params_Data();
  ~Decryptor_DecryptAndDecodeVideo_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_DecryptAndDecodeVideo_Params_Data) == 16,
              "Bad sizeof(Decryptor_DecryptAndDecodeVideo_Params_Data)");
class  Decryptor_DecryptAndDecodeVideo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_DecryptAndDecodeVideo_ResponseParams_Data));
      new (data()) Decryptor_DecryptAndDecodeVideo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_DecryptAndDecodeVideo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_DecryptAndDecodeVideo_ResponseParams_Data>(index_);
    }
    Decryptor_DecryptAndDecodeVideo_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::media::mojom::internal::VideoFrame_Data> video_frame;
  mojo::internal::Interface_Data releaser;

 private:
  Decryptor_DecryptAndDecodeVideo_ResponseParams_Data();
  ~Decryptor_DecryptAndDecodeVideo_ResponseParams_Data() = delete;
};
static_assert(sizeof(Decryptor_DecryptAndDecodeVideo_ResponseParams_Data) == 32,
              "Bad sizeof(Decryptor_DecryptAndDecodeVideo_ResponseParams_Data)");
class  Decryptor_ResetDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_ResetDecoder_Params_Data));
      new (data()) Decryptor_ResetDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_ResetDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_ResetDecoder_Params_Data>(index_);
    }
    Decryptor_ResetDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t stream_type;
  uint8_t padfinal_[4];

 private:
  Decryptor_ResetDecoder_Params_Data();
  ~Decryptor_ResetDecoder_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_ResetDecoder_Params_Data) == 16,
              "Bad sizeof(Decryptor_ResetDecoder_Params_Data)");
class  Decryptor_DeinitializeDecoder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Decryptor_DeinitializeDecoder_Params_Data));
      new (data()) Decryptor_DeinitializeDecoder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Decryptor_DeinitializeDecoder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Decryptor_DeinitializeDecoder_Params_Data>(index_);
    }
    Decryptor_DeinitializeDecoder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t stream_type;
  uint8_t padfinal_[4];

 private:
  Decryptor_DeinitializeDecoder_Params_Data();
  ~Decryptor_DeinitializeDecoder_Params_Data() = delete;
};
static_assert(sizeof(Decryptor_DeinitializeDecoder_Params_Data) == 16,
              "Bad sizeof(Decryptor_DeinitializeDecoder_Params_Data)");

}  // namespace internal
class Decryptor_Initialize_ParamsDataView {
 public:
  Decryptor_Initialize_ParamsDataView() {}

  Decryptor_Initialize_ParamsDataView(
      internal::Decryptor_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakeAudioPipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->audio_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeVideoPipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->video_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeDecryptPipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->decrypt_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeDecryptedPipe() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->decrypted_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Decryptor_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Decryptor_Decrypt_ParamsDataView {
 public:
  Decryptor_Decrypt_ParamsDataView() {}

  Decryptor_Decrypt_ParamsDataView(
      internal::Decryptor_Decrypt_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamType(UserType* output) const {
    auto data_value = data_->stream_type;
    return mojo::internal::Deserialize<::media::mojom::Decryptor_StreamType>(
        data_value, output);
  }

  Decryptor_StreamType stream_type() const {
    return static_cast<Decryptor_StreamType>(data_->stream_type);
  }
  inline void GetEncryptedDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncrypted(UserType* output) {
    auto* pointer = data_->encrypted.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_Decrypt_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Decryptor_Decrypt_ResponseParamsDataView {
 public:
  Decryptor_Decrypt_ResponseParamsDataView() {}

  Decryptor_Decrypt_ResponseParamsDataView(
      internal::Decryptor_Decrypt_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::Decryptor_Status>(
        data_value, output);
  }

  Decryptor_Status status() const {
    return static_cast<Decryptor_Status>(data_->status);
  }
  inline void GetBufferDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_Decrypt_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Decryptor_CancelDecrypt_ParamsDataView {
 public:
  Decryptor_CancelDecrypt_ParamsDataView() {}

  Decryptor_CancelDecrypt_ParamsDataView(
      internal::Decryptor_CancelDecrypt_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamType(UserType* output) const {
    auto data_value = data_->stream_type;
    return mojo::internal::Deserialize<::media::mojom::Decryptor_StreamType>(
        data_value, output);
  }

  Decryptor_StreamType stream_type() const {
    return static_cast<Decryptor_StreamType>(data_->stream_type);
  }
 private:
  internal::Decryptor_CancelDecrypt_Params_Data* data_ = nullptr;
};

class Decryptor_InitializeAudioDecoder_ParamsDataView {
 public:
  Decryptor_InitializeAudioDecoder_ParamsDataView() {}

  Decryptor_InitializeAudioDecoder_ParamsDataView(
      internal::Decryptor_InitializeAudioDecoder_Params_Data* data,
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
 private:
  internal::Decryptor_InitializeAudioDecoder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Decryptor_InitializeAudioDecoder_ResponseParamsDataView {
 public:
  Decryptor_InitializeAudioDecoder_ResponseParamsDataView() {}

  Decryptor_InitializeAudioDecoder_ResponseParamsDataView(
      internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data* data_ = nullptr;
};

class Decryptor_InitializeVideoDecoder_ParamsDataView {
 public:
  Decryptor_InitializeVideoDecoder_ParamsDataView() {}

  Decryptor_InitializeVideoDecoder_ParamsDataView(
      internal::Decryptor_InitializeVideoDecoder_Params_Data* data,
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
 private:
  internal::Decryptor_InitializeVideoDecoder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Decryptor_InitializeVideoDecoder_ResponseParamsDataView {
 public:
  Decryptor_InitializeVideoDecoder_ResponseParamsDataView() {}

  Decryptor_InitializeVideoDecoder_ResponseParamsDataView(
      internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data* data_ = nullptr;
};

class Decryptor_DecryptAndDecodeAudio_ParamsDataView {
 public:
  Decryptor_DecryptAndDecodeAudio_ParamsDataView() {}

  Decryptor_DecryptAndDecodeAudio_ParamsDataView(
      internal::Decryptor_DecryptAndDecodeAudio_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEncryptedDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncrypted(UserType* output) {
    auto* pointer = data_->encrypted.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_DecryptAndDecodeAudio_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Decryptor_DecryptAndDecodeAudio_ResponseParamsDataView {
 public:
  Decryptor_DecryptAndDecodeAudio_ResponseParamsDataView() {}

  Decryptor_DecryptAndDecodeAudio_ResponseParamsDataView(
      internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::Decryptor_Status>(
        data_value, output);
  }

  Decryptor_Status status() const {
    return static_cast<Decryptor_Status>(data_->status);
  }
  inline void GetAudioBuffersDataView(
      mojo::ArrayDataView<::media::mojom::AudioBufferDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioBuffers(UserType* output) {
    auto* pointer = data_->audio_buffers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::AudioBufferDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Decryptor_DecryptAndDecodeVideo_ParamsDataView {
 public:
  Decryptor_DecryptAndDecodeVideo_ParamsDataView() {}

  Decryptor_DecryptAndDecodeVideo_ParamsDataView(
      internal::Decryptor_DecryptAndDecodeVideo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEncryptedDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncrypted(UserType* output) {
    auto* pointer = data_->encrypted.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_DecryptAndDecodeVideo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Decryptor_DecryptAndDecodeVideo_ResponseParamsDataView {
 public:
  Decryptor_DecryptAndDecodeVideo_ResponseParamsDataView() {}

  Decryptor_DecryptAndDecodeVideo_ResponseParamsDataView(
      internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::Decryptor_Status>(
        data_value, output);
  }

  Decryptor_Status status() const {
    return static_cast<Decryptor_Status>(data_->status);
  }
  inline void GetVideoFrameDataView(
      ::media::mojom::VideoFrameDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoFrame(UserType* output) {
    auto* pointer = data_->video_frame.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFrameDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeReleaser() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::FrameResourceReleaserPtrDataView>(
            &data_->releaser, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Decryptor_ResetDecoder_ParamsDataView {
 public:
  Decryptor_ResetDecoder_ParamsDataView() {}

  Decryptor_ResetDecoder_ParamsDataView(
      internal::Decryptor_ResetDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamType(UserType* output) const {
    auto data_value = data_->stream_type;
    return mojo::internal::Deserialize<::media::mojom::Decryptor_StreamType>(
        data_value, output);
  }

  Decryptor_StreamType stream_type() const {
    return static_cast<Decryptor_StreamType>(data_->stream_type);
  }
 private:
  internal::Decryptor_ResetDecoder_Params_Data* data_ = nullptr;
};

class Decryptor_DeinitializeDecoder_ParamsDataView {
 public:
  Decryptor_DeinitializeDecoder_ParamsDataView() {}

  Decryptor_DeinitializeDecoder_ParamsDataView(
      internal::Decryptor_DeinitializeDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamType(UserType* output) const {
    auto data_value = data_->stream_type;
    return mojo::internal::Deserialize<::media::mojom::Decryptor_StreamType>(
        data_value, output);
  }

  Decryptor_StreamType stream_type() const {
    return static_cast<Decryptor_StreamType>(data_->stream_type);
  }
 private:
  internal::Decryptor_DeinitializeDecoder_Params_Data* data_ = nullptr;
};




inline void Decryptor_Decrypt_ParamsDataView::GetEncryptedDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->encrypted.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}


inline void Decryptor_Decrypt_ResponseParamsDataView::GetBufferDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}




inline void Decryptor_InitializeAudioDecoder_ParamsDataView::GetConfigDataView(
    ::media::mojom::AudioDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::AudioDecoderConfigDataView(pointer, context_);
}




inline void Decryptor_InitializeVideoDecoder_ParamsDataView::GetConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, context_);
}




inline void Decryptor_DecryptAndDecodeAudio_ParamsDataView::GetEncryptedDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->encrypted.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}


inline void Decryptor_DecryptAndDecodeAudio_ResponseParamsDataView::GetAudioBuffersDataView(
    mojo::ArrayDataView<::media::mojom::AudioBufferDataView>* output) {
  auto pointer = data_->audio_buffers.Get();
  *output = mojo::ArrayDataView<::media::mojom::AudioBufferDataView>(pointer, context_);
}


inline void Decryptor_DecryptAndDecodeVideo_ParamsDataView::GetEncryptedDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->encrypted.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}


inline void Decryptor_DecryptAndDecodeVideo_ResponseParamsDataView::GetVideoFrameDataView(
    ::media::mojom::VideoFrameDataView* output) {
  auto pointer = data_->video_frame.Get();
  *output = ::media::mojom::VideoFrameDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_PARAMS_DATA_H_