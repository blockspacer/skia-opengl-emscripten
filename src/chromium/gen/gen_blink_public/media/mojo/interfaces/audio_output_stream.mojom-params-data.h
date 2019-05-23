// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_PARAMS_DATA_H_

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
class  AudioOutputStream_Play_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStream_Play_Params_Data));
      new (data()) AudioOutputStream_Play_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStream_Play_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStream_Play_Params_Data>(index_);
    }
    AudioOutputStream_Play_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioOutputStream_Play_Params_Data();
  ~AudioOutputStream_Play_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStream_Play_Params_Data) == 8,
              "Bad sizeof(AudioOutputStream_Play_Params_Data)");
class  AudioOutputStream_Pause_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStream_Pause_Params_Data));
      new (data()) AudioOutputStream_Pause_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStream_Pause_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStream_Pause_Params_Data>(index_);
    }
    AudioOutputStream_Pause_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioOutputStream_Pause_Params_Data();
  ~AudioOutputStream_Pause_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStream_Pause_Params_Data) == 8,
              "Bad sizeof(AudioOutputStream_Pause_Params_Data)");
class  AudioOutputStream_SetVolume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStream_SetVolume_Params_Data));
      new (data()) AudioOutputStream_SetVolume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStream_SetVolume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStream_SetVolume_Params_Data>(index_);
    }
    AudioOutputStream_SetVolume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double volume;

 private:
  AudioOutputStream_SetVolume_Params_Data();
  ~AudioOutputStream_SetVolume_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStream_SetVolume_Params_Data) == 16,
              "Bad sizeof(AudioOutputStream_SetVolume_Params_Data)");
class  AudioOutputStreamObserver_DidStartPlaying_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStreamObserver_DidStartPlaying_Params_Data));
      new (data()) AudioOutputStreamObserver_DidStartPlaying_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStreamObserver_DidStartPlaying_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStreamObserver_DidStartPlaying_Params_Data>(index_);
    }
    AudioOutputStreamObserver_DidStartPlaying_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioOutputStreamObserver_DidStartPlaying_Params_Data();
  ~AudioOutputStreamObserver_DidStartPlaying_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStreamObserver_DidStartPlaying_Params_Data) == 8,
              "Bad sizeof(AudioOutputStreamObserver_DidStartPlaying_Params_Data)");
class  AudioOutputStreamObserver_DidStopPlaying_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStreamObserver_DidStopPlaying_Params_Data));
      new (data()) AudioOutputStreamObserver_DidStopPlaying_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStreamObserver_DidStopPlaying_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStreamObserver_DidStopPlaying_Params_Data>(index_);
    }
    AudioOutputStreamObserver_DidStopPlaying_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioOutputStreamObserver_DidStopPlaying_Params_Data();
  ~AudioOutputStreamObserver_DidStopPlaying_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStreamObserver_DidStopPlaying_Params_Data) == 8,
              "Bad sizeof(AudioOutputStreamObserver_DidStopPlaying_Params_Data)");
class  AudioOutputStreamObserver_DidChangeAudibleState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStreamObserver_DidChangeAudibleState_Params_Data));
      new (data()) AudioOutputStreamObserver_DidChangeAudibleState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStreamObserver_DidChangeAudibleState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStreamObserver_DidChangeAudibleState_Params_Data>(index_);
    }
    AudioOutputStreamObserver_DidChangeAudibleState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_audible : 1;
  uint8_t padfinal_[7];

 private:
  AudioOutputStreamObserver_DidChangeAudibleState_Params_Data();
  ~AudioOutputStreamObserver_DidChangeAudibleState_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStreamObserver_DidChangeAudibleState_Params_Data) == 16,
              "Bad sizeof(AudioOutputStreamObserver_DidChangeAudibleState_Params_Data)");
class  AudioOutputStreamProvider_Acquire_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStreamProvider_Acquire_Params_Data));
      new (data()) AudioOutputStreamProvider_Acquire_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStreamProvider_Acquire_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStreamProvider_Acquire_Params_Data>(index_);
    }
    AudioOutputStreamProvider_Acquire_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;
  mojo::internal::Interface_Data client;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> processing_id;

 private:
  AudioOutputStreamProvider_Acquire_Params_Data();
  ~AudioOutputStreamProvider_Acquire_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStreamProvider_Acquire_Params_Data) == 32,
              "Bad sizeof(AudioOutputStreamProvider_Acquire_Params_Data)");
class  AudioOutputStreamProviderClient_Created_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioOutputStreamProviderClient_Created_Params_Data));
      new (data()) AudioOutputStreamProviderClient_Created_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioOutputStreamProviderClient_Created_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioOutputStreamProviderClient_Created_Params_Data>(index_);
    }
    AudioOutputStreamProviderClient_Created_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data stream;
  mojo::internal::Pointer<::media::mojom::internal::ReadWriteAudioDataPipe_Data> data_pipe;

 private:
  AudioOutputStreamProviderClient_Created_Params_Data();
  ~AudioOutputStreamProviderClient_Created_Params_Data() = delete;
};
static_assert(sizeof(AudioOutputStreamProviderClient_Created_Params_Data) == 24,
              "Bad sizeof(AudioOutputStreamProviderClient_Created_Params_Data)");

}  // namespace internal
class AudioOutputStream_Play_ParamsDataView {
 public:
  AudioOutputStream_Play_ParamsDataView() {}

  AudioOutputStream_Play_ParamsDataView(
      internal::AudioOutputStream_Play_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioOutputStream_Play_Params_Data* data_ = nullptr;
};

class AudioOutputStream_Pause_ParamsDataView {
 public:
  AudioOutputStream_Pause_ParamsDataView() {}

  AudioOutputStream_Pause_ParamsDataView(
      internal::AudioOutputStream_Pause_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioOutputStream_Pause_Params_Data* data_ = nullptr;
};

class AudioOutputStream_SetVolume_ParamsDataView {
 public:
  AudioOutputStream_SetVolume_ParamsDataView() {}

  AudioOutputStream_SetVolume_ParamsDataView(
      internal::AudioOutputStream_SetVolume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double volume() const {
    return data_->volume;
  }
 private:
  internal::AudioOutputStream_SetVolume_Params_Data* data_ = nullptr;
};

class AudioOutputStreamObserver_DidStartPlaying_ParamsDataView {
 public:
  AudioOutputStreamObserver_DidStartPlaying_ParamsDataView() {}

  AudioOutputStreamObserver_DidStartPlaying_ParamsDataView(
      internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data* data_ = nullptr;
};

class AudioOutputStreamObserver_DidStopPlaying_ParamsDataView {
 public:
  AudioOutputStreamObserver_DidStopPlaying_ParamsDataView() {}

  AudioOutputStreamObserver_DidStopPlaying_ParamsDataView(
      internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data* data_ = nullptr;
};

class AudioOutputStreamObserver_DidChangeAudibleState_ParamsDataView {
 public:
  AudioOutputStreamObserver_DidChangeAudibleState_ParamsDataView() {}

  AudioOutputStreamObserver_DidChangeAudibleState_ParamsDataView(
      internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_audible() const {
    return data_->is_audible;
  }
 private:
  internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data* data_ = nullptr;
};

class AudioOutputStreamProvider_Acquire_ParamsDataView {
 public:
  AudioOutputStreamProvider_Acquire_ParamsDataView() {}

  AudioOutputStreamProvider_Acquire_ParamsDataView(
      internal::AudioOutputStreamProvider_Acquire_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioOutputStreamProviderClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetProcessingIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessingId(UserType* output) {
    auto* pointer = data_->processing_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioOutputStreamProvider_Acquire_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioOutputStreamProviderClient_Created_ParamsDataView {
 public:
  AudioOutputStreamProviderClient_Created_ParamsDataView() {}

  AudioOutputStreamProviderClient_Created_ParamsDataView(
      internal::AudioOutputStreamProviderClient_Created_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeStream() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioOutputStreamPtrDataView>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDataPipeDataView(
      ::media::mojom::ReadWriteAudioDataPipeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataPipe(UserType* output) {
    auto* pointer = data_->data_pipe.Get();
    return mojo::internal::Deserialize<::media::mojom::ReadWriteAudioDataPipeDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioOutputStreamProviderClient_Created_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};














inline void AudioOutputStreamProvider_Acquire_ParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}
inline void AudioOutputStreamProvider_Acquire_ParamsDataView::GetProcessingIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->processing_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void AudioOutputStreamProviderClient_Created_ParamsDataView::GetDataPipeDataView(
    ::media::mojom::ReadWriteAudioDataPipeDataView* output) {
  auto pointer = data_->data_pipe.Get();
  *output = ::media::mojom::ReadWriteAudioDataPipeDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_PARAMS_DATA_H_